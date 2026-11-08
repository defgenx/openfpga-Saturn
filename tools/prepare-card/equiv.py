#!/usr/bin/env python3
"""Equivalence check: the Go tool against the Python mktoc.py it replaces, in command-line mode.

Builds synthetic cards (pattern data with a fake Saturn header, never real discs or BIOS images), runs
mktoc.py and the Go binary on identical copies, and compares stdout, stderr, the exit status and the resulting
trees byte for byte.

usage: equiv.py [--mktoc PATH] [--bin PATH] [-k CASE] [--keep DIR]
  --mktoc  the Python tool (default: tools/mktoc.py, or the last version of it in git history)
  --bin    the Go binary (default: built here with go build -p 2)
"""
import argparse
import os
import pty
import random
import shutil
import subprocess
import sys
import tempfile
import termios
import time

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
CORE = "defgenx.Saturn"
SEC = 2352


# ---------------------------------------------------------------------------- synthetic discs

def bcd(v):
    return (v // 10) << 4 | v % 10


def data_sector(lba, user):
    m, s, f = (lba + 150) // 75 // 60, (lba + 150) // 75 % 60, (lba + 150) % 75
    sync = bytes([0]) + bytes([255]) * 10 + bytes([0])
    return sync + bytes([bcd(m), bcd(s), bcd(f), 1]) + user + bytes(SEC - 16 - len(user))


def saturn_header(product=b"T-12345G  ", saturn=True):
    h = bytearray(2048)
    h[0:16] = b"SEGA SEGASATURN " if saturn else b"NOT A SATURN    "
    h[16:32] = b"SEGA ENTERPRISES"
    h[0x20:0x2A] = product.ljust(10)[:10]
    h[0x40:0x4A] = b"JTUBKAEL  "
    h[0x60:0x70] = b"SYNTHETIC DISC  "
    return bytes(h)


def data_track(n, seed, cooked=False, **hdr):
    rnd = random.Random(seed)
    out = bytearray()
    for i in range(n):
        user = saturn_header(**hdr) if i == 0 else rnd.randbytes(2048)
        s = data_sector(i, user)
        out += s[16:2064] if cooked else s
    return bytes(out)


def audio_track(n, seed):
    return random.Random(seed).randbytes(n * SEC)


def write(path, data):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "wb") as f:
        f.write(data)


def disc_multi(d, name, seed=1, product=b"T-12345G  "):
    """Redump style: one file per track, INDEX 00 pregaps inside the audio files."""
    write(os.path.join(d, f"{name} (Track 1).bin"), data_track(30, seed, product=product))
    write(os.path.join(d, f"{name} (Track 2).bin"), audio_track(170, seed + 1))
    write(os.path.join(d, f"{name} (Track 3).bin"), audio_track(60, seed + 2))
    write(os.path.join(d, f"{name}.cue"), (
        f'FILE "{name} (Track 1).bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n'
        f'FILE "{name} (Track 2).bin" BINARY\n  TRACK 02 AUDIO\n    INDEX 00 00:00:00\n    INDEX 01 00:02:00\n'
        f'FILE "{name} (Track 3).bin" BINARY\n  TRACK 03 AUDIO\n    INDEX 00 00:00:00\n    INDEX 01 00:00:30\n'
    ).encode())


def disc_single(d, name, seed=2, product=b"T-99999   ", crlf=False, saturn=True, pregap=False):
    """One .bin for the whole disc, INDEX 00 between tracks (pregap: a PREGAP command, which LoadCUE refuses
    in a single-file disc)."""
    data = data_track(40, seed, product=product, saturn=saturn) + audio_track(80, seed + 1)
    write(os.path.join(d, f"{name}.bin"), data)
    t2 = "    PREGAP 00:02:00\n    INDEX 01 00:00:40\n" if pregap else "    INDEX 00 00:00:40\n    INDEX 01 00:00:50\n"
    cue = (f'FILE "{name}.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n'
           '  TRACK 02 AUDIO\n' + t2 +
           '  TRACK 03 AUDIO\n    INDEX 00 00:01:00\n    INDEX 01 00:01:10\n')
    if crlf:
        cue = cue.replace("\n", "\r\n")
    write(os.path.join(d, f"{name}.cue"), cue.encode())


