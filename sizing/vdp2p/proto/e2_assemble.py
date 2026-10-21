#!/usr/bin/env python3
"""Builds the E2 area prototype (line renderer: decode at word arrival into a three-slot priority line buffer, scan-out
compositor) from the current VDP2P2 sources.  usage: e2_assemble.py <out dir>   then
  PFX=VDP2P2 sizing/vdp2p/map.sh e2 <out dir>
Measured 4,409 ALMs (map) against 4,712 for VDP2P2; not functionally verified (no scene generator for legal cycle patterns yet).
e1_serial_compositor.sv is the other experiment: splice it in place of the '//Priority' block of VDP2P2.sv (up to '//Dots color')."""
import os, shutil, sys
H = os.path.dirname(os.path.abspath(__file__))
SRC = os.path.abspath(os.path.join(H, '..', '..', '..', 'src/fpga/saturn/Saturn/VDP2P2')) + '/'
d = sys.argv[1].rstrip('/') + '/'
os.makedirs(d, exist_ok=True)
for f in ('VDP2P2.sv', 'VDP2P2_pkg.sv', 'VDP2P2_mem.sv'): shutil.copy(SRC + f, d + f)
pk = open(d + 'VDP2P2_pkg.sv').read()
pk = pk.replace("\t\tbit [3:0]       NxCH_EN;\n\t} BGTap2_t;", "\t\tbit [3:0]       NxCH_EN;\n\t\tbit [3:0][2:0]  NxCHC;\n\t} BGTap2_t;")
assert 'NxCHC' in pk
open(d + 'VDP2P2_pkg.sv', 'w').write(pk)
s = open(d + 'VDP2P2.sv').read()
old = "TAP2_D.bg.NxPNS[i] = BG0.NxPNS[i];  TAP2_D.bg.NxCHS[i] = BG0.NxCHS[i];  TAP2_D.bg.NxCH_EN[i] = BG0.NxCH_EN[i];"
assert old in s
s = s.replace(old, old + "  TAP2_D.bg.NxCHC[i] = BG0.NxCH_CNT[i];")
a = s.index('\t//NBG cell data capture.'); b = s.index('\t//Pipeline taps:')
s = s[:a] + s[b:]
a = s.index('\t//Dots data\n'); b = s.index('\t//Sprite data\n')
s = s[:a] + open(H + '/e2_dots.sv').read() + s[b:]
a = s.index('\t//Priority\n'); b = s.index('\t//Dots color\n')
s = s[:a] + open(H + '/e2_render.sv').read() + s[b:]
open(d + 'VDP2P2.sv', 'w').write(s)
