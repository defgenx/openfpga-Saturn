# Entity table from a quartus_map report: maptab.py m.map.rpt  (ALUT, REG, block-memory kbit per hierarchy node, cumulative)
import re, sys
st = False
for l in open(sys.argv[1], encoding='latin-1'):
    if 'Analysis & Synthesis Resource Utilization by Entity' in l: st = True; continue
    if st and l.startswith(';') and '|' in l:
        f = [x.strip() for x in l.split(';')]
        if len(f) < 8: continue
        n = f[1]
        if 'altsyncram' in n or 'auto_generated' in n or 'decode' in n: continue
        d = (len(l.split(';')[1]) - len(l.split(';')[1].lstrip())) // 3
        al = int(re.match(r'(\d+)', f[2]).group(1)); rg = int(re.match(r'(\d+)', f[3]).group(1))
        print('%s%-34s ALUT %5d  REG %5d  Mbit-kb %6.0f' % ('  ' * d, n.lstrip('| '), al, rg, int(re.match(r"(\d+)", f[4]).group(1)) / 1024))
    if st and l.startswith('+') and 'Full Hierarchy' not in l and False: break
