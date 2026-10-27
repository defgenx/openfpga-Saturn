#!/usr/bin/env python3
"""Copy the RTL of the Pocket build into build/rtl with the same simulation filters the other Verilator sims use:
drop 'synopsys translate_off' regions (simulation-only reset values Quartus ignores) and `define SIM, make the
one blocking OP2.PHASE write non-blocking (see sim/scsp/Makefile). Writes build/files.f.

usage: prep.py <repo-root> <outdir>"""
import os, re, subprocess, sys

root, out = os.path.abspath(sys.argv[1]), os.path.abspath(sys.argv[2])
here = os.path.dirname(os.path.abspath(__file__))
lst = subprocess.run([sys.executable, os.path.join(here, 'qip2f.py'),
                      os.path.join(root, 'src/fpga/core/saturn_pocket.qip'), 'pll_sys/'],
                     capture_output=True, text=True, check=True).stdout.split()
for f in ('core_top.v', 'core_bridge_cmd.v', 'bridge_loader.sv', 'sound_i2s.sv', 'sync_fifo.sv'):
    lst.append(os.path.join(root, 'src/fpga/core', f))
for f in ('common.v', 'mf_datatable.v'):
    lst.append(os.path.join(root, 'src/fpga/apf', f))
res = []
for p in lst:
    rel = os.path.relpath(p, root)
    q = os.path.join(out, 'rtl', rel)
    os.makedirs(os.path.dirname(q), exist_ok=True)
    skip = False
    o = []
    for line in open(p, errors='replace'):
        if 'synopsys translate_off' in line: skip = True
        if not skip and not line.startswith('`define SIM'):
            o.append(line.replace('OP2.PHASE = PHASE;', 'OP2.PHASE <= PHASE;'))
        if 'synopsys translate_on' in line: skip = False
    open(q, 'w').write(''.join(o))
    res.append(q)
open(os.path.join(out, 'files.f'), 'w').write('\n'.join(res) + '\n')
