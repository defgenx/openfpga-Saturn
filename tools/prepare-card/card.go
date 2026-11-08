package main

// Card mode: tidy the card, then prepare every disc under Assets/saturn/common (docs/cd.md, section 4).

import (
	"bufio"
	"encoding/binary"
	"errors"
	"fmt"
	"io"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"
)

const coreName = "defgenx.Saturn"

var out io.Writer = os.Stdout

func say(format string, a ...any) { fmt.Fprintf(out, format+"\n", a...) }

// readInstance returns the "instance" object of path if it is an instance JSON in the shape this tool
// writes, else nil.
func readInstance(path string) *instance {
	st, err := os.Stat(path)
	if err != nil || st.Size() > 65536 {
		return nil
	}
	raw, err := os.ReadFile(path)
	if err != nil || !utf8Valid(raw) {
		return nil
	}
	v, err := parseJSON(string(raw))
	if err != nil {
		return nil
	}
	obj, ok := v.(*jobj)
	if !ok || len(obj.keys) != 1 || obj.keys[0] != "instance" {
		return nil
	}
	in, ok := obj.vals["instance"].(*jobj)
	if !ok || in.vals["magic"] != "APF_VER_1" {
		return nil
	}
	for _, k := range in.keys {
		if k != "magic" && k != "data_path" && k != "data_slots" {
			return nil
		}
	}
	dp := ""
	if v, ok := in.vals["data_path"]; ok {
		s, ok := v.(string)
		if !ok {
			return nil
		}
		dp = s
	}
	arr, ok := in.vals["data_slots"].([]any)
	if !ok || len(arr) < 2 || len(arr) > 1+trackSlots {
		return nil
	}
	res := &instance{dataPath: dp}
	for k, sv := range arr {
		want := tocSlot
		if k > 0 {
			want = trackSlotBase + k - 1
		}
		s, ok := sv.(*jobj)
		if !ok || len(s.keys) != 2 {
			return nil
		}
		id, ok := s.vals["id"].(jnum)
		fn, ok2 := s.vals["filename"].(string)
		if !ok || !ok2 || !id.isInt || fn == "" {
			return nil
		}
		if n, err := strconv.Atoi(id.raw); err != nil || n != want {
			return nil
		}
		res.slots = append(res.slots, slot{id: strconv.Itoa(want), filename: fn, idFirst: s.keys[0] == "id"})
	}
	if !strings.HasSuffix(strings.ToLower(res.slots[0].filename), ".toc") {
		return nil
	}
	return res
}

// tocOptions returns the (wwf, road rash, ram cart) recorded in an existing .toc, so a regeneration keeps them.
func tocOptions(path string) (bool, bool, int) {
	f, err := os.Open(path)
	if err != nil {
		return false, false, 0
	}
	defer f.Close()
	b := make([]byte, tocWords*4+1)
	n, err := io.ReadFull(f, b)
	if err != nil && err != io.ErrUnexpectedEOF && err != io.EOF {
		return false, false, 0
	}
	b = b[:n]
	if len(b) != tocWords*4 || binary.BigEndian.Uint32(b) != magic {
		return false, false, 0
	}
	w1 := binary.BigEndian.Uint32(b[4:])
	cart := int(b[16+256])
	if cart != 2 && cart != 3 {
		cart = 0
	}
	return w1>>8&1 == 1, w1>>9&1 == 1, cart
}

// put writes data to path unless the file already holds exactly that.
func put(path string, data []byte, dry bool) (string, error) {
	old, err := os.ReadFile(path)
	missing := false
	if err != nil {
		if !errors.Is(err, os.ErrNotExist) {
			return "", osErr{err, []string{path}}
		}
		missing = true
	}
	if !missing && string(old) == string(data) {
		return "unchanged", nil
	}
	state := "updated"
	if missing {
		state = "created"
	}
	if dry {
		return "would be " + state, nil
	}
	if err := os.WriteFile(path, data, 0o666); err != nil {
		return "", osErr{err, []string{path}}
	}
	return state, nil
}

func freeOldName(path string) string {
	cand, k := path+".old", 2
	for exists(cand) {
		cand, k = path+".old"+strconv.Itoa(k), k+1
	}
	return cand
}

