#!/usr/bin/env python3
"""Split pocket_audio_mac into its two `ifdef ALTERA_RESERVED_QIS branches (mac_qis / mac_sim) and extract altmult_add
(plus ALTERA_DEVICE_FAMILIES) from altera_mf.v, which iverilog cannot read whole. usage: mac_split.py <pocket_audio.sv> <altera_mf.v> <outdir>"""
import os, re, sys
src, mf, out = sys.argv[1:4]
t = open(src).read()
m = t[t.index('module pocket_audio_mac'):]
m = m[:m.index('endmodule') + 9]
a, rest = m.split('`ifdef ALTERA_RESERVED_QIS')
q, rest = rest.split('`else')
s, tail = rest.split('`endif')
open(os.path.join(out, 'mac_qis.sv'), 'w').write((a + q + tail).replace('module pocket_audio_mac', 'module mac_qis'))
open(os.path.join(out, 'mac_sim.sv'), 'w').write((a + s + tail).replace('module pocket_audio_mac', 'module mac_sim'))
lib = open(mf, errors='replace').read()
def mod(name):
    i = re.search(r'^module\s+' + name + r'\b', lib, re.M).start()
    return lib[i:lib.index('endmodule', i) + 9]
open(os.path.join(out, 'altmult_add_sim.v'), 'w').write('`timescale 1 ps / 1 ps\n' + mod('ALTERA_DEVICE_FAMILIES') + '\n' + mod('altmult_add'))
