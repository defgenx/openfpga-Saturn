#!/usr/bin/env python3
"""Bucket profile.py output (tsv) into functional blocks. usage: blocks.py file.profile.tsv"""
import re, sys, collections
RULES = [
 ('register file',        r'^REGS'),
 ('VRAM access/CPU port', r'^(VRAM|RA[01]_BUF|RB[01]_BUF|FIFO|A$|WE_N|DQM|BURST|REG_|PAL_DO|PAL_RD|DTEN|CS_N|BS_ADDR|LN_ADDR|LW_|LS_|RP_POS|VS_OFFS|NBG_(PN|CH)_(CNT|EN|FETCH)|NBG_BM_CNT|NBG_CH_EN|RBG_CT_EN|NxPN_CYC)'),
 ('access pipelines',     r'^(VA_PIPE|VA[234]|BG_PIPE|BG[0-3]|RBG_PIPE|RB[0-3]|PN_PIPE|RBG_PN_PIPE|RBG_TP_PIPE|RTP4|NBG[0-3]_PN_PIPE|R0RP|RPxLCSD|RPxKLCE|W[01]_HIT|TAP|WHIT|PN3E|PN4E|RPN4E)'),
 ('cell data assembly',   r'^(NBG_CDC|NBG_CH|NBG_CDP|NDC|NCDP|N[0-3]D|R0DOT|RBG_DC|RBG_CH|RBG_CDP|RxDC|RxCDP|RBG_TP)'),
 ('scroll counters',      r'^(NX|NSX|NY|NSY|NMOSY|NVCSY|CX|NCX|LZMX|VS$|VS\[|MOSAIC|SCRN)'),
 ('rotation',             r'^(Xsp|Ysp|Xp|Yp|dX|dY|Xst|Yst|KA|CTD|SUB|MUL|ACC|RES_LATCH|RxX|RxY|RP_|R0RPMSB|RxCTTP|RPx|CT_CRAM|HPOS|FBDO|C$)'),
 ('windows',              r'^(Wx|W0|W1)'),
 ('priority/colour',      r'^(DOT_|SDOT|CSEC|CFST|CCRT|CCEN|COEN|COSL|SDEN|DCOL|BACK_DC|LINE_PAL|DC_|HB_INT|BOKEN|DC$|C\[)'),
 ('timing',               r'^(H_CNT|V_CNT|HCT|VCT|HRES|VRES|DISP|ODD|HSYNC|VSYNC|HBLANK|VBLANK|DOTCLK|CELLX|NPN_|NCH_|NVCS|RBG_|RCH|CT_FETCH|LS_FETCH|LW_FETCH|RPA|RPB|RCT|BACK_FETCH|LN_FETCH|REFRESH|NOACCESS|DOT_FETCH|HINT|VINT|HTIM|VTIM|HB_|VB_|DISP_INT|LSMD|F$|INTERLACE|DCLK|HS_N|VS_N)'),
]
r = collections.Counter(); a = collections.Counter()
for l in open(sys.argv[1]).read().splitlines()[1:]:
    g, rg, al = l.split('\t')
    k = 'other'
    if g.startswith('<output'): k = 'outputs'
    else:
        for name, rx in RULES:
            if re.match(rx, g): k = name; break
    r[k] += int(rg); a[k] += float(al)
print(f'{"block":24} {"regs":>6} {"ALUT":>7}')
for k in sorted(set(r) | set(a), key=lambda k: -(a[k] + r[k])):
    print(f'{k:24} {r[k]:6} {a[k]:7.0f}')
print(f'{"total":24} {sum(r.values()):6} {sum(a.values()):7.0f}')
