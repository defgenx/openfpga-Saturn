"""Cache purge epochs: fill 64 lines, rewrite them behind the cache, issue spaced CCR.CP writes (exactly 63 or 126, one or two
full epoch cycles), read the lines back (a stale line that came back to life would return old data)."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()
BASE = WRAMH + 0x1000
a.label('msh_main')
a.li(1, CCR); a.movi(2, 0x01); a.movb_st(2, 1)            # enable
for rnd, (gap, cnt) in enumerate(((6, 63), (40, 126), (1, 63))):
    a.li(4, BASE); a.li(5, 64); a.movi(3, 0)
    a.label('f%d' % rnd)
    a.movl_ld(4, 6); a.add(6, 3); a.addi(4, 16); a.dt(5); a.bf('f%d' % rnd); a.nop()
    a.li(4, BASE + 0x20000000); a.li(5, 64)
    a.label('w%d' % rnd)
    a.movl_st(5, 4); a.addi(4, 16); a.dt(5); a.bf('w%d' % rnd); a.nop()
    a.li(1, CCR); a.movi(2, 0x11); a.movi(8, cnt)
    a.label('p%d' % rnd)
    a.movb_st(2, 1)
    a.movi(9, gap)
    a.label('g%d' % rnd)
    a.dt(9); a.bf('g%d' % rnd); a.nop()
    a.dt(8); a.bf('p%d' % rnd); a.nop()
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
