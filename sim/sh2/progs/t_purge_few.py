"""Cache purge bursts: fill 64 lines, rewrite them through the cache-through alias, issue 3 CCR.CP writes back to
back, read the lines again. Exact with the golden purge; 3 purges in a row stay exact with the epoch purge."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()
BASE = WRAMH + 0x1000
a.label('msh_main')
a.li(1, CCR); a.movi(2, 0x01); a.movb_st(2, 1)            # enable
for rnd in range(3):
    # fill 64 lines (one per set)
    a.li(4, BASE); a.li(5, 64); a.movi(3, 0)
    a.label('f%d' % rnd)
    a.movl_ld(4, 6); a.add(6, 3); a.addi(4, 16); a.dt(5); a.bf('f%d' % rnd); a.nop()
    # new data behind the cache
    a.li(4, BASE + 0x20000000); a.li(5, 64)
    a.label('w%d' % rnd)
    a.movl_st(5, 4); a.addi(4, 16); a.dt(5); a.bf('w%d' % rnd); a.nop()
    # purge burst
    a.li(1, CCR); a.movi(2, 0x11)
    for i in range(3):
        a.movb_st(2, 1)
    # read back
    a.li(4, BASE); a.li(5, 64); a.movi(3, 0)
    a.label('r%d' % rnd)
    a.movl_ld(4, 6); a.add(6, 3); a.addi(4, 16); a.dt(5); a.bf('r%d' % rnd); a.nop()
    a.li(7, WRAMH + 0x3E400 + 4 * rnd); a.movl_st(3, 7)
a.label('mend')
a.sleep()
a.bra('mend'); a.nop()
a.label('ssh_main')
a.sleep()
a.bra('ssh_main'); a.nop()

P.build(sys.argv[1])
