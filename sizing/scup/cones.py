#!/usr/bin/env python3
"""Attribute post-map LUTs to the registers/outputs they feed (fan-in cones of a .vqm).

usage: cones.py file.vqm [depth_prefix_regex]
Each LUT is shared equally among all sink groups whose cone contains it. A sink group is the
register/output name with bit indices removed. Prints ALUTs per group, descending.
"""
import re, sys, collections

txt = open(sys.argv[1]).read()
inst_re = re.compile(r'^(cyclonev_lcell_comb|dffeas|cyclonev_ram_block|cyclonev_mac|cyclonev_mlab_cell|cyclonev_io_ibuf|cyclonev_io_obuf)\s+(\S+)\s*\((.*?)\);', re.S | re.M)
port_re = re.compile(r'\.(\w+)\s*\(((?:[^()]|\([^()]*\))*)\)', re.S)
net_re = re.compile(r"\\\S+|[A-Za-z_][\w$:|.\[\]]*")

def nets(expr):
    out = []
    for m in net_re.finditer(expr):
        n = m.group(0).strip()
        if n.startswith('\\'): n = n[1:]
        out.append(n)
    return out

alias = {}
for m in re.finditer(r'^assign\s+(\S+(?:\s\S+)?)\s*=\s*(.*?);', txt, re.S | re.M):
    lhs = nets(m.group(1)); rhs = nets(m.group(2))
    if len(lhs) == 1 and len(rhs) == 1: alias[lhs[0]] = rhs[0]

def res(n):
    seen = 0
    while n in alias and seen < 20: n = alias[n]; seen += 1
    return n

luts = {}            # out net -> list of input nets
lut_ports = ('dataa', 'datab', 'datac', 'datad', 'datae', 'dataf', 'datag', 'cin', 'sharein')
lut_outs = ('combout', 'sumout', 'cout', 'shareout')
driver = {}
sinks = collections.defaultdict(list)   # group -> list of nets feeding it
regq = set()
for m in inst_re.finditer(txt):
    kind, name, body = m.group(1), m.group(2).lstrip('\\'), m.group(3)
    ports = {p: nets(v) for p, v in port_re.findall(body)}
    if kind == 'cyclonev_lcell_comb':
        ins = [res(n) for p in lut_ports for n in ports.get(p, []) if n not in ('gnd', 'vcc')]
        lid = 'L:' + name
        luts[lid] = ins
        for p in lut_outs:
            for n in ports.get(p, []): driver[n] = lid
    elif kind == 'dffeas':
        q = ports['q'][0]
        g = re.sub(r'\[\d+\]', '', q).replace('~reg0', '')
        driver[q] = 'R:' + g
        for p, v in ports.items():
            if p in ('clk', 'q'): continue
            sinks[g] += [res(n) for n in v if n not in ('gnd', 'vcc')]
    else:
        g = 'M:' + re.sub(r'\[\d+\]', '', name.split('|')[-1] if kind != 'cyclonev_mac' else name.split('|')[0] + '|' + name.split('|')[-1].split('~')[0])
        for p, v in ports.items():
            if p.startswith('result') or p.startswith('portbdataout') or p.startswith('portadataout') or p == 'portbdout': 
                for n in v: driver[n] = g
            else:
                sinks[g] += [res(n) for n in v if n not in ('gnd', 'vcc')]
# primary outputs: assigns whose lhs is an output port
for m in re.finditer(r'^output\s+(?:\[[^\]]*\]\s*)?(\w+)', txt, re.M):
    pass
outs = set()
mod = re.search(r'module\s+\S+\s*\((.*?)\);', txt, re.S)
for m in re.finditer(r'^\s*output\s+(?:\[\d+:\d+\]\s*)?(\S+?)\s*[,;]?\s*$', txt, re.M):
    outs.add(m.group(1))
for m in re.finditer(r'^assign\s+(\S+)\s*=\s*(.*?);', txt, re.M):
    lhs = nets(m.group(1))[0]; base = re.sub(r'\[\d+\]', '', lhs)
    if base in outs: sinks['O:' + base] += [res(n) for n in nets(m.group(2))]

# cone traversal
def cone(group):
    seen = set(); stack = list(sinks[group])
    while stack:
        n = stack.pop()
        d = driver.get(n)
        if d and d.startswith('L:') and d not in seen:
            seen.add(d); stack += luts[d]
    return seen

share = collections.defaultdict(list)
for g in list(sinks):
    for l in cone(g): share[l].append(g)
cost = collections.Counter(); excl = collections.Counter()
for l, gs in share.items():
    for g in gs: cost[g] += 1.0 / len(gs)
    if len(gs) == 1: excl[gs[0]] += 1
unattr = len(luts) - len(share)
print('total LUTs %d, attributed %d, unattributed %d' % (len(luts), len(share), unattr))
pre = sys.argv[2] if len(sys.argv) > 2 else ''
print('%-40s %8s %8s' % ('sink group', 'share', 'exclusive'))
tot = 0
for g, c in cost.most_common():
    if pre and not re.search(pre, g): continue
    print('%-40s %8.1f %8d' % (g, c, excl[g])); tot += c
print('sum', round(tot, 1))

if len(sys.argv) > 3 and sys.argv[3] == 'dbg':
    un = [l for l in luts if l not in share]
    import random
    for l in un[:8]:
        out = [n for n, d in driver.items() if d == l]
        users = [x for x, ins in luts.items() if any(n in ins for n in out)]
        print(l, out, 'used by luts', users[:3])
