"""Random SH-2 instruction soup: both CPUs run independent random blocks in loops (ALU, MAC, DIVU, memory in the
cached/uncached windows, forward branches with delay slots, DMAC and cache-control pokes). Interrupts are
injected by the test bench (+irq) so they land at arbitrary points."""
import random
import sys
from common import *


def gen(seed, path, nblocks=24, blen=40, cpu_flavour=0):
    rnd = random.Random(seed)
    P = Prog()
    a = P.a
    P.prologue(release_ssh=True, bsc=rnd.choice(['fast', 'saturn', 'slow']))
    P.default_isr()

    R = list(range(1, 8))                     # data registers (r0 is special)

    def r():
        return rnd.choice(R)

    def r0r():
        return rnd.choice([0] + R)

    def alu_rr(a):
        op = rnd.choice(['add', 'addc', 'addv', 'sub', 'subc', 'subv', 'and_', 'or_', 'xor', 'not_', 'neg', 'negc', 'cmpeq', 'cmphs',
                         'cmpge', 'cmphi', 'cmpgt', 'cmpstr', 'tst', 'swapb', 'swapw', 'xtrct', 'extsb', 'extsw', 'extub', 'extuw',
                         'mov', 'div0s', 'div1'])
        getattr(a, op)(r(), r())

    def alu_r(a):
        op = rnd.choice(['shll', 'shlr', 'shal', 'shar', 'rotl', 'rotr', 'rotcl', 'rotcr', 'shll2', 'shlr2', 'shll8', 'shlr8', 'shll16',
                         'shlr16', 'dt', 'cmppl', 'cmppz'])
        getattr(a, op)(r())

    def imm(a):
        k = rnd.randrange(8)
        if k == 0: a.movi(r(), rnd.randrange(256))
        elif k == 1: a.addi(r(), rnd.randrange(256))
        elif k == 2: a.andi(rnd.randrange(256))
        elif k == 3: a.ori(rnd.randrange(256))
        elif k == 4: a.xori(rnd.randrange(256))
        elif k == 5: a.tsti(rnd.randrange(256))
        elif k == 6: a.cmpeqi(rnd.randrange(256))
        else: a.movt(r())

    def sysops(a):
        k = rnd.randrange(14)
        if k == 0: a.clrt()
        elif k == 1: a.sett()
        elif k == 2: a.div0u()
        elif k == 3: a.sts_mach(r())
        elif k == 4: a.sts_macl(r())
        elif k == 5: a.lds_mach(r())
        elif k == 6: a.lds_macl(r())
        elif k == 7: a.clrmac()
        elif k == 8: a.mull(r(), r())
        elif k == 9: a.muluw(r(), r())
        elif k == 10: a.mulsw(r(), r())
        elif k == 11: a.dmulu(r(), r())
        elif k == 12: a.dmuls(r(), r())
        else: a.nop()

    def mem(a):
        """memory access through fixed bases r14 (cached window) / r13 (cache-through alias); pointers stay in range"""
        base = rnd.choice([14, 13])
        k = rnd.randrange(14)
        if k == 0: a.movl_dst(r(), base, rnd.randrange(16))
        elif k == 1: a.movl_dld(base, r(), rnd.randrange(16))
        elif k == 2: a.movw_dst(base, rnd.randrange(16)) if False else a.movb_dst(base, rnd.randrange(16))
        elif k == 3: a.movw_dld(base, rnd.randrange(16))
        elif k == 4: a.movb_dld(base, rnd.randrange(16))
        elif k == 5:
            a.li(12, WRAMH + 0x20000 + rnd.randrange(0, 0x400, 4))
            a.movl_post(12, r()); a.movl_post(12, r())
        elif k == 6:
            a.li(12, WRAMH + 0x20400 + rnd.randrange(0, 0x400, 4))
            a.movl_pre(r(), 12); a.movw_pre(r(), 12) if False else a.movl_pre(r(), 12)
        elif k == 7:
            a.movi(0, rnd.randrange(0, 60, 4)); a.movl_r0st(r(), base) if rnd.random() < .5 else a.movl_r0ld(base, r())
        elif k == 8:
            a.movi(0, rnd.randrange(0, 60, 2)); a.movw_r0st(r(), base) if rnd.random() < .5 else a.movw_r0ld(base, r())
        elif k == 9:
            a.movi(0, rnd.randrange(0, 60)); a.movb_r0st(r(), base) if rnd.random() < .5 else a.movb_r0ld(base, r())
        elif k == 10:
            a.stc_gbr(0) if False else a.movl_gst(rnd.randrange(0, 60, 4)) if rnd.random() < .5 else a.movl_gld(rnd.randrange(0, 60, 4))
        elif k == 11:
            a.movw_gst(rnd.randrange(0, 60, 2)) if rnd.random() < .5 else a.movb_gld(rnd.randrange(0, 60))
        elif k == 12:
            a.mov(base, 12); a.macl(12, 12) if False else None
            a.li(11, WRAMH + 0x20800); a.li(12, WRAMH + 0x20A00)
            a.macw(11, 12) if rnd.random() < .5 else a.macl(11, 12)
        else:
            a.mov(base, 12); a.tas(12)

    def periph(a):
        k = rnd.randrange(8)
        if k == 0:
            a.li(10, DVSR); a.movl_st(r(), 10); a.movl_dst(r(), 10, 1)
            a.movl_dld(10, r(), 1)
        elif k == 1:
            a.li(10, DVSR); a.movl_st(r(), 10); a.movl_dst(r(), 10, 4); a.movl_dst(r(), 10, 5)
            a.movl_dld(10, r(), 4); a.movl_dld(10, r(), 5)
        elif k == 2:
            a.li(10, TB_RAND); a.movl_ld(10, r())
        elif k == 3:
            a.li(10, CCR); a.movi(0, rnd.choice([0, 1, 0x11, 0x03, 0x05, 0x09, 0x01])); a.movb_st(0, 10)
        elif k == 4:
            a.li(10, DVDNTH); a.movl_ld(10, r()); a.movl_dld(10, r(), 1)
        elif k == 5:
            # short DMA: memory to memory, auto request, polled by timing only
            a.li(10, DMAOR); a.movi(0, 1); a.movl_st(0, 10)
            a.li(10, SAR0); a.li(0, WRAMH + 0x24000); a.movl_st(0, 10)
            a.li(0, WRAMH + 0x26000 + 0x400 * rnd.randrange(4)); a.movl_dst(0, 10, 1)
            a.movi(0, rnd.choice([2, 3, 4, 8])); a.movl_dst(0, 10, 2)
            ts = rnd.choice([0, 1, 2, 3])
            a.li(0, (1 << 14) | (1 << 12) | (ts << 10) | (1 << 9) | (rnd.randrange(2) << 4) | 1); a.movl_dst(0, 10, 3)
        elif k == 6:
            a.li(10, FRC + 4); a.movb_ld(10, r()) if False else None
            a.li(10, FTCSR); a.movb_ld(10, 0)
        else:
            a.li(10, TB_CYC); a.movl_ld(10, r())

    def branch(a, lab):
        k = rnd.randrange(7)
        n = rnd.randrange(1, 4)
        if k == 0: a.bt(lab)
        elif k == 1: a.bf(lab)
        elif k == 2: a.bra(lab)
        elif k == 3: a.bts(lab)
        elif k == 4: a.bfs(lab)
        elif k == 5: a.bra(lab)
        else: a.bsr(lab)
        return k

    def simple(a):
        rnd.choice([alu_rr, alu_rr, alu_rr, alu_r, imm, sysops, mem, mem])(a)

    def block(a, tag):
        # init pointers and registers
        for i, rg in enumerate(R):
            a.li(rg, rnd.getrandbits(32))
        for _ in range(blen):
            k = rnd.random()
            if k < 0.10:
                lab = uniq('f')
                kind = branch(a, lab)
                if kind in (2, 3, 4, 5, 6):
                    # delay slot: any simple non-branch, non-pc-relative
                    rnd.choice([alu_rr, alu_r, imm, sysops])(a)
                else:
                    pass
                for _ in range(rnd.randrange(1, 4)):
                    simple(a)
                a.label(lab)
                if kind == 6:
                    pass
            elif k < 0.16:
                periph(a)
            else:
                simple(a)

    # subroutine for BSR targets: every 'f' label can be a BSR target, falling through is fine (RTS not needed)
    for who in ('msh', 'ssh'):
        a.label(who + '_main')
        a.li(14, WRAMH + (0x10000 if who == 'msh' else 0x30000))
        a.li(13, WRAMH_NC + (0x10000 if who == 'msh' else 0x30000) + 0x1000)
        a.mov(13, 0); a.ldc_gbr(0)
        if who == 'msh':
            a.li(1, ICR_INTC); a.movi(2, 1); a.movw_st(2, 1)
        set_sr(a, 0x00)
        a.li(9, 6)
        loop = uniq(who + '_loop')
        a.label(loop)
        for b in range(nblocks):
            block(a, who + str(b))
        a.dt(9)
        a.bt(who + '_done'); a.nop()
        a.jmp_far(loop)
        a.label(who + '_done')
        a.movi(9, 6)
        a.jmp_far(loop) if who == 'msh' else a.jmp_far(loop)
    P.build(path)


if __name__ == '__main__':
    gen(int(sys.argv[2]), sys.argv[1])
