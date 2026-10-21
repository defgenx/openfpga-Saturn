package main

// The double-click flow, driven by piped answers: the binary is copied to the root of a synthetic card and run
// without arguments from another folder. The command-line mode is checked against mktoc.py by equiv.py.

import (
	"bytes"
	"math/rand"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strings"
	"testing"
)

var binPath string

func TestMain(m *testing.M) {
	dir, err := os.MkdirTemp("", "prepare-card-test-")
	if err != nil {
		panic(err)
	}
	binPath = filepath.Join(dir, "Saturn-prepare-card")
	if runtime.GOOS == "windows" {
		binPath += ".exe"
	}
	cmd := exec.Command("go", "build", "-p", "2", "-o", binPath, ".")
	cmd.Stderr = os.Stderr
	if err := cmd.Run(); err != nil {
		panic(err)
	}
	code := m.Run()
	os.RemoveAll(dir)
	os.Exit(code)
}

func writeFile(t *testing.T, p string, data []byte) {
	t.Helper()
	if err := os.MkdirAll(filepath.Dir(p), 0o777); err != nil {
		t.Fatal(err)
	}
	if err := os.WriteFile(p, data, 0o666); err != nil {
		t.Fatal(err)
	}
}

// disc writes a one-track synthetic disc (pattern data, a fake Saturn header) as dir/name.cue + dir/name.bin.
func disc(t *testing.T, dir, name string, seed int64) {
	rnd := rand.New(rand.NewSource(seed))
	var b bytes.Buffer
	for i := 0; i < 20; i++ {
		s := make([]byte, 2352)
		copy(s, "\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00")
		rnd.Read(s[16:2064])
		if i == 0 {
			copy(s[16:], "SEGA SEGASATURN SEGA ENTERPRISEST-1234   ")
		}
		b.Write(s)
	}
	writeFile(t, filepath.Join(dir, name+".bin"), b.Bytes())
	writeFile(t, filepath.Join(dir, name+".cue"),
		[]byte("FILE \""+name+".bin\" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n"))
}

func newCard(t *testing.T) string {
	root := t.TempDir()
	for _, d := range []string{"Cores/defgenx.Saturn", "Assets/saturn/common", "Assets/saturn/defgenx.Saturn"} {
		if err := os.MkdirAll(filepath.Join(root, d), 0o777); err != nil {
			t.Fatal(err)
		}
	}
	return root
}

func biosFile(t *testing.T, p string) { writeFile(t, p, make([]byte, 524288)) }

func installBin(t *testing.T, root string) string {
	data, err := os.ReadFile(binPath)
	if err != nil {
		t.Fatal(err)
	}
	p := filepath.Join(root, filepath.Base(binPath))
	writeFile(t, p, data)
	if err := os.Chmod(p, 0o755); err != nil {
		t.Fatal(err)
	}
	return p
}

// double runs the program as if double-clicked, from a folder that is not the card, with the given answers.
func double(t *testing.T, exe, answers string) string {
	t.Helper()
	cmd := exec.Command(exe)
	cmd.Dir = t.TempDir()
	cmd.Stdin = strings.NewReader(answers)
	o, _ := cmd.CombinedOutput()
	s := string(o)
	if !strings.HasSuffix(strings.TrimRight(s, "\n"), "Press Enter to close.") {
		t.Fatalf("does not end waiting for Enter:\n%s", s)
	}
	return s
}

func has(t *testing.T, out string, want ...string) {
	t.Helper()
	for _, w := range want {
		if !strings.Contains(out, w) {
			t.Errorf("output lacks %q:\n%s", w, out)
		}
	}
}

func isfile(p string) bool { st, err := os.Stat(p); return err == nil && st.Mode().IsRegular() }

func core(root, f string) string   { return filepath.Join(root, "Assets", "saturn", "defgenx.Saturn", f) }
func common(root, f string) string { return filepath.Join(root, "Assets", "saturn", "common", f) }

