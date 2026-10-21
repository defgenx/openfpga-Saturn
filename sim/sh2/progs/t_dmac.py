"""On-chip DMAC: auto-request transfers on both channels (byte/word/long/16-byte units, inc/dec/fixed addressing,
cycle-steal and burst), priority modes, completion interrupts, CPU traffic competing for the bus."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()
P.set_vec(0x50, 'dma_isr0')
P.set_vec(0x51, 'dma_isr1')

for ch, (chcr, vec) in enumerate(((CHCR0, 0x50), (CHCR1, 0x51))):
    a.align4()
    a.label('dma_isr%d' % ch)
    a.movl_pre(0, 15); a.movl_pre(1, 15); a.movl_pre(2, 15)
    a.li(1, chcr)
    a.movl_ld(1, 0)
    a.li(2, 0xFFFFFFFC)
    a.and_(2, 0)
    a.movl_st(0, 1)
    a.li(1, WRAMH + 0x3E200 + 4 * ch)
    a.movl_ld(1, 0); a.addi(0, 1); a.movl_st(0, 1)
    a.movl_post(15, 2); a.movl_post(15, 1); a.movl_post(15, 0)
    a.rte(); a.nop()


def chcr(dm, sm, ts, ar=1, tb=0, ie=1, de=1):
    return (dm << 14) | (sm << 12) | (ts << 10) | (ar << 9) | (tb << 4) | (ie << 2) | de


def fill(a, base, n, seed):
    a.li(4, base); a.li(5, n); a.li(6, seed)
    u = 'fill_%x_%x' % (base, seed)
    a.label(u)
    a.movl_st(6, 4); a.addi(4, 4)
    a.li(7, 0x01010101) if False else None
    a.add(5, 6)
    a.shll(6); a.addi(6, 3)
    a.dt(5); a.bf(u); a.nop()


def run_dma(a, ch, src, dst, cnt, cc, wait_label):
    sar, dar, tcr, ch_ = ((SAR0, DAR0, TCR0, CHCR0), (SAR1, DAR1, TCR1, CHCR1))[ch]
    wr32(a, sar, src); wr32(a, dar, dst); wr32(a, tcr, cnt); wr32(a, ch_, cc)


def wait_te(a, ch, label, work=True):
    ch_ = (CHCR0, CHCR1)[ch]
    a.li(8, ch_)
    a.li(9, 120)
    a.label(label)
    if work:
        a.li(4, WRAMH + 0x20000); a.movl_ld(4, 5); a.addi(5, 1); a.movl_st(5, 4)
    a.movl_ld(8, 0)
    a.tst(0, 0) if False else None
    a.tsti(0x02) if False else None
    a.dt(9)
    a.bf(label); a.nop()


a.label('msh_main')
wr16(a, IPRA, 0x0600)           # DMAC interrupt priority 6
wr32(a, VCRDMA0, 0x50)
wr32(a, VCRDMA1, 0x51)
set_sr(a, 0x00)
fill(a, WRAMH + 0x10000, 256, 0x1357)
fill(a, WRAMH + 0x11000, 256, 0x2468)
wr32(a, DMAOR, 0x01)
run_dma(a, 0, WRAMH + 0x10000, WRAMH + 0x12000, 64, chcr(1, 1, 2), 'w0')
wait_te(a, 0, 'w0')
run_dma(a, 1, WRAMH + 0x11000, WRAMH + 0x13000, 40, chcr(1, 1, 1), 'w1')
wait_te(a, 1, 'w1')
# byte units, decrementing destination, fixed source
run_dma(a, 0, WRAMH + 0x10000, WRAMH + 0x14000 + 63, 64, chcr(2, 1, 0), 'w2')
wait_te(a, 0, 'w2')
run_dma(a, 1, WRAMH + 0x10010, WRAMH + 0x15000, 30, chcr(1, 0, 2), 'w3')
wait_te(a, 1, 'w3')
# 16-byte units (burst) on channel 0 while channel 1 runs word units: both active
run_dma(a, 0, WRAMH + 0x10000, WRAMH + 0x16000, 16, chcr(1, 1, 3, tb=1), 'w4')
run_dma(a, 1, WRAMH + 0x11000, WRAMH + 0x17000, 50, chcr(1, 1, 1), 'w5')
wait_te(a, 0, 'w4')
wait_te(a, 1, 'w5')
# round-robin priority, cache on, CPU work in the same area
wr32(a, DMAOR, 0x09)
a.li(1, CCR); a.movi(0, 1); a.movb_st(0, 1)
run_dma(a, 0, WRAMH + 0x10000, WRAMH + 0x18000, 100, chcr(1, 1, 2, tb=1), 'w6')
run_dma(a, 1, WRAMH + 0x11000, WRAMH + 0x19000, 100, chcr(1, 1, 2), 'w7')
wait_te(a, 0, 'w6')
wait_te(a, 1, 'w7')
# transfer from ROM (16-bit area) and to the SSH's work area
run_dma(a, 0, 0x00000400, WRAMH + 0x1A000, 32, chcr(1, 1, 2), 'w8')
wait_te(a, 0, 'w8')
# no interrupt enable: poll TE
run_dma(a, 1, WRAMH + 0x10000, WRAMH + 0x1B000, 20, chcr(1, 1, 2, ie=0), 'w9')
wait_te(a, 1, 'w9', work=False)
a.li(1, CHCR1); a.movl_ld(1, 0); a.li(2, 0xFFFFFFFC); a.and_(2, 0); a.movl_st(0, 1)
a.label('mend')
a.sleep()
a.bra('mend'); a.nop()

a.label('ssh_main')
a.li(14, WRAMH + 0x28000)
a.li(5, 200)
a.label('ss')
a.li(4, WRAMH + 0x10000); a.movl_ld(4, 6); a.add(5, 6); a.movl_st(6, 14); a.addi(14, 4)
a.li(4, WRAMH + 0x12000); a.movl_ld(4, 6); a.movl_st(6, 14); a.addi(14, 4)
a.dt(5); a.bf('ss'); a.nop()
# SSH DMA too
wr32(a, DMAOR, 0x01)
run_dma(a, 0, WRAMH + 0x10000, WRAMH + 0x2A000, 64, chcr(1, 1, 2, ie=0), 'sw0')
wait_te(a, 0, 'sw0', work=False)
a.jmp_far('ssh_main')

P.build(sys.argv[1])
