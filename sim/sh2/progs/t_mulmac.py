"""MUL/MAC unit: all multiply forms, MAC.W/MAC.L with and without saturation (SR.S), MAC register moves,
back-to-back dependent operations and memory accesses overlapped with a running multiply."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True)
P.default_isr()

VALS = [0, 1, 2, 3, 0x7FFF, 0x8000, 0xFFFF, 0xFFFF8000, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0x12345678, 0x9ABCDEF0,
        0x00010001, 0xFFFE0002, 0x40000000, 0x0000C000, 0xDEADBEEF]


def table(a, label):
    a.align4()
    a.bra(label + '_over'); a.nop()
    a.align4()
    a.label(label)
    for v in VALS:
        a.l(v)
    a.label(label + '_over')


_n = [0]


def body(a, out, S):
    _n[0] += 1
    S_ = S
    S = _n[0]
    a.li(13, 'tab')
    a.li(14, out)
    # S bit in SR (bit 1)
    a.li(1, 0xF0 | (2 if S_ else 0))
    a.ldc_sr(1)
    a.mov(13, 12)
    a.movi(11, len(VALS) - 1)
    a.label('mm_o%d' % S)
    a.mov(13, 10)
    a.movi(9, len(VALS) - 1)
    a.label('mm_i%d' % S)
    a.movl_ld(12, 1)
    a.movl_ld(10, 2)
    a.clrmac()
    a.mull(1, 2); a.sts_macl(3)
    a.muluw(1, 2); a.sts_macl(4)
    a.mulsw(1, 2); a.sts_macl(5)
    a.dmulu(1, 2); a.sts_macl(6); a.sts_mach(7)
    a.dmuls(1, 2); a.sts_macl(8)          # sts directly after: stall
    a.sts_mach(0)
    a.movl_st(3, 14); a.movl_st(4, 14) if False else None
    a.addi(14, 4)
    a.movl_st(4, 14); a.addi(14, 4)
    a.movl_st(5, 14); a.addi(14, 4)
    a.movl_st(6, 14); a.addi(14, 4)
    a.movl_st(7, 14); a.addi(14, 4)
    a.movl_st(8, 14); a.addi(14, 4)
    a.movl_st(0, 14); a.addi(14, 4)
    # MAC.L / MAC.W through memory pointers (r12 -> value in table, r10 -> same)
    a.mov(12, 3); a.mov(10, 4)
    a.macl(3, 4)                           # post-inc both
    a.macw(3, 4)
    a.sts_macl(5); a.sts_mach(6)
    a.macl(3, 4); a.macl(3, 4); a.macw(3, 4); a.macw(3, 4)
    a.sts_mach(7); a.sts_macl(8)
    a.movl_st(5, 14); a.addi(14, 4)
    a.movl_st(6, 14); a.addi(14, 4)
    a.movl_st(7, 14); a.addi(14, 4)
    a.movl_st(8, 14); a.addi(14, 4)
    # LDS / STS.L moves, overlapping a multiply with ALU and loads
    a.lds_mach(1); a.lds_macl(2)
    a.mull(1, 2)
    a.add(1, 2); a.add(2, 1); a.movl_ld(12, 3); a.mov(3, 4)
    a.sts_macl(5)
    a.stsl_mach(15); a.stsl_macl(15)
    a.ldsl_macl(15); a.ldsl_mach(15)
    a.mulsw(1, 2)
    a.movl_ld(10, 6)
    a.macw(10, 12) if False else None
    a.sts_macl(7)
    a.movl_st(5, 14); a.addi(14, 4)
    a.movl_st(7, 14); a.addi(14, 4)
    a.addi(10, 4)
    a.dt(9)
    a.bf('mm_i%d' % S)
    a.nop()
    a.addi(12, 4)
    a.dt(11)
    a.bf('mm_o%d' % S)
    a.nop()


a.label('msh_main')
body(a, WRAMH + 0x10000, 0)
body(a, WRAMH + 0x18000, 1)
# repeat with the instruction cache on to change fetch timing around the multiplier
a.li(1, CCR); a.movi(0, 1); a.movb_st(0, 1)
body(a, WRAMH + 0x20000, 1)
a.label('msh_end')
a.sleep()
a.bra('msh_end'); a.nop()
table(a, 'tab')

a.label('ssh_main')
a.li(13, 'tab')
a.li(14, WRAMH + 0x30000)
a.movi(9, 17)
a.label('s1')
a.movl_post(13, 1)
a.mull(1, 1); a.sts_macl(2)
a.macl(13, 13) if False else None
a.dmuls(1, 1); a.sts_mach(3); a.sts_macl(4)
a.movl_st(2, 14); a.addi(14, 4); a.movl_st(3, 14); a.addi(14, 4); a.movl_st(4, 14); a.addi(14, 4)
a.dt(9); a.bf('s1'); a.nop()
a.jmp_far('ssh_main')

P.build(sys.argv[1])
