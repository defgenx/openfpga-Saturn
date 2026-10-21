#!/usr/bin/env python3
"""Per-entity table from a Quartus fit report: fit_entities.py ap_core.fit.rpt [min_alms]
Prints the fitter's cumulative 'ALMs needed' with ALUTs, registers, block memory and DSP per hierarchy node."""
import re, sys
rpt = sys.argv[1]
minalm = float(sys.argv[2]) if len(sys.argv) > 2 else 150
start = False
def cum(s):
    m = re.match(r'([\d.,]+)', s)
    return float(m.group(1).replace(',', '')) if m else 0.0
for l in open(rpt, encoding='latin-1'):
    if 'Fitter Resource Utilization by Entity' in l: start = True
    if start and l.startswith('; ') and l.count(';') > 12 and '|' in l.split(';')[1]:
        f = l.split(';')
        raw = f[1]
        depth = len(raw) - len(raw.lstrip())
        c = [x.strip() for x in f]
        alm, alut, reg, bits, dsp = cum(c[2]), cum(c[7]), cum(c[8]), cum(c[10]), cum(c[11])
        n = c[1].lstrip('|')
        if alm >= minalm and 'altsyncram' not in n and 'auto_generated' not in n and 'altdpram' not in n:
            print("%s%-36s ALM %7.0f  ALUT %6.0f  REG %6.0f  Mbit-kb %6.0f  DSP %2.0f" % ("  " * ((depth - 1) // 3), n[:36], alm, alut, reg, bits / 1024, dsp))
    if start and l.startswith('+') and 'Fitter Resource Utilization' not in l and False: break