func TestDefaultPreparesNewGamesAndMoves(t *testing.T) {
	root := newCard(t)
	disc(t, common(root, "Alpha"), "Alpha", 1)
	disc(t, root, "Loose", 2)
	biosFile(t, filepath.Join(root, "sega_101.bin"))
	out := double(t, installBin(t, root), "\n\n")
	has(t, out,
		"[->] sega_101.bin at the card root: will be moved to Assets/saturn/defgenx.Saturn/",
		"[->] Alpha: tracks in Assets/saturn/common/Alpha/, not prepared yet",
		"[->] Loose.cue in the card root: will be moved with its tracks to Assets/saturn/common/Loose/",
		"   1. Alpha", "   2. Loose", "new (moved from the card root first)",
		"Enter = the 2 new or out-of-date game(s)",
		"Preparing 2 of the 2 disc(s)", "[OK] Card ready\n")
	for _, p := range []string{core(root, "Alpha.json"), core(root, "Loose.json"), core(root, "sega_101.bin"),
		common(root, "Loose/Loose.img"), common(root, "Alpha/Alpha.toc")} {
		if !isfile(p) {
			t.Errorf("missing %s", p)
		}
	}
	if strings.Contains(out, "\x1b[") {
		t.Error("colour codes without a terminal")
	}
}

func TestPickNumbers(t *testing.T) {
	root := newCard(t)
	for i, n := range []string{"A", "B", "C"} {
		disc(t, common(root, n), n, int64(10+i))
	}
	biosFile(t, core(root, "bios.bin"))
	out := double(t, installBin(t, root), "0\n2, 3 3\n\n")
	has(t, out, "Type numbers from 1 to 3, a, q, or press Enter.", "Preparing 2 of the 3 disc(s)",
		"[OK] Card ready once the 1 item(s) marked [->] are moved or prepared")
	if isfile(core(root, "A.json")) || !isfile(core(root, "B.json")) || !isfile(core(root, "C.json")) {
		t.Errorf("wrong games prepared:\n%s", out)
	}
}

func TestQuitChangesNothing(t *testing.T) {
	root := newCard(t)
	disc(t, common(root, "A"), "A", 20)
	disc(t, root, "Loose", 21)
	out := double(t, installBin(t, root), "q\n\n")
	has(t, out, "Nothing changed.", "NO BIOS: copy a Saturn BIOS image (512 KB, .bin or .rom) into Assets/saturn/defgenx.Saturn/")
	if isfile(core(root, "A.json")) || !isfile(filepath.Join(root, "Loose.cue")) {
		t.Error("q changed the card")
	}
}

func TestOverwritePrompt(t *testing.T) {
	root := newCard(t)
	biosFile(t, core(root, "bios.bin"))
	for i, n := range []string{"A", "B", "C"} {
		disc(t, common(root, n), n, int64(30+i))
	}
	exe := installBin(t, root)
	double(t, exe, "\n\n")
	before := map[string][]byte{}
	for _, n := range []string{"A", "B"} { // same tracks, another TOC: the .img header, .toc and .json change
		p := common(root, n+"/"+n+".cue")
		cue, _ := os.ReadFile(p)
		writeFile(t, p, append(cue, "  TRACK 02 MODE1/2352\n    INDEX 01 00:00:10\n"...))
		before[n], _ = os.ReadFile(common(root, n+"/"+n+".toc"))
	}
	out := double(t, exe, "\nmaybe\ny\nn\n\n")
	has(t, out, "   1. A", "out of date (A.img, A.toc)", "   3. C", "prepared",
		"common/A/A.cue: A.img, A.toc already exist(s) and would change. Overwrite? [y]es / [n]o / [a]ll / n[o]ne: ",
		"common/B/B.cue: kept as it is", "1 disc(s) ready", "1 kept as they were")
	a, _ := os.ReadFile(common(root, "A/A.toc"))
	b, _ := os.ReadFile(common(root, "B/B.toc"))
	if bytes.Equal(a, before["A"]) || !bytes.Equal(b, before["B"]) {
		t.Error("the answers were not applied")
	}
}

