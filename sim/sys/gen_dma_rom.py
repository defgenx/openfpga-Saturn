#!/usr/bin/env python3
"""SCU DMA timing ROM for the full-system sim (docs/memory.md section 4): level 0 transfers, one mailbox marker
before the start (0x0011000n), one CPU store right after it (0x0012000n, held until the DMA frees the C-bus) and one
when DSTA reads 0 (0x0013000n); tb_sys logs each marker with its time. Ends with 0x00FF0000.
  n = 1: 52 KB WRAM-H -> VDP1 VRAM, 2: 52 KB WRAM-H -> VDP2 VRAM, 3: WRAM-L -> VDP1 (not an SCU DMA path), 4: 4 KB -> VDP1
usage: gen_dma_rom.py out.bin, then make -C sim sys BIOS=out.bin"""
import os, sys
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'sh2', 'tools'))
from sh2asm import Asm

MK = 0x26000F00
MSP = 0x06080000
a = Asm(0x400)
_n = [0]
def L(p='L'):
    _n[0] += 1
    return '%s%d' % (p, _n[0])
def st(addr, val, size=4, ra=1, rb=2):
    a.li(ra, addr); a.li(rb, val)
    {1: a.movb_st, 2: a.movw_st, 4: a.movl_st}[size](rb, ra)
def mark(v): st(MK, v)

a.label('entry')
a.li(15, MSP)
KEY = 0xA55A0000
for reg, v in ((0xFFFFFFE8, 0x0A55), (0xFFFFFFEC, 0x0008), (0xFFFFFFF8, 0x0040), (0xFFFFFFF4, 0x0000), (0xFFFFFFF0, 0x0008)):
    st(reg, KEY | v)
st(0xFFFFFE92, 0x10, 1)
st(0xFFFFFE92, 0x01, 1)
st(0x25FE00A0, 0xFFFFFFFF)          # IMS: all masked
mark(0x00100000)

def dma(tag, src, dst, cnt, add=0x101):
    st(0x25FE0000, src); st(0x25FE0004, dst); st(0x25FE0008, cnt)
    st(0x25FE000C, add); st(0x25FE0014, 7)
    mark(0x00110000 | tag)
    st(0x25FE0010, 0x101)           # enable + start
    mark(0x00120000 | tag)          # CPU write to WRAM-H right after the start
    top = L('p')
    a.label(top)
    a.li(1, 0x25FE007C); a.movl_ld(1, 0)
    a.tst(0, 0)
    a.bf(top)
    mark(0x00130000 | tag)

dma(1, 0x060B3000, 0x25C00000, 0xD000)   # WRAM-H -> VDP1 VRAM
dma(2, 0x060B3000, 0x25E00000, 0xD000)   # WRAM-H -> VDP2 VRAM
dma(3, 0x00200000, 0x25C00000, 0xD000)   # WRAM-L -> VDP1 VRAM (refused: ends at once)
dma(4, 0x060B3000, 0x25C00000, 0x1000)   # 4 KB
mark(0x00FF0000)
a.label('done'); a.bra('done'); a.nop()

mem = a.assemble(); lab = a.labels
def put32(addr, v):
    for i in range(4): mem[addr + i] = (v >> (24 - 8 * i)) & 255
put32(0, lab['entry']); put32(4, MSP); put32(8, lab['entry']); put32(12, MSP)
size = (max(mem) + 4) & ~3
img = bytearray(size)
for k, v in mem.items(): img[k] = v
open(sys.argv[1], 'wb').write(img)
