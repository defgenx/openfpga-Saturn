#!/usr/bin/env python3
"""Aggregate a profile.py listing: RAM interface logic by RAM, everything else by register. usage: cat.py prof.txt [n]"""
import re,sys,collections
agg=collections.Counter();reg=collections.Counter()
for l in open(sys.argv[1]).read().split('\n')[3:]:
    m=re.match(r'(.*?)\s+([\d.]+)\s+(\d+)$',l)
    if not m: continue
    n=m.group(1)
    mm=re.search(r'SCSPP_\w+:(\w+)\|(?:altsyncram|altdpram)',n)
    k='RAM '+mm.group(1) if mm else n.replace('SCSPP:scsp|','')
    agg[k]+=float(m.group(2)); reg[k]+=int(m.group(3))
N=int(sys.argv[2]) if len(sys.argv)>2 else 50
for k,v in agg.most_common(N): print('%-30s %7.1f %4d'%(k,v,reg[k]))
print('RAM total %.0f  all %.0f'%(sum(v for k,v in agg.items() if k.startswith('RAM ')),sum(agg.values())))