def disc_one_track(d, name, seed=3, unquoted=False):
    write(os.path.join(d, f"{name}.bin"), data_track(25, seed))
    fn = f"{name}.bin" if unquoted else f'"{name}.bin"'
    write(os.path.join(d, f"{name}.cue"), f"FILE {fn} BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n".encode())


def disc_cooked(d, name, seed=4):
    """MODE1/2048 data + audio: two sector sizes, so it cannot be merged."""
    write(os.path.join(d, "t1.bin"), data_track(20, seed, cooked=True))
    write(os.path.join(d, "t2.bin"), audio_track(160, seed + 1))
    write(os.path.join(d, f"{name}.cue"), (
        'FILE "t1.bin" BINARY\n  TRACK 01 MODE1/2048\n    INDEX 01 00:00:00\n'
        'FILE "t2.bin" BINARY\n  TRACK 02 AUDIO\n    INDEX 00 00:00:00\n    INDEX 01 00:02:00\n').encode())


def disc_many(d, name, n=26, seed=5):
    """More track files than data slots."""
    cue = f'FILE "{name}01.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n'
    write(os.path.join(d, f"{name}01.bin"), data_track(10, seed))
    for t in range(2, n + 1):
        write(os.path.join(d, f"{name}{t:02d}.bin"), audio_track(3, seed + t))
        cue += f'FILE "{name}{t:02d}.bin" BINARY\n  TRACK {t:02d} AUDIO\n    INDEX 01 00:00:00\n'
    write(os.path.join(d, f"{name}.cue"), cue.encode())


def bios(path, seed=9):
    write(path, random.Random(seed).randbytes(524288))


def card_root(base):
    r = os.path.join(base, "card")
    for d in ("Cores/" + CORE, "Platforms", "Assets/saturn/common", "Assets/saturn/" + CORE):
        os.makedirs(os.path.join(r, d), exist_ok=True)
    return r


def common(r, *p):
    return os.path.join(r, "Assets", "saturn", "common", *p)


def coredir(r, *p):
    return os.path.join(r, "Assets", "saturn", CORE, *p)


def touch(path, t):
    os.utime(path, (t, t))


# ---------------------------------------------------------------------------- cases
# A case builds a card under base and returns its runs: (argv, stdin, mutate) with stdin None (no terminal),
# a list of answers (typed on a terminal) or "pipe:<text>"; mutate(root) runs on both copies before the run.

def case_basic(base):
    r = card_root(base)
    disc_multi(r, "Root Game")                        # at the card root: moved
    disc_single(os.path.join(r, "Assets", "saturn"), "Saturn Folder Game", crlf=True)
    disc_multi(common(r, "Panzer"), "Panzer", seed=11)
    disc_single(common(r, "USA", "Hyper"), "Hyper", seed=12)
    disc_one_track(common(r), "Loose In Common", unquoted=True)
    bios(os.path.join(r, "sega_101.bin"))             # BIOS-named, 512 KB: moved
    bios(os.path.join(r, "notes.bin"), seed=10)       # 512 KB, not BIOS-named: stays
    write(os.path.join(r, "mpr-17933.rom"), b"short")  # BIOS-named, wrong size: stays
    write(common(r, "Panzer", "._Panzer.cue"), b"junk")
    write(common(r, ".hidden", "x.cue"), b"junk")
    a = ["--card", "card"]
    return [(a + ["--dry-run"], None, None), (a, None, None), (a, None, None), (a + ["--dry-run"], None, None)]


def case_overwrite(base):
    r = card_root(base)
    for i, n in enumerate(("A Game", "B Game", "C Game", "D Game")):
        disc_multi(common(r, n), n, seed=20 + i)
    a = ["--card", "card"]

    def change(names):
        def f(root):
            for n in names:   # move INDEX 01 of track 3: same tracks, new TOC
                p = common(root, n, n + ".cue")
                s = open(p, "rb").read().replace(b"INDEX 01 00:00:30", b"INDEX 01 00:00:31")
                if s == open(p, "rb").read():
                    s = s.replace(b"INDEX 01 00:00:31", b"INDEX 01 00:00:30")
                write(p, s)
        return f
    allg = ["A Game", "B Game", "C Game", "D Game"]
    return [
        (a, None, None),
        (a, None, change(allg)),                     # no terminal: kept
        (a, ["y", "n", "x", "y", "no"], None),       # one answer per game, one invalid
        (a, ["a"], None),
        (a, ["o"], change(allg)),
        (a, ["n", "all"], None),
        (a, [], None),                               # end of input on a terminal: no
        (a + ["--yes"], None, change(["B Game"])),
        (a, "pipe:y\ny\n", change(["A Game"])),      # piped answers are not a terminal: kept
    ]


