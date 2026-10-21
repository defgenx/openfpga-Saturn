import collections
exec(open('analyze.py').read().split("rows=[]")[0])
seen=collections.Counter()
ex=[]
for l in open('dec_dump.txt'):
    p=l.split()
    if p[0]!='N': continue
    ir=int(p[1],16); st=int(p[2]); d=fields(int(p[5],16))
    isload=(d['MEM_R'] and not d['MAC_W']) or (d['MAC_R'] and not d['MEM_W'])
    key=(d['RA_W'],isload,d['RB_W'])
    seen[key]+=1
    if d['RA_W'] and not isload and d['RB_W']:
        ex.append((ir,st,d['RA_N'],d['RB_N']))
print(seen)
print(len(ex), ex[:10])
