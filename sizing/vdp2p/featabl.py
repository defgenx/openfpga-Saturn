#!/usr/bin/env python3
"""Feature ablations of VDP2P2 (area-profile quartus_map through sizing/vdp2p/map.sh).
usage: sizing/vdp2p/featabl.py <name>...      names: zoom vcs linescroll bitmap mosaic windows sprite nbg23 rbg1 spcc
Each name copies VDP2P2 to /tmp/featabl/<name>, ties the named feature off with a regex edit and runs map.sh fa_<name>;
the summary line is appended to /tmp/featabl/results.txt. The package cuts (POCKET_CUT_VDP2_*) are measured with
  MACROS="POCKET_CUT_VDP2_ZOOM" PFX=VDP2P2 sizing/vdp2p/map.sh cut_ZOOM"""
import re, sys, os, shutil, subprocess
D = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
SRC = D + '/src/fpga/saturn/Saturn/VDP2P2'
P = 'VDP2P2_pkg.sv'; V = 'VDP2P2.sv'
A = {
 'zoom':       [(P, r'S\[([01])\]\.ZMHF = .*;', r'S[\1].ZMHF = 0;'), (P, r'S\[([01])\]\.ZMQT = .*;', r'S[\1].ZMQT = 0;'),
                (P, r'S\[([01])\]\.ZMX = .*;', r"S[\1].ZMX = 11'h100;"), (P, r'S\[([01])\]\.ZMY = .*;', r"S[\1].ZMY = 11'h100;"),
                (P, r'S\[([01])\]\.LZMX = .*;', r'S[\1].LZMX = 0;')],
 'vcs':        [(P, r'S\[([01])\]\.VCSC = .*;', r'S[\1].VCSC = 0;')],
 'linescroll': [(P, r'S\[([01])\]\.LSCX = .*;', r'S[\1].LSCX = 0;'), (P, r'S\[([01])\]\.LSCY = .*;', r'S[\1].LSCY = 0;'),
                (P, r'S\[([01])\]\.LZMX = .*;', r'S[\1].LZMX = 0;')],
 'bitmap':     [(P, r'S\[([01])\]\.BMEN = .*;', r'S[\1].BMEN = 0;')],
 'mosaic':     [(P, r'\.MZE = .*;', r'.MZE = 0;')],
 'windows':    [(P, r'return LOG \? log_and : log_or;', "return 1'b0;")],
 'sprite':     [(P, r'return SDD;', 'return SDD_NULL;')],
 'nbg23':      [(P, r'S\[([23])\]\.ON = .*;', r'S[\1].ON = 0;'), (V, r'REGS\.BGON\.N([23])ON', "1'b0")],
 'rbg1':       [(P, r'S\[1\]\.ON = REGS\.BGON\.R1ON;', 'S[1].ON = 0;'), (V, r'REGS\.BGON\.R1ON', "1'b0")],
 'spcc':       [(P, r'\.SPRM = .*;', '.SPRM = 0;'), (P, r'\.SCCM = .*;', '.SCCM = 0;')],
}
def mk(name):
    d = '/tmp/featabl/' + name
    shutil.rmtree(d, ignore_errors=True); os.makedirs(d)
    for f in (V, P, 'VDP2P2_mem.sv'): shutil.copy(SRC + '/' + f, d)
    for f, pat, rep in A[name]:
        s = open(d + '/' + f).read()
        assert re.search(pat, s, flags=re.M), (name, pat)
        open(d + '/' + f, 'w').write(re.sub(pat, rep, s, flags=re.M))
    return d
if __name__ == '__main__':
    for n in sys.argv[1:]:
        d = mk(n)
        env = dict(os.environ, PFX='VDP2P2')
        subprocess.run([D + '/sizing/vdp2p/map.sh', 'fa_' + n, d], env=env, check=True)
        r = subprocess.run(['sh', D + '/sizing/vdp2/summary.sh', D + '/sizing/vdp2p/snap/fa_%s/output_files/p.map.rpt' % n], capture_output=True, text=True).stdout.strip()
        open('/tmp/featabl/results.txt', 'a').write('%s %s\n' % (n, r))
        print(n, r)