def case_merge_modes(base):
    r = card_root(base)
    disc_multi(common(r, "M"), "M", seed=30)
    disc_single(common(r, "S"), "S", seed=31)
    disc_cooked(common(r, "Cooked"), "Cooked")
    disc_many(common(r, "Many"), "Many")
    a = ["--card", "card"]
    return [(a + ["--merge", "never"], None, None), (a + ["--merge=auto"], None, None),
            (a + ["--merge", "always", "--yes"], None, None), (a + ["--mer", "auto"], None, None),
            (a + ["--merge", "never", "--yes"], None, None)]


def case_images(base):
    r = card_root(base)
    disc_multi(common(r, "Old"), "Old", seed=40)
    disc_multi(common(r, "Hdr"), "Hdr", seed=41)
    disc_multi(common(r, "Newer"), "Newer", seed=42)
    a = ["--card", "card"]

    def mutate(root):
        # an .img without the header sector (older tool): one sector short
        files = [common(root, "Old", f"Old (Track {i}).bin") for i in (1, 2, 3)]
        write(common(root, "Old", "Old.img"), b"".join(open(f, "rb").read() for f in files))
        # header out of date, tracks older than the image: only the header is rewritten
        p = common(root, "Hdr", "Hdr.cue")
        write(p, open(p, "rb").read().replace(b"INDEX 01 00:00:30", b"INDEX 01 00:00:20"))
        # a track newer than the image: rewritten in full
        img = common(root, "Newer", "Newer.img")
        touch(img, 1_700_000_000)
        touch(common(root, "Newer", "Newer (Track 2).bin"), 1_700_000_100)
        p = common(root, "Newer", "Newer.cue")
        write(p, open(p, "rb").read().replace(b"INDEX 01 00:00:30", b"INDEX 01 00:00:29"))
    return [(a, None, None), (a, None, mutate), (a + ["--dry-run"], None, None), (a + ["--yes"], None, None),
            (a, None, None)]


def case_json_dir(base):
    r = card_root(base)
    disc_multi(common(r, "USA", "Game"), "Game", seed=50)
    disc_multi(common(r, "JPN", "Game"), "Game", seed=51)
    disc_one_track(common(r, "USA"), "game", seed=52)       # same name, other case
    disc_single(common(r, "Solo"), "Solo", seed=53)
    disc_one_track(common(r, "Gone"), "Gone", seed=54)
    os.remove(common(r, "Gone", "Gone.cue"))                # JSON in the core folder, no .cue left
    write(common(r, "Gone", "Gone.toc"), b"\0" * 2048)
    write(coredir(r, "Gone.json"), b'{"instance": {"data_slots": [{"filename": "Gone.toc", "id": 2}, '
                                   b'{"id": 16, "filename": "Gone.bin"}], "magic": "APF_VER_1", "data_path": "Gone/"}}')
    write(coredir(r, "Solo.json"), b'{"instance": {"magic": "APF_VER_1", "data_path": "Solo/", "data_slots": '
                                   b'[{"id": 2, "filename": "Solo.toc"}, {"id": 16, "filename": "Solo.bin"}]}}')
    write(coredir(r, "Solo.json.old"), b"{}")
    write(coredir(r, "other.json"), b'{"core": {"magic": "APF_VER_1"}}')
    write(coredir(r, "été.json"), '{"instance": {"magic": "APF_VER_1", "data_path": "Ete/", "data_slots": '
                                            '[{"id": 2, "filename": "\\u00e9t\\u00e9.toc"}, {"id": 16, "filename": '
                                            '"é \\"q\\".img"}]}}'.encode())
    a = ["--card", "card"]
    return [(a + ["--json-dir", ".", "--dry-run"], None, None), (a + ["--json-dir", "USA"], None, None),
            (a + ["--json-dir", "."], None, None), (a + ["--json-dir", "../x"], None, None),
            (a + ["--json-dir", "a\\b"], None, None), (a, None, None)]