// badPart says why path cannot go in an instance JSON (data_path or a slot filename), or "".
func badPart(path string) string {
	if strings.ContainsAny(path, "\\:") {
		return "has a '\\' or ':'"
	}
	if strings.HasPrefix(path, "/") {
		return "starts with '/'"
	}
	for _, x := range strings.Split(path, "/") {
		if x == "." || x == ".." {
			return "has a '.' or '..' component"
		}
	}
	return ""
}

// checkPaths fails unless every slot file resolves from the JSON's own folder + data_path.
// pending: paths this run writes before the JSON (a .toc or merged .img not on the card yet in a dry run).
func checkPaths(jsonDir string, inst *instance, pending []string) error {
	dp := inst.dataPath
	if dp != "" {
		why := badPart(strings.TrimRight(dp, "/"))
		if why == "" && !strings.HasSuffix(dp, "/") {
			why = "does not end with '/'"
		}
		if why != "" {
			return cueErr("data_path %s %s", pyRepr(dp), why)
		}
	}
	pend := map[string]bool{}
	for _, p := range pending {
		pend[pyNormcase(pyAbs(p))] = true
	}
	for _, s := range inst.slots {
		fn := s.filename
		if why := badPart(fn); why != "" {
			return cueErr("slot %s filename %s %s", s.id, pyRepr(fn), why)
		}
		p := pyJoin(jsonDir, dp, fn)
		if !isFile(p) && !pend[pyNormcase(pyAbs(p))] {
			return cueErr("slot %s: %s%s does not resolve from the JSON's folder", s.id, dp, fn)
		}
	}
	return nil
}

type game struct {
	folder, stem, jsonFolder string // folders relative to common/ ("." for common/)
	cue                      string // "" for a JSON carried over without its .cue
	inst                     *instance
	src                      string
	olds                     []string // JSONs of this disc in the core folder, renamed once its JSON is written
	prefixed                 string
	json                     string
	key                      [2]string
}

func newGame(folder, stem, jsonFolder, cue string, inst *instance, src string) *game {
	g := &game{folder: folder, stem: stem, jsonFolder: jsonFolder, cue: cue, inst: inst, src: src}
	r, ok := relFolder(folder, jsonFolder)
	from := folder
	if ok {
		from = r
	}
	var parts []string
	for _, x := range strings.Split(from, "/") {
		if x != "" && x != "." {
			parts = append(parts, x)
		}
	}
	if len(parts) > 0 && strings.ToLower(parts[len(parts)-1]) == strings.ToLower(stem) {
		parts = parts[:len(parts)-1] // <Game>/<Game>.cue: the folder adds nothing to the name
	}
	g.prefixed = strings.Join(append(parts, stem), " - ")
	toc := stem + ".toc"
	if cue == "" {
		toc = inst.slots[0].filename
	}
	g.key = discKey(dataPathFor(folder), toc)
	return g
}

// relFolder is the data_path of the tracks' folder seen from the JSON's folder ("" when they are the same);
// false if the tracks are not in the JSON's folder or below it (an instance JSON takes no '../').
func relFolder(folder, jsonFolder string) (string, bool) {
	r := toSlash(pyRel(pyJoin("c", folder), pyJoin("c", jsonFolder)))
	if r == "." {
		return "", true
	}
	if strings.Split(r, "/")[0] == ".." {
		return "", false
	}
	return r + "/", true
}

// discKey identifies a disc on the card: its folder under common/ and its .toc (FAT ignores case).
func discKey(dataPath, toc string) [2]string {
	return [2]string{strings.ToLower(dataPathFor(dataPath)), strings.ToLower(toc)}
}

// folderOf is the track folder a data_path names, relative to common/ ("." for common/ itself); false if
// it leaves common/.
func folderOf(dataPath string) (string, bool) {
	p := strings.TrimRight(dataPath, "/")
	if p != "" && badPart(p) != "" {
		return "", false
	}
	if p == "" {
		return ".", true
	}
	return p, true
}

