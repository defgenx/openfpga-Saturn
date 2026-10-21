"""ALU, shifts, compares, byte/word/long moves in cached and uncached WRAM-H."""
import sys
from common import *

P = Prog()
a = P.a
P.prologue(release_ssh=True)
P.default_isr()

def alu_block(a, base_reg, seed):
    # r1..r7 get constants, every ALU op is applied and the results stored through base_reg
    consts = [0x12345678, 0x9ABCDEF0, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 1, 0x0000FFFF]
    for i, c in enumerate(consts):
        a.li(1 + i, c ^ seed)
    ops2 = ['add', 'addc', 'addv', 'sub', 'subc', 'subv', 'and_', 'or_', 'xor', 'cmpeq', 'cmphs', 'cmpge', 'cmphi', 'cmpgt',
            'cmpstr', 'tst', 'div0s', 'swapb', 'swapw', 'xtrct', 'extsb', 'extsw', 'extub', 'extuw', 'neg', 'negc', 'not_', 'mov']
    ops1 = ['shll', 'shlr', 'shal', 'shar', 'rotl', 'rotr', 'rotcl', 'rotcr', 'shll2', 'shlr2', 'shll8', 'shlr8', 'shll16', 'shlr16',
            'dt', 'cmppl', 'cmppz']
    k = 0
    for op in ops2:
        for (m, n) in ((1, 2), (3, 4), (5, 6), (7, 1)):
            getattr(a, op)(m, n)
            a.movt(0)
            a.movl_post(0, 0) if False else None
            a.movl_st(n, base_reg)
            a.addi(base_reg, 4)
            a.movl_st(0, base_reg)
            a.addi(base_reg, 4)
            k += 1
    for op in ops1:
        for n in (1, 2, 3):
            getattr(a, op)(n)
            a.movl_st(n, base_reg)
            a.addi(base_reg, 4)
    a.addi(1, 100)
    a.addi(2, -1)
    a.movi(0, 0x55)
    a.andi(0xF0); a.ori(3); a.xori(0x11); a.tsti(0x01); a.cmpeqi(0x00)
    a.movl_st(0, base_reg); a.addi(base_reg, 4)
    a.sett(); a.clrt(); a.sett()
    a.addc(1, 2); a.subc(3, 4); a.movt(5)
    a.movl_st(5, base_reg); a.addi(base_reg, 4)
    a.movl_st(2, base_reg); a.addi(base_reg, 4)
    # byte/word/long forms
    a.movi(0, 0x7B)
    a.movb_st(0, base_reg); a.movb_pre(0, base_reg) if False else None
    a.movw_st(1, base_reg); a.addi(base_reg, 2)
    a.movb_st(2, base_reg); a.addi(base_reg, 1)
    a.movb_st(3, base_reg); a.addi(base_reg, 3)
    a.movl_st(4, base_reg); a.addi(base_reg, 4)
    a.addi(base_reg, -12)
    a.movb_ld(base_reg, 6); a.movw_ld(base_reg, 7); a.movl_ld(base_reg, 5)
    a.movl_st(6, base_reg); a.movl_st(7, base_reg); a.movl_st(5, base_reg)

a.label('msh_main')
a.li(14, WRAMH + 0x1000)
alu_block(a, 14, 0x00000000)
# repeat in the cacheable window with the cache on, then with it off
a.li(1, CCR); a.movi(0, 0x01); a.movb_st(0, 1)
a.li(14, WRAMH + 0x2000)
alu_block(a, 14, 0x0F0F0F0F)
a.li(14, WRAMH + 0x1000)
alu_block(a, 14, 0xF0F0F0F0)
a.li(1, CCR); a.movi(0, 0x00); a.movb_st(0, 1)
a.li(14, WRAMH_NC + 0x3000)
alu_block(a, 14, 0x55AA55AA)
a.label('msh_done')
a.bra('msh_done'); a.nop()

a.label('ssh_main')
a.li(14, WRAMH + 0x10000)
alu_block(a, 14, 0xA5A5A5A5)
a.li(1, CCR); a.movi(0, 0x01); a.movb_st(0, 1)
a.li(14, WRAMH + 0x11000)
alu_block(a, 14, 0x3C3C3C3C)
a.label('ssh_done')
a.bra('ssh_done'); a.nop()

P.build(sys.argv[1])
