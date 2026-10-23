#!/usr/bin/env python3
"""ent.py <map.rpt> -- per-entity table (ALUTs, regs, memory bits, DSP) of one SH-2 (MSH) in a quartus_map report."""
import re, sys
t = open(sys.argv[1]).read()
i = t.index('; Analysis & Synthesis Resource Utilization by Entity')
def num(s): return int(re.match(r'\d+', s).group()) if re.match(r'\d+', s) else 0
for l in t[i:i + 300000].split('\n'):
    if not l.startswith(';'): continue
    c = [x.strip() for x in l.strip(';').split(';')]
    if len(c) < 8 or c[0].startswith('Compilation'): continue
    path = c[7] if len(c) > 7 else ''
    short = path.split('|', 1)[-1] if '|' in path else path
    if re.search(r'(MSH|SSH)$', path) or re.search(r'MSH\|[A-Za-z0-9_]+:[A-Za-z0-9_]+(\|SH2P_regfile:regfile)?$', path):
        print('%-48s alut=%5d regs=%5d bits=%6d dsp=%d' % (short[:48], num(c[1]), num(c[2]), num(c[3]), num(c[4])))
m = re.search(r'Estimate of Logic utilization \(ALMs needed\)\s*;\s*(\d+)', t)
print('ALMs needed (estimate):', m.group(1) if m else '?')