// nameGames names the JSONs: the disc's own name, prefixed by its subfolders when two JSONs of one folder
// would share it.
func nameGames(games []*game) {
	count := map[[2]string]int{}
	for _, g := range games {
		count[[2]string{strings.ToLower(g.jsonFolder), strings.ToLower(g.stem)}]++
	}
	taken := map[[2]string]bool{}
	for _, g := range games {
		base := g.prefixed
		if count[[2]string{strings.ToLower(g.jsonFolder), strings.ToLower(g.stem)}] == 1 {
			base = g.stem
		}
		n, k := base, 2
		for taken[[2]string{strings.ToLower(g.jsonFolder), strings.ToLower(n)}] { // FAT and exFAT ignore case
			n, k = fmt.Sprintf("%s (%d)", base, k), k+1
		}
		taken[[2]string{strings.ToLower(g.jsonFolder), strings.ToLower(n)}] = true
		g.json = n + ".json"
	}
}

var stdin = bufio.NewReader(os.Stdin)

// readLine reads one answer; false at the end of the input.
func readLine() (string, bool) {
	s, err := stdin.ReadString('\n')
	if err != nil && s == "" {
		return "", false
	}
	return strings.TrimRight(s, "\r\n"), true
}

// overwrite asks before an existing .img, .toc or .json is rewritten: yes / no / all / none. Without a
// terminal the answer is yesAll (--yes), else no; ask forces the question (double-click mode).
type overwrite struct {
	mode string
	ask  bool
}

func (o *overwrite) ok(what string) bool {
	if o.mode == "all" || o.mode == "none" {
		return o.mode == "all"
	}
	if !o.ask && !stdinIsTerminal() {
		say("  %s already exist(s) and would change: kept (no terminal to ask; --yes overwrites)", what)
		return false
	}
	for {
		fmt.Fprintf(out, "  %s already exist(s) and would change. Overwrite? [y]es / [n]o / [a]ll / n[o]ne: ", what)
		a, ok := readLine()
		if !ok {
			if o.ask {
				fmt.Fprintln(out)
			}
			a = "n"
		}
		switch strings.ToLower(pyStrip(a)) {
		case "y", "yes":
			return true
		case "n", "no", "":
			return false
		case "a", "all":
			o.mode = "all"
			return true
		case "o", "none":
			o.mode = "none"
			return false
		}
	}
}

// walkCues lists every .cue under common/ in os.walk order (sorted, hidden entries skipped).
func walkCues(common string, fn func(dir, name string)) {
	var walk func(d string)
	walk = func(d string) {
		ents, err := os.ReadDir(d)
		if err != nil {
			return
		}
		var dirs, files []string
		for _, e := range ents {
			if isDir(pyJoin(d, e.Name())) {
				dirs = append(dirs, e.Name())
			} else {
				files = append(files, e.Name())
			}
		}
		sort.Strings(files)
		for _, f := range files {
			if strings.HasPrefix(f, ".") { // hidden files and macOS ._ AppleDouble files
				continue
			}
			if _, ext := pySplitext(f); strings.ToLower(ext) == ".cue" {
				fn(d, f)
			}
		}
		sort.Strings(dirs)
		for _, x := range dirs {
			if strings.HasPrefix(x, ".") {
				continue
			}
			p := pyJoin(d, x)
			if st, err := os.Lstat(p); err == nil && st.Mode()&os.ModeSymlink == 0 {
				walk(p)
			}
		}
	}
	walk(common)
}

type cardOpts struct {
	dry       bool
	ramcartDB string
	jsonDir   *string
	mergeMode string
	yesAll    bool
	rebuild   bool            // rewrite every file of each game from its tracks, even when unchanged
	ask       bool            // double-click mode: ask even without a terminal
	only      map[string]bool // double-click mode: the games to prepare, by cue path relative to common/
}

