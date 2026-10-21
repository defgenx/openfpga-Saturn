"""Cache: fills, hits, capacity misses, write-through (byte/word/long), purge, ID/OD/TW/way bits, address and
data array access, TAS.B, instruction fetch from cacheable ROM, cached vs cache-through aliases."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()

import itertools
_c = itertools.count()


def ccr(a, v, r1=1, r2=2):
    a.li(r1, CCR)
    a.movi(r2, v) if v < 128 else a.li(r2, v)
    a.movb_st(r2, r1)


def sweep(a, base, size, stride, rw, out_reg=3):
    """walk [base, base+size) by stride; rw: 'r' reads and accumulates, 'w' writes a pattern, 'b' writes bytes"""
    u = next(_c)
    a.li(4, base)
    a.li(5, size // stride)
    a.movi(out_reg, 0)
    a.label('sw%d' % u)
    if rw == 'r':
        a.movl_ld(4, 6)
        a.add(6, out_reg)
        a.movw_ld(4, 7) if False else None
    elif rw == 'w':
        a.movl_st(5, 4)
    elif rw == 'b':
        a.movb_st(5, 4)
    elif rw == 'h':
        a.movw_st(5, 4)
    elif rw == 'rb':
        a.movb_ld(4, 6)
        a.add(6, out_reg)
    elif rw == 'rw':
        a.movw_ld(4, 6)
        a.add(6, out_reg)
    elif rw == 'tas':
        a.tas(4)
    a.li(8, stride) if stride >= 128 else a.movi(8, stride)
    a.add(8, 4)
    a.dt(5)
    a.bf('sw%d' % u)
    a.nop()


def cache_work(a, base):
    ccr(a, 0x01)                              # enable, purge not set
    sweep(a, base, 0x2000, 16, 'r')           # misses (8 KB > 4 KB)
    sweep(a, base, 0x800, 16, 'r')            # mostly hits
    sweep(a, base, 0x800, 4, 'r')
    sweep(a, base, 0x400, 16, 'w')            # write-through, hits
    sweep(a, base + 0x4000, 0x400, 16, 'w')   # write miss (no allocate)
    sweep(a, base, 0x200, 2, 'h')
    sweep(a, base, 0x200, 1, 'b')
    sweep(a, base, 0x200, 1, 'rb')
    sweep(a, base, 0x200, 2, 'rw')
    sweep(a, base, 0x100, 16, 'tas')
    ccr(a, 0x11)                              # purge
    sweep(a, base, 0x400, 16, 'r')
    ccr(a, 0x03)                              # ID: no instruction allocation
    sweep(a, base, 0x400, 16, 'r')
    ccr(a, 0x05)                              # OD: no data allocation
    sweep(a, base + 0x8000, 0x400, 16, 'r')
    ccr(a, 0x09)                              # two-way mode
    sweep(a, base, 0x1000, 16, 'r')
    sweep(a, base + 0x1000, 0x1000, 16, 'r')
    sweep(a, base, 0x1000, 16, 'r')
    for w in (0x00, 0x40, 0x80, 0xC0):
        ccr(a, 0x09 | w | 0x10)
        sweep(a, base + w * 0x40, 0x400, 16, 'r')
    ccr(a, 0x01)
    sweep(a, base, 0x400, 16, 'r')


a.label('msh_main')
cache_work(a, WRAMH + 0x1000)
# address array: read/write tags (cache-through, 0x60000000), data array (0xC0000000)
a.li(4, 0x60000000)
a.li(5, 64)
a.label('aa')
a.movl_ld(4, 6)
a.movl_st(6, 4)
a.li(7, 0x10); a.add(7, 4)
a.dt(5); a.bf('aa'); a.nop()
a.li(4, 0xC0000000)
a.li(5, 128)
a.label('da')
a.movl_ld(4, 6)
a.add(5, 6)
a.movl_st(6, 4)
a.addi(4, 4)
a.dt(5); a.bf('da'); a.nop()
# a code loop running from the cacheable ROM while data thrashes: ROM loop 'hot' runs with the cache enabled
ccr(a, 0x01)
a.movi(9, 30)
a.label('hot')
a.li(4, WRAMH + 0x2000)
a.movi(5, 16)
a.label('hot2')
a.movl_ld(4, 6); a.add(6, 7); a.addi(4, 16)
a.dt(5); a.bf('hot2'); a.nop()
a.dt(9); a.bf('hot'); a.nop()
# execute from WRAM-H (cacheable): copy a small routine and run it
a.li(4, 'rout'); a.li(5, WRAMH + 0x6000); a.movi(6, 12)
a.label('cp')
a.movl_post(4, 7); a.movl_st(7, 5); a.addi(5, 4); a.dt(6); a.bf('cp'); a.nop()
ccr(a, 0x11)
a.li(4, WRAMH + 0x6000)
a.movi(9, 8)
a.label('runr')
a.li(2, WRAMH + 0x6000); a.jsr(2); a.nop()
a.dt(9); a.bf('runr'); a.nop()
a.label('mend')
a.sleep()
a.bra('mend'); a.nop()
a.align4()
a.label('rout')
for i in range(6):
    a.addi(7, 1); a.shll(7)
a.rts()
a.nop()
for i in range(10):
    a.nop()

a.label('ssh_main')
cache_work(a, WRAMH + 0x20000)
ccr(a, 0x01)
a.jmp_far('ssh_main')

P.build(sys.argv[1])
