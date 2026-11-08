// Saturn-prepare-card prepares the Saturn discs on an Analogue Pocket SD card: for every .cue it writes the
// disc TOC (.toc), the merged image (.img) and the instance JSON the core loads (docs/cd.md, section 4).
//
// Double-clicked (no arguments) it works on the card it sits on and asks what to do. With arguments it is the
// command-line tool the install scripts run; its output and files match the former Python mktoc.py.
package main

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
	"unicode/utf8"
)

func utf8Valid(b []byte) bool { return utf8.Valid(b) }

const usage = `usage: %[1]s [-h] [-o OUTDIR] [--data-path DATA_PATH] [--ramcart-db RAMCART_DB]
       %[2]s [--merge {auto,always,never}] [--wwf] [--road-rash] [--card SD_ROOT]
       %[2]s [--json-dir DIR] [--dry-run] [--yes] [--check]
       %[2]s [cue]
`

const help = `
Build the Saturn CD TOC file and the Pocket instance JSON for a .cue/.bin disc.

The core does not parse cue sheets. This tool applies the same cue interpretation as Main_MiSTer's
support/saturn/saturncdd.cpp (LoadCUE) and writes:

  <name>.toc   2048 bytes, big-endian 32-bit words (layout in docs/cd.md)
  <name>.img   the tracks merged, after one header sector holding the same TOC (the core reads it from there)
  <name>.json  APF instance JSON binding the TOC and the track files to the core's data slots

Usage: %[1]s                         double-clicked or run at the root of the SD card: check the card,
                                     list the games, ask which to prepare
       %[1]s --card SD_ROOT [--dry-run]   tidy the card, then prepare every disc, without asking
       %[1]s --card SD_ROOT --check       only check the card
       %[1]s game.cue [-o outdir] [--data-path PATH] [--ramcart-db saturn_ramcart.txt] [--merge auto|always|never]

Tidying (card mode): a .cue at the card root or in Assets/saturn/ moves, with the files it lists, into
Assets/saturn/common/<cue name>/; a 512 KB BIOS image (.bin/.rom named like a BIOS) at the card root moves into
Assets/saturn/<core>/. Nothing already in place is moved, and nothing is overwritten.
Then, for every .cue under Assets/saturn/common/: <name>.img (a header sector with the TOC, then the tracks merged;
rewritten only when a track file is newer or the TOC changed) and <name>.toc next to the tracks, and <name>.json in
Assets/saturn/<core>/, binding the .toc and the .img, with data_path set to the game's folder under common/. Picking
either the .img or the .json loads the disc (one pick).

positional arguments:
  cue

options:
  -h, --help            show this help message and exit
  -o, --outdir OUTDIR
  --data-path DATA_PATH
                        folder of the track files seen from the JSON's folder (default '': the JSON goes next to them)
  --ramcart-db RAMCART_DB
                        MiSTer saturn_ramcart.txt for the RAM cartridge request
  --merge {auto,always,never}
                        concatenate the track files into one image (always, the default with --card or no argument:
                        the .json and the disc slot both use the image; auto, the default for one .cue: only above 24
                        files; never: the .json lists the track files)
  --wwf                 WWF TOC hack (reports INDEX 01 start)
  --road-rash           Road Rash hack (no seek delay on read)
  --card SD_ROOT        prepare every .cue under SD_ROOT/Assets/saturn/common: the .img and .toc next to the tracks, the
                        .json in Assets/saturn/defgenx.Saturn/ (where the core's Game slot looks)
  --json-dir DIR        with --card: write every .json into common/DIR instead (data_path then names the tracks' folder
                        relative to it; '.' is common/ itself; JSONs in Assets/saturn/defgenx.Saturn/ become .json.old)
  --dry-run             with --card: show what would change, write nothing
  --yes                 with --card: overwrite existing .img, .toc and .json files without asking
  --check               with --card: only check that the BIOS and the games are in the right place, write nothing
`