// collectGames lists the discs of the card as card() prepares them. msg is set when there is nothing to do.
func collectGames(root string, o cardOpts) (games []*game, inCore bool, jsonDir string, msg string, rc int) {
	saturn := pyJoin(root, "Assets", "saturn")
	common := pyJoin(saturn, "common")
	core := pyJoin(saturn, coreName)
	if !isDir(common) {
		return nil, false, "", "No Assets/saturn/common folder on the card: no discs to prepare.", 0
	}
	if o.jsonDir != nil {
		jd := strings.Trim(toSlash(*o.jsonDir), "/")
		if jd == "" || jd == "." {
			jd = "."
		} else if f, ok := folderOf(jd); ok {
			jd = f
		} else {
			return nil, false, "", "--json-dir must be a folder inside Assets/saturn/common", 1
		}
		jsonDir = jd
	}
	inCore = o.jsonDir == nil
	jf := func(string) string {
		if inCore {
			return "."
		}
		return jsonDir
	}
	walkCues(common, func(d, f string) {
		stem, _ := pySplitext(f)
		folder := toSlash(pyRel(d, common))
		games = append(games, newGame(folder, stem, jf(folder), pyJoin(d, f), nil, ""))
	})
	type mv struct {
		p    string
		inst *instance
	}
	var moved []mv
	if !inCore && isDir(core) { // JSONs in the core folder move to json_dir (renamed .json.old)
		ents, _ := os.ReadDir(core)
		var names []string
		for _, e := range ents {
			names = append(names, e.Name())
		}
		sort.Strings(names)
		for _, f := range names {
			p := pyJoin(core, f)
			if strings.HasSuffix(strings.ToLower(f), ".json") && !strings.HasPrefix(f, ".") && isFile(p) {
				if inst := readInstance(p); inst != nil {
					moved = append(moved, mv{p, inst})
				}
			}
		}
	}
	byKey := map[[2]string]*game{}
	for _, g := range games {
		byKey[g.key] = g
	}
	for _, m := range moved {
		folder, ok := folderOf(m.inst.dataPath)
		if !ok {
			continue
		}
		g := byKey[discKey(dataPathFor(folder), m.inst.slots[0].filename)]
		if g == nil { // no .cue left: carry the JSON over to its tracks, named after its .toc
			tocStem, _ := pySplitext(m.inst.slots[0].filename)
			g = newGame(folder, tocStem, jf(folder), "", m.inst, m.p)
			games = append(games, g)
			byKey[g.key] = g
		}
		g.olds = append(g.olds, m.p)
	}
	if len(games) == 0 {
		return nil, inCore, jsonDir, "No discs (.cue) in Assets/saturn/common.", 0
	}
	nameGames(games)
	return games, inCore, jsonDir, "", 0
}

