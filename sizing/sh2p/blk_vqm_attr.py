#!/usr/bin/env python3
# usage: vqm_attr.py file.vqm   -> LUT count per sink group (flop / output name stripped of index)
import re,sys,collections
t=open(sys.argv[1]).read()
cells=re.findall(r'(cyclonev_\w+|dffeas)\s+(\\?\S+)\s*\((.*?)\);\s*\n',t,flags=re.S)
def conn(body):
    return dict((m.group(1),m.group(2).strip()) for m in re.finditer(r'\.(\w+)\(([^)]*)\)',body))
nets_driver={}   # net -> cell id
cellinfo={}
for kind,name,body in cells:
    c=conn(body)
    cellinfo[name]=(kind,c)
    for p in ('combout','sumout','cout','q','regout'):
        if p in c and c[p]: nets_driver[c[p]]=name
# assigns: alias nets
alias={}
for m in re.finditer(r'assign\s+(\S+)\s*=\s*~?\s*(\S+)\s*;',t):
    alias[m.group(1)]=m.group(2)
def resolve(n):
    seen=0
    while n in alias and seen<20: n=alias[n]; seen+=1
    return n
fanout=collections.defaultdict(list)
for name,(kind,c) in cellinfo.items():
    for p,n in c.items():
        if p in ('combout','sumout','cout','q','regout','clk','devclrn','devpor'): continue
        fanout[resolve(n)].append(name)
outs=set(m.group(1) for m in re.finditer(r'output\s+(?:\[[^\]]*\]\s*)?(\S+?)\s*[;,]',t))
out_of={}
for l,r in alias.items():
    if re.sub(r'\[\d+\]','',l) in outs: out_of[r]=l
def grp(n):
    n=re.sub(r'\\','',n); n=re.sub(r'\[\d+\]','',n); n=re.sub(r'~.*','',n); n=re.sub(r'\.q$','',n)
    return n
memo={}
def sinks(name,depth=0):
    if name in memo: return memo[name]
    kind,c=cellinfo[name]
    res=set()
    if kind=='dffeas': memo[name]={grp(name)}; return memo[name]
    memo[name]=set()
    outs_n=[resolve(c[p]) for p in ('combout','sumout','cout') if p in c and c[p]]
    for n in outs_n:
        if n in out_of: res.add('OUT:'+grp(out_of[n]))
        if re.sub(r'\[\d+\]','',n) in outs or n in outs: res.add('OUT:'+grp(n))
        for f in fanout.get(n,[]):
            if cellinfo[f][0]=='dffeas': res.add(grp(f))
            elif cellinfo[f][0].startswith('cyclonev_lcell'): res|=sinks(f,depth+1)
    memo[name]=res
    return res
cnt=collections.Counter(); shared=0
luts=[n for n,(k,c) in cellinfo.items() if k=='cyclonev_lcell_comb']
for n in luts:
    s=sinks(n)
    if len(s)==0: cnt['(none)']+=1
    elif len(s)==1: cnt[next(iter(s))]+=1
    else:
        shared+=1; cnt['shared:'+'+'.join(sorted(s))[:60]]+=1
print("total lcell_comb:",len(luts),"dff:",sum(1 for k,c in cellinfo.values() if k=='dffeas'))
for k,v in cnt.most_common(40): print("%4d %s"%(v,k))
