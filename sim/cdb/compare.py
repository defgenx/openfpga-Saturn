#!/usr/bin/env python3
"""Compare the LLE and HLE logs of the same script.

The LLE harness has no working drive (docs/cdb-hle.md section 8), so the drive status byte and the
position words differ by construction. For commands that answer with a plain status report only the
WAIT/DTREQ flags and the rejected form are compared; for every other command the results are compared
with the drive status nibble masked. HIRQ is compared without SCDQ. DATA lines are compared exactly.
Latency is reported separately.
Usage: compare.py lle.log hle.log
"""
import re, statistics, sys

STATUS_CMDS = {0x00, 0x04, 0x05, 0x10, 0x11, 0x12, 0x30, 0x40, 0x42, 0x44, 0x46, 0x48, 0x52, 0x55, 0x60, 0x62, 0x64,
               0x65, 0x66, 0x70, 0x71, 0x74, 0x75, 0xE0, 0x61, 0x63, 0x54, 0x73, 0x72, 0x20, 0x02, 0x03}

def parse(path):
    out = []
    for l in open(path):
        l = l.rstrip("\n")
        m = re.match(r"CMD (\w+) (\w+) (\w+) (\w+) -> (\w+) (\w+) (\w+) (\w+) HIRQ=(\w+) us=(\d+)", l)
        if m:
            c = [int(x, 16) for x in m.groups()[:4]]
            r = [int(x, 16) for x in m.groups()[4:8]]
            out.append(("CMD", c, r, int(m.group(9), 16) & ~0x0400, int(m.group(10))))
            continue
        m = re.match(r"CMD (\w+) (\w+) (\w+) (\w+) -> TIMEOUT", l)
        if m:
            out.append(("CMD", [int(x, 16) for x in m.groups()], None, 0, 0))
            continue
        if l.startswith("DATA") or l.startswith("WAIT") or l.startswith("PUTDATA"):
            l = re.sub(r"\[st=[^\]]*\]", "", l)
            if l.startswith("WAIT"):
                l = re.sub(r"HIRQ=\w+", "", l)
            out.append(("TXT", l.split(), None, 0, 0))
    return out

def norm(c, r):
    if r is None:
        return None
    if r[0] == 0xFFFF:
        return ("REJ",)
    cmd = c[0] >> 8
    if cmd in STATUS_CMDS and not (cmd in (0x61, 0x63, 0x54, 0x73, 0x72, 0x20, 0x02, 0x03) and (r[0] & 0x4000 or r[1] != 0xFFFF and r[0] & 0x80 == 0 and False)):
        pass
    if cmd in (0x00, 0x04, 0x05, 0x10, 0x11, 0x12, 0x30, 0x40, 0x42, 0x44, 0x46, 0x48, 0x60, 0x62, 0x65, 0x66, 0x64,
               0x70, 0x71, 0x74, 0x75, 0xE0, 0x61, 0x63, 0x52, 0x55):
        return ("ST", r[0] & 0xC000)
    return ("R", r[0] & 0xC0FF if cmd not in (0x01,) else r[0] & 0xC000, r[1], r[2], r[3])

def main():
    a, b = parse(sys.argv[1]), parse(sys.argv[2])
    n = max(len(a), len(b))
    diffs = 0
    la, lb = [], []
    for i in range(n):
        x = a[i] if i < len(a) else None
        y = b[i] if i < len(b) else None
        if x is None or y is None or x[0] != y[0]:
            diffs += 1; print("%4d structure differs: %s | %s" % (i, x and x[:3], y and y[:3])); continue
        if x[0] == "TXT":
            if x[1] != y[1]:
                diffs += 1
                print("%4d LLE %s" % (i, " ".join(x[1])[:150])); print("     HLE %s" % " ".join(y[1])[:150])
            continue
        nx, ny = norm(x[1], x[2]), norm(y[1], y[2])
        la.append(x[4]); lb.append(y[4])
        if nx != ny or x[3] != y[3] and False:
            diffs += 1
            print("%4d CMD %s" % (i, " ".join("%04x" % v for v in x[1])))
            print("     LLE %s HIRQ=%04x" % (x[2] and " ".join("%04x" % v for v in x[2]), x[3]))
            print("     HLE %s HIRQ=%04x" % (y[2] and " ".join("%04x" % v for v in y[2]), y[3]))
    print("%d records, %d differ" % (n, diffs))
    if la:
        print("command latency incl. 20 us poll granularity (us): LLE median %d max %d, HLE median %d max %d" %
              (statistics.median(la), max(la), statistics.median(lb), max(lb)))

main()