def case_errors(base):
    r = card_root(base)
    disc_multi(common(r, "Missing"), "Missing", seed=60)
    os.remove(common(r, "Missing", "Missing (Track 2).bin"))
    d = common(r, "Type")
    write(os.path.join(d, "t.bin"), data_track(5, 61))
    write(os.path.join(d, "Type.cue"), b'FILE "t.bin" ISO\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n')
    d = common(r, "Gap")
    write(os.path.join(d, "t.bin"), data_track(5, 62))
    write(os.path.join(d, "Gap.cue"), b'FILE "t.bin" BINARY\n  TRACK 02 MODE1/2352\n    INDEX 01 00:00:00\n')
    d = common(r, "Empty")
    write(os.path.join(d, "Empty.cue"), b"REM nothing\n")
    d = common(r, "Odd")
    write(os.path.join(d, "t.bin"), data_track(5, 63) + b"xx")
    write(os.path.join(d, "Odd.cue"), b'FILE "t.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n')
    d = common(r, "Up")
    write(common(r, "shared.bin"), data_track(5, 64))
    write(os.path.join(d, "Up.cue"), b'FILE "../shared.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n')
    disc_one_track(common(r, "Foreign"), "Foreign", seed=65)
    write(coredir(r, "Foreign.json"), b'{"hello": 1}')
    disc_one_track(common(r, "TocDir"), "TocDir", seed=66)
    os.makedirs(common(r, "TocDir", "TocDir.toc"))
    disc_one_track(common(r, "Back\\Slash"), "Back", seed=67)
    disc_one_track(common(r, "Co:lon"), "Colon", seed=68)
    disc_one_track(common(r, "Idx"), "Idx", seed=69)
    p = common(r, "Idx", "Idx.cue")
    write(p, open(p, "rb").read() + b"  TRACK 02 AUDIO\n    INDEX 01 00:00:20\n    INDEX 01 00:05:00\n")
    disc_one_track(r, "Spread", seed=70)                       # a root .cue whose track is elsewhere
    os.makedirs(os.path.join(r, "sub"))
    os.rename(os.path.join(r, "Spread.bin"), os.path.join(r, "sub", "Spread.bin"))
    write(os.path.join(r, "Spread.cue"), b'FILE "sub/Spread.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n')
    disc_one_track(r, "Clash", seed=71)                        # its folder already has the file
    disc_one_track(common(r, "Clash"), "Clash", seed=72)
    write(os.path.join(r, "Broken.cue"), b'FILE "nothere.bin" BINARY\n  TRACK 01 MODE1/2352\n')
    bios(os.path.join(r, "saturn_bios.bin"))
    bios(coredir(r, "saturn_bios.bin"), seed=12)               # already there: not moved
    a = ["--card", "card"]
    return [(a, None, None), (a + ["--yes"], None, None), (a + ["--dry-run"], None, None)]


def case_options(base):
    r = card_root(base)
    disc_multi(common(r, "Cart"), "Cart", seed=80, product=b"T-1M      ")
    disc_multi(common(r, "Cart4"), "Cart4", seed=81, product=b"t-4m\0\0")
    disc_single(common(r, "Sz"), "Sz", seed=82, product=b"t-\xdfx\xb5 ")
    disc_single(common(r, "NoSat"), "NoSat", seed=83, saturn=False)
    disc_single(common(r, "Pregap"), "Pregap", seed=85, pregap=True)
    disc_one_track(common(r, "Flags"), "Flags", seed=84)
    write(os.path.join(base, "ramcart.txt"), "﻿# RAM carts\nT-1M\t1m\n  T-4M  4M ; four\nTX x y\n"
                                             "T-SSXΜ 4M\n;comment\n\r\nT-OTHER none\n".encode("utf-8"))
    a = ["--card", "card", "--ramcart-db", "ramcart.txt"]
    return [
        (["-o", "card/Assets/saturn/common/Flags", "--wwf", "--road-rash", "--merge", "always",
          "card/Assets/saturn/common/Flags/Flags.cue"], None, None),
        (a, None, None), (a + ["--yes"], None, None), (["--card", "card"], None, None),
        (["--card", "card", "--ram", "nothere.txt", "--yes"], None, None),
    ]


