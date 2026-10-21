"""INTC/WDT/SLEEP: external IRL interrupts at every level with vector fetch cycles, masks, nested priority,
NMI, WDT interval-timer interrupt, SLEEP with wake-up, interrupts delivered while the DMAC/DIVU/bus is busy."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()
P.set_vec(0x70, 'wdt_isr')
P.set_vec(11, 'nmi_isr')
LOG = WRAMH + 0x3E400

a.align4()
a.label('wdt_isr')
a.movl_pre(0, 15); a.movl_pre(1, 15)
a.li(1, WTCSR)
a.movb_ld(1, 0)                 # read OVF
a.li(1, 0xA500); a.li(0, 0xA500 | 0x20); a.li(1, WTCSR); a.movw_st(0, 1)    # clear OVF, keep timer on
a.li(1, LOG + 8); a.movl_ld(1, 0); a.addi(0, 1); a.movl_st(0, 1)
a.movl_post(15, 1); a.movl_post(15, 0)
a.rte(); a.nop()

a.align4()
a.label('nmi_isr')
a.movl_pre(0, 15); a.movl_pre(1, 15)
a.li(1, LOG + 12); a.movl_ld(1, 0); a.addi(0, 1); a.movl_st(0, 1)
a.movl_post(15, 1); a.movl_post(15, 0)
a.rte(); a.nop()


def settle(a, n, lab):
    lab = uniq(lab)
    a.li(9, n)
    a.label(lab)
    a.li(4, WRAMH + 0x14000); a.movl_ld(4, 5); a.addi(5, 1); a.movl_st(5, 4)
    a.dt(9); a.bf(lab); a.nop()


a.label('msh_main')
wr16(a, ICR_INTC, 0x0001)       # VECMD: external vector fetch
wr16(a, IPRA, 0x0070)           # WDT priority 7
wr16(a, VCRWDT, 0x7000)         # WITV = 0x70
# every external level with the mask below it, then equal to it, then above it
for lvl in range(1, 16):
    for mask in (0, lvl, 15):
        set_sr(a, mask << 4)
        wr32(a, TB_IRQM, lvl)
        settle(a, 6, 'i%d_%d' % (lvl, mask))
        wr32(a, TB_IRQM, 0)
set_sr(a, 0x00)
# WDT interval timer
wr16(a, WTCSR, 0xA500 | 0x20 | 0x00)
settle(a, 300, 'wd')
wr16(a, WTCSR, 0xA500)
# NMI while busy dividing
wr32(a, DVSR, 7)
wr32(a, TB_NMI, 1)
wr32(a, DVDNT, 0x12345678)
rd32(a, DVDNT, 3)
settle(a, 40, 'nm')
# SLEEP woken by an external interrupt injected by the SSH
wr32(a, TB_IRQM, 0)
a.label('sl')
set_sr(a, 0x00)
a.sleep()
settle(a, 10, 'aft')
a.li(9, 3)
a.label('slp'); a.sleep(); a.dt(9); a.bf('slp'); a.nop()
a.label('mend')
a.sleep()
a.bra('mend'); a.nop()

a.label('ssh_main')
set_sr(a, 0x00)
a.li(9, 80)
a.label('sj')
settle(a, 200, 'sx')
wr32(a, TB_IRQM, 5)                  # wakes the MSH from SLEEP too
settle(a, 20, 'sy')
wr32(a, TB_IRQS, 1)                  # SSH's own IRL line
settle(a, 50, 'sz')
wr32(a, TB_NMIS, 1)
a.dt(9); a.bf('sj'); a.nop()
a.jmp_far('ssh_main')

P.build(sys.argv[1])