func card(root string, o cardOpts) int {
	saturn := pyJoin(root, "Assets", "saturn")
	common := pyJoin(saturn, "common")
	core := pyJoin(saturn, coreName)
	games, inCore, _, msg, rc := collectGames(root, o)
	if msg != "" {
		say("%s", msg)
		return rc
	}
	rel := func(p string) string { return toSlash(pyRel(p, saturn)) }

	dryTxt := ""
	if o.dry {
		dryTxt = " (dry run, nothing is written)"
	}
	if o.only != nil {
		n := 0
		for _, g := range games {
			if o.only[g.id()] {
				n++
			}
		}
		say("Preparing %d of the %d disc(s) in Assets/saturn/common%s", n, len(games), dryTxt)
	} else {
		say("Discs in Assets/saturn/common: %d%s", len(games), dryTxt)
	}
	if !o.dry && !writable(common) {
		say("The card is read-only (check the lock switch on the SD card): no disc prepared.")
		return 1
	}
	failed, renamed, written, done, kept := 0, 0, 0, 0, 0
	ask := &overwrite{ask: o.ask}
	if o.yesAll {
		ask.mode = "all"
	}
	for _, g := range games {
		if o.only != nil && !o.only[g.id()] {
			continue
		}
		src := g.cue
		if src == "" {
			src = g.src
		}
		jdir := core
		if !inCore {
			jdir = pyJoin(common, g.jsonFolder)
		}
		base := jdir // where the Pocket resolves data_path from
		if inCore {
			base = common
		}
		dst := pyJoin(jdir, g.json)
		jrel := rel(dst)
		folder := pyJoin(common, g.folder)
		var states []string
		var summary string
		var inst *instance
		err := func() error {
			dp, ok := relFolder(g.folder, g.jsonFolder)
			if !ok {
				return cueErr("tracks in common/%s are not below the JSON folder common/%s", g.folder, g.jsonFolder)
			}
			if exists(dst) && readInstance(dst) == nil {
				return cueErr("%s exists and was not written by mktoc; left alone", jrel)
			}
			var pending []string
			if g.cue != "" {
				tocp := pyJoin(folder, g.stem+".toc")
				wwf, rr, cart := tocOptions(tocp)
				mm := o.mergeMode
				if mm == "auto" && isFile(pyJoin(folder, g.stem+".img")) {
					mm = "always" // keep the .toc matching an .img already on the card
				}
				toc, in, mg, sum, err := build(g.cue, folder, dp, o.ramcartDB, mm, wwf, rr, cart)
				if err != nil {
					return err
				}
				inst, summary = in, sum
				full := o.rebuild // an overwrite rewrites the whole .img, never only its header
				if !o.dry {
					// existing files that this run would rewrite: ask once for the game
					var chg []string
					if mg != nil {
						st, err := writeMerged(mg, true, false)
						if err != nil {
							return err
						}
						if st == "would be updated" {
							chg = append(chg, pyBasename(mg.img))
						}
					}
					st, err := put(tocp, toc, true)
					if err != nil {
						return err
					}
					if st == "would be updated" {
						chg = append(chg, pyBasename(tocp))
					}
					st, err = put(dst, instanceJSON(inst), true)
					if err != nil {
						return err
					}
					if st == "would be updated" {
						chg = append(chg, pyBasename(dst))
					}
					if len(chg) > 0 {
						if !ask.ok(rel(src) + ": " + strings.Join(chg, ", ")) {
							return errKept
						}
						full = true
					}
				}
				if mg != nil {
					st, err := writeMerged(mg, o.dry, full)
					if err != nil {
						return err
					}
					states = append(states, g.stem+".img "+st)
					pending = append(pending, mg.img)
				}
				st, err := put(tocp, toc, o.dry)
				if err != nil {
					return err
				}
				states = append(states, g.stem+".toc "+st)
				pending = append(pending, tocp)
			} else {
				inst = &instance{dp, g.inst.slots}
				summary = "no .cue, JSON carried over as it is"
			}
			if err := checkPaths(base, inst, pending); err != nil {
				return err
			}
			if !o.dry && !isDir(jdir) {
				if err := os.MkdirAll(jdir, 0o777); err != nil {
					return osErr{err, []string{jdir}}
				}
			}
			js, err := put(dst, instanceJSON(inst), o.dry)
			if err != nil {
				return err
			}
			if js != "unchanged" {
				written++
			}
			states = append([]string{jrel + " " + js}, states...)
			say("  %s: %s\n      %s", rel(src), summary, strings.Join(states, ", "))
			done++
			return nil
		}()
		if err == errKept {
			kept++
			say("  %s: kept as it is", rel(src))
			continue
		}
		if err != nil {
			failed++
			e := strings.ReplaceAll(err.Error(), saturn+sep, "")
			e = strings.ReplaceAll(e, root+sep, "")
			say("  %s: NOT prepared: %s", rel(src), e)
			continue
		}
		for _, p := range g.olds {
			nw := freeOldName(p)
			if o.dry {
				say("      would rename %s to %s", rel(p), pyBasename(nw))
			} else if err := os.Rename(p, nw); err != nil {
				say("      could not rename %s: %s", rel(p), osError(err, p, nw))
			} else {
				renamed++
				say("      renamed %s to %s (now %s)", rel(p), pyBasename(nw), jrel)
			}
		}
	}
	verb := "written"
	if o.dry {
		verb = "to write"
	}
	say("%d disc(s) ready, %d JSON file(s) %s, %d old file(s) renamed, %d kept as they were, %d failed",
		done, written, verb, renamed, kept, failed)
	if failed > 0 {
		return 1
	}
	return 0
}

var errKept = errors.New("kept")

// id names a game in the double-click selection: its cue path relative to common/.
func (g *game) id() string {
	if g.cue == "" {
		return g.src
	}
	return g.folder + "/" + pyBasename(g.cue)
}

var biosName = regexp.MustCompile(`(?i)(sega|saturn|bios|mpr-1|hitachi|ip\.bin|boot)`)

type move struct{ src, dst string }

type looseDisc struct {
	cue   string // path of the .cue
	files []string
	dst   string // its folder under common/
}

type tidyPlan struct {
	msgs    []string // problems, in the order they are found
	discs   []looseDisc
	stuck   []stuckDisc // loose discs that cannot be moved
	biosDup []string    // BIOS images at the root that are already in the core folder
	moves   []move
	bad     int
}