def case_single(base):
    r = os.path.join(base, "discs")
    disc_multi(os.path.join(r, "m"), "M", seed=90)
    disc_single(os.path.join(r, "s"), "S", seed=91)
    disc_many(os.path.join(r, "many"), "Many", seed=92)
    disc_cooked(os.path.join(r, "c"), "C", seed=93)
    disc_multi(os.path.join(r, "bad"), "Bad", seed=94)
    os.remove(os.path.join(r, "bad", "Bad (Track 3).bin"))
    write(os.path.join(base, "db.txt"), b"T-12345G 4M\n")
    return [
        (["discs/m/M.cue"], None, None),
        (["discs/m/M.cue", "-o", "out/m"], None, None),
        (["-oout/m2", "--data-path", "m/", "discs/m/M.cue"], None, None),
        (["discs/m/M.cue", "-o", "out/m3", "--merge", "always", "--ramcart-db", "db.txt"], None, None),
        (["discs/s/S.cue", "-o", "out/s", "--wwf", "--road"], None, None),
        (["discs/many/Many.cue", "-o", "out/many"], None, None),
        (["discs/many/Many.cue", "-o", "out/many2", "--merge", "never"], None, None),
        (["discs/c/C.cue", "-o", "out/c"], None, None),
        (["discs/c/C.cue", "-o", "out/c2", "--merge", "always"], None, None),
        (["discs/bad/Bad.cue", "-o", "out/bad"], None, None),
        (["discs/m/M.cue", "-o", "discs/m", "--merge", "always"], None, None),
        (["--data-path", "x/", "discs/s/S.cue", "--outdir=out/dp"], None, None),
        (["discs/m/M.cue", "--card", "x"], None, None),          # usage errors: status only
        (["discs/m/M.cue", "--merge", "maybe"], None, None),
        (["a.cue", "b.cue"], None, None),
    ]


def case_no_common(base):
    r = os.path.join(base, "card")
    os.makedirs(os.path.join(r, "Assets"))
    disc_one_track(r, "Lone", seed=100)
    bios(os.path.join(r, "BOOT.ROM"))
    r2 = card_root(os.path.join(base, "empty"))
    return [(["--card", "card", "--dry-run"], None, None), (["--card", "card"], None, None),
            (["--card", "empty/card"], None, None), (["--card", "<TREE>/empty/card"], None, None)]


def case_cwd(base):
    """No --card: the card is the current folder (the binaries are not on it)."""
    r = card_root(base)
    disc_multi(common(r, "G"), "G", seed=110)
    bios(os.path.join(r, "Sega Saturn BIOS (EU).bin"))
    return [(["--dry-run"], None, None, "card"), (["--yes"], None, None, "card"), (["--yes"], None, None, "card")]


