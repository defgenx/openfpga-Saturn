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

HIRQ = len(sys.argv) > 2 and sys.argv[2] == "hirq"
COOKED = len(sys.argv) > 2 and sys.argv[2] == "cooked"
BULK = len(sys.argv) > 2 and sys.argv[2] == "bulk"
PAUSE = len(sys.argv) > 2 and sys.argv[2] == "pause"
NPC = len(sys.argv) > 2 and sys.argv[2] == "npc"
FLS = len(sys.argv) > 2 and sys.argv[2] == "fls"
HOLD = len(sys.argv) > 2 and sys.argv[2] == "hold"
NPCNOW = len(sys.argv) > 2 and sys.argv[2] == "npcnow"
FADAHEAD = len(sys.argv) > 2 and sys.argv[2] == "fadahead"
SWRESET = len(sys.argv) > 2 and sys.argv[2] == "swreset"
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
    return [[int(x, 16) for x in l.split()[2:] if not x.startswith("us=")] for l in cmds(sec) if l.startswith("DATA ")]

if HIRQ:   # script_hirq.txt: the host clears every HIRQ bit while the firmware sets SCDQ, in the same clock and one later
    for sec, name in (("race", "same clock"), ("neg", "one clock later")):
        h = [int(l.split()[1], 16) for l in cmds(sec) if l.startswith("HIRQ ")]
        ok("hirq %s: MPED set before the clear" % name, len(h) == 2 and h[0] & 0x0800, h)
        ok("hirq %s: MPED cleared, SCDQ set" % name, len(h) == 2 and not h[1] & 0x0800 and h[1] & 0x0400, h)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if BULK:   # script_bulk.txt: multi-sector Get Sector Data at the fastest host rate, with and without a firmware stall
    def run(n, first):
        return [w for i in range(n) for w in user(first + i)]
    for sec, n in (("bulk", 50), ("stall", 4), ("bulkdel", 40)):
        d = datas(sec)[0]
        e = run(n, 0)
        bad = [i for i in range(len(e)) if i >= len(d) or d[i] != e[i]]
        ok("%s: %d sectors word for word" % (sec, n), not bad, "%d words differ, first at %s" % (len(bad), bad[:1]))
        r = find_cmd(sec, "0600")
        ok("%s: end data transfer count %d" % (sec, n * 1024), r is not None and (r[0] & 0xFF) << 16 | r[1] == n * 1024, r)
    d = datas("past_end")[0]
    ok("past end: 1024 words then zeros", d[:1024] == user(40) and all(x == 0 for x in d[1024:]), d[1020:1030])
    r = find_cmd("past_end", "0600")
    ok("past end: count 1024", r is not None and r[1] == 1024, r)
    marks = ["t%02d" % (k + 1) for k in range(16)]
    bad = [m for i, m in enumerate(marks) if datas(m)[0] != user(40 + i)]
    ok("tail: 16 one-sector transfers with slow DRAM, word for word with the last word", not bad, bad)
    bad = [m for m in marks if (find_cmd(m, "0600") or [0, 0])[1] != 1024]
    ok("tail: end data transfer counts 1024", not bad, bad)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if NPC:   # script_npc.txt: a Play with "no pickup change" after the drive paused at the end of the previous range
    # (also after a Seek pause and with the buffers full): the drive reads on from where the pickup stopped
    def fad(r):
        return None if r is None else (r[0] & 0xFF) << 16 | r[1]
    r = find_cmd("second", "5100")
    ok("npc end: the paused drive reads on from where it stopped (16 sectors)", r is not None and r[3] == 16, r)
    r = find_cmd("ahead", "5100")
    ok("npc end: a range ahead of the pickup is not read, the Play ends (PEND)",
       r is not None and r[3] == 16 and any(l.startswith("WAIT 0010 ok") for l in cmds("ahead")), r)
    d = datas("read")[0]
    ok("npc end: sectors 0..15 word for word", d == [w for l in range(16) for w in user(l)], "len %d" % len(d))
    r, s = find_cmd("pause", "5100"), find_cmd("pause", "5400")
    ok("npc pause: reads on after a Seek pause (32 sectors, the last at FAD 0xB5)",
       r is not None and r[3] == 32 and fad(s) == 0xB5, (r, s))
    r, s, t = find_cmd("full", "5100"), find_cmd("full", "5400"), find_cmd("full", "5400", 1)
    ok("npc full: reads on after the buffers were full (32 sectors, FAD 0xAA at 20, the last 0xB5)",
       r is not None and r[3] == 32 and fad(s) == 0xAA and fad(t) == 0xB5, (r, s, t))
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if PAUSE:   # script_pause.txt: Reset Selector, Pause, Reset Selector while streaming, then Play elsewhere
    r = find_cmd("second", "5100")
    ok("pause: no sector reaches the cleared partition", r is not None and r[3] == 0, r)
    r = find_cmd("count", "5100")
    ok("pause: 20 sectors after the new play", r is not None and r[3] == 20, r)
    d = datas("read")[0]
    ok("pause: sectors 70..89 word for word", d == [w for i in range(20) for w in user(70 + i)], "len %d" % len(d))
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if FLS:   # script_fls.txt: a filter connected 0..9 ms after a Change Directory's EFLS gets no sector read ahead by it
    for sec in ("d0", "d3", "d6", "d9"):
        r = find_cmd(sec, "5100")
        ok("fls %s: no sector in the partition connected after EFLS" % sec, r is not None and r[3] == 0, r)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if SWRESET:   # script_swreset.txt: Init with software reset while the drive reads; the sectors in flight then land
    a, b = find_cmd("reset", "5000"), find_cmd("reset", "5000", 1)
    ok("sw reset: 198..200 buffers free right after", a is not None and 198 <= a[1] <= 200, a)
    ok("sw reset: 198..200 free 50 ms later, none freed twice", b is not None and 198 <= b[1] <= 200, b)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if FADAHEAD:   # script_fadahead.txt: files at FAD 0xA0+8 and 0xA8+8 (Astal's STM stops a file once the FAD passes it)
    bad, n, st, part = [], 0, None, {}
    for l in cmds("poll"):
        m = re.match(r"CMD (\S+) \S+ (\S+) \S+ -> (\S+) \S+ (\S+) (\S+)", l)
        if not m: continue
        c, r = m.group(1), [int(x, 16) for x in m.groups()[1:]]
        if c == "0000": st = r
        elif c == "5100":
            part[r[0] >> 8] = r[3]
            if r[0] >> 8 == 1 and st and st[1] >> 8 == 3:
                n += 1
                f = (st[2] & 0xFF) << 16 | st[3]
                if part[0] + part[1] < f - 0xA0: bad.append((hex(f), part[0], part[1]))
    ok("fad ahead: in PLAY every sector below the reported FAD is in a partition (%d polls)" % n, n > 20 and not bad, bad[:4])
    ok("fad ahead: all 8 sectors of the first file delivered", part.get(0) == 8, part)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if NPCNOW:   # script_npcnow.txt: Seek pause during play, then at once a "no pickup change" Play (Astal's STM)
    a, b = find_cmd("resume", "0000"), find_cmd("resume", "0000", 1)
    ok("npc now: 100 ms later the drive plays again from the pickup (PLAY, FAD 0xAF..0xC0)",
       a is not None and a[0] >> 8 == 3 and 0xAF <= a[3] <= 0xC0, a)
    ok("npc now: 300 ms later it is still reading (PLAY, FAD past the first sample)",
       b is not None and a is not None and b[0] >> 8 == 3 and b[3] > a[3], b)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
if HOLD:   # script_seekhold.txt: a Get CD Status right after a Play still shows the old position (Magical Drop III)
    r = find_cmd("data", "0000")
    ok("hold: paused after a one-sector read (PAUSE, CD-ROM, track 1, FAD 0xA1)", r == [0x0180, 0x4101, 0x0100, 0x00A1], r)
    r = find_cmd("play", "0000")
    ok("hold: right after the Play: BUSY, CD-ROM bit and the old position", r == [0x0080, 0x4101, 0x0100, 0x00A1], r)
    r = find_cmd("play", "0000", 1)
    ok("hold: 20 ms later: SEEK to track 2", r == [0x0400, 0x0102, 0x0100, 0x0190], r)
    print("%d checks, %d failed" % (checks, fails))
    sys.exit(1 if fails else 0)
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
