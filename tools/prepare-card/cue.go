package main

// Cue interpretation, TOC encoding and the merged image (docs/cd.md, sections 4 and 5).

import (
	"bytes"
	"encoding/binary"
	"fmt"
	"io"
	"os"
	"path/filepath"
	"strconv"
	"strings"
	"unicode/utf8"
)

const (
	tocSlot       = 2
	trackSlotBase = 16
	trackSlots    = 24
	magic         = 0x53434454 // "SCDT"
	rec0          = 72
	tocWords      = 512
	bootBytes     = 260
)

type cueError struct{ msg string }

func (e *cueError) Error() string { return e.msg }

func cueErr(format string, a ...any) error { return &cueError{fmt.Sprintf(format, a...)} }

type track struct {
	f                          int // index into files, -1 for none
	offset, pregap, start, end int64
	typ                        int
	ss                         int64
	idx1                       int64
}

type cueFile struct {
	path string
	size int64
}

func isDigit(c byte) bool { return c >= '0' && c <= '9' }

// spaceByte is regex \s on a latin-1 decoded character.
func spaceByte(c byte) bool {
	return c >= 9 && c <= 13 || c >= 0x1c && c <= 0x20 || c == 0x85 || c == 0xa0
}

// scanner matches the fixed regexes of parseCue at the start of a line.
type scanner struct {
	s  []byte
	i  int
	ok bool
}

func (m *scanner) lit(l string) {
	if m.ok && bytes.HasPrefix(m.s[m.i:], []byte(l)) {
		m.i += len(l)
	} else {
		m.ok = false
	}
}

func (m *scanner) spaces() {
	if !m.ok {
		return
	}
	j := m.i
	for j < len(m.s) && spaceByte(m.s[j]) {
		j++
	}
	if j == m.i {
		m.ok = false
	}
	m.i = j
}

func (m *scanner) num() int64 {
	if !m.ok {
		return 0
	}
	j := m.i
	for j < len(m.s) && isDigit(m.s[j]) {
		j++
	}
	if j == m.i {
		m.ok = false
		return 0
	}
	v, _ := strconv.ParseInt(string(m.s[m.i:j]), 10, 64)
	m.i = j
	return v
}

// trackPath resolves a cue FILE name. The cue is read as latin-1; a name that only resolves as UTF-8 is taken
// as UTF-8.
func trackPath(base string, name []byte) string {
	p := pyJoin(base, strings.ReplaceAll(latin1(name), "\\", "/"))
	if !isFile(p) && utf8.Valid(name) {
		if q := pyJoin(base, strings.ReplaceAll(string(name), "\\", "/")); isFile(q) {
			return q
		}
	}
	return p
}

