"""DIVU: MSH-only divides, the other CPU idle (no contention: must match the golden exactly with a shared DIVU)."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True)
P.default_isr()
P.set_vec(0x48, 'div_isr')
a.align4()
a.label('div_isr')
a.movl_pre(0, 15); a.movl_pre(1, 15)
a.li(1, DVCR); a.movl_ld(1, 0)
a.movl_st(0, 1) if False else None
a.li(0, WRAMH + 0x3E100)
a.movl_ld(0, 1); a.addi(1, 1); a.movl_st(1, 0)
a.li(1, DVCR); a.movi(0, 0x02); a.movl_st(0, 1)       # clear OVF, keep OVFIE
a.movl_post(15, 1); a.movl_post(15, 0)
a.rte(); a.nop()


def rnd(a, rd):
    a.li(rd, TB_RAND)
    a.movl_ld(rd, rd)


import itertools
_ctr = itertools.count()


def divtest(a, out, n, mode):
    u = '%d_%d' % (mode, next(_ctr))
    # mode 0: 32/32 stall-read; 1: 64/32 work-then-read; 2: overflow-prone 64/32; 3: DIV1 loop
    a.li(14, out)
    a.li(13, DVSR)            # DVSR base: +4 DVDNT, +8 DVCR, +16 DVDNTH, +20 DVDNTL
    a.li(12, n)
    a.label('dv%s' % u)
    rnd(a, 1)                 # dividend low
    rnd(a, 2)                 # divisor
    rnd(a, 3)                 # shape selector / shift amounts
    a.movi(0, 0x1F)
    a.and_(0, 3)
    a.cmpeqi(0) if False else None
    a.mov(3, 0)
    # shrink the divisor by a random amount so quotients are interesting
    a.label('dsh%s' % u)
    a.tst(3, 3)
    a.bt('dsh_e%s' % u)
    a.nop()
    a.shar(2)
    a.dt(3)
    a.bra('dsh%s' % u)
    a.nop()
    a.label('dsh_e%s' % u)
    a.mov(13, 11)
    a.movl_st(2, 13)          # DVSR
    if mode == 0:
        a.addi(13, 4)
        a.movl_st(1, 13)      # DVDNT (starts)
        a.addi(13, -4)
        a.movl_ld(11, 4) if False else None
        a.li(5, DVDNT); a.movl_ld(5, 4)                  # quotient (stalls)
        a.li(5, DVDNTH); a.movl_ld(5, 6)                 # remainder
    elif mode == 1:
        a.li(5, DVDNTH); rnd(a, 7); a.shar(7); a.shar(7); a.movl_st(7, 5)
        a.li(5, DVDNTL); a.movl_st(1, 5)                 # start 64/32
        rnd(a, 8); a.movi(9, 7); a.and_(9, 8); a.addi(8, 1)
        a.label('w%s' % u)
        a.add(1, 2); a.dt(8); a.bf('w%s' % u); a.nop()
        a.li(5, DVDNTL); a.movl_ld(5, 4)
        a.li(5, DVDNTH); a.movl_ld(5, 6)
    elif mode == 2:
        a.li(5, DVCR); rnd(a, 0); a.andi(2); a.movl_st(0, 5)     # OVFIE (random)
        a.li(5, DVDNTH); rnd(a, 7); a.movl_st(7, 5)
        a.li(5, DVDNTL); a.movl_st(1, 5)
        a.li(5, DVDNTL); a.movl_ld(5, 4)
        a.li(5, DVDNTH); a.movl_ld(5, 6)
        a.li(5, DVCR); a.movl_ld(5, 7); a.movi(0, 0); a.movl_st(0, 5)
        a.li(5, 0xFFFFFF18); a.movl_ld(5, 8)             # DVDNTH2
        a.li(5, 0xFFFFFF1C); a.movl_ld(5, 9)             # DVDNTL2
        a.add(8, 7); a.add(9, 7); a.mov(7, 3)
        a.movl_st(8, 14); a.addi(14, 4); a.movl_st(9, 14); a.addi(14, 4)
    else:
        a.mov(2, 7); a.mov(1, 8)
        a.div0u()
        for _ in range(6):
            a.rotcl(8); a.div1(7, 9)
        a.mov(9, 4); a.mov(8, 6)
    a.movl_st(4, 14); a.addi(14, 4)
    a.movl_st(6, 14); a.addi(14, 4)
    a.dt(12)
    a.bf('dv%s' % u)
    a.nop()


a.label('msh_main')
# divide-overflow interrupt: priority 5, vector 0x48
wr16(a, IPRA, 0x5000)
wr16(a, VCRDIV, 0x0048) if False else None
wr32(a, VCRDIV, 0x48)
set_sr(a, 0x00)
divtest(a, WRAMH + 0x10000, 40, 0)
divtest(a, WRAMH + 0x14000, 40, 1)
divtest(a, WRAMH + 0x18000, 40, 2)
divtest(a, WRAMH + 0x1C000, 40, 3)
# special cases
wr32(a, DVSR, 0); wr32(a, DVDNT, 12345)
rd32(a, DVDNT, 4); rd32(a, DVDNTH, 5)
wr32(a, DVSR, 0xFFFFFFFF); wr32(a, DVDNT, 0x80000000)
rd32(a, DVDNT, 6); rd32(a, DVDNTH, 7)
wr32(a, DVSR, 1); wr32(a, DVDNT, 0x80000000)
rd32(a, DVDNT, 8)
a.li(14, WRAMH + 0x1F000)
a.movl_st(4, 14); a.addi(14, 4); a.movl_st(5, 14); a.addi(14, 4)
a.movl_st(6, 14); a.addi(14, 4); a.movl_st(7, 14); a.addi(14, 4); a.movl_st(8, 14)
a.label('mend')
a.sleep()
a.bra('mend'); a.nop()

a.label('ssh_main')
a.sleep()
a.bra('ssh_main'); a.nop()

P.build(sys.argv[1])
