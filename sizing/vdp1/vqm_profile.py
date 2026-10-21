#!/usr/bin/env python3
"""Attribute the synthesized ALUTs of a quartus_map VQM netlist to the register groups (and output ports) they feed.
usage: vqm_profile.py <file.vqm> [topN]
Each LUT is split evenly over the groups reachable in its fan-out cone (registers D/enable/clear inputs, RAM/DSP inputs, outputs).
Groups are the register names with indices and struct field suffixes stripped. Estimates, not exact."""
import re, sys, collections

txt = open(sys.argv[1]).read()
topn = int(sys.argv[2]) if len(sys.argv) > 2 else 60

inst_re = re.compile(r'^(\w+)\s+(\\?\S+)\s*\((.*?)\n\);', re.S | re.M)
port_re = re.compile(r'\.(\w+)\(([^)]*)\)')
assign_re = re.compile(r'^assign\s+(\S+)\s*=\s*[~!]?\s*(\S+)\s*;', re.M)

def norm(s): return s.strip()

cells = []  # (type, name, {port: sig})
for m in re.finditer(r'^(dffeas|cyclonev_lcell_comb|cyclonev_mac|cyclonev_ram_block|cyclonev_mlab_cell)\s+(\S+)\s*\((.*?)\);\s*$', txt, re.S | re.M):
    t, n, body = m.groups()
    ports = {p: norm(s) for p, s in port_re.findall(body)}
    cells.append((t, n, ports))

assigns = {norm(a): norm(b) for a, b in assign_re.findall(txt)}  # lhs = rhs (inputs: sig = PORT)
outs_assign = {}
for a, b in assign_re.findall(txt):
    outs_assign.setdefault(norm(b), []).append(norm(a))

OUT_PORTS = ('combout', 'sumout', 'cout', 'q', 'shareout', 'dataout')
driver = {}
fanout = collections.defaultdict(list)
for i, (t, n, ports) in enumerate(cells):
    for p, s in ports.items():
        if p in OUT_PORTS or p.startswith('portadataout') or p.startswith('portbdataout') or p.startswith('resulta') or p.startswith('dataout'):
            driver[s] = i
        else:
            fanout[s].append((i, p))

alias_children = collections.defaultdict(list)
for a, b in assign_re.findall(txt):
    alias_children[norm(b)].append(norm(a))

def consumers(sig, seen=None):
    seen = seen or set()
    if sig in seen: return []
    seen.add(sig)
    res = list(fanout.get(sig, []))
    for a in alias_children.get(sig, []):
        res += consumers(a, seen)
    return res

def out_names(sig, seen=None):
    seen = seen or set()
    if sig in seen: return []
    seen.add(sig)
    res = []
    for a in alias_children.get(sig, []):
        res.append(a)
        res += out_names(a, seen)
    return res

def group_of_reg(name):
    n = name
    if n.startswith('\\'): n = n[1:]
    n = n.replace('~I', '').replace('~reg0', '')
    n = re.sub(r'\[[^\]]*\]', '', n)
    n = re.sub(r'~\d+$', '', n)
    return n.strip()

def sig_group(s):
    s = s.strip()
    if s.startswith('\\'): s = s[1:]
    s = re.sub(r'\[[^\]]*\]', '', s)
    s = re.sub(r'~\d+$', '', s)
    return s.strip()

# sinks: for dffeas, group is the register group; for others (ram, mac) group by cell name
memo = {}
sys.setrecursionlimit(100000)
def sinks(i):
    if i in memo: return memo[i]
    memo[i] = set()  # cycle guard (comb loops are unexpected)
    t, n, ports = cells[i]
    res = set()
    for p, s in ports.items():
        if p in OUT_PORTS: 
            for (j, pj) in consumers(s):
                tj = cells[j][0]
                if tj == 'dffeas':
                    res.add(group_of_reg(cells[j][1]))
                elif tj == 'cyclonev_lcell_comb':
                    res |= sinks(j)
                else:
                    res.add('<' + tj.replace('cyclonev_', '') + '>')
            for o in out_names(s):
                if '__ALT_INV__' in o or '~input' in o: continue
                res.add('OUT:' + sig_group(o))
    memo[i] = res
    return res

cost = collections.Counter()
regs = collections.Counter()
for i, (t, n, ports) in enumerate(cells):
    if t == 'dffeas':
        regs[group_of_reg(n)] += 1
for i, (t, n, ports) in enumerate(cells):
    if t == 'cyclonev_lcell_comb':
        sk = sinks(i)
        if not sk: cost['<none>'] += 1; continue
        for g in sk:
            cost[g] += 1.0 / len(sk)

groups = set(cost) | set(regs)
rows = sorted(groups, key=lambda g: -(cost[g] + regs[g] * 0.0))
print("%-34s %8s %6s" % ("group (destination register / port)", "ALUTs", "regs"))
tot = 0
for g in rows[:topn]:
    print("%-34s %8.1f %6d" % (g, cost[g], regs[g]))
print("total ALUT %.0f, regs %d" % (sum(cost.values()), sum(regs.values())))