// parseCue ports satcdd_t::LoadCUE (Main_MiSTer support/saturn/saturncdd.cpp). Returns the tracks (the last
// entry is the lead-out), the lead-out LBA and the files.
func parseCue(cuePath string) ([]track, int64, []cueFile, error) {
	base := filepath.Dir(pyAbs(cuePath))
	raw, err := os.ReadFile(cuePath)
	if err != nil {
		return nil, 0, nil, osErr{err, []string{cuePath}}
	}
	var trk [101]track
	for i := range trk {
		trk[i].f = -1
	}
	at := func(i int) *track { // Python indexing: -1 is the last entry
		if i < 0 {
			i += len(trk)
		}
		return &trk[i]
	}
	var files []cueFile
	last := -1
	var tocEnd, pregap, fileSize, secsz int64
	newFile := 0
	curFile := -1

	text := bytes.ReplaceAll(raw, []byte("\r"), nil)
	for _, rawLine := range bytes.Split(text, []byte("\n")) {
		line := bytes.TrimLeft(rawLine, " ")
		if len(line) == 0 {
			continue
		}
		if bytes.HasPrefix(line, []byte("FILE")) {
			if last == 99 {
				break
			}
			rest := bytes.TrimLeft(line[4:], " ")
			var name []byte
			if bytes.HasPrefix(rest, []byte(`"`)) {
				end := bytes.IndexByte(rest[1:], '"')
				if end < 0 {
					return nil, 0, nil, cueErr("unterminated quote: %s", latin1(line))
				}
				end++
				name = rest[1:end]
				rest = rest[end+1:]
			} else {
				name = rest
				if k := bytes.IndexByte(rest, ' '); k >= 0 {
					name = rest[:k]
				}
				rest = rest[len(name):]
			}
			path := trackPath(base, name)
			if !isFile(path) {
				return nil, 0, nil, cueErr("missing track file %s", path)
			}
			st, err := os.Stat(path)
			if err != nil {
				return nil, 0, nil, osErr{err, []string{path}}
			}
			files = append(files, cueFile{path, st.Size()})
			curFile = len(files) - 1
			at(last + 1).f = curFile
			fileSize = st.Size()
			pregap = 0
			at(last + 1).offset = 0
			if !bytes.Contains(rest, []byte("BINARY")) && !bytes.Contains(rest, []byte("MOTOROLA")) &&
				!bytes.Contains(rest, []byte("WAVE")) {
				return nil, 0, nil, cueErr("unsupported file type: %s", latin1(line))
			}
			continue
		}
		m := scanner{s: line, ok: true}
		m.lit("TRACK")
		m.spaces()
		bb := m.num()
		if m.ok {
			if last == 99 {
				break
			}
			last++
			if bb != int64(last+1) {
				return nil, 0, nil, cueErr("missing tracks")
			}
			ty := 0
			switch {
			case bytes.Contains(line, []byte("MODE1/2048")):
				secsz, ty = 2048, 1
			case bytes.Contains(line, []byte("MODE1/2352")):
				secsz, ty = 2352, 1
			case bytes.Contains(line, []byte("MODE2/2352")):
				secsz, ty = 2352, 2
			default:
				secsz, ty = 2352, 0
			}
			t := at(last)
			t.ss = secsz
			if ty != 0 {
				t.typ = ty
			}
			if last != 0 && t.f < 0 {
				at(last - 1).end = 0
			}
			newFile = 1
			if t.f < 0 {
				t.f = curFile
				newFile = 0
			}
			continue
		}
		m = scanner{s: line, ok: true}
		m.lit("PREGAP")
		m.spaces()
		mm := m.num()
		m.lit(":")
		ss := m.num()
		m.lit(":")
		ff := m.num()
		if m.ok {
			at(last).pregap = ff + ss*75 + mm*60*75
			pregap += at(last).pregap
			continue
		}
		m = scanner{s: line, ok: true}
		m.lit("INDEX")
		m.spaces()
		idx := m.num()
		m.spaces()
		mm = m.num()
		m.lit(":")
		ss = m.num()
		m.lit(":")
		ff = m.num()
		if m.ok {
			idxPos := ff + ss*75 + mm*60*75
			t := at(last)
			if idx == 0 {
				if last != 0 && at(last-1).end == 0 {
					at(last - 1).end = pregap
				}
			} else if idx == 1 {
				t.offset += pregap * secsz
				if newFile == 0 {
					t.start = idxPos + pregap
					if last != 0 && at(last-1).end == 0 {
						at(last - 1).end = t.start - t.pregap
					}
				} else {
					t.start = tocEnd + pregap
					t.offset += tocEnd * secsz
					t.end = t.start + floorDiv(fileSize+secsz-1, secsz)
					tocEnd = t.end
				}
			}
			if idx == 1 {
				if newFile == 0 {
					t.idx1 = idxPos - t.start
				} else {
					t.idx1 = idxPos
				}
			}
		}
	}
	last++
	if last != 0 && trk[last-1].end == 0 {
		tocEnd += pregap
		trk[last-1].end = tocEnd
	}
	if last == 0 {
		return nil, 0, nil, cueErr("no tracks")
	}
	trk[last].start = tocEnd
	return append([]track(nil), trk[:last+1]...), tocEnd, files, nil
}

func floorDiv(a, b int64) int64 {
	q := a / b
	if (a%b != 0) && ((a < 0) != (b < 0)) {
		q--
	}
	return q
}

func floorMod(a, b int64) int64 { return a - floorDiv(a, b)*b }

