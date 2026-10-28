#!/usr/bin/env python3
"""Synthetic Saturn-style disc for the sim/sys plumbing test (no Sega data): one MODE1/2352 data track whose
first sector carries a Saturn-looking header; the rest is a counting pattern. Writes <out>.cue/.bin/.toc.
usage: gen_disc.py <outdir> [sectors]"""
import os, subprocess, sys
out = os.path.abspath(sys.argv[1]); n = int(sys.argv[2]) if len(sys.argv) > 2 else 400
os.makedirs(out, exist_ok=True)
SYNC = bytes([0]) + bytes([255]) * 10 + bytes([0])
def sector(lba, user):
    m, s, f = (lba + 150) // 75 // 60, (lba + 150) // 75 % 60, (lba + 150) % 75
    bcd = lambda v: (v // 10) << 4 | v % 10
    return SYNC + bytes([bcd(m), bcd(s), bcd(f), 1]) + user + bytes(2352 - 16 - len(user))
hdr = bytearray(2048)
hdr[0:16] = b"SEGA SEGASATURN "
hdr[16:32] = b"SEGA ENTERPRISES"
hdr[32:42] = b"T-0000-00 "[:10]
hdr[0x40:0x4A] = b"JTUBKAEL  "[:10]
hdr[0x60:0x70] = b"SIM SYNTHETIC    "[:16]
with open(os.path.join(out, "synth.bin"), "wb") as f:
    for i in range(n):
        user = bytes(hdr) if i == 0 else bytes((i + k) & 255 for k in range(2048))
        f.write(sector(i, user))
open(os.path.join(out, "synth.cue"), "w").write('FILE "synth.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n')
subprocess.run([sys.executable, os.path.join(os.path.dirname(os.path.abspath(__file__)), "../../tools/mktoc.py"), os.path.join(out, "synth.cue"), "-o", out], check=True)
