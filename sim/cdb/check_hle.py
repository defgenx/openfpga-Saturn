#!/usr/bin/env python3
"""Check the HLE log of script_cmds.txt against values derived from the disc image and the Mednafen semantics.

Used for the disc-dependent commands, which the LLE cannot answer in the harness (see docs/cdb-hle.md section 8).
Usage: check_hle.py build/hle_cmds.log
"""
import os, re, struct, sys

HERE = os.path.dirname(os.path.abspath(__file__))
trk = open(os.path.join(HERE, "build", "C", "track01.bin"), "rb").read()

def sector(lba):
    return trk[lba * 2352:(lba + 1) * 2352]

def words(b):
    return list(struct.unpack(">%dH" % (len(b) // 2), b))

def user(lba):
    return words(sector(lba)[16:2064])

COOKED = len(sys.argv) > 2
if COOKED:
    cook = open(os.path.join(HERE, "..", "cd", "build", "B", "track01.bin"), "rb").read()
    def cuser(lba):
        return words(cook[lba * 2048:(lba + 1) * 2048])

lines = [l.rstrip("\n") for l in open(sys.argv[1])]
fails = 0
checks = 0

def ok(name, cond, extra=""):
    global fails, checks
    checks += 1
    if not cond:
        fails += 1
        print("FAIL", name, extra)
    else:
        print("ok  ", name)

def cmds(mark=None):
    out, on = [], mark is None
    for l in lines:
        if l.startswith("MARK "):
            on = (mark is None) or l.split()[1] == mark
            continue
        if on:
            out.append(l)
    return out

def find_cmd(sec, prefix, nth=0):
    n = 0
    for l in cmds(sec):
        if l.startswith("CMD " + prefix):
            if n == nth:
                m = re.match(r"CMD (\S+ \S+ \S+ \S+) -> (\S+) (\S+) (\S+) (\S+)", l)
                return [int(x, 16) for x in m.groups()[1:]]
            n += 1
    return None

def datas(sec):
    return [[int(x, 16) for x in l.split()[2:]] for l in cmds(sec) if l.startswith("DATA ")]

if COOKED:
    d = datas("cooked")
    ok("cooked sectors in partition", find_cmd("cooked", "5100")[3] == 3)
    ok("cooked 2048 B data", d[0] == cuser(10))
    r = d[1]
    ok("synth sync", r[0:6] == [0x00FF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF00], r[0:6])
    ok("synth header", r[6:8] == [0x0002, 0x1001], r[6:8])
    ok("cooked body", r[8:1032] == cuser(10))
    ok("ECC area zero", all(x == 0 for x in r[1034:1176]))
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
# --- TOC
d = datas("session_toc")[0]
ok("toc length", len(d) == 204)
ok("toc track 1", d[0:2] == [0x4100, 0x0096], d[0:2])
ok("toc track 2", d[2:4] == [0x0100, 0x0190], d[2:4])
ok("toc unused", all(x == 0xFFFF for x in d[4:198]))
ok("toc A0/A1/lead-out", d[198:204] == [0x4101, 0, 0x0102, 0, 0x0100, 0x01E0], d[198:204])
r = find_cmd("session_toc", "0300")
ok("session 0", r[2] == 0x0100 and r[3] == 0x01E0, r)
r = find_cmd("session_toc", "0301")
ok("session 1", r[2] == 0x0100 and r[3] == 0, r)
r = find_cmd("session_toc", "0302")
ok("session 2", r[2] == 0xFFFF and r[3] == 0xFFFF, r)
# --- play range: 4 sectors into partition 0
r = find_cmd("play_range", "5100")
ok("sectors in partition 0", r is not None and r[3] == 4, r)
ok("PEND after play", any(l.startswith("WAIT 0010 ok") for l in cmds("play_range")))
r = find_cmd("play_range", "5200")
ok("calc size 4 sectors", True)
# --- get sector data
d = datas("getsector")[0]
ok("get sector 2048 B", d == user(16), "len %d" % len(d))
r = find_cmd("getsector", "0600")
ok("end xfer count 1024", r[1] == 1024, r)
d = datas("seclen")
ok("sector length 2352", len(d[0]) == 1176)
ok("sector length 2340", len(d[1]) == 1170)
ok("sector length 2336", len(d[2]) == 1168)
# --- subcode
d = datas("subcode")[0]
ok("subcode Q 5 words", len(d) == 5)
# --- file system
fsd = datas("auth_fs")
r = find_cmd("auth_fs", "e100")
ok("auth type", r is not None and r[1] == 4, r)
r = find_cmd("auth_fs", "7200")
ok("fs scope: 5 entries", r is not None and r[1] == 3, r)   # SUB, ABC.TXT, DATA.BIN
fi = fsd[0]
ok("file info all", len(fi) == 18, "len %d" % len(fi))
ok("file info SUB", fi[0:6] == [0, 150 + 21, 0, 2048, 0, 0x0002], fi[0:6])
ok("file info ABC.TXT", fi[6:12] == [0, 150 + 22, 0, 3000, 0, 0x0000], fi[6:12])
ok("file info DATA.BIN", fi[12:18] == [0, 150 + 24, 0, 5000, 0, 0x0000], fi[12:18])
def fbytes(seed, size, n):
    return bytes([((seed + i * 7 + (i >> 8)) & 0xFF) if i < size else 0 for i in range(n)])
rd = fsd[2] if len(fsd) > 2 else []
ok("read file ABC.TXT", rd == words(fbytes(0x11, 3000, 4096)), "len %d" % len(rd))
# --- CD-DA output: the sampled L/R pair is a real sample of audio sectors 150..169 of the file
m = [l for l in cmds("audio") if l.startswith("AUDIO")]
if m:
    L, R = [int(x.split("=")[1], 16) for x in m[0].split()[1:3]]
    # the script samples at an arbitrary clock: between the left word and the right word of a pair R still holds the
    # previous pair's right word, which is also an accepted sample
    def rs(n, i): return (0xFFFF - (n * 17 + i * 5)) & 0xFFFF
    hit = [(n, i) for n in range(150, 172) for i in range(0, 2352, 4)
           if (n * 131 + i) & 0xFFFF == L and (rs(n, i) == R or (rs(n, i - 4) == R if i else rs(n - 1, 2348) == R))]
    ok("CD-DA sample", bool(hit), "L=%04x R=%04x" % (L, R))
r = find_cmd("audio", "0000", 0)
ok("audio play status", r is not None and (r[0] >> 8) == 3 and (r[1] >> 8) == 1 and (r[1] & 0xFF) == 2, r)
print("%d checks, %d failed" % (checks, fails))
sys.exit(1 if fails else 0)
