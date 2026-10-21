#!/usr/bin/env python3
"""gen_ab.py -- build the A/B sizing top: the golden pair (REF_ copy) and the DUT pair side by side, so one quartus_map
run reports both per-entity. Generated files go to ./gen (ignored by git)."""
import os, re, sys
here = os.path.dirname(os.path.abspath(__file__))
root = os.path.abspath(os.path.join(here, '..', '..'))
sys.path.insert(0, os.path.join(root, 'sim', 'sh2', 'tools'))
from ref_rename import rename
gold = os.path.join(root, 'ref', 'Saturn_MiSTer', 'rtl')
gen = os.path.join(here, 'gen')
os.makedirs(gen, exist_ok=True)
files = ['SH/core/SH_pkg.sv', 'SH/core/SH_regfile.sv', 'SH/core/SH_core.sv', 'SH/SH7604/SH7604_pkg.sv', 'SH/SH7604/CACHE.sv',
         'SH/SH7604/BSC.sv', 'SH/SH7604/DMAC.sv', 'SH/SH7604/UBC.sv', 'SH/SH7604/INTC.sv', 'SH/SH7604/FRT.sv', 'SH/SH7604/WDT.sv',
         'SH/SH7604/SCI.sv', 'SH/SH7604/DIVU.sv', 'SH/SH7604/MULT.sv', 'SH/SH7604/MSBY.sv', 'SH/SH7604/SH7604.sv', 'SH7604_mem.sv', 'SH_mem.sv']
names = []
for f in files:
    out = 'REF_' + f.replace('/', '__')
    open(os.path.join(gen, out), 'w').write(rename(open(os.path.join(gold, f)).read()))
    names.append(out)
wrap = open(os.path.join(here, sys.argv[1] if len(sys.argv) > 1 else 'sh2_pair_wrap.sv')).read()
open(os.path.join(gen, 'REF_sh2_pair_wrap.sv'), 'w').write(rename(wrap.replace('module sh2_pair_wrap', 'module sh2_pair_wrap_ref')).replace('sh2_pair_wrap_ref', 'REF_sh2_pair_wrap'))
# port list of the pair wrapper
hdr = wrap[wrap.index('(') + 1:wrap.index(');')]
ports = []
for m in re.finditer(r'(input|output)\s*(\[[^\]]*\])?\s*(\w+)', hdr):
    ports.append((m.group(1), m.group(2) or '', m.group(3)))
lines = ['module sh2_ab_wrap (']
decl, conn_d, conn_r = [], [], []
for d, w, n in ports:
    if d == 'input':
        decl.append('\tinput %s %s' % (w, n))
        conn_d.append('.%s(%s)' % (n, n)); conn_r.append('.%s(%s)' % (n, n))
    else:
        decl.append('\toutput %s %s' % (w, n))
        decl.append('\toutput %s r_%s' % (w, n))
        conn_d.append('.%s(%s)' % (n, n)); conn_r.append('.%s(r_%s)' % (n, n))
lines.append(',\n'.join(decl))
lines.append(');')
lines.append('\tsh2_pair_wrap u_dut (%s);' % ', '.join(conn_d))
lines.append('\tREF_sh2_pair_wrap u_ref (%s);' % ', '.join(conn_r))
lines.append('endmodule')
open(os.path.join(gen, 'sh2_ab_wrap.sv'), 'w').write('\n'.join(lines) + '\n')
with open(os.path.join(gen, 'ref_files.qip'), 'w') as q:
    for n in names + ['REF_sh2_pair_wrap.sv', 'sh2_ab_wrap.sv']:
        q.write('set_global_assignment -name SYSTEMVERILOG_FILE gen/%s\n' % n)
