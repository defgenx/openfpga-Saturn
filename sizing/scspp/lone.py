#!/usr/bin/env python3
"""Registers whose D comes straight from a register/RAM/port (no LUT in front), grouped by name. usage: lone.py file.vqm"""
import re, sys, collections
exec(open(__file__.replace('lone.py','profile.py')).read().split('# fanout')[0].replace("txt = open(sys.argv[1]).read()","txt = open(sys.argv[1]).read()").replace("top = int(sys.argv[2]) if len(sys.argv) > 2 else 60",""))
cnt = collections.Counter(); tot = collections.Counter()
for name, (t, pins) in cell.items():
    if t != 'dffeas': continue
    g = re.sub(r'\[\d+\]', '', re.sub(r'\\|~I$|~_I$', '', name)); g = re.sub(r'~\w*$', '', g).replace('SCSPP:scsp|', '')
    tot[g] += 1
    d = pins.get('d', [''])[0]
    d = res(d)
    src = drv.get(d)
    if src is None or cell[src][0] != 'cyclonev_lcell_comb':
        cnt[g] += 1
print('lone-D registers: %d of %d' % (sum(cnt.values()), sum(tot.values())))
for g, n in cnt.most_common(70): print('%-34s %4d / %4d' % (g, n, tot[g]))
