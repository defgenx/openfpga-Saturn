#!/usr/bin/env python3
"""gen_dec.py -- generate SH2P_dec.sv from the golden Decode() dump (see dump_dec.sv, classes.py).
Class detect = greedy decision tree over {IR[15:0], STATE, DS, BC}; control word = per-class constant."""
import collections, pickle, sys
import numpy as np
exec(open('analyze.py').read().split("rows=[]")[0])
rows,cls,cinfo,ids,prof,exc=pickle.load(open('classes.pkl','rb'))
FIDX={}; sh=W
for n,w in F:
    sh-=w; FIDX[n]=(sh,w)
def getf(v,n):
    s,w=FIDX[n]; return (v>>s)&((1<<w)-1)
def setf(v,n,val):
    s,w=FIDX[n]; return (v & ~(((1<<w)-1)<<s)) | (val<<s)
def norm(v):
    if not (getf(v,'RA_R') or getf(v,'RA_W')): v=setf(v,'RA_N',0)
    if not (getf(v,'RB_R') or getf(v,'RB_W')): v=setf(v,'RB_N',0)
    return v
def mask_n(v): return setf(setf(v,'RA_N',0),'RB_N',0)

# ---- class table: masked word -> id, with RA/RB source
words=sorted(set(mask_n(v) for v in rows.values()))
# exception words
exw={}
for m,ir,st,ilsi,v in exc:
    exw[(int(m[1]),st,ilsi)]=norm(v)
for v in exw.values():
    if mask_n(v) not in words: words.append(mask_n(v))
words=sorted(set(words))
cid={w:i for i,w in enumerate(words)}
print('classes',len(words))
# RA/RB source per class, over normal rows and exception rows
SRC={}  # id -> (ra_src, rb_src)  src: ('ir',shift) or ('const',val)
members=collections.defaultdict(list)
for k,v in rows.items(): members[cid[mask_n(v)]].append((k[0],v))
for (m,st,ilsi),v in exw.items(): members[cid[mask_n(v)]].append((None,v))
def srcof(name,mem,shifts):
    vals=set(getf(v,name) for _,v in mem)
    if len(vals)==1: return ('const',vals.pop())
    for sft in shifts:
        if all(ir is None or getf(v,name)==((ir>>sft)&15) for ir,v in mem): return ('ir',sft)
    raise Exception('unresolved %s %s'%(name,vals))
for i,mem in members.items():
    SRC[i]=(srcof('RA_N',mem,(8,4)),srcof('RB_N',mem,(4,8)))
# ---- label array over {IR(16), ST(3), DS, BC} : index = ir | st<<16 | ds<<19 | bc<<20
L=np.zeros(1<<21,dtype=np.uint8)
for (ir,st,ds,t),v in rows.items():
    # decode inputs T: BC=(T==~IR[9]); build label for BC value
    bc=int(t==(1-((ir>>9)&1)))
    L[ir|(st<<16)|(ds<<19)|(bc<<20)]=cid[mask_n(v)]
# BC only defined as combination of T and IR[9]: verify consistency (both T give consistent label for a given BC)
cnt=0
for (ir,st,ds,t),v in rows.items():
    bc=int(t==(1-((ir>>9)&1)))
    if L[ir|(st<<16)|(ds<<19)|(bc<<20)]!=cid[mask_n(v)]: cnt+=1
print('BC inconsistencies',cnt)
VN=['IR%d'%i for i in range(16)]+['ST0','ST1','ST2','DS','BC']
# tree
sys.setrecursionlimit(10000)
def best_split(arr):
    # arr: ndarray of shape (2,)*nvars ... use flat with var list
    pass
def build(arr, vars_left):
    """arr: ndarray with ndim == len(vars_left); returns tree"""
    u=np.unique(arr)
    if len(u)==1: return int(u[0])
    best=None
    for ax,vn in enumerate(vars_left):
        a0=np.take(arr,0,axis=ax); a1=np.take(arr,1,axis=ax)
        s=len(np.unique(a0))+len(np.unique(a1))
        # prefer variables that make children equal (don't-care)
        eq=int(np.array_equal(a0,a1))
        key=(0 if eq else 1, s)
        if best is None or key<best[0]: best=(key,ax)
    ax=best[1]
    vn=vars_left[ax]
    rest=vars_left[:ax]+vars_left[ax+1:]
    a0=np.take(arr,0,axis=ax); a1=np.take(arr,1,axis=ax)
    if np.array_equal(a0,a1): return build(a0,rest)
    return (vn,build(a0,rest),build(a1,rest))
# reshape: index bit k is axis (20-k) in C-order
arr=L.reshape((2,)*21)
vars_all=[VN[20-a] for a in range(21)]   # axis a corresponds to bit 20-a
tree=build(arr,vars_all)
def count(t):
    return 1 if isinstance(t,int) else count(t[1])+count(t[2])
print('tree leaves',count(tree))
pickle.dump((tree,words,SRC,exw,cid),open('gen.pkl','wb'))
