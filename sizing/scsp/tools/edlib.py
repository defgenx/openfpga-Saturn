import re
class Ed:
    """Whitespace-flexible literal search/replace on one file."""
    def __init__(self,p): self.p=p; self.s=open(p).read()
    def rep(self,old,new,cnt=1):
        rx=r'\s+'.join(re.escape(x) for x in re.split(r'\s+',old.strip()))
        m=list(re.finditer(rx,self.s)); assert len(m)==cnt,(old[:80],len(m))
        for mm in reversed(m): self.s=self.s[:mm.start()]+new+self.s[mm.end():]
    def save(self): open(self.p,'w').write(self.s)
