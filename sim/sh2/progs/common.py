"""Shared pieces for the SH-2 test programs: memory map, vector table, image builder."""
import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'tools'))
from sh2asm import Asm, write_hex  # noqa: E402

ROM = 0x00000000
WRAML = 0x00200000
WRAMH = 0x06000000
WRAMH_NC = 0x26000000      # cache-through alias
TB = 0x2400F000            # CS2 (cache-through alias): test-bench registers
TB_CPUID, TB_SSHREL, TB_IRQM, TB_IRQS, TB_NMI, TB_RAND, TB_CYC, TB_NMIS, TB_WAIT = (TB + o for o in (0, 4, 8, 12, 16, 20, 24, 28, 32))
MINIT = 0x21000000
SINIT = 0x21800000
MSH_SP = WRAMH + 0x3F000
SSH_SP = WRAMH + 0x3C000
CODE = 0x400               # code starts after the 1 KB vector table

# SH7604 on-chip registers
CCR = 0xFFFFFE92
BCR1, BCR2, WCR, MCR, RTCSR, RTCNT, RTCOR = 0xFFFFFFE0, 0xFFFFFFE4, 0xFFFFFFE8, 0xFFFFFFEC, 0xFFFFFFF0, 0xFFFFFFF4, 0xFFFFFFF8
DVSR, DVDNT, DVCR, VCRDIV, DVDNTH, DVDNTL = 0xFFFFFF00, 0xFFFFFF04, 0xFFFFFF08, 0xFFFFFF0C, 0xFFFFFF10, 0xFFFFFF14
SAR0, DAR0, TCR0, CHCR0, SAR1, DAR1, TCR1, CHCR1 = 0xFFFFFF80, 0xFFFFFF84, 0xFFFFFF88, 0xFFFFFF8C, 0xFFFFFF90, 0xFFFFFF94, 0xFFFFFF98, 0xFFFFFF9C
VCRDMA0, VCRDMA1, DMAOR = 0xFFFFFFA0, 0xFFFFFFA8, 0xFFFFFFB0
TIER, FTCSR, FRC, OCRA, TCR, TOCR, ICR = 0xFFFFFE10, 0xFFFFFE11, 0xFFFFFE12, 0xFFFFFE14, 0xFFFFFE16, 0xFFFFFE17, 0xFFFFFE18
IPRA, IPRB, VCRWDT, VCRA, VCRB, VCRC, VCRD, ICR_INTC = 0xFFFFFEE2, 0xFFFFFE60, 0xFFFFFEE4, 0xFFFFFE62, 0xFFFFFE64, 0xFFFFFE66, 0xFFFFFE68, 0xFFFFFEE0
WTCSR, WTCNT, RSTCSR = 0xFFFFFE80, 0xFFFFFE81, 0xFFFFFE83


