# Per sub-block ALMs and M10K blocks from a quartus_fit report: m10k.py out_x/m_x.fit.rpt
import re, sys
st = False; cols = None
for l in open(sys.argv[1], encoding='latin-1'):
    if 'Fitter Resource Utilization by Entity' in l: st = True; continue
    if not st or not l.startswith(';'): continue
    f = [x.strip() for x in l.split(';')]
    if 'Compilation Hierarchy Node' in f[1]:
        cols = f; continue
    if cols is None or '|' not in f[1] or len(f) < 12: continue
    n = f[1].lstrip('|')
    d = (len(l.split(';')[1]) - len(l.split(';')[1].lstrip())) // 3
    if d > 1 or 'altsyncram' in n or 'auto_generated' in n: continue
    g = lambda name: int(re.match(r'([\d,]+)', f[cols.index(name)]).group(1).replace(',', ''))
    print('%-34s ALM %5d  M10K %4d  block-kbit %5d' % (n[:34], g('ALMs needed [=A-B+C]'), g('M10Ks'), g('Block Memory Bits') // 1024))
