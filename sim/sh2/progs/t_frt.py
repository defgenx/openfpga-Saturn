"""Free-running timer: prescaler settings, output compare A/B (OCRS), overflow, input capture from the
MINIT/SINIT signals (MSH <-> SSH ping-pong), interrupts through the INTC with vector registers."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True, bsc='saturn')
P.default_isr()
P.set_vec(0x60, 'frt_ici'); P.set_vec(0x61, 'frt_oci'); P.set_vec(0x62, 'frt_ovi')

LOG = WRAMH + 0x3E300


def frt_handler(name, bump_off, kick):
    a.align4()
    a.label(name)
    a.movl_pre(0, 15); a.movl_pre(1, 15); a.movl_pre(2, 15)
    a.li(1, FTCSR); a.movb_ld(1, 0)            # read flags, then clear them by writing 0
    a.mov(0, 2)
    a.movi(0, 0); a.movb_st(0, 1)
    a.li(1, ICR); a.movw_ld(1, 0)              # touch ICR
    a.li(1, LOG + bump_off); a.movl_ld(1, 0); a.addi(0, 1); a.movl_st(0, 1)
    a.li(1, LOG + 0x40 + bump_off); a.movl_st(2, 1)
    if kick:
        # answer through the other CPU's INIT line when asked by the TB id flag in r2
        a.li(1, TB_CPUID); a.movl_ld(1, 0); a.tst(0, 0)
        a.bt('%s_m' % name); a.nop()
        a.li(1, MINIT); a.movl_st(0, 1)         # SSH -> MSH
        a.bra('%s_x' % name); a.nop()
        a.label('%s_m' % name)
        a.li(1, SINIT); a.movl_st(0, 1)         # MSH -> SSH
        a.label('%s_x' % name)
    a.movl_post(15, 2); a.movl_post(15, 1); a.movl_post(15, 0)
    a.rte(); a.nop()


frt_handler('frt_ici', 0, True)
frt_handler('frt_oci', 4, False)
frt_handler('frt_ovi', 8, False)


def wr16b(a, addr, val):
    wr8(a, addr, (val >> 8) & 255)
    wr8(a, addr + 1, val & 255)


def frt_setup(a, cks, ocra, ocrb, ocrs_b, iedg):
    wr8(a, TIER, 0x8E)                         # ICIE, OCIAE, OCIBE, OVIE
    wr8(a, TCR, (iedg << 7) | cks)
    wr8(a, TOCR, 0x00)
    wr16b(a, OCRA, ocra)
    wr8(a, TOCR, 0x10)                         # OCRS: FE14 now addresses OCRB
    wr16b(a, OCRA, ocrb)
    wr8(a, TOCR, 0x00)
    wr8(a, FTCSR, 0x00)
    wr16b(a, FRC, 0)


def intc_setup(a):
    wr16(a, IPRB, 0x0400)                      # FRT priority 4
    wr16(a, VCRC, 0x6061)                      # FICV=0x60, FOCV=0x61
    wr16(a, VCRD, 0x6200)                      # FOVV=0x62
    set_sr(a, 0x00)


a.label('msh_main')
intc_setup(a)
for cks, ocra in ((0, 0x0100), (1, 0x0080), (2, 0x0040), (3, 0x0200)):
    frt_setup(a, cks, ocra, ocra * 3 + 5, 1, 0)
    a.li(9, 700)
    a.label('mw%d' % cks)
    a.li(4, WRAMH + 0x10000); a.movl_ld(4, 5); a.addi(5, 1); a.movl_st(5, 4)
    a.dt(9); a.bf('mw%d' % cks); a.nop()
# input capture ping-pong with the SSH
frt_setup(a, 1, 0xFFFF, 0xFFFF, 0, 1)
a.li(9, 12)
a.label('pp')
a.li(1, SINIT); a.movl_st(9, 1)
a.li(8, 400)
a.label('ppw'); a.dt(8); a.bf('ppw'); a.nop()
a.dt(9); a.bf('pp'); a.nop()
a.li(9, 3000)
a.label('mlast'); a.dt(9); a.bf('mlast'); a.nop()
a.label('mend')
a.sleep()
a.bra('mend'); a.nop()

a.label('ssh_main')
intc_setup(a)
frt_setup(a, 2, 0x0300, 0x0100, 0, 0)
a.li(9, 40000)
a.label('sl'); a.li(4, WRAMH + 0x18000); a.movl_ld(4, 5); a.addi(5, 2); a.movl_st(5, 4); a.dt(9); a.bf('sl'); a.nop()
a.jmp_far('ssh_main')

P.build(sys.argv[1])
