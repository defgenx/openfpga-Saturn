#!/usr/bin/env python3
"""Assemble the tb_irq SH-2 program into prog.hex (32 bit big-endian words, word 0 = ROM address 0)."""
import sys
rom = [0] * 0x1000
def h(a, v): rom[a // 2] = v & 0xFFFF
def w32(a, v): h(a, v >> 16); h(a + 2, v)
def movl_pc(a, n, tgt): h(a, 0xD000 | n << 8 | (tgt - ((a & ~3) + 4)) // 4)
def mov_i(a, n, i): h(a, 0xE000 | n << 8 | i & 0xFF)
def st(a, sz, n, m): h(a, 0x2000 | n << 8 | m << 4 | sz)        # mov.{b,w,l} Rm,@Rn
def ldb(a, n, m): h(a, 0x6000 | n << 8 | m << 4)                # mov.b @Rm,Rn
def ldl(a, n, m): h(a, 0x6002 | n << 8 | m << 4)                # mov.l @Rm,Rn
def addi(a, n, i): h(a, 0x7000 | n << 8 | i & 0xFF)
NOP, RTE = 0x0009, 0x002B

w32(0x00, 0x200); w32(0x04, 0x06010000)                           # power-on PC, SP
for v in range(0x40, 0x60): w32(v * 4, 0x300)                     # interrupt vectors -> handler

# ---- main: SMPC SNDON (SF handshake over the real bus), then SCU interrupts on
a = 0x200
movl_pc(a, 1, 0x260); a += 2                                      # r1 = SMPC SF
mov_i(a, 2, 1); a += 2
st(a, 0, 1, 2); a += 2                                            # SF = 1
movl_pc(a, 3, 0x264); a += 2                                      # r3 = SMPC COMREG
mov_i(a, 4, 6); a += 2
st(a, 0, 3, 4); a += 2                                            # COMREG = SNDON
loop = a
ldb(a, 0, 1); a += 2                                              # r0 = SF
h(a, 0xC801); a += 2                                              # tst #1,r0
h(a, 0x8B00 | ((loop - (a + 4)) // 2) & 0xFF); a += 2             # bf loop
h(a, NOP); a += 2
movl_pc(a, 6, 0x268); a += 2                                      # r6 = done flag (WRAM-H)
mov_i(a, 7, 1); a += 2
st(a, 2, 6, 7); a += 2                                            # flag = 1
movl_pc(a, 1, 0x26C); a += 2                                      # r1 = SCU IMS
movl_pc(a, 2, 0x270); a += 2                                      # r2 = IMS value
st(a, 2, 1, 2); a += 2
movl_pc(a, 3, 0x274); a += 2                                      # r3 = ICR
mov_i(a, 0, 1); a += 2
st(a, 1, 3, 0); a += 2                                            # ICR.VECMD = 1 (external vector, as the BIOS)
mov_i(a, 0, 0); a += 2
h(a, 0x400E); a += 2                                              # ldc r0,SR (I = 0)
h(a, 0xAFFE); a += 2; h(a, NOP); a += 2                           # bra .
assert a < 0x260
w32(0x260, 0x20100063); w32(0x264, 0x2010001F); w32(0x268, 0x06000010)
w32(0x26C, 0x25FE00A0); w32(0x270, 0x0000BFFC); w32(0x274, 0xFFFFFEE0)

# ---- interrupt handler: count in WRAM-H, restore the IMS the SCU cleared at the vector fetch
a = 0x300
movl_pc(a, 2, 0x320); a += 2
ldl(a, 4, 2); a += 2
addi(a, 4, 1); a += 2
st(a, 2, 2, 4); a += 2
movl_pc(a, 1, 0x324); a += 2
movl_pc(a, 5, 0x328); a += 2
st(a, 2, 1, 5); a += 2
h(a, RTE); a += 2; h(a, NOP); a += 2
w32(0x320, 0x06000000); w32(0x324, 0x25FE00A0); w32(0x328, 0x0000BFFC)

with open(sys.argv[1], 'w') as f:
    for i in range(0, len(rom), 2): f.write('%04x%04x\n' % (rom[i], rom[i + 1]))