def case_weird_cues(base):
    """Cue sheets LoadCUE reads in odd ways, and names outside ASCII."""
    r = card_root(base)

    def cue(name, text, tracks=((25, 1),)):
        d = common(r, name)
        for i, (n, seed) in enumerate(tracks):
            write(os.path.join(d, f"t{i + 1}.bin"), data_track(n, seed) if i == 0 else audio_track(n, seed))
        write(os.path.join(d, name + ".cue"), text if isinstance(text, bytes) else text.encode())
    cue("Before", "INDEX 01 00:00:05\nPREGAP 00:00:10\nFILE t1.bin BINARY\nTRACK 01 MODE1/2352\nINDEX 01 00:00:00\n")
    cue("Tabs", "FILE \"t1.bin\" BINARY\n\tTRACK 01 MODE1/2352\n\tINDEX 01 00:00:00\n")
    cue("Nbsp", b"FILE \"t1.bin\" BINARY\n  TRACK\xa001 MODE2/2352\n  INDEX\x1f01\t00:00:00\n")
    cue("Index2", "FILE \"t1.bin\" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n    INDEX 02 00:00:03\n"
                  "  TRACK 02 MODE2/2352\n    INDEX 00 00:00:10\n    INDEX 01 00:00:12\n")
    cue("TwoFiles", "FILE \"t1.bin\" BINARY\nFILE \"t2.bin\" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n",
        ((25, 1), (10, 2)))
    cue("Big", "FILE \"t1.bin\" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n"
               "FILE \"t2.bin\" BINARY\n  TRACK 02 AUDIO\n    INDEX 01 00:05:00\n", ((25, 1), (400, 2)))
    many = "FILE \"t1.bin\" BINARY\n" + "".join(f"  TRACK {t:02d} AUDIO\n    INDEX 01 00:00:{t // 4:02d}\n"
                                               for t in range(1, 102))
    cue("Hundred", many, ((40, 3),))
    cue("NinetyNine", "FILE \"t1.bin\" BINARY\n" + "".join(f"  TRACK {t:02d} AUDIO\n    INDEX 01 00:00:{t // 4:02d}\n"
                                                         for t in range(1, 100)), ((40, 3),))
    d = common(r, "Jeu été")
    write(os.path.join(d, "é.bin"), data_track(20, 7))
    write(os.path.join(d, "Jeu été.cue"), b'FILE "\xe9.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n')
    d = common(r, "Quote")
    write(os.path.join(d, "a'b.bin"), data_track(20, 8))
    write(os.path.join(d, "It's.cue"), b'FILE "a\'b.bin" MOTOROLA\n  TRACK 01 MODE1/2048\n    INDEX 01 00:00:00\n')
    write(os.path.join(d, "Win.cue"), b'FILE "sub\\w.bin" WAVE\r\n  TRACK 01 AUDIO\r\n    INDEX 01 00:00:00\r\n')
    write(os.path.join(d, "sub", "w.bin"), audio_track(5, 9))
    a = ["--card", "card"]
    return [(a + ["--dry-run"], None, None), (a + ["--merge", "never"], None, None),
            (a + ["--merge", "never", "--json-dir", "."], None, None), (a + ["--yes"], None, None),
            (["card/Assets/saturn/common/Quote/Win.cue", "-o", "out"], None, None),
            (["card/Assets/saturn/common/Hundred/Hundred.cue", "-o", "out"], None, None),
            (["card/Assets/saturn/common/NinetyNine/NinetyNine.cue", "-o", "out", "--merge", "never"], None, None)]


def case_rename_clash(base):
    r = card_root(base)
    disc_one_track(common(r, "Solo"), "Solo", seed=120)
    write(coredir(r, "Solo.json"), b'{"instance": {"magic": "APF_VER_1", "data_path": "Solo/", "data_slots": '
                                   b'[{"id": 2, "filename": "Solo.toc"}, {"id": 16, "filename": "Solo.bin"}]}}')
    write(coredir(r, "Solo.json.old"), b"1")
    write(coredir(r, "Solo.json.old2"), b"2")
    return [(["--card", "card", "--json-dir", "Solo"], None, None)]


CASES = {k[5:]: v for k, v in globals().items() if k.startswith("case_")}


# ---------------------------------------------------------------------------- running

def run(cmd, cwd, stdin):
    if stdin is None or isinstance(stdin, str):
        p = subprocess.run(cmd, cwd=cwd, capture_output=True, timeout=120,
                           stdin=subprocess.DEVNULL if stdin is None else None,
                           input=stdin[5:].encode() if isinstance(stdin, str) else None)
        return p.returncode, p.stdout, p.stderr
    master, slave = pty.openpty()
    attrs = termios.tcgetattr(slave)
    attrs[3] &= ~termios.ECHO
    termios.tcsetattr(slave, termios.TCSANOW, attrs)
    os.write(master, "".join(a + "\n" for a in stdin).encode())
    if not stdin:
        os.write(master, b"\x04")    # end of input
    try:
        p = subprocess.run(cmd, cwd=cwd, capture_output=False, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                           stdin=slave, timeout=120)
    finally:
        os.close(slave)
        os.close(master)
    return p.returncode, p.stdout, p.stderr


def snapshot(top):
    out = {}
    for d, dirs, files in os.walk(top):
        dirs.sort()
        rel = os.path.relpath(d, top)
        out[rel + "/"] = None
        for f in sorted(files):
            p = os.path.join(d, f)
            out[os.path.relpath(p, top)] = open(p, "rb").read() if os.path.isfile(p) else "special"
    return out