func TestNothingToDo(t *testing.T) {
	root := newCard(t)
	biosFile(t, core(root, "bios.bin"))
	disc(t, common(root, "A"), "A", 40)
	exe := installBin(t, root)
	double(t, exe, "\n\n")
	out := double(t, exe, "\n")
	has(t, out, "[OK] A: tracks in Assets/saturn/common/A/, A.json in Assets/saturn/defgenx.Saturn/",
		"Nothing to do: every game that can be prepared already is.", "[OK] Card ready\n")
}

func TestCheckProblems(t *testing.T) {
	root := t.TempDir()
	if err := os.MkdirAll(filepath.Join(root, "Assets/saturn/defgenx.Saturn"), 0o777); err != nil {
		t.Fatal(err)
	}
	writeFile(t, core(root, "half.bin"), make([]byte, 262144))
	biosFile(t, common(root, "sega_saturn_bios.bin"))
	disc(t, common(root, "Broken"), "Broken", 50)
	os.Rename(common(root, "Broken/Broken.bin"), common(root, "Broken/broken-track.bin"))
	writeFile(t, common(root, "Orphan/data.bin"), []byte("x"))
	writeFile(t, core(root, "Wrong.cue"), []byte("FILE \"x.bin\" BINARY\n"))
	out := double(t, installBin(t, root), "\n\n")
	has(t, out,
		"does not look like the root of a Pocket SD card (no Cores/ or Assets/ folder)",
		"[!!] half.bin in Assets/saturn/defgenx.Saturn/ is 256 KB, not 512 KB",
		"[!!] Assets/saturn/common/sega_saturn_bios.bin looks like a BIOS image in the wrong folder",
		"[!!] NO BIOS",
		"[!!] Broken (Assets/saturn/common/Broken/Broken.cue): the .cue lists Broken.bin, which is not there "+
			"(that folder has broken-track.bin): rename the track file",
		"[!!] Assets/saturn/defgenx.Saturn/Wrong.cue: games go in Assets/saturn/common/<game>/",
		"[!!] Assets/saturn/common/Orphan/data.bin: no .cue lists this file",
		"[!!] 7 problems to fix:\n  1. ", "cannot be prepared (see above)")

	cmd := exec.Command(binPath, "--card", root, "--check")
	o, err := cmd.CombinedOutput()
	if ee, ok := err.(*exec.ExitError); !ok || ee.ExitCode() != 1 || !strings.Contains(string(o), "7 problems to fix") {
		t.Errorf("--check: %v\n%s", err, o)
	}
	if strings.Contains(string(o), "Press Enter") {
		t.Error("--check waits for Enter")
	}
}

func TestNotACard(t *testing.T) {
	dir := t.TempDir()
	out := double(t, installBin(t, dir), "\n")
	has(t, out, "does not look like the root of a Pocket SD card", "1 problem to fix:")
}

func TestSymlinkedBinaryUsesItsOwnFolder(t *testing.T) {
	if runtime.GOOS == "windows" {
		t.Skip("symlinks need privileges on Windows")
	}
	root := newCard(t)
	disc(t, common(root, "A"), "A", 60)
	link := filepath.Join(t.TempDir(), "prepare")
	if err := os.Symlink(installBin(t, root), link); err != nil {
		t.Fatal(err)
	}
	double(t, link, "\n\n")
	if !isfile(core(root, "A.json")) {
		t.Error("the card next to the real binary was not prepared")
	}
}

func TestOthersFolderUsesTheCardRoot(t *testing.T) {
	root := newCard(t)
	disc(t, common(root, "A"), "A", 80)
	double(t, installBin(t, filepath.Join(root, othersDir)), "\n\n")
	if !isfile(core(root, "A.json")) {
		t.Error("the card above the others folder was not prepared")
	}
}

func TestArgumentsDoNotPause(t *testing.T) {
	root := newCard(t)
	disc(t, common(root, "A"), "A", 70)
	cmd := exec.Command(binPath, "--card", root, "--dry-run")
	o, err := cmd.CombinedOutput()
	if err != nil || strings.Contains(string(o), "Press Enter") || !strings.Contains(string(o), "Tidying:") {
		t.Errorf("%v\n%s", err, o)
	}
}