func lookupCart(db, uuid string) int {
	raw, err := os.ReadFile(db)
	if err != nil {
		return 0
	}
	raw = bytes.TrimPrefix(raw, []byte("\xef\xbb\xbf"))
	text := strings.ToValidUTF8(string(raw), "�")
	text = strings.ReplaceAll(text, "\r\n", "\n")
	text = strings.ReplaceAll(text, "\r", "\n")
	for _, line := range strings.Split(text, "\n") {
		line = pyStrip(line)
		if line == "" || line[0] == '#' || line[0] == ';' {
			continue
		}
		body := strings.SplitN(line, "#", 2)[0]
		body = pyStrip(strings.SplitN(body, ";", 2)[0])
		parts := splitBlanks(body)
		if len(parts) == 2 && pyUpper(parts[0]) == uuid {
			switch pyUpper(parts[1]) {
			case "1M":
				return 2
			case "4M":
				return 3
			}
			return 0
		}
	}
	return 0
}

// splitBlanks is re.split(r"[ \t]+", s): empty fields at either end are kept.
func splitBlanks(s string) []string {
	var parts []string
	cur := 0
	i := 0
	for i < len(s) {
		if s[i] == ' ' || s[i] == '\t' {
			j := i
			for j < len(s) && (s[j] == ' ' || s[j] == '\t') {
				j++
			}
			parts = append(parts, s[cur:i])
			cur, i = j, j
			continue
		}
		i++
	}
	return append(parts, s[cur:])
}

func bootHeader(trk []track, files []cueFile, ramcartDB string) ([]byte, string, int, error) {
	if trk[0].f < 0 {
		return nil, "", 0, cueErr("no FILE before the first TRACK")
	}
	path := files[trk[0].f].path
	off := int64(16)
	if trk[0].ss == 2048 {
		off = 0
	}
	f, err := os.Open(path)
	if err != nil {
		return nil, "", 0, osErr{err, []string{path}}
	}
	hdr := make([]byte, 256)
	_, err = f.ReadAt(hdr, off)
	f.Close()
	if err != nil && err != io.EOF {
		return nil, "", 0, osErr{err, []string{path}}
	}
	cart := 0
	uuid := ""
	if bytes.Equal(hdr[:16], []byte("SEGA SEGASATURN ")) {
		pn := bytes.TrimRight(hdr[0x20:0x2A], " \x00")
		if len(pn) > 0 {
			uuid = pyUpper(latin1(pn))
		}
	}
	if uuid != "" && ramcartDB != "" && isFile(ramcartDB) {
		cart = lookupCart(ramcartDB, uuid)
	}
	return append(hdr, byte(cart), 0xA1, 0, 0), uuid, cart, nil
}

type tocOpts struct {
	wwf, rr bool
	fileMap map[int]int   // file index -> slot offset
	forgAdj map[int]int64 // file index -> sectors subtracted from the origin
	lead    int64         // sectors in front of the first file (the merged image's header sector)
}

func b2i(b bool) uint32 {
	if b {
		return 1
	}
	return 0
}

func encodeTOC(trk []track, tocEnd int64, hdr []byte, o tocOpts) ([]byte, error) {
	n := len(trk) - 1
	if n > 99 {
		return nil, cueErr("more than 99 tracks")
	}
	words := make([]uint32, tocWords)
	words[0] = magic
	bcd, _ := strconv.ParseUint(fmt.Sprintf("%02d", n), 16, 32)
	words[1] = 2<<24 | uint32(bcd)<<16 | b2i(o.rr)<<9 | b2i(o.wwf)<<8 | uint32(n)
	words[2] = uint32(tocEnd + 150)
	for i := 0; i < bootBytes/4; i++ {
		words[4+i] = binary.BigEndian.Uint32(hdr[i*4:])
	}
	for r, t := range trk {
		var a, b, c uint32
		if r == n {
			a, b, c = 0xFFFFFF, uint32(tocEnd+150), 0
		} else {
			ss := t.ss
			if floorMod(t.offset, ss) != 0 {
				return nil, cueErr("track %d: file offset is not a whole number of sectors", r+1)
			}
			forg := floorDiv(t.offset, ss)
			f := t.f
			if o.forgAdj != nil {
				forg -= o.forgAdj[f]
			}
			if forg < 0 {
				return nil, cueErr("track %d: negative file origin", r+1)
			}
			forg -= o.lead
			idx1 := t.idx1
			if idx1 < 0 || idx1 > 255 {
				return nil, cueErr("track %d: INDEX 01 offset %d out of range", r+1, idx1)
			}
			if !(t.start >= 0 && t.start < 1<<24 && t.end > 0 && t.end < 1<<24) {
				return nil, cueErr("track %d: start/end out of range", r+1)
			}
			fi := f
			if o.fileMap != nil {
				fi = o.fileMap[f]
			}
			if fi >= trackSlots {
				return nil, cueErr("more track files than data slots; use --merge")
			}
			data := uint32(0)
			if t.typ != 0 {
				data = 1
			}
			a = uint32(t.end+150) | data<<24 | b2i(ss == 2048)<<25 | uint32(fi)<<26
			b = uint32(t.start+150) | uint32(idx1)<<24
			c = uint32(forg + 150)
		}
		words[rec0+3*r] = a
		words[rec0+3*r+1] = b
		words[rec0+3*r+2] = c
	}
	out := make([]byte, 4*tocWords)
	for i, w := range words {
		binary.BigEndian.PutUint32(out[i*4:], w)
	}
	return out, nil
}

