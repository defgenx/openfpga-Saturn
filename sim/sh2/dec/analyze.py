import sys, collections
# field layout (MSB first)
F=[('DP_RSA',3),('DP_RSB',3),('DP_RSC',1),('DP_PCM',1),('BPWBA',1),('BPLDA',1),('BPMAB',1),('IMMT',3),
   ('ALU_SA',1),('ALU_SB',1),('ALU_OP',3),('ALU_CD',4),('ALU_CMP',3),
   ('MEM_ADDS',2),('MEM_WDS',2),('MEM_SZ',2),('MEM_R',1),('MEM_W',1),('MEM_DF',1),
   ('RA_N',5),('RA_R',1),('RA_W',1),('RB_N',5),('RB_R',1),('RB_W',1),('R0R',1),('PCW',1),
   ('CTRL_W',1),('CTRL_S',2),('CTRL_SRS',3),
   ('MAC_S',2),('MAC_R',1),('MAC_W',1),('MAC_OP',4),
   ('BR_BI',1),('BR_BT',2),('BR_BD',1),('BR_BCV',1),('BR_BSR',1),
   ('TAS',1),('SLP',1),('IBI',1),('IID',1),('LST',3),('VECR',1),('ILI',1)]
W=sum(w for _,w in F); assert W==80,W
def fields(v):
    d={};sh=W
    for n,w in F:
        sh-=w; d[n]=(v>>sh)&((1<<w)-1)
    return d
rows=[]
for l in open('dec_dump.txt'):
    p=l.split()
    if p[0]!='N': continue
    rows.append((int(p[1],16),int(p[2]),int(p[3]),int(p[4]),int(p[5],16)))
print(len(rows),'rows')
uniq=collections.Counter(r[4] for r in rows)
print('distinct full words:',len(uniq))
# mask out passthrough fields: RA_N, RB_N
mask=((1<<W)-1)
def clearf(v,names):
    sh=W
    for n,w in F:
        sh-=w
        if n in names: v&=~(((1<<w)-1)<<sh)
    return v
for drop in [['RA_N','RB_N'],['RA_N','RB_N','ALU_CD','ALU_CMP','MEM_SZ','MAC_OP','MAC_S','CTRL_S']]:
    u=set(clearf(r[4],drop) for r in rows)
    print('distinct with',drop,'dropped:',len(u))
