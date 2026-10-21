#!/usr/bin/env python3
"""Small SH-1/SH-2 instruction decoder shared by the SH7034 census tools.

decode(op) returns an Insn with the mnemonic, operand fields and a coarse
memory-access description. Only what the census needs is modelled.
"""
import re
import sys

ROM_SIZE = 0x10000


def load_mif(path):
    """Read an Intel/Altera MIF with 32-bit words into a big-endian bytearray."""
    words = {}
    width = 32
    depth = 0
    for line in open(path):
        m = re.match(r'\s*WIDTH\s*=\s*(\d+)', line)
        if m:
            width = int(m[1])
        m = re.match(r'\s*DEPTH\s*=\s*(\d+)', line)
        if m:
            depth = int(m[1])
        m = re.match(r'\s*([0-9A-Fa-f]+)\s*:\s*([0-9A-Fa-f]+)\s*;', line)
        if m:
            words[int(m[1], 16)] = int(m[2], 16)
        m = re.match(r'\s*\[([0-9A-Fa-f]+)\.\.([0-9A-Fa-f]+)\]\s*:\s*([0-9A-Fa-f]+)\s*;', line)
        if m:
            for a in range(int(m[1], 16), int(m[2], 16) + 1):
                words[a] = int(m[3], 16)
    assert width == 32, width
    out = bytearray(depth * 4)
    for a, v in words.items():
        out[a * 4:a * 4 + 4] = v.to_bytes(4, 'big')
    return out


class Insn:
    __slots__ = ('op', 'mn', 'n', 'm', 'imm', 'disp', 'mem', 'delay', 'flow', 'text')

    def __init__(self, op, mn, n=None, m=None, imm=None, disp=None, mem=None,
                 delay=False, flow=None, text=''):
        self.op = op
        self.mn = mn          # canonical mnemonic without operands (e.g. "MOV.L")
        self.n = n
        self.m = m
        self.imm = imm
        self.disp = disp
        # mem = (mode, size, dir) ; mode in 'ind','post','pre','disp','r0','gbrd','gbr0','pcrel'
        self.mem = mem
        self.delay = delay
        self.flow = flow      # 'bra','bsr','jmp','jsr','braf','bsrf','rts','rte','bt','bf','trapa'
        self.text = text


def s8(x):
    return x - 256 if x & 0x80 else x


def s12(x):
    return x - 4096 if x & 0x800 else x


SH2_ONLY = {'MUL.L', 'DMULS.L', 'DMULU.L', 'MAC.L', 'BRAF', 'BSRF', 'BT/S', 'BF/S', 'DT'}
SH1_STRICT = True


def decode(op):
    i = _decode(op)
    if SH1_STRICT and i.mn in SH2_ONLY:
        return Insn(op, '.word', text='.word 0x%04x ;sh2-only %s' % (op, i.mn))
    return i


