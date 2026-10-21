# Register count per name from a vqm: regs.py file.vqm
import re, sys, collections
c = collections.Counter()
for m in re.finditer(r'^dffeas\s+(\S+)\s*\(', open(sys.argv[1]).read(), re.M):
    n = m.group(1).lstrip('\\'); n = re.sub(r'\[\d+\]', '', n); n = re.sub(r'~.*', '', n)
    c[n] += 1
for n, k in c.most_common(): print(k, n)
