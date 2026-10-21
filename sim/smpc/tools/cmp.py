#!/usr/bin/env python3
"""cmp.py <log> [tol_ce]: compare the LLE (L) and HLE (H) event logs of tb_smpc.

Data: every 'RD tag side name value' register dump must be identical (SR and OREG0-31).
Timing: events are grouped per command (CMD lines); for each (line, edge) the n-th event of L is paired with the
n-th of H, and the offset H-L in CE ticks (4 MHz) is reported. Pairs further apart than tol_ce fail; unpaired events fail.
"""
import re, sys, collections
log = open(sys.argv[1]).read().split('\n')
tol = int(sys.argv[2]) if len(sys.argv) > 2 and sys.argv[2] else 60
tol_peri = int(sys.argv[3]) if len(sys.argv) > 3 else 800   # pad poll: the LLE firmware itself varies by about +-600 CE
rd = collections.OrderedDict()
cmds = []          # (tag, t_start)
ev = collections.OrderedDict()   # group -> side -> list of (t, name, val)
grp = 'boot'
for l in log:
    m = re.match(r'CMD (\S+) (\S+) t=(\d+)', l)
    if m:
        grp = m.group(1); ev.setdefault(grp, {'L': [], 'H': []}); cmds.append((grp, int(m.group(3)))); continue
    m = re.match(r'EV ([LH]) (\d+) (\S+) (\d)', l)
    if m:
        ev.setdefault(grp, {'L': [], 'H': []})[m.group(1)].append((int(m.group(2)), m.group(3), m.group(4))); continue
    m = re.match(r'RD (\S+) ([LH]) (\S+) ([0-9a-f]+)', l)
    if m:
        rd.setdefault(m.group(1), {}).setdefault(m.group(3), {})[m.group(2)] = m.group(4)
t0 = dict(cmds)
bad = 0
print('== data (SR + OREG0-31 dumps) ==')
for tag, regs in rd.items():
    if tag.startswith('WARMUP'): continue
    d = [(k, v.get('L'), v.get('H')) for k, v in regs.items() if v.get('L') != v.get('H')]
    if d:
        bad += 1
        print('DIFF %-26s %s' % (tag, ' '.join('%s L=%s H=%s' % x for x in d[:12])))
    else:
        print('same %-26s (%d regs)' % (tag, len(regs)))
print('== timing (H - L, CE ticks of 4 MHz; 1 CE = 0.25 us) ==')
tbad = 0
for g, s in ev.items():
    if g == 'boot' or g.startswith('WARMUP'): continue
    t = t0.get(g, 0)
    by = {}
    for side in 'LH':
        for (tm, name, val) in s[side]:
            by.setdefault((name, val), {'L': [], 'H': []})[side].append(tm)
    for (name, val), v in sorted(by.items(), key=lambda kv: min(sum(kv[1].values(), []))):
        n = max(len(v['L']), len(v['H']))
        for i in range(n):
            a = v['L'][i] if i < len(v['L']) else None
            b = v['H'][i] if i < len(v['H']) else None
            if a is None or b is None:
                tbad += 1; print('UNPAIRED %-22s %-9s=%s L=%s H=%s' % (g, name, val, a, b)); continue
            tl = tol_peri if g.startswith('INTBACK_P') else tol
            flag = '' if abs(b - a) <= tl else '  <-- over tolerance'
            if flag: tbad += 1
            print('%-22s %-9s=%s  +%-6d (L)  H-L=%+d%s' % (g, name, val, a - t, b - a, flag))
print('SUMMARY data_diffs=%d timing_violations=%d tol=%d CE (pad poll %d CE)' % (bad, tbad, tol, tol_peri))
sys.exit(1 if bad or tbad else 0)
