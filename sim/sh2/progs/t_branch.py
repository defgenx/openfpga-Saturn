"""Branches, delay slots, subroutines, TRAPA, RTE, SLEEP-free control flow, stack ops, GBR/VBR/SR moves."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True)
P.default_isr()

P.set_vec(0x20, 'trap_isr')     # TRAPA #0x20
a.align4()
a.label('trap_isr')
a.addi(8, 1)
a.rte()
a.nop()

a.label('sub1')                  # leaf subroutine: r4 = r4 * 2 + 1
a.shll(4)
a.rts()
a.addi(4, 1)

a.label('sub2')                  # nested: saves PR
a.stsl_pr(15)
a.bsr('sub1')
a.nop()
a.bsr('sub1')
a.addi(4, 3)
a.ldsl_pr(15)
a.rts()
a.nop()

a.label('msh_main')
a.li(14, WRAMH + 0x4000)
a.movi(4, 1)
a.movi(5, 0)
a.movi(8, 0)
# counted loops with BF and BF/S, BT, BT/S
a.movi(6, 20)
a.label('l1')
a.addi(5, 3)
a.dt(6)
a.bf('l1')
a.nop()
a.movi(6, 20)
a.label('l2')
a.dt(6)
a.bfs('l2')
a.addi(5, 7)
a.cmpeqi(0)
a.bt('l3')
a.addi(5, 100)
a.label('l3')
a.movi(0, 0)
a.cmpeqi(0)
a.bts('l4')
a.addi(5, 1)
a.addi(5, 50)
a.label('l4')
a.movl_st(5, 14)
a.addi(14, 4)
# subroutines
a.movi(4, 1)
a.bsr('sub1'); a.nop()
a.bsr('sub2'); a.nop()
a.li(2, 'sub1'); a.jsr(2); a.nop()
a.li(2, 'sub2'); a.jsr(2); a.addi(4, 1)
a.movl_st(4, 14); a.addi(14, 4)
# BRAF / BSRF with computed offsets
a.movi(2, 6)
a.braf(2)
a.addi(4, 1)
a.addi(4, 100)       # skipped
a.addi(4, 100)       # skipped
a.addi(4, 100)       # skipped
a.movi(2, 8)
a.bsrf(2)
a.addi(4, 1)
a.addi(4, 100)       # skipped
a.addi(4, 100)       # skipped
a.addi(4, 100)       # skipped (after return)
a.nop()
a.movl_st(4, 14); a.addi(14, 4)
# TRAPA and RTE
a.trapa(0x20); a.nop()
a.trapa(0x20); a.nop()
a.movl_st(8, 14); a.addi(14, 4)
# SR / GBR / VBR round trips
a.stc_sr(1); a.stc_gbr(2); a.stc_vbr(3)
a.li(2, WRAMH + 0x4800)
a.ldc_gbr(2)
a.movi(0, 0x5A)
a.movb_gst(4)
a.movw_gst(8)
a.movl_gst(12)
a.movl_gld(12)
a.movb_gld(4)
a.mova(6)
a.stc_gbr(5)
a.andb(0x0F); a.orb(0x40); a.xorb(0x03); a.tstb(0x01)
a.movl_st(0, 14); a.addi(14, 4)
a.stcl_gbr(15); a.ldcl_gbr(15)
a.stcl_sr(15); a.ldcl_sr(15)
a.stcl_vbr(15); a.ldcl_vbr(15)
a.stsl_mach(15); a.ldsl_mach(15)
a.stsl_macl(15); a.ldsl_macl(15)
# load-use stalls, stack push/pop mix
a.movl_pre(4, 15); a.movl_pre(5, 15); a.movl_post(15, 6); a.movl_post(15, 7)
a.add(6, 7); a.movl_st(7, 14); a.addi(14, 4)
a.movl_ld(14, 0); a.add(0, 0); a.movl_ld(14, 1); a.mov(1, 2); a.movl_st(2, 14)
# long-running nested loop with BT/S, BF/S mixing
a.movi(9, 5)
a.label('o')
a.movi(10, 4)
a.label('i')
a.add(10, 5)
a.dt(10)
a.bfs('i')
a.addi(5, 1)
a.dt(9)
a.bf('o')
a.nop()
a.movl_st(5, 14)
# a few more flavours: forward BRA with delay-slot memory access
a.bra('fwd'); a.movl_st(5, 14)
a.addi(5, 1)
a.label('fwd')
a.sleep()
a.jmp_far('msh_main')

a.label('ssh_main')
a.li(14, WRAMH + 0x8000)
a.movi(4, 3)
a.bsr('sub2'); a.nop()
a.trapa(0x20); a.nop()
a.movl_st(4, 14); a.movl_st(8, 14)
a.jmp_far('ssh_main')

P.build(sys.argv[1])
