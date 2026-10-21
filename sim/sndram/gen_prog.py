#!/usr/bin/env python3
"""tb_sndram SH-2 program: word/byte writes with read-back at sound RAM 0x25A00000.., a BIOS-style read loop,
and a 64-word fill + verify. Results (32 bit each) go to WRAM-H 0x06000100..; argv: prog.hex exp.hex"""
import sys
rom = [0] * 0x1000
a = [0x200]
pend = []                                        # (instruction address, value) of literals not yet placed
def h(a_, v): rom[a_ // 2] = v & 0xFFFF
def w32(a_, v): h(a_, v >> 16); h(a_ + 2, v)
def emit(v): h(a[0], v); a[0] += 2
def flush():                                     # bra over a literal pool placed here, then patch the mov.l @(pc) users
    if not pend: return
    vals = sorted({v for _, v in pend})
    br_at = a[0]; emit(0xA000); emit(0x0009)
    if a[0] % 4: emit(0x0009)
    pos = {}
    for v in vals: pos[v] = a[0]; w32(a[0], v); a[0] += 4
    h(br_at, 0xA000 | ((a[0] - (br_at + 4)) // 2) & 0xFFF)
    for ia, v in pend: h(ia, rom[ia // 2] | (pos[v] - ((ia & ~3) + 4)) // 4)
    pend.clear()
def ldi(n, v):                                   # mov.l @(pc),Rn
    if pend and a[0] - pend[0][0] > 900: flush()
    pend.append((a[0], v)); emit(0xD000 | n << 8)
def st(sz, n, m): emit(0x2000 | n << 8 | m << 4 | sz)       # mov.{b,w,l} Rm,@Rn
def ld(sz, n, m): emit(0x6000 | n << 8 | m << 4 | sz)       # mov.{b,w,l} @Rm,Rn
def extuw(n, m): emit(0x600D | n << 8 | m << 4)
def extub(n, m): emit(0x600C | n << 8 | m << 4)
def addi(n, i): emit(0x7000 | n << 8 | i & 0xFF)
def cmpeq(n, m): emit(0x3000 | n << 8 | m << 4)
def dt(n): emit(0x4010 | n << 8)
def mov(n, m): emit(0x6003 | n << 8 | m << 4)
def addr(n, m): emit(0x300C | n << 8 | m << 4)
def br(op, tgt): emit(op | ((tgt - (a[0] + 4)) // 2) & 0xFF)   # bt 0x8900 / bf 0x8B00
exp = []
BASE = 0x25A00000
# r1..r4 = base+0..3, r8 = result pointer, r9 = mismatch counter
w32(0, 0x200); w32(4, 0x06010000)
for i in range(4): ldi(1 + i, BASE + i)
ldi(8, 0x06000100)
def wr(sz, off, v): ldi(0, v); st(sz, 1 + off, 0)
def rd(sz, off, e):
    ld(sz, 5, 1 + off)
    if sz < 2: (extuw if sz == 1 else extub)(5, 5)
    st(2, 8, 5); addi(8, 4); exp.append(e)
for o in (0, 2):
    for v in (0x1234, 0x0000, 0xA5A5): wr(1, o, v); rd(1, o, v)
rd(1, 0, 0xA5A5)
for o in (0, 2):
    for hi, lo in ((0x12, 0x34), (0, 0), (0xA5, 0xA5), (0xFF, 0x00)):
        wr(0, o, hi); wr(0, o + 1, lo); rd(1, o, hi << 8 | lo); rd(0, o, hi); rd(0, o + 1, lo)
for v in (0x12345678, 0x00000000, 0xA000A000, 0xDEADBEEF):
    wr(2, 0, v); rd(2, 0, v); rd(1, 0, v >> 16); rd(1, 2, v & 0xFFFF)
# far addresses (256 KB and 512 KB ends) must not alias word 0
ldi(11, BASE + 0x40000); ldi(12, BASE + 0x7FFFE)
wr(1, 0, 0x1111); ldi(0, 0x2222); st(1, 11, 0); ldi(0, 0x3333); st(1, 12, 0)
rd(1, 0, 0x1111)
for r, e in ((11, 0x2222), (12, 0x3333)):
    ld(1, 5, r); extuw(5, 5); st(2, 8, 5); addi(8, 4); exp.append(e)
# BIOS-style loop: write a value, then read word 0 256 times; count reads that differ
for v in (0x0000, 0xA000, 0x1234):
    wr(1, 0, v); ldi(9, 0); ldi(7, 256); ldi(6, v)
    lp = a[0]; ld(1, 5, 1); extuw(5, 5); cmpeq(5, 6); br(0x8900, a[0] + 4); addi(9, 1); dt(7); br(0x8B00, lp)
    st(2, 8, 9); addi(8, 4); exp.append(0)
# fill 64 words with 0x0101*(i+1), read back and count mismatches
ldi(1, BASE + 0x100); ldi(6, 64); ldi(4, 0x0101); ldi(10, 0x0101); ldi(11, 0x0101)
lp = a[0]; st(1, 1, 4); addi(1, 2); addr(4, 10); dt(6); br(0x8B00, lp)
ldi(1, BASE + 0x100); ldi(6, 64); ldi(4, 0x0101); ldi(9, 0)
lp = a[0]; ld(1, 5, 1); extuw(5, 5); cmpeq(5, 4); br(0x8900, a[0] + 4); addi(9, 1); addi(1, 2); addr(4, 10); dt(6); br(0x8B00, lp)
st(2, 8, 9); addi(8, 4); exp.append(0)
# fill 64 longs (two back-to-back B-bus writes each), verify as longs
ldi(1, BASE + 0x200); ldi(6, 64); ldi(4, 0x01010101); ldi(10, 0x01010101)
lp = a[0]; st(2, 1, 4); addi(1, 4); addr(4, 10); dt(6); br(0x8B00, lp)
ldi(1, BASE + 0x200); ldi(6, 64); ldi(4, 0x01010101); ldi(9, 0)
lp = a[0]; ld(2, 5, 1); cmpeq(5, 4); br(0x8900, a[0] + 4); addi(9, 1); addi(1, 4); addr(4, 10); dt(6); br(0x8B00, lp)
st(2, 8, 9); addi(8, 4); exp.append(0)
ldi(0, 0x0D0E); ldi(7, 0x0600000C); st(2, 7, 0)
emit(0xAFFE); emit(9)
flush()
assert a[0] < 0x1000, hex(a[0])
with open(sys.argv[1], 'w') as f:
    for i in range(0, len(rom), 2): f.write('%04x%04x\n' % (rom[i], rom[i + 1]))
with open(sys.argv[2], 'w') as f:
    for e in exp: f.write('%08x\n' % e)
