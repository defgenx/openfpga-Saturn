#!/usr/bin/env python3
"""ent.py <map.rpt> -- per-entity table (ALUTs, regs, M10K bits, DSP) for the SH-2 pairs in a quartus_map report."""
import re, sys
t = open(sys.argv[1]).read()
i = t.index('; Analysis & Synthesis Resource Utilization by Entity')
rows = []
for l in t[i:i + 200000].split('\n'):
    if not l.startswith(';'): 
        if l.startswith('+') and rows and 'Compilation' not in l and len(rows) > 3 and l.startswith('+--') and False: break
        continue
    c = [x.strip() for x in l.strip(';').split(';')]
    if len(c) < 8 or c[0].startswith('Compilation'): continue
    rows.append(c)
def num(s): return int(re.match(r'\d+', s).group()) if re.match(r'\d+', s) else 0
for c in rows:
    name = c[0].lstrip('| ')
    path = c[7] if len(c) > 7 else ''
    if re.search(r'(MSH|SSH)$', path) or re.search(r'(MSH|SSH)\|(REF_)?(SH7604_|SH_core)\w*(:\w+)?$', path) or name.startswith('sh2_'):
        print('%-60s alut=%5d regs=%5d bits=%6d dsp=%d' % (path[:60], num(c[1]), num(c[2]), num(c[3]), num(c[4])))
m = re.search(r'Estimate of Logic utilization \(ALMs needed\)\s*;\s*(\d+)', t)
print('ALMs needed (estimate):', m.group(1) if m else '?')
