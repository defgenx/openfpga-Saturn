#!/usr/bin/env python3
"""ALUT attribution from a Quartus VQM: every LUT is split evenly over the register/RAM/port groups it feeds.
usage: profile.py file.vqm [top_n]"""
import re, sys, collections
txt = open(sys.argv[1]).read()
top = int(sys.argv[2]) if len(sys.argv) > 2 else 60
cells = re.findall(r'^(cyclonev_\w+|dffeas)\s+(\S+)\s*\((.*?)\);\n', txt, re.S | re.M)
OUTP = ('combout', 'sumout', 'cout', 'shareout', 'q', 'regout', 'portadataout', 'portbdataout', 'dataout', 'resulta', 'resultb', 'result', 'scanout')
def isout(p):
    return p in OUTP or p.startswith(('portadataout', 'portbdataout', 'resulta', 'resultb', 'dataout'))
nets = re.compile(r'(\\\S+)\s|([A-Za-z_][\w$]*(?:\[\d+\])?)')
cell = {}
drv = {}
for t, name, body in cells:
    pins = {}
    for line in body.split('\n'):
        m = re.match(r'\s*\.(\w+)\((.*)\)\s*,?\s*$', line)
        if not m: continue
        v = m.group(2)
        ns = [a or b for a, b in nets.findall(v + ' ')]
        pins[m.group(1)] = ns
    cell[name] = (t, pins)
    for p, ns in pins.items():
        if isout(p):
            for n in ns: drv[n] = name
alias = {}
for a, b in re.findall(r'^assign\s+(\S+)\s*=\s*[~!]?\s*(\S+?)\s*;', txt, re.M):
    alias[a] = b
def res(n):
    seen = 0
    while n in alias and seen < 20:
        n = alias[n]; seen += 1
    return n
# fanout
fo = collections.defaultdict(list)
for name, (t, pins) in cell.items():
    for p, ns in pins.items():
        if isout(p): continue
        if p in ('clk', 'clk0', 'clk1', 'clk2', 'clk3'): continue
        for n in ns: fo[res(n)].append((name, p))
def group(name):
    t, pins = cell[name]
    g = name
    g = re.sub(r'\\|~I$|~_I$', '', g)
    g = re.sub(r'\[\d+\]', '', g)
    g = re.sub(r'~\w*$', '', g)
    g = re.sub(r'_I$', '', g)
    return g
memo = {}
sys.setrecursionlimit(100000)
def dest(name):
    if name in memo: return memo[name]
    memo[name] = frozenset()
    t, pins = cell[name]
    out = set()
    for p, ns in pins.items():
        if p in ('combout', 'sumout', 'cout', 'shareout'):
            for n in ns:
              for (c, cp) in fo.get(res(n), []):
                ct = cell[c][0]
                if ct == 'cyclonev_lcell_comb':
                    out |= dest(c)
                else:
                    out.add(group(c))
    if not out: out = {'<port>'}
    memo[name] = frozenset(out)
    return memo[name]
alut = collections.Counter(); regs = collections.Counter()
for name, (t, pins) in cell.items():
    if t == 'cyclonev_lcell_comb':
        d = dest(name)
        for g in d: alut[g] += 1.0 / len(d)
    elif t == 'dffeas':
        regs[group(name)] += 1
tot = sum(alut.values())
print('total LUT cells %.0f  regs %d' % (tot, sum(regs.values())))
print('%-48s %8s %6s' % ('group', 'ALUT', 'regs'))
keys = set(alut) | set(regs)
for g in sorted(keys, key=lambda k: -alut[k])[:top]:
    print('%-48s %8.1f %6d' % (g[:48], alut[g], regs[g]))