func dataPathFor(folder string) string {
	folder = strings.Trim(toSlash(folder), "/")
	if folder == "" || folder == "." {
		return ""
	}
	return folder + "/"
}

type slot struct {
	id       string // the id as written in the JSON
	filename string
	idFirst  bool // key order of the slot object
}

type instance struct {
	dataPath string
	slots    []slot
}

type merged struct {
	img   string
	files []cueFile
	head  []byte
}

// build interprets one cue. cart: the RAM cart type used when the database has none for the disc.
func build(cue, outdir, dataPath, ramcartDB, mergeMode string, wwf, rr bool, cart int) ([]byte, *instance, *merged, string, error) {
	trk, tocEnd, files, err := parseCue(cue)
	if err != nil {
		return nil, nil, nil, "", err
	}
	blob, uuid, c, err := bootHeader(trk, files, ramcartDB)
	if err != nil {
		return nil, nil, nil, "", err
	}
	if c == 0 && (cart == 2 || cart == 3) {
		blob[256], c = byte(cart), cart
	}
	name, _ := pySplitext(pyBasename(cue))
	merge := mergeMode == "always" || mergeMode == "auto" && len(files) > trackSlots
	var slots []slot
	var toc []byte
	var mg *merged
	if merge {
		sizes := map[int64]bool{}
		var ss int64
		for _, t := range trk[:len(trk)-1] {
			sizes[t.ss] = true
			ss = t.ss
		}
		if len(sizes) != 1 {
			return nil, nil, nil, "", cueErr("cannot merge files with different sector sizes")
		}
		img := pyJoin(outdir, name+".img")
		for _, f := range files {
			if pyAbs(f.path) == pyAbs(img) {
				return nil, nil, nil, "", cueErr("%s is one of the track files; merging would overwrite it", img)
			}
		}
		var baseSec int64
		adj := map[int]int64{}
		fmap := map[int]int{}
		for i, f := range files {
			if f.size%ss != 0 {
				return nil, nil, nil, "", cueErr("%s is not a whole number of sectors", f.path)
			}
			adj[i] = baseSec
			fmap[i] = 0
			baseSec += f.size / ss
		}
		toc, err = encodeTOC(trk, tocEnd, blob, tocOpts{wwf: wwf, rr: rr, fileMap: fmap, forgAdj: adj, lead: 1})
		if err != nil {
			return nil, nil, nil, "", err
		}
		slots = append(slots, slot{strconv.Itoa(trackSlotBase), pyBasename(img), true})
		head := toc
		if int64(len(head)) < ss {
			head = append(append([]byte(nil), toc...), make([]byte, ss-int64(len(toc)))...)
		}
		mg = &merged{img, files, head}
	} else {
		toc, err = encodeTOC(trk, tocEnd, blob, tocOpts{wwf: wwf, rr: rr})
		if err != nil {
			return nil, nil, nil, "", err
		}
		cueDir := filepath.Dir(pyAbs(cue))
		for i, f := range files {
			rel := toSlash(pyRel(f.path, cueDir))
			if strings.HasPrefix(rel, "../") {
				return nil, nil, nil, "", cueErr("%s: track files must be in the cue's folder or below it", rel)
			}
			slots = append(slots, slot{strconv.Itoa(trackSlotBase + i), rel, true})
		}
	}
	for _, fn := range append([]string{dataPath}, slotNames(slots)...) {
		if runeLen(fn) > 255 {
			return nil, nil, nil, "", cueErr("%s: longer than the 255 characters an instance JSON allows", fn)
		}
	}
	inst := &instance{dataPath, append([]slot{{strconv.Itoa(tocSlot), name + ".toc", true}}, slots...)}
	product := uuid
	if product == "" {
		product = "?"
	}
	mergedTxt := ""
	if merge {
		mergedTxt = ", merged"
	}
	summary := fmt.Sprintf("%d tracks, lead-out LBA %d, %d file(s)%s, product %s, ram cart %s",
		len(trk)-1, tocEnd, len(files), mergedTxt, product, []string{"none", "?", "1M", "4M"}[c])
	return toc, inst, mg, summary, nil
}

