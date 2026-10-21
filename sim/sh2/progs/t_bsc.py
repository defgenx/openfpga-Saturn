"""BSC: random wait-state / bus-size / DRAM-mode / refresh configurations with byte, word, long and burst
accesses to every area (reads, writes, cache fills), then back to a sane configuration."""
import random
import sys
from common import *

rnd = random.Random(7)
P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()
KEY = 0xA55A0000

AREAS = [WRAMH + 0x38000, 0x22000000 + 0x100, 0x24000000 + 0x200, 0x2600C000]   # area3 (non-cached alias), area1, area2, area3 alias


def cfg_block(a, who, i):
    wcr = rnd.getrandbits(16)
    bcr2 = (rnd.choice([2, 3]) << 6 | rnd.choice([2, 3]) << 4 | rnd.choice([2, 3]) << 2)
    bcr1 = 0x03F0 | rnd.choice([0, 0, 0, 1, 2, 4, 5]) | (rnd.getrandbits(3) << 10 & 0x1C00)
    mcr = rnd.getrandbits(16) & 0xFEFC
    a.li(1, WCR); a.li(2, KEY | wcr); a.movl_st(2, 1)
    a.li(1, BCR2); a.li(2, KEY | bcr2); a.movl_st(2, 1)
    a.li(1, BCR1); a.li(2, KEY | (bcr1 & 0x1FF7)); a.movl_st(2, 1)
    a.li(1, MCR); a.li(2, KEY | mcr); a.movl_st(2, 1)
    a.li(1, RTCOR); a.li(2, KEY | rnd.randrange(1, 100)); a.movl_st(2, 1)
    a.li(1, RTCNT); a.li(2, KEY | 0); a.movl_st(2, 1)
    a.li(1, RTCSR); a.li(2, KEY | (rnd.randrange(1, 7) << 3)); a.movl_st(2, 1)
    for ar in AREAS:
        a.li(4, ar)
        a.movi(5, 0x3C)
        a.movb_st(5, 4); a.movb_dst(4, 1) if False else None
        a.movw_st(5, 4); a.movl_st(5, 4)
        a.movb_ld(4, 6); a.movw_ld(4, 7); a.movl_ld(4, 3)
        a.movl_dst(6, 4, 2); a.movl_dld(4, 7, 2)
        a.add(3, 6)
    # cached fills through the same areas
    a.li(1, CCR); a.movi(2, 0x11); a.movb_st(2, 1); a.movi(2, 1); a.movb_st(2, 1)
    for ar in AREAS:
        a.li(4, ar & 0x1FFFFFFF)
        a.movl_ld(4, 6); a.movl_dld(4, 7, 3); a.movl_dld(4, 7, 5)
    a.li(1, CCR); a.movi(2, 0); a.movb_st(2, 1); a.movi(2, 1); a.movb_st(2, 1)


for who in ('msh', 'ssh'):
    a.label(who + '_main')
    for i in range(14):
        cfg_block(a, who, i)
    # sane configuration again
    a.li(1, BCR1); a.li(2, KEY | 0x03F0); a.movl_st(2, 1)
    a.li(1, MCR); a.li(2, KEY | 0x0008); a.movl_st(2, 1)
    a.li(1, WCR); a.li(2, KEY | 0x0000); a.movl_st(2, 1)
    a.li(1, BCR2); a.li(2, KEY | 0x00FC); a.movl_st(2, 1)
    a.jmp_far(who + '_main')

P.build(sys.argv[1])
