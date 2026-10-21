#!/usr/bin/env python3
"""mif2hex.py <in.mif> <out.hex>: Quartus MIF (HEX radix) to a $readmemh file. The firmware is read from ref/ at build time."""
import re, sys
words = {}
depth = 2048
for l in open(sys.argv[1]):
    m = re.match(r'\s*([0-9A-Fa-f]+)\s*:\s*([0-9A-Fa-f]+)\s*;', l)
    if m:
        words[int(m.group(1), 16)] = int(m.group(2), 16)
    m = re.match(r'\s*\[([0-9A-Fa-f]+)\.\.([0-9A-Fa-f]+)\]\s*:\s*([0-9A-Fa-f]+)\s*;', l)
    if m:
        for a in range(int(m.group(1), 16), int(m.group(2), 16) + 1): words[a] = int(m.group(3), 16)
with open(sys.argv[2], 'w') as f:
    for a in range(depth): f.write('%03x\n' % words.get(a, 0))