type args struct {
	cue, outdir, dataPath, ramcartDB, merge, card string
	jsonDir                                       *string
	wwf, roadRash, dryRun, yes, check, help       bool
}

var prog = filepath.Base(os.Args[0])

func argError(msg string) {
	fmt.Fprintf(os.Stderr, usage, prog, strings.Repeat(" ", len(prog)))
	fmt.Fprintf(os.Stderr, "%s: error: %s\n", prog, msg)
	os.Exit(2)
}

// parseArgs follows argparse: long options may be abbreviated, values given as "--opt v" or "--opt=v".
func parseArgs(argv []string) args {
	a := args{outdir: "."}
	type opt struct {
		name  string
		value bool
	}
	opts := []opt{{"--help", false}, {"--outdir", true}, {"--data-path", true}, {"--ramcart-db", true},
		{"--merge", true}, {"--wwf", false}, {"--road-rash", false}, {"--card", true}, {"--json-dir", true},
		{"--dry-run", false}, {"--yes", false}, {"--check", false}}
	var pos []string
	onlyPos := false
	for i := 0; i < len(argv); i++ {
		s := argv[i]
		if onlyPos || s == "-" || !strings.HasPrefix(s, "-") {
			pos = append(pos, s)
			continue
		}
		if s == "--" {
			onlyPos = true
			continue
		}
		name, val, hasVal := s, "", false
		switch {
		case s == "-h":
			name = "--help"
		case strings.HasPrefix(s, "-o"):
			name = "--outdir"
			if len(s) > 2 {
				val, hasVal = strings.TrimPrefix(s[2:], "="), true
			}
		case strings.HasPrefix(s, "--"):
			if k := strings.IndexByte(s, '='); k >= 0 {
				name, val, hasVal = s[:k], s[k+1:], true
			}
			var match []string
			for _, o := range opts {
				if o.name == name {
					match = []string{o.name}
					break
				}
				if strings.HasPrefix(o.name, name) {
					match = append(match, o.name)
				}
			}
			if len(match) > 1 {
				argError(fmt.Sprintf("ambiguous option: %s could match %s", name, strings.Join(match, ", ")))
			}
			if len(match) == 0 {
				argError("unrecognized arguments: " + s)
			}
			name = match[0]
		default:
			argError("unrecognized arguments: " + s)
		}
		var o opt
		for _, x := range opts {
			if x.name == name {
				o = x
			}
		}
		if o.value && !hasVal {
			if i+1 >= len(argv) || strings.HasPrefix(argv[i+1], "-") && len(argv[i+1]) > 1 {
				argError(fmt.Sprintf("argument %s: expected one argument", name))
			}
			i++
			val = argv[i]
		} else if !o.value && hasVal {
			argError(fmt.Sprintf("argument %s: ignored explicit argument %q", name, val))
		}
		switch name {
		case "--help":
			a.help = true
		case "--outdir":
			a.outdir = val
		case "--data-path":
			a.dataPath = val
		case "--ramcart-db":
			a.ramcartDB = val
		case "--merge":
			if val != "auto" && val != "always" && val != "never" {
				argError(fmt.Sprintf("argument --merge: invalid choice: '%s' (choose from auto, always, never)", val))
			}
			a.merge = val
		case "--wwf":
			a.wwf = true
		case "--road-rash":
			a.roadRash = true
		case "--card":
			a.card = val
		case "--json-dir":
			v := val
			a.jsonDir = &v
		case "--dry-run":
			a.dryRun = true
		case "--yes":
			a.yes = true
		case "--check":
			a.check = true
		}
		if a.help {
			pad := strings.Repeat(" ", len(prog))
			fmt.Printf(usage, prog, pad)
			fmt.Printf(help, prog)
			os.Exit(0)
		}
	}
	if len(pos) > 1 {
		argError("unrecognized arguments: " + strings.Join(pos[1:], " "))
	}
	if len(pos) == 1 {
		a.cue = pos[0]
	}
	return a
}