type stuckDisc struct{ cue, why string }

func listSorted(d string) []string {
	ents, err := os.ReadDir(d)
	if err != nil {
		return nil
	}
	var names []string
	for _, e := range ents {
		names = append(names, e.Name())
	}
	sort.Strings(names)
	return names
}

// planTidy finds the loose discs and BIOS images to move to where the core looks for them.
func planTidy(root string) tidyPlan {
	saturn := pyJoin(root, "Assets", "saturn")
	common := pyJoin(saturn, "common")
	core := pyJoin(saturn, coreName)
	var t tidyPlan
	used := map[string]bool{}
	for _, d := range []string{root, saturn} {
		if !isDir(d) {
			continue
		}
		for _, f := range listSorted(d) {
			p := pyJoin(d, f)
			if strings.HasPrefix(f, ".") || !strings.HasSuffix(strings.ToLower(f), ".cue") || !isFile(p) {
				continue
			}
			stuck := func(why string) {
				t.msgs = append(t.msgs, fmt.Sprintf("  %s: not moved (%s)", f, why))
				t.stuck = append(t.stuck, stuckDisc{p, why})
				t.bad++
			}
			_, _, files, err := parseCue(p)
			if err != nil {
				stuck(err.Error())
				continue
			}
			stem, _ := pySplitext(f)
			dst := pyJoin(common, stem)
			group := []string{p}
			for _, q := range files {
				group = append(group, q.path)
			}
			other := false
			for _, q := range group {
				if filepath.Dir(pyAbs(q)) != pyAbs(d) {
					other = true
				}
			}
			if other {
				stuck("its files are in other folders")
				continue
			}
			clash := ""
			for _, q := range group {
				if exists(pyJoin(dst, pyBasename(q))) {
					clash = pyBasename(q)
					break
				}
			}
			if clash != "" {
				stuck(fmt.Sprintf("%s already exists in common/%s", clash, pyBasename(dst)))
				continue
			}
			t.discs = append(t.discs, looseDisc{p, group[1:], dst})
			for _, q := range group {
				used[pyAbs(q)] = true
				t.moves = append(t.moves, move{q, pyJoin(dst, pyBasename(q))})
			}
		}
	}
	if isDir(root) {
		for _, f := range listSorted(root) {
			p := pyJoin(root, f)
			if !isBiosCandidate(p, f) || used[pyAbs(p)] {
				continue
			}
			if exists(pyJoin(core, f)) {
				t.msgs = append(t.msgs, fmt.Sprintf("  %s: not moved (already in Assets/saturn/%s)", f, coreName))
				t.biosDup = append(t.biosDup, f)
				continue
			}
			t.moves = append(t.moves, move{p, pyJoin(core, f)})
		}
	}
	return t
}

// isBiosCandidate: a 512 KB .bin/.rom named like a BIOS.
func isBiosCandidate(p, f string) bool {
	if strings.HasPrefix(f, ".") || !isFile(p) {
		return false
	}
	_, ext := pySplitext(f)
	if e := strings.ToLower(ext); e != ".bin" && e != ".rom" {
		return false
	}
	st, err := os.Stat(p)
	return err == nil && st.Size() == 524288 && biosName.MatchString(f)
}

// applyMoves prints and (unless dry) performs the moves.
func applyMoves(root string, moves []move, dry bool) {
	for _, m := range moves {
		say("  move %s -> %s", pyRel(m.src, root), pyRel(m.dst, root))
		if !dry {
			if err := os.MkdirAll(filepath.Dir(m.dst), 0o777); err != nil {
				say("  could not move %s: %s", pyRel(m.src, root), osError(err, filepath.Dir(m.dst)))
				continue
			}
			if err := os.Rename(m.src, m.dst); err != nil {
				say("  could not move %s: %s", pyRel(m.src, root), osError(err, m.src, m.dst))
			}
		}
	}
	if len(moves) == 0 {
		say("  nothing to move")
	}
}

// tidy moves loose discs and BIOS images to where the core looks for them. Returns the number of problems.
func tidy(root string, dry bool) int {
	t := planTidy(root)
	for _, m := range t.msgs {
		say("%s", m)
	}
	applyMoves(root, t.moves, dry)
	return t.bad
}
