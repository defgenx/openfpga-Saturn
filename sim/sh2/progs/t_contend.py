"""Both CPUs contend for the bus: shared WRAM-H lines with cache on/off, TAS.B lock hand-off, copy loops,
read-modify-write sequences and ROM-code fetch while the other CPU streams data."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn', cache=False)
P.default_isr()

LOCK = WRAMH_NC + 0x3D000
SHARED = WRAMH + 0x3D100


def worker(a, who, cache_on):
    a.label(who + '_main')
    a.li(1, CCR); a.movi(2, 0x11 if cache_on else 0); a.movb_st(2, 1)
    a.movi(2, 1 if cache_on else 0); a.movb_st(2, 1)
    a.li(8, 60)
    a.label(who + '_it')
    # TAS lock acquire
    a.li(4, LOCK)
    a.label(who + '_spin')
    a.tas(4); a.bf(who + '_spin'); a.nop()
    # critical section: increment shared counters, copy a block
    a.li(5, SHARED)
    a.movi(6, 8)
    a.label(who + '_cs')
    a.movl_ld(5, 1); a.addi(1, 1); a.movl_st(1, 5); a.addi(5, 4)
    a.dt(6); a.bf(who + '_cs'); a.nop()
    a.movi(0, 0); a.movb_st(0, 4)                  # release (byte write)
    # streaming reads of the neighbour's area through cached/uncached windows
    a.li(5, WRAMH + (0x10000 if who == 'ssh' else 0x20000))
    a.li(6, 40)
    a.label(who + '_st')
    a.movl_ld(5, 1); a.movl_ld(5, 2) if False else None
    a.movl_dld(5, 2, 1); a.add(1, 2); a.movl_dst(2, 5, 2); a.addi(5, 16)
    a.dt(6); a.bf(who + '_st'); a.nop()
    # unaligned-ish access mix
    a.li(5, SHARED + 0x200)
    a.movb_st(8, 5); a.addi(5, 1); a.movw_st(8, 5) if False else None
    a.movw_ld(5, 1) if False else None
    a.movb_ld(5, 1); a.mov(1, 2); a.movl_st(2, 5) if False else None
    a.dt(8); a.bf(who + '_it'); a.nop()
    a.jmp_far(who + '_main')


worker(a, 'msh', True)
worker(a, 'ssh', False)
P.build(sys.argv[1])