func slotNames(s []slot) []string {
	var out []string
	for _, x := range s {
		out = append(out, x.filename)
	}
	return out
}

// writeMerged writes img = head (one sector, the TOC) + the track files. Unless full, an image of the right
// size, newer than every track, is kept, and only its header sector is rewritten when the TOC differs; full
// always rewrites the whole image from the tracks.
func writeMerged(m *merged, dry, full bool) (string, error) {
	total := int64(len(m.head))
	for _, f := range m.files {
		total += f.size
	}
	keep := false
	if st, err := os.Stat(m.img); !full && err == nil && st.Mode().IsRegular() && st.Size() == total {
		keep = true
		ti, _ := pyMtime(m.img)
		for _, f := range m.files {
			tf, err := pyMtime(f.path)
			if err != nil {
				return "", osErr{err, []string{f.path}}
			}
			if !(ti >= tf) {
				keep = false
				break
			}
		}
	}
	if keep {
		f, err := os.Open(m.img)
		if err != nil {
			return "", osErr{err, []string{m.img}}
		}
		buf := make([]byte, len(m.head))
		k, _ := io.ReadFull(f, buf)
		f.Close()
		if bytes.Equal(buf[:k], m.head) {
			return "unchanged", nil
		}
	}
	state := "created"
	if exists(m.img) {
		state = "updated"
		if full {
			state = "rebuilt"
		}
	}
	if dry {
		return "would be " + state, nil
	}
	if keep {
		f, err := os.OpenFile(m.img, os.O_RDWR, 0)
		if err != nil {
			return "", osErr{err, []string{m.img}}
		}
		_, err = f.WriteAt(m.head, 0)
		if cerr := f.Close(); err == nil {
			err = cerr
		}
		if err != nil {
			return "", osErr{err, []string{m.img}}
		}
		return state, nil
	}
	out, err := os.Create(m.img)
	if err != nil {
		return "", osErr{err, []string{m.img}}
	}
	_, err = out.Write(m.head)
	for _, tf := range m.files {
		if err != nil {
			break
		}
		var in *os.File
		in, err = os.Open(tf.path)
		if err != nil {
			out.Close()
			return "", osErr{err, []string{tf.path}}
		}
		_, err = io.CopyBuffer(out, in, make([]byte, 1<<20))
		in.Close()
	}
	if cerr := out.Close(); err == nil {
		err = cerr
	}
	if err != nil {
		return "", osErr{err, []string{m.img}}
	}
	return state, nil
}

// instanceJSON is json.dumps(inst, indent=2) + "\n".
func instanceJSON(inst *instance) []byte {
	var b strings.Builder
	b.WriteString("{\n  \"instance\": {\n    \"magic\": \"APF_VER_1\",\n    \"data_path\": ")
	b.WriteString(jsonStr(inst.dataPath))
	b.WriteString(",\n    \"data_slots\": [")
	for i, s := range inst.slots {
		if i > 0 {
			b.WriteString(",")
		}
		id := "\"id\": " + s.id
		fn := "\"filename\": " + jsonStr(s.filename)
		if !s.idFirst {
			id, fn = fn, id
		}
		b.WriteString("\n      {\n        " + id + ",\n        " + fn + "\n      }")
	}
	b.WriteString("\n    ]\n  }\n}\n")
	return []byte(b.String())
}

// osErr carries an OS error with the file names Python's OSError would print.
type osErr struct {
	err   error
	names []string
}

func (e osErr) Error() string { return osError(e.err, e.names...) }