// othersDir holds the builds for the less common systems, at the card root (tools/prepare-card/build.sh).
const othersDir = "Saturn-prepare-card-others"

// exeDir is the folder of this program, symlinks resolved: a double-clicked program does not start in it.
// From othersDir it is the card root above it.
func exeDir() string {
	p, err := os.Executable()
	if err != nil {
		return ""
	}
	if r, err := filepath.EvalSymlinks(p); err == nil {
		p = r
	}
	d := filepath.Dir(p)
	if filepath.Base(d) == othersDir && isDir(filepath.Join(filepath.Dir(d), "Assets")) {
		return filepath.Dir(d)
	}
	return d
}

func main() {
	setupConsole()
	if len(os.Args) == 1 {
		os.Exit(interactive(exeDir()))
	}
	a := parseArgs(os.Args[1:])
	if a.cue == "" && a.card == "" {
		// no disc and no card given: the card is the folder this program is in (or the current folder)
		cwd, _ := os.Getwd()
		for _, c := range []string{exeDir(), cwd} {
			if c != "" && isDir(pyJoin(c, "Assets")) {
				a.card = c
				break
			}
		}
		if a.card == "" {
			argError("run this at the root of the SD card (next to its Assets folder), or give --card SD_ROOT or a .cue")
		}
	}
	if a.card != "" {
		if a.cue != "" {
			argError("give either a .cue or --card")
		}
		if a.check {
			setColour()
			say("Card: %s", pyAbs(a.card))
			rep, _ := checkCard(a.card)
			rep.print()
			if len(rep.problems) > 0 {
				os.Exit(1)
			}
			os.Exit(0)
		}
		dryTxt := ""
		if a.dryRun {
			dryTxt = " (dry run, nothing is moved or written)"
		}
		say("Card: %s%s", pyAbs(a.card), dryTxt)
		say("Tidying:")
		tidy(a.card, a.dryRun)
		merge := a.merge
		if merge == "" {
			merge = "always"
		}
		os.Exit(card(a.card, cardOpts{dry: a.dryRun, ramcartDB: a.ramcartDB, jsonDir: a.jsonDir, mergeMode: merge, yesAll: a.yes}))
	}
	os.Exit(single(a))
}

// single prepares one .cue into -o.
func single(a args) int {
	merge := a.merge
	if merge == "" {
		merge = "auto"
	}
	fail := func(err error) int {
		if _, ok := err.(*cueError); ok {
			fmt.Fprintf(os.Stderr, "mktoc: %s\n", err)
		} else {
			fmt.Fprintf(os.Stderr, "%s: %s\n", prog, err)
		}
		return 1
	}
	toc, inst, mg, summary, err := build(a.cue, a.outdir, a.dataPath, a.ramcartDB, merge, a.wwf, a.roadRash, 0)
	if err != nil {
		return fail(err)
	}
	if err := os.MkdirAll(a.outdir, 0o777); err != nil {
		return fail(osErr{err, []string{a.outdir}})
	}
	if mg != nil {
		if _, err := writeMerged(mg, false, false); err != nil {
			return fail(err)
		}
	}
	name, _ := pySplitext(pyBasename(a.cue))
	if err := os.WriteFile(pyJoin(a.outdir, name+".toc"), toc, 0o666); err != nil {
		return fail(osErr{err, []string{pyJoin(a.outdir, name+".toc")}})
	}
	if err := os.WriteFile(pyJoin(a.outdir, name+".json"), instanceJSON(inst), 0o666); err != nil {
		return fail(osErr{err, []string{pyJoin(a.outdir, name+".json")}})
	}
	say("%s: %s", name, summary)
	if err := checkPaths(a.outdir, inst, nil); err != nil {
		say("note: %s; the Pocket resolves the files from the .json's folder plus data_path", err)
	}
	return 0
}