def diff_trees(a, b):
    msgs = []
    for k in sorted(set(a) | set(b)):
        if k not in a or k not in b:
            msgs.append(f"    only in {'python' if k in a else 'go'}: {k}")
        elif a[k] != b[k]:
            msgs.append(f"    differs: {k}")
    return msgs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--mktoc")
    ap.add_argument("--bin")
    ap.add_argument("-k", action="append", help="run only these cases")
    ap.add_argument("--keep", help="keep the trees in this folder")
    a = ap.parse_args()
    work = a.keep or tempfile.mkdtemp(prefix="prepare-card-equiv-")
    os.makedirs(work, exist_ok=True)
    mktoc = a.mktoc or os.path.join(REPO, "tools", "mktoc.py")
    if not os.path.isfile(mktoc):   # removed: the version before the commit that removed it
        git = ["git", "-C", REPO]
        rev = "HEAD"
        if subprocess.run(git + ["cat-file", "-e", "HEAD:tools/mktoc.py"], capture_output=True).returncode:
            rev = subprocess.check_output(git + ["rev-list", "-n1", "HEAD", "--", "tools/mktoc.py"], text=True).strip() + "^"
        mktoc = os.path.join(work, "mktoc.py")
        with open(mktoc, "wb") as f:
            f.write(subprocess.check_output(git + ["show", f"{rev}:tools/mktoc.py"]))
    binp = a.bin
    if not binp:
        binp = os.path.join(work, "Saturn-prepare-card")
        subprocess.check_call(["go", "build", "-p", "2", "-o", binp, "."], cwd=HERE,
                              env=dict(os.environ, GOMAXPROCS="2"))
    total = bad = 0
    for name, fn in CASES.items():
        if a.k and name not in a.k:
            continue
        base = os.path.join(work, name)
        shutil.rmtree(base, ignore_errors=True)
        src = os.path.join(base, "src")
        os.makedirs(src)
        runs = fn(src)
        trees = {}
        for impl in ("python", "go"):
            trees[impl] = os.path.join(base, impl)
            shutil.copytree(src, trees[impl], symlinks=True)
        for i, r in enumerate(runs):
            argv, stdin, mutate = r[:3]
            sub = r[3] if len(r) > 3 else "."
            total += 1
            res = {}
            for impl, top in trees.items():
                if mutate:
                    mutate(os.path.join(top, "card"))
                args = [x.replace("<TREE>", os.path.abspath(top)) for x in argv]
                cmd = ([sys.executable, "-I", mktoc] if impl == "python" else [binp]) + args
                code, so, se = run(cmd, os.path.join(top, sub), stdin)
                norm = lambda b: b.replace(os.path.abspath(top).encode(), b"<TREE>")
                res[impl] = (code, norm(so), norm(se), snapshot(top))
            (pc, po, pe, pt), (gc, go, ge, gt) = res["python"], res["go"]
            # intended difference: an overwrite rebuilds the whole .img (Go says "rebuilt"); Python rewrote only
            # its header sector when the track data looked current ("updated"); the written trees still match
            go = go.replace(b".img rebuilt", b".img updated")
            msgs = []
            if pc != gc:
                msgs.append(f"    exit status: python {pc}, go {gc}")
            if po != go:
                msgs.append("    stdout differs:\n--- python\n" + po.decode(errors="replace") +
                            "--- go\n" + go.decode(errors="replace"))
            usage_error = pc == 2
            if pe != ge and not usage_error:
                msgs.append("    stderr differs:\n--- python\n" + pe.decode(errors="replace") +
                            "--- go\n" + ge.decode(errors="replace"))
            msgs += diff_trees(pt, gt)
            label = f"{name}[{i}] {' '.join(argv)}" + (f" stdin={stdin!r}" if stdin is not None else "")
            if msgs:
                bad += 1
                print(f"FAIL {label}")
                print("\n".join(msgs))
            else:
                print(f"same {label} (exit {pc}, {len(po.splitlines())} lines)")
    print(f"{total - bad}/{total} runs identical")
    if not a.keep:
        shutil.rmtree(work, ignore_errors=True)
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    main()
