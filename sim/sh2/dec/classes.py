#!/usr/bin/env python3
"""classes.py -- analyse dec_dump.txt: group decode words into classes (RA.N/RB.N replaced by their source) and profiles."""
import collections, sys, pickle
exec(open('analyze.py').read().split("rows=[]")[0])
FIDX={}
sh=W
for n,w in F:
    sh-=w; FIDX[n]=(sh,w)
def getf(v,n):
    s,w=FIDX[n]; return (v>>s)&((1<<w)-1)
def setf(v,n,val):
    s,w=FIDX[n]; return (v & ~(((1<<w)-1)<<s)) | (val<<s)
def norm(v):
    # RA.N / RB.N are only observed together with their R/W flags
    if not (getf(v,'RA_R') or getf(v,'RA_W')): v=setf(v,'RA_N',0)
    if not (getf(v,'RB_R') or getf(v,'RB_W')): v=setf(v,'RB_N',0)
    return v
rows={}
exc=[]
for l in open('dec_dump.txt'):
    p=l.split()
    if p[0]=='N':
        rows[(int(p[1],16),int(p[2]),int(p[3]),int(p[4]))]=norm(int(p[5],16))
    else:
        exc.append((p[0],int(p[1],16),int(p[2]),int(p[3]),int(p[4],16)))
# class key: word with RA_N, RB_N cleared
key1={}
cls=collections.defaultdict(list)
for k,v in rows.items():
    kk=setf(setf(v,'RA_N',0),'RB_N',0)
    cls[kk].append(k)
print('classes (RA_N/RB_N masked):',len(cls))
# source of RA_N / RB_N per class
bad=0
cinfo={}
for kk,mem in cls.items():
    def src(name,irshift):
        cand=None
        # IR-derived?
        if all(getf(rows[m],name)==((m[0]>>irshift)&15) for m in mem): return ('ir',irshift)
        if all(getf(rows[m],name)==((m[0]>>(12-irshift))&15) for m in mem): return ('ir',12-irshift)
        vals=set(getf(rows[m],name) for m in mem)
        if len(vals)==1: return ('const',vals.pop())
        return None
    ra=src('RA_N',8); rb=src('RB_N',4)
    if ra is None or rb is None:
        bad+=1; print('unresolved',hex(kk),ra,rb,len(mem))
    cinfo[kk]=(ra,rb)
print('unresolved',bad)
print('RA sources',collections.Counter(c[0] for c in cinfo.values()))
print('RB sources',collections.Counter(c[1] for c in cinfo.values()))
# profiles per IR
ids={kk:i for i,kk in enumerate(sorted(cls))}
prof=collections.defaultdict(list)
for ir in range(65536):
    tab=tuple(ids[ setf(setf(rows[(ir,st,ds,t)],'RA_N',0),'RB_N',0)] for st in range(8) for ds in range(2) for t in range(2))
    prof[tab].append(ir)
print('profiles',len(prof))
multi=[p for p in prof if len(set(p))>1]
print('profiles depending on st/ds/t:',len(multi))
print('exception rows',len(exc))
pickle.dump((rows,cls,cinfo,ids,prof,exc),open('classes.pkl','wb'))
