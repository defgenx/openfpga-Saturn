#!/usr/bin/env python3
"""Per-signal register counts and fan-out-cone ALUT attribution from a quartus_cdb --vqm netlist.
usage: profile.py file.vqm [out.tsv]
A LUT's cost (1 ALUT) is split equally over the register groups / outputs / RAM ports in its fan-out cone."""
import re, sys, collections

txt = open(sys.argv[1]).read()
inst_re = re.compile(r'^(dffeas|cyclonev_lcell_comb|cyclonev_mac|cyclonev_ram_block|cyclonev_mlab_cell)\s+(\S+)\s*\((.*?)\);', re.S | re.M)
port_re = re.compile(r'\.(\w+)\(\s*([^)]*?)\s*\)')
assign_re = re.compile(r'^assign\s+(\S+)\s*=\s*(~?)\s*(\S+)\s*;', re.M)

alias = {}
for m in assign_re.finditer(txt):
    alias[m.group(1)] = m.group(3)   # inversion folded: same logical source
def root(n):
    n = n.strip()
    seen = 0
    while n in alias and seen < 8:
        n = alias[n]; seen += 1
    return n

insts = []
driver = {}
for m in inst_re.finditer(txt):
    typ, name, body = m.group(1), m.group(2), m.group(3)
    ports = {p: root(v) for p, v in port_re.findall(body)}
    insts.append((typ, name, ports))

def group(netname):
    n = netname.lstrip('\\').replace('VDP2:u|', '')
    n = re.sub(r'~.*$', '', n)
    n = re.sub(r'\[\d+\]', '[]', n)
    n = re.sub(r'\[\]$', '', n)
    return n

OUT = {'dffeas': ['q'], 'cyclonev_lcell_comb': ['combout', 'sumout', 'cout', 'shareout'],
       'cyclonev_mac': ['dataout', 'resulta', 'resultb'], 'cyclonev_ram_block': ['portadataout', 'portbdataout'], 'cyclonev_mlab_cell': ['portbdataout']}
luts = {}; flops = []; others = []
for typ, name, ports in insts:
    if typ == 'cyclonev_lcell_comb':
        luts[name] = ports
    elif typ == 'dffeas':
        flops.append((name, ports))
    else:
        others.append((typ, name, ports))
net_driver = {}
for name, p in luts.items():
    for o in OUT['cyclonev_lcell_comb']:
        if o in p: net_driver[p[o]] = ('lut', name)
for name, p in flops:
    net_driver[p['q']] = ('ff', name)

# fan-out graph
fanout = collections.defaultdict(list)   # lut -> list of sinks ('lut',n) / ('grp',g)
def add_sink(net, sink):
    d = net_driver.get(net)
    if d and d[0] == 'lut':
        fanout[d[1]].append(sink)
for name, p in luts.items():
    for port, net in p.items():
        if port in ('combout', 'sumout', 'cout', 'shareout'): continue
        add_sink(net, ('lut', name))
ffgroup = {}
for name, p in flops:
    g = group(p['q']); ffgroup[name] = g
    for port, net in p.items():
        if port in ('q', 'clk'): continue
        add_sink(net, ('grp', g))
for typ, name, p in others:
    g = 'RAM/DSP:' + re.sub(r'~.*$', '', re.sub(r'\[\d+\]', '[]', name.replace('VDP2:u|', '').lstrip('\\')))[:60]
    for port, net in p.items():
        add_sink(net, ('grp', g))
# outputs
for m in re.finditer(r'^output\s+(\S+)\s*;', txt, re.M):
    pass
for name, p in luts.items():
    pass

sys.setrecursionlimit(100000)
memo = {}
def sinks(l):
    if l in memo: return memo[l]
    memo[l] = frozenset()   # cycle guard
    s = set()
    for k, x in fanout.get(l, []):
        if k == 'grp': s.add(x)
        else: s |= sinks(x)
    memo[l] = frozenset(s)
    return memo[l]

alut = collections.Counter(); ffc = collections.Counter()
for g in ffgroup.values(): ffc[g] += 1
for l in luts:
    s = sinks(l)
    if not s: alut['<output/none>'] += 1
    else:
        for g in s: alut[g] += 1.0 / len(s)
rows = sorted(set(ffc) | set(alut), key=lambda g: -(ffc[g] * 1.0 + alut[g]))
out = open(sys.argv[2], 'w') if len(sys.argv) > 2 else sys.stdout
out.write('group\tregs\talut_share\n')
for g in rows:
    out.write(f'{g}\t{ffc[g]}\t{alut[g]:.1f}\n')
print(f'total regs {sum(ffc.values())} luts {len(luts)} attributed {sum(alut.values()):.0f}', file=sys.stderr)