def _decode(op):
    a, n, m, d = (op >> 12) & 15, (op >> 8) & 15, (op >> 4) & 15, op & 15
    lo = op & 0xFF
    I = Insn

    def mk(mn, text, **kw):
        return I(op, mn, text=text, **kw)

    sz = {0: 1, 1: 2, 2: 4}
    if a == 0:
        if d in (4, 5, 6):
            s = sz[d - 4]
            return mk('MOV.' + 'BWL'[d - 4], 'mov.%s r%d,@(r0,r%d)' % ('bwl'[d - 4], m, n),
                      n=n, m=m, mem=('r0', s, 'W'))
        if d == 7:
            return mk('MUL.L', 'mul.l r%d,r%d' % (m, n), n=n, m=m)
        if d in (12, 13, 14):
            s = sz[d - 12]
            return mk('MOV.' + 'BWL'[d - 12], 'mov.%s @(r0,r%d),r%d' % ('bwl'[d - 12], m, n),
                      n=n, m=m, mem=('r0', s, 'R'))
        if d == 15:
            return mk('MAC.L', 'mac.l @r%d+,@r%d+' % (m, n), n=n, m=m, mem=('post', 4, 'R'))
        if d == 2:
            nm = {0: 'SR', 1: 'GBR', 2: 'VBR'}.get(m)
            if nm:
                return mk('STC', 'stc %s,r%d' % (nm.lower(), n), n=n)
        if d == 10:
            nm = {0: 'MACH', 1: 'MACL', 2: 'PR'}.get(m)
            if nm:
                return mk('STS', 'sts %s,r%d' % (nm.lower(), n), n=n)
        if d == 3 and m == 0:
            return mk('BSRF', 'bsrf r%d' % n, n=n, delay=True, flow='bsrf')
        if d == 3 and m == 2:
            return mk('BRAF', 'braf r%d' % n, n=n, delay=True, flow='braf')
        if d == 9 and m == 2:
            return mk('MOVT', 'movt r%d' % n, n=n)
        if op == 0x0008:
            return mk('CLRT', 'clrt')
        if op == 0x0018:
            return mk('SETT', 'sett')
        if op == 0x0028:
            return mk('CLRMAC', 'clrmac')
        if op == 0x0009:
            return mk('NOP', 'nop')
        if op == 0x0019:
            return mk('DIV0U', 'div0u')
        if op == 0x000B:
            return mk('RTS', 'rts', delay=True, flow='rts')
        if op == 0x002B:
            return mk('RTE', 'rte', delay=True, flow='rte')
        if op == 0x001B:
            return mk('SLEEP', 'sleep')
    elif a == 1:
        return mk('MOV.L', 'mov.l r%d,@(%d,r%d)' % (m, d * 4, n), n=n, m=m, disp=d * 4, mem=('disp', 4, 'W'))
    elif a == 2:
        if d in (0, 1, 2):
            return mk('MOV.' + 'BWL'[d], 'mov.%s r%d,@r%d' % ('bwl'[d], m, n), n=n, m=m, mem=('ind', sz[d], 'W'))
        if d in (4, 5, 6):
            return mk('MOV.' + 'BWL'[d - 4], 'mov.%s r%d,@-r%d' % ('bwl'[d - 4], m, n), n=n, m=m, mem=('pre', sz[d - 4], 'W'))
        names = {7: 'DIV0S', 8: 'TST', 9: 'AND', 10: 'XOR', 11: 'OR', 12: 'CMP/STR', 13: 'XTRCT', 14: 'MULU.W', 15: 'MULS.W'}
        if d in names:
            return mk(names[d], '%s r%d,r%d' % (names[d].lower(), m, n), n=n, m=m)
    elif a == 3:
        names = {0: 'CMP/EQ', 2: 'CMP/HS', 3: 'CMP/GE', 4: 'DIV1', 5: 'DMULU.L', 6: 'CMP/HI', 7: 'CMP/GT',
                 8: 'SUB', 10: 'SUBC', 11: 'SUBV', 12: 'ADD', 13: 'DMULS.L', 14: 'ADDC', 15: 'ADDV'}
        if d in names:
            return mk(names[d], '%s r%d,r%d' % (names[d].lower(), m, n), n=n, m=m)
    elif a == 4:
        simple = {0x00: 'SHLL', 0x01: 'SHLR', 0x04: 'ROTL', 0x05: 'ROTR', 0x08: 'SHLL2', 0x09: 'SHLR2',
                  0x10: 'DT', 0x11: 'CMP/PZ', 0x15: 'CMP/PL', 0x18: 'SHLL8', 0x19: 'SHLR8', 0x20: 'SHAL',
                  0x21: 'SHAR', 0x24: 'ROTCL', 0x25: 'ROTCR', 0x28: 'SHLL16', 0x29: 'SHLR16'}
        if lo in simple:
            return mk(simple[lo], '%s r%d' % (simple[lo].lower(), n), n=n)
        ctl = {0x0A: 'MACH', 0x1A: 'MACL', 0x2A: 'PR', 0x0E: 'SR', 0x1E: 'GBR', 0x2E: 'VBR'}
        if lo in ctl:
            k = 'LDS' if lo in (0x0A, 0x1A, 0x2A) else 'LDC'
            return mk(k, '%s r%d,%s' % (k.lower(), n, ctl[lo].lower()), n=n)
        stl = {0x02: ('STS.L', 'MACH'), 0x12: ('STS.L', 'MACL'), 0x22: ('STS.L', 'PR'),
               0x03: ('STC.L', 'SR'), 0x13: ('STC.L', 'GBR'), 0x23: ('STC.L', 'VBR')}
        if lo in stl:
            return mk(stl[lo][0], '%s %s,@-r%d' % (stl[lo][0].lower(), stl[lo][1].lower(), n), n=n, mem=('pre', 4, 'W'))
        ldl = {0x06: ('LDS.L', 'MACH'), 0x16: ('LDS.L', 'MACL'), 0x26: ('LDS.L', 'PR'),
               0x07: ('LDC.L', 'SR'), 0x17: ('LDC.L', 'GBR'), 0x27: ('LDC.L', 'VBR')}
        if lo in ldl:
            return mk(ldl[lo][0], '%s @r%d+,%s' % (ldl[lo][0].lower(), n, ldl[lo][1].lower()), n=n, mem=('post', 4, 'R'))
        if lo == 0x0B:
            return mk('JSR', 'jsr @r%d' % n, n=n, delay=True, flow='jsr')
        if lo == 0x2B:
            return mk('JMP', 'jmp @r%d' % n, n=n, delay=True, flow='jmp')
        if lo == 0x1B:
            return mk('TAS.B', 'tas.b @r%d' % n, n=n, mem=('ind', 1, 'RW'))
        if d == 15:
            return mk('MAC.W', 'mac.w @r%d+,@r%d+' % (m, n), n=n, m=m, mem=('post', 2, 'R'))
    elif a == 5:
        return mk('MOV.L', 'mov.l @(%d,r%d),r%d' % (d * 4, m, n), n=n, m=m, disp=d * 4, mem=('disp', 4, 'R'))
    elif a == 6:
        if d in (0, 1, 2):
            return mk('MOV.' + 'BWL'[d], 'mov.%s @r%d,r%d' % ('bwl'[d], m, n), n=n, m=m, mem=('ind', sz[d], 'R'))
        if d == 3:
            return mk('MOV', 'mov r%d,r%d' % (m, n), n=n, m=m)
        if d in (4, 5, 6):
            return mk('MOV.' + 'BWL'[d - 4], 'mov.%s @r%d+,r%d' % ('bwl'[d - 4], m, n), n=n, m=m, mem=('post', sz[d - 4], 'R'))
        names = {7: 'NOT', 8: 'SWAP.B', 9: 'SWAP.W', 10: 'NEGC', 11: 'NEG', 12: 'EXTU.B', 13: 'EXTU.W', 14: 'EXTS.B', 15: 'EXTS.W'}
        return mk(names[d], '%s r%d,r%d' % (names[d].lower(), m, n), n=n, m=m)
    elif a == 7:
        return mk('ADD#', 'add #%d,r%d' % (s8(lo), n), n=n, imm=s8(lo))
    elif a == 8:
        if n == 0:
            return mk('MOV.B', 'mov.b r0,@(%d,r%d)' % (d, m), n=m, m=0, disp=d, mem=('disp', 1, 'W'))
        if n == 1:
            return mk('MOV.W', 'mov.w r0,@(%d,r%d)' % (d * 2, m), n=m, m=0, disp=d * 2, mem=('disp', 2, 'W'))
        if n == 4:
            return mk('MOV.B', 'mov.b @(%d,r%d),r0' % (d, m), n=0, m=m, disp=d, mem=('disp', 1, 'R'))
        if n == 5:
            return mk('MOV.W', 'mov.w @(%d,r%d),r0' % (d * 2, m), n=0, m=m, disp=d * 2, mem=('disp', 2, 'R'))
        if n == 8:
            return mk('CMP/EQ#', 'cmp/eq #%d,r0' % s8(lo), imm=s8(lo))
        if n in (9, 11, 13, 15):
            nm = {9: 'BT', 11: 'BF', 13: 'BT/S', 15: 'BF/S'}[n]
            return mk(nm, '%s %d' % (nm.lower(), s8(lo)), imm=s8(lo), delay=n in (13, 15),
                      flow='bt' if n in (9, 13) else 'bf')
    elif a == 9:
        return mk('MOV.W', 'mov.w @(%d,pc),r%d' % (lo * 2, n), n=n, disp=lo * 2, mem=('pcrel', 2, 'R'))
    elif a == 10:
        return mk('BRA', 'bra %d' % s12(op & 0xFFF), imm=s12(op & 0xFFF), delay=True, flow='bra')
    elif a == 11:
        return mk('BSR', 'bsr %d' % s12(op & 0xFFF), imm=s12(op & 0xFFF), delay=True, flow='bsr')
    elif a == 12:
        if n in (0, 1, 2):
            return mk('MOV.' + 'BWL'[n], 'mov.%s r0,@(%d,gbr)' % ('bwl'[n], lo * sz[n]), disp=lo * sz[n], mem=('gbrd', sz[n], 'W'))
        if n in (4, 5, 6):
            return mk('MOV.' + 'BWL'[n - 4], 'mov.%s @(%d,gbr),r0' % ('bwl'[n - 4], lo * sz[n - 4]), disp=lo * sz[n - 4], mem=('gbrd', sz[n - 4], 'R'))
        if n == 3:
            return mk('TRAPA', 'trapa #%d' % lo, imm=lo, flow='trapa')
        if n == 7:
            return mk('MOVA', 'mova @(%d,pc),r0' % (lo * 4), disp=lo * 4)
        names = {8: 'TST#', 9: 'AND#', 10: 'XOR#', 11: 'OR#'}
        if n in names:
            return mk(names[n], '%s #%d,r0' % (names[n][:-1].lower(), lo), imm=lo)
        names = {12: 'TST.B', 13: 'AND.B', 14: 'XOR.B', 15: 'OR.B'}
        if n in names:
            return mk(names[n], '%s #%d,@(r0,gbr)' % (names[n].lower(), lo), imm=lo,
                      mem=('gbr0', 1, 'R' if n == 12 else 'RW'))
    elif a == 13:
        return mk('MOV.L', 'mov.l @(%d,pc),r%d' % (lo * 4, n), n=n, disp=lo * 4, mem=('pcrel', 4, 'R'))
    elif a == 14:
        return mk('MOV#', 'mov #%d,r%d' % (s8(lo), n), n=n, imm=s8(lo))
    return Insn(op, '.word', text='.word 0x%04x' % op)


if __name__ == '__main__':
    img = load_mif(sys.argv[1])
    lo = int(sys.argv[2], 0)
    hi = int(sys.argv[3], 0)
    for a in range(lo, hi, 2):
        op = (img[a] << 8) | img[a + 1]
        print('%05x: %04x  %s' % (a, op, decode(op).text))
