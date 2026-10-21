package main

// Double-click mode: check the card, list the games, ask which to prepare, prepare them, wait for Enter.

import (
	"bytes"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

func stdinIsTerminal() bool { return isTerminal(os.Stdin.Fd()) }

type mark int

const (
	markOK   mark = iota // in place
	markBad              // a problem the user has to fix
	markTodo             // something this tool moves or prepares
)

var colour = false

func setColour() {
	colour = isTerminal(os.Stdout.Fd()) && colourSupported() && os.Getenv("NO_COLOR") == "" && os.Getenv("TERM") != "dumb"
}

func (m mark) String() string {
	txt := [...]string{"[OK]", "[!!]", "[->]"}[m]
	if !colour {
		return txt
	}
	return [...]string{"\x1b[32m", "\x1b[1;31m", "\x1b[36m"}[m] + txt + "\x1b[0m"
}

type probe struct {
	state  string // "new", "prepared", "outdated", "error"
	detail string // the files that would change, or the error
}

type scan struct {
	root, saturn, common, core string
	plan                       tidyPlan
	games                      []*game // under common/
	loose                      []*game // discs at the root or in Assets/saturn/, where they will be once moved
	looseFrom                  map[*game]string
	probes                     map[*game]probe
	listed                     map[string]bool // files a .cue lists, and each disc's own .img, by absolute path
	hinted                     map[string]bool // files already named as a likely misnamed track
}

// cueFileNames lists the paths of the FILE lines of a cue, whether they exist or not.
func cueFileNames(cue string) []string {
	raw, err := os.ReadFile(cue)
	if err != nil {
		return nil
	}
	base := pyAbs(cue)
	base = base[:len(base)-len(pyBasename(base))]
	var paths []string
	for _, line := range bytes.Split(bytes.ReplaceAll(raw, []byte("\r"), nil), []byte("\n")) {
		line = bytes.TrimLeft(line, " ")
		if !bytes.HasPrefix(line, []byte("FILE")) {
			continue
		}
		rest := bytes.TrimLeft(line[4:], " ")
		var name []byte
		if bytes.HasPrefix(rest, []byte(`"`)) {
			end := bytes.IndexByte(rest[1:], '"')
			if end < 0 {
				continue
			}
			name = rest[1 : end+1]
		} else {
			name = rest
			if k := bytes.IndexByte(rest, ' '); k >= 0 {
				name = rest[:k]
			}
		}
		paths = append(paths, trackPath(base, name))
	}
	return paths
}

func displayName(g *game) string {
	var parts []string
	for _, x := range strings.Split(g.folder, "/") {
		if x != "" && x != "." {
			parts = append(parts, x)
		}
	}
	if len(parts) > 0 && strings.EqualFold(parts[len(parts)-1], g.stem) {
		parts = parts[:len(parts)-1]
	}
	return strings.Join(append(parts, g.stem), "/")
}

func (s *scan) clean(msg string) string {
	msg = strings.ReplaceAll(msg, s.saturn+sep, "")
	return strings.ReplaceAll(msg, s.root+sep, "")
}

// probeGame works out, writing nothing, what preparing g would change.
func (s *scan) probeGame(g *game) probe {
	fail := func(err error) probe { return probe{"error", s.clean(err.Error())} }
	dp, _ := relFolder(g.folder, ".")
	dst := pyJoin(s.core, g.json)
	if exists(dst) && readInstance(dst) == nil {
		return fail(cueErr("%s exists and was not written by this tool; left alone", toSlash(pyRel(dst, s.saturn))))
	}
	folder := pyJoin(s.common, g.folder)
	tocp := pyJoin(folder, g.stem+".toc")
	wwf, rr, cart := tocOptions(tocp)
	toc, inst, mg, _, err := build(g.cue, folder, dp, "", "always", wwf, rr, cart)
	if err != nil {
		return fail(err)
	}
	type st struct{ name, state string }
	var sts []st
	if mg != nil {
		x, err := writeMerged(mg, true)
		if err != nil {
			return fail(err)
		}
		sts = append(sts, st{pyBasename(mg.img), x})
	}
	x, err := put(tocp, toc, true)
	if err != nil {
		return fail(err)
	}
	sts = append(sts, st{pyBasename(tocp), x})
	js, err := put(dst, instanceJSON(inst), true)
	if err != nil {
		return fail(err)
	}
	sts = append(sts, st{g.json, js})
	pending := []string{tocp}
	if mg != nil {
		pending = append(pending, mg.img)
	}
	if err := checkPaths(s.common, inst, pending); err != nil {
		return fail(err)
	}
	if js == "would be created" {
		return probe{"new", ""}
	}
	var chg []string
	for _, x := range sts {
		if x.state != "unchanged" {
			chg = append(chg, x.name)
		}
	}
	if len(chg) == 0 {
		return probe{"prepared", ""}
	}
	return probe{"outdated", strings.Join(chg, ", ")}
}

func scanCard(root string) *scan {
	s := &scan{root: root, saturn: pyJoin(root, "Assets", "saturn"), probes: map[*game]probe{},
		looseFrom: map[*game]string{}, listed: map[string]bool{}, hinted: map[string]bool{}}
	s.common = pyJoin(s.saturn, "common")
	s.core = pyJoin(s.saturn, coreName)
	s.plan = planTidy(root)
	s.games, _, _, _, _ = collectGames(root, cardOpts{mergeMode: "always"})
	for _, d := range s.plan.discs {
		f := pyBasename(d.cue)
		stem, _ := pySplitext(f)
		g := newGame(stem, stem, ".", pyJoin(s.common, stem, f), nil, "")
		s.loose = append(s.loose, g)
		where := "the card root"
		if pyAbs(filepathDir(d.cue)) == pyAbs(s.saturn) {
			where = "Assets/saturn/"
		}
		s.looseFrom[g] = where
	}
	nameGames(append(append([]*game(nil), s.games...), s.loose...))
	for _, g := range s.games {
		s.probes[g] = s.probeGame(g)
		for _, p := range cueFileNames(g.cue) {
			s.listed[pyAbs(p)] = true
		}
		s.listed[pyAbs(pyJoin(s.common, g.folder, g.stem+".img"))] = true
	}
	for _, d := range s.plan.discs {
		for _, p := range d.files {
			s.listed[pyAbs(p)] = true
		}
	}
	for _, d := range s.plan.stuck {
		for _, p := range cueFileNames(d.cue) {
			s.listed[pyAbs(p)] = true
		}
	}
	return s
}

func filepathDir(p string) string { return p[:len(p)-len(pyBasename(p))] }

type report struct {
	lines    []string
	problems []string
	todo     int
}

func (r *report) add(m mark, format string, a ...any) {
	txt := fmt.Sprintf(format, a...)
	r.lines = append(r.lines, "  "+m.String()+" "+txt)
	switch m {
	case markBad:
		r.problems = append(r.problems, txt)
	case markTodo:
		r.todo++
	}
}

func (r *report) head(h string) { r.lines = append(r.lines, h) }

func sizeText(n int64) string {
	if n%1024 == 0 {
		return strconv.FormatInt(n/1024, 10) + " KB"
	}
	return strconv.FormatInt(n, 10) + " bytes"
}

// checkCard checks that the BIOS and the games are where the core looks for them.
func checkCard(root string) (*report, *scan) {
	r := &report{}
	hasCores, hasAssets := isDir(pyJoin(root, "Cores")), isDir(pyJoin(root, "Assets"))
	r.head("SD card:")
	if !hasCores || !hasAssets {
		r.add(markBad, "%s does not look like the root of a Pocket SD card (no Cores/ or Assets/ folder): "+
			"copy Saturn-prepare-card to the root of the card and run it there", root)
	} else {
		r.add(markOK, "Pocket SD card: Cores/ and Assets/ found")
	}
	if !hasAssets {
		return r, nil
	}
	if hasCores {
		if isDir(pyJoin(root, "Cores", coreName)) {
			r.add(markOK, "Saturn core installed (Cores/%s/)", coreName)
		} else {
			r.add(markBad, "the Saturn core is not on the card (no Cores/%s/): unzip %s.zip onto the root of the card",
				coreName, coreName)
		}
	}
	s := scanCard(root)
	rootRel := func(p string) string { return toSlash(pyRel(p, root)) }
	coreRel := "Assets/saturn/" + coreName + "/"

	r.head("BIOS (" + coreRel + "):")
	nb := 0
	for _, f := range listSorted(s.core) {
		p := pyJoin(s.core, f)
		_, ext := pySplitext(f)
		if e := strings.ToLower(ext); strings.HasPrefix(f, ".") || !isFile(p) || e != ".bin" && e != ".rom" {
			continue
		}
		st, _ := os.Stat(p)
		if st.Size() == 524288 {
			r.add(markOK, "%s", f)
			nb++
		} else {
			r.add(markBad, "%s in %s is %s, not 512 KB: it is not a Saturn BIOS; replace it with a 512 KB BIOS dump",
				f, coreRel, sizeText(st.Size()))
		}
	}
	for _, m := range s.plan.moves {
		if pyAbs(filepathDir(m.dst)) == pyAbs(s.core) {
			r.add(markTodo, "%s at the card root: will be moved to %s", pyBasename(m.src), coreRel)
			nb++
		}
	}
	for _, f := range s.plan.biosDup {
		r.add(markBad, "%s is at the card root and also in %s: delete the copy at the card root", f, coreRel)
	}
	var wrong []string
	for _, d := range []string{pyJoin(root, "Assets"), s.saturn} {
		for _, f := range listSorted(d) {
			if p := pyJoin(d, f); isBiosCandidate(p, f) && !s.listed[pyAbs(p)] {
				wrong = append(wrong, p)
			}
		}
	}
	walkFiles(s.common, func(p, f string) {
		if isBiosCandidate(p, f) && !s.listed[pyAbs(p)] {
			wrong = append(wrong, p)
		}
	})
	for _, p := range wrong {
		r.add(markBad, "%s looks like a BIOS image in the wrong folder: move it to %s", rootRel(p), coreRel)
	}
	if nb == 0 {
		r.add(markBad, "NO BIOS: copy a Saturn BIOS image (512 KB, .bin or .rom) into %s", coreRel)
	}

	r.head("Games (tracks in Assets/saturn/common/<game>/, .json in " + coreRel + "):")
	for _, g := range s.games {
		p := s.probes[g]
		loc := "Assets/saturn/common/" + dataPathFor(g.folder)
		switch p.state {
		case "prepared":
			r.add(markOK, "%s: tracks in %s, %s in %s", displayName(g), loc, g.json, coreRel)
		case "new":
			r.add(markTodo, "%s: tracks in %s, not prepared yet", displayName(g), loc)
		case "outdated":
			r.add(markTodo, "%s: tracks in %s, out of date (%s would change)", displayName(g), loc, p.detail)
		default:
			r.add(markBad, "%s (%s): %s", displayName(g), rootRel(g.cue), s.fix(g.cue, p.detail))
		}
	}
	for _, g := range s.loose {
		r.add(markTodo, "%s.cue in %s: will be moved with its tracks to Assets/saturn/common/%s/", g.stem, s.looseFrom[g], g.stem)
	}
	for _, d := range s.plan.stuck {
		r.add(markBad, "%s cannot be moved into Assets/saturn/common/ (%s): %s", rootRel(d.cue), s.clean(d.why),
			s.fix(d.cue, "move it and its track files into Assets/saturn/common/<game>/ yourself"))
	}
	for _, d := range []string{pyJoin(root, "Assets"), s.core} {
		for _, f := range listSorted(d) {
			p := pyJoin(d, f)
			if _, ext := pySplitext(f); !strings.HasPrefix(f, ".") && strings.ToLower(ext) == ".cue" && isFile(p) {
				r.add(markBad, "%s: games go in Assets/saturn/common/<game>/: move the .cue and its track files there", rootRel(p))
			}
		}
	}
	orphan := func(p, f string) {
		_, ext := pySplitext(f)
		if e := strings.ToLower(ext); strings.HasPrefix(f, ".") || e != ".bin" && e != ".img" || s.listed[pyAbs(p)] || s.hinted[pyAbs(p)] ||
			isBiosCandidate(p, f) || !isFile(p) {
			return
		}
		r.add(markBad, "%s: no .cue lists this file: copy the game's .cue next to it, or delete the file", rootRel(p))
	}
	for _, d := range []string{root, s.saturn} {
		for _, f := range listSorted(d) {
			orphan(pyJoin(d, f), f)
		}
	}
	walkFiles(s.common, orphan)
	if len(s.games)+len(s.loose) == 0 {
		r.add(markBad, "no games: copy each game's .cue and .bin files into Assets/saturn/common/<game>/")
	}
	return r, s
}

// fix turns an error about a disc into the error and what to do about it.
func (s *scan) fix(cue, msg string) string {
	if strings.HasPrefix(msg, "missing track file ") {
		var spare []string
		dir := filepathDir(cue)
		for _, f := range listSorted(dir) {
			_, ext := pySplitext(f)
			if p := pyJoin(dir, f); strings.ToLower(ext) == ".bin" && !strings.HasPrefix(f, ".") && !s.listed[pyAbs(p)] {
				spare = append(spare, f)
				s.hinted[pyAbs(p)] = true
			}
		}
		hint := ""
		if len(spare) > 0 {
			hint = " (that folder has " + strings.Join(spare, ", ") + ")"
		}
		return "the .cue lists " + pyBasename(strings.TrimPrefix(msg, "missing track file ")) + ", which is not there" +
			hint + ": rename the track file to the name in the .cue, or fix the FILE line of the .cue"
	}
	return msg
}

// walkFiles calls fn for every non-hidden file under d.
func walkFiles(d string, fn func(p, name string)) {
	for _, f := range listSorted(d) {
		if strings.HasPrefix(f, ".") {
			continue
		}
		p := pyJoin(d, f)
		if st, err := os.Lstat(p); err == nil && st.IsDir() {
			walkFiles(p, fn)
		} else {
			fn(p, f)
		}
	}
}

func (r *report) print() {
	for _, l := range r.lines {
		say("%s", l)
	}
	say("")
	r.verdict()
}

func (r *report) verdict() {
	switch n := len(r.problems); {
	case n == 0 && r.todo == 0:
		say("%s Card ready", markOK)
	case n == 0:
		say("%s Card ready once the %d item(s) marked [->] are moved or prepared", markOK, r.todo)
	default:
		word := "problems"
		if n == 1 {
			word = "problem"
		}
		say("%s %d %s to fix:", markBad, n, word)
		for i, p := range r.problems {
			say("  %d. %s", i+1, p)
		}
	}
}

func pause() {
	fmt.Fprint(out, "\nPress Enter to close.")
	readLine()
	say("")
}

// interactive is the double-click mode, on the card this program is on.
func interactive(root string) int {
	setColour()
	say("Saturn-prepare-card: %s", root)
	say("")
	rep, s := checkCard(root)
	rep.print()
	if s == nil {
		pause()
		return 1
	}
	all := append(append([]*game(nil), s.games...), s.loose...)
	var def []int
	say("")
	if len(all) > 0 {
		say("Games:")
	}
	for i, g := range all {
		state := "new (moved from " + s.looseFrom[g] + " first)"
		if p, ok := s.probes[g]; ok {
			state = map[string]string{"new": "new", "prepared": "prepared", "outdated": "out of date (" + p.detail + ")",
				"error": "cannot be prepared (see above)"}[p.state]
			if p.state == "new" || p.state == "outdated" {
				def = append(def, i)
			}
		} else {
			def = append(def, i)
		}
		say("  %2d. %-40s %s", i+1, displayName(g), state)
	}
	if len(def) == 0 && len(s.plan.moves) == 0 {
		if len(all) > 0 {
			say("")
			say("Nothing to do: every game that can be prepared already is.")
		}
		pause()
		return 0
	}
	var pick []int
	for {
		dflt := fmt.Sprintf("the %d new or out-of-date game(s)", len(def))
		if len(def) == 0 {
			dflt = "only the moves above"
		}
		fmt.Fprintf(out, "\nWhich games to prepare? Enter = %s, a = all, numbers (e.g. 1 3), q = quit: ", dflt)
		a, ok := readLine()
		if !ok {
			say("")
		}
		a = strings.ToLower(pyStrip(a))
		if a == "q" || a == "quit" {
			say("Nothing changed.")
			pause()
			return 0
		}
		if a == "" {
			pick = def
			break
		}
		if a == "a" || a == "all" {
			pick = nil
			for i := range all {
				pick = append(pick, i)
			}
			break
		}
		pick = nil
		bad := false
		seen := map[int]bool{}
		for _, f := range strings.FieldsFunc(a, func(r rune) bool { return r == ' ' || r == ',' || r == '\t' }) {
			n, err := strconv.Atoi(f)
			if err != nil || n < 1 || n > len(all) {
				bad = true
				break
			}
			if !seen[n-1] {
				seen[n-1] = true
				pick = append(pick, n-1)
			}
		}
		if !bad && len(pick) > 0 {
			sort.Ints(pick)
			break
		}
		say("Type numbers from 1 to %d, a, q, or press Enter.", len(all))
	}
	say("")
	if len(s.plan.moves) > 0 {
		say("Moving:")
		applyMoves(root, s.plan.moves, false)
		say("")
	}
	rc := 0
	if len(pick) > 0 {
		only := map[string]bool{}
		for _, i := range pick {
			only[all[i].id()] = true
		}
		rc = card(root, cardOpts{mergeMode: "always", ask: true, only: only})
	}
	say("")
	after, _ := checkCard(root)
	after.verdict()
	pause()
	return rc
}