class Prog:
    """A program image: vector table + code; every exception vector points at a handler stub that stores
    the vector number to a log and returns (RTE) unless overridden."""

    def __init__(self):
        self.a = Asm(CODE)
        self.vec = {}          # vector number -> label
        self.entry = 'start'

    def set_vec(self, n, label):
        self.vec[n] = label

    def build(self, path):
        a = self.a
        mem = a.assemble()
        lab = a.labels

        def put32(addr, v):
            for i in range(4):
                mem[addr + i] = (v >> (24 - 8 * i)) & 255
        put32(0, lab[self.entry])             # power-on PC
        put32(4, MSH_SP)                      # power-on SP
        put32(8, lab[self.entry])             # manual reset PC
        put32(12, MSH_SP)
        dflt = lab.get('default_isr')
        for n in range(4, 256):
            t = lab.get(self.vec.get(n)) if n in self.vec else dflt
            if t is not None:
                put32(n * 4, t)
        write_hex(mem, path, 0, 0x10000)
        with open(path + '.map', 'w') as f:
            for k, v in sorted(lab.items(), key=lambda kv: kv[1]):
                if isinstance(k, str) and not k.startswith('_li'):
                    f.write('%08x %s\n' % (v, k))


    def bsc_init(self, cfg):
        """Program the bus state controller of the running CPU (clobbers r1, r2)."""
        a = self.a
        if cfg == 'default':
            return
        key = 0xA55A0000
        wcr = {'fast': 0x0000, 'saturn': 0x0A55, 'slow': 0x5555}[cfg]
        a.li(1, WCR); a.li(2, key | wcr); a.movl_st(2, 1)
        if cfg == 'saturn':
            # normal-space WRAM-H with the refresh request output enabled (what the SDRAM controller outside the SH-2 uses)
            a.li(1, MCR); a.li(2, key | 0x0008); a.movl_st(2, 1)
            a.li(1, RTCOR); a.li(2, key | 0x40); a.movl_st(2, 1)
            a.li(1, RTCNT); a.li(2, key | 0x00); a.movl_st(2, 1)
            a.li(1, RTCSR); a.li(2, key | 0x08); a.movl_st(2, 1)

    def prologue(self, release_ssh=True, ssh_label='ssh_main', msh_label='msh_main', bsc='fast', cache=True):
        """Common entry: split MSH/SSH by TB CPU id, give each its own stack, optionally release the SSH."""
        a = self.a
        a.label('start')
        a.li(1, TB_CPUID)
        a.movl_ld(1, 0)
        a.tst(0, 0)
        a.bf('_is_ssh')
        a.nop()
        a.li(15, MSH_SP)
        self.bsc_init(bsc)
        if cache:
            a.li(1, CCR); a.movi(2, 1); a.movb_st(2, 1)
        if release_ssh:
            a.li(1, TB_SSHREL)
            a.movi(0, 1)
            a.movl_st(0, 1)
        a.jmp_far(msh_label)
        a.label('_is_ssh')
        a.li(15, SSH_SP)
        self.bsc_init(bsc)
        if cache:
            a.li(1, CCR); a.movi(2, 1); a.movb_st(2, 1)
        a.jmp_far(ssh_label)

    def idle(self, name):
        a = self.a
        a.label(name)
        a.bra(name)
        a.nop()

    def default_isr(self):
        """Default handler: count the event in WRAM-H and return."""
        a = self.a
        a.align4()
        a.label('default_isr')
        a.movl_pre(0, 15)
        a.movl_pre(1, 15)
        a.li(1, WRAMH + 0x3E000)
        a.movl_ld(1, 0)
        a.addi(0, 1)
        a.movl_st(0, 1)
        a.movl_post(15, 1)
        a.movl_post(15, 0)
        a.rte()
        a.nop()
        # per-vector counters for the CPU exceptions: WRAM-H + 0x3E800 + 4*vector
        for n in range(4, 0x40):
            if n in self.vec:
                continue
            a.align4()
            a.label('vstub_%d' % n)
            a.movl_pre(0, 15)
            a.movl_pre(1, 15)
            a.li(1, WRAMH + 0x3E800 + 4 * n)
            a.movl_ld(1, 0)
            a.addi(0, 1)
            a.movl_st(0, 1)
            a.movl_post(15, 1)
            a.movl_post(15, 0)
            a.rte()
            a.nop()
            self.vec[n] = 'vstub_%d' % n


def wr32(a, addr, val, ra=1, rb=2):
    a.li(ra, addr)
    a.li(rb, val)
    a.movl_st(rb, ra)


def wr16(a, addr, val, ra=1, rb=2):
    a.li(ra, addr)
    a.li(rb, val)
    a.movw_st(rb, ra)


def wr8(a, addr, val, ra=1, rb=2):
    a.li(ra, addr)
    a.li(rb, val)
    a.movb_st(rb, ra)


def rd32(a, addr, rd, ra=1):
    a.li(ra, addr)
    a.movl_ld(ra, rd)


def set_sr(a, val, rt=3):
    a.li(rt, val)
    a.ldc_sr(rt)


def forever(a, name):
    a.label(name)
    a.bra(name)
    a.nop()


def ssh_idle_main(P):
    """SSH main that simply spins."""
    P.a.label('ssh_main')
    forever(P.a, 'ssh_spin')


_uid = [0]


def uniq(prefix='L'):
    _uid[0] += 1
    return '%s_%d' % (prefix, _uid[0])
