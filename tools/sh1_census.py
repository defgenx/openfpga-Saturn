#!/usr/bin/env python3
"""Static census of the SH7034 on-chip peripherals a CD-block firmware touches.

Usage: sh1_census.py [--json out.json] image.mif [image2.mif ...]

The image is the SH-1 internal ROM (64 KB, big endian, 32-bit MIF). The tool
traces code from every vector-table entry, propagates register constants
(literal-pool loads, ADD/shift/AND/OR, GBR/VBR) and lists each access to the
SH7034 on-chip I/O space (0x05FFFE00..0x05FFFFFF) and to the external bus
areas. Accesses whose base register is not a known constant are listed as
unresolved. Firmware images are read from ref/ and never copied.
"""
import argparse
import collections
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from sh_dis import decode, load_mif  # noqa: E402

M32 = 0xFFFFFFFF
IO_LO, IO_HI = 0x05FFFE00, 0x05FFFFFF
GBR, VBR = 16, 17
ROM_END = 0x10000
RAM_REGION = (0xE000, 0xF000)   # the SH_RAM lives here in the core's SH1_MEM

# ---- SH7034 register map (name, module) keyed by start address, size in bytes
REGS = []


def _r(addr, size, name, mod):
    REGS.append((addr, size, name, mod))


for ch, base in ((0, 0x5FFFEC0), (1, 0x5FFFEC8)):
    for off, nm in enumerate(('SMR', 'BRR', 'SCR', 'TDR', 'SSR', 'RDR')):
        _r(base + off, 1, '%s%d' % (nm, ch), 'SCI%d' % ch)
for i, nm in enumerate(('ADDRAH', 'ADDRAL', 'ADDRBH', 'ADDRBL', 'ADDRCH', 'ADDRCL', 'ADDRDH', 'ADDRDL')):
    _r(0x5FFFEE0 + i, 1, nm, 'ADC')
_r(0x5FFFEF0, 1, 'ADCSR', 'ADC')
_r(0x5FFFEF1, 1, 'ADCR', 'ADC')
for i, nm in enumerate(('TSTR', 'TSNC', 'TMDR', 'TFCR')):
    _r(0x5FFFF00 + i, 1, nm, 'ITU-common')
_ITU = {0: 0x5FFFF04, 1: 0x5FFFF0E, 2: 0x5FFFF18, 3: 0x5FFFF22, 4: 0x5FFFF32}
for ch, b in _ITU.items():
    _r(b, 1, 'TCR%d' % ch, 'ITU%d' % ch)
    _r(b + 1, 1, 'TIOR%d' % ch, 'ITU%d' % ch)
    _r(b + 2, 1, 'TIER%d' % ch, 'ITU%d' % ch)
    _r(b + 3, 1, 'TSR%d' % ch, 'ITU%d' % ch)
    _r(b + 4, 2, 'TCNT%d' % ch, 'ITU%d' % ch)
    _r(b + 6, 2, 'GRA%d' % ch, 'ITU%d' % ch)
    _r(b + 8, 2, 'GRB%d' % ch, 'ITU%d' % ch)
    if ch >= 3:
        _r(b + 10, 2, 'BRA%d' % ch, 'ITU%d' % ch)
        _r(b + 12, 2, 'BRB%d' % ch, 'ITU%d' % ch)
_r(0x5FFFF31, 1, 'TOCR', 'ITU-common')
_r(0x5FFFF48, 2, 'DMAOR', 'DMAC')
for ch in range(4):
    b = 0x5FFFF40 + 0x10 * ch
    _r(b, 4, 'SAR%d' % ch, 'DMAC%d' % ch)
    _r(b + 4, 4, 'DAR%d' % ch, 'DMAC%d' % ch)
    _r(b + 10, 2, 'DMATCR%d' % ch, 'DMAC%d' % ch)
    _r(b + 14, 2, 'CHCR%d' % ch, 'DMAC%d' % ch)
for i, nm in enumerate(('IPRA', 'IPRB', 'IPRC', 'IPRD', 'IPRE', 'ICR')):
    _r(0x5FFFF84 + 2 * i, 2, nm, 'INTC')
for i, nm in enumerate(('BARH', 'BARL', 'BAMRH', 'BAMRL', 'BBR')):
    _r(0x5FFFF90 + 2 * i, 2, nm, 'UBC')
for i, nm in enumerate(('BCR', 'WCR1', 'WCR2', 'WCR3', 'DCR', 'PCR', 'RCR', 'RTCSR', 'RTCNT', 'RTCOR')):
    _r(0x5FFFFA0 + 2 * i, 2, nm, 'BSC')
_r(0x5FFFFB8, 2, 'TCSR/TCNT', 'WDT')
_r(0x5FFFFBA, 2, 'RSTCSR', 'WDT')
_r(0x5FFFFBC, 2, 'SBYCR', 'PowerDown')
for i, nm in enumerate(('PADR', 'PBDR', 'PAIOR', 'PBIOR', 'PACR1', 'PACR2', 'PBCR1', 'PBCR2', 'PCDR')):
    _r(0x5FFFFC0 + 2 * i, 2, nm, 'PFC')
_r(0x5FFFFEC, 2, 'CASCR', 'PFC')
for i, nm in enumerate(('TPMR', 'TPCR', 'NDERH', 'NDERL', 'NDRB', 'NDRA', 'NDRB2', 'NDRA2')):
    _r(0x5FFFFF0 + i, 1, nm, 'TPC')

REG_AT = {}
for a, s, n, m in REGS:
    for k in range(s):
        REG_AT[a + k] = (a, n, m)

# interrupt vector numbers (SH7034): vec -> source
VEC_NAMES = {0: 'PowerOnPC', 1: 'PowerOnSP', 2: 'ManualResetPC', 3: 'ManualResetSP', 4: 'IllegalInstr',
             6: 'IllegalSlot', 9: 'CPUAddrErr', 10: 'DMAAddrErr', 11: 'NMI', 12: 'UBC'}
for i in range(32, 64):
    VEC_NAMES[i] = 'TRAPA#%d' % (i - 32)
for i in range(8):
    VEC_NAMES[64 + i] = 'IRQ%d' % i
for ch, v in enumerate((72, 76, 80, 84)):
    VEC_NAMES[v] = 'DEI%d(DMAC%d)' % (ch, ch)
for ch, v in enumerate((88, 92, 96, 100, 104)):
    VEC_NAMES[v] = 'IMIA%d(ITU%d)' % (ch, ch)
    VEC_NAMES[v + 1] = 'IMIB%d(ITU%d)' % (ch, ch)
    VEC_NAMES[v + 2] = 'OVI%d(ITU%d)' % (ch, ch)
for ch, v in enumerate((120, 124)):
    for k, nm in enumerate(('ERI', 'RXI', 'TXI', 'TEI')):
        VEC_NAMES[v + k] = '%s%d(SCI%d)' % (nm, ch, ch)
VEC_NAMES[126 + 8] = 'ADI(ADC)'
VEC_NAMES[136] = 'ITI(WDT)'
VEC_NAMES[137] = 'CMI(REF)'


def s16(x):
    return x - 0x10000 if x & 0x8000 else x


def s32(x):
    return x - (1 << 32) if x & 0x80000000 else x


def isint(v):
    return isinstance(v, int)


def plausible_fn(c, v, limit=3000):
    """Linear sweep from v: valid opcodes until an unconditional exit."""
    pc = v
    for _ in range(limit):
        if pc + 2 > ROM_END or c.w(pc) == 0xFFFF:
            return False
        i = decode(c.w(pc))
        if i.mn == '.word':
            return False
        if i.flow in ('rts', 'rte', 'bra', 'jmp'):
            return True
        pc += 2
    return False


def covers(x, y):
    """True if abstract value x covers y (None = anything, frozenset = any member)."""
    if x is None or x == y:
        return True
    if isinstance(x, frozenset):
        if isinstance(y, frozenset):
            return y <= x
        return y in x
    return False


def is_rd(v):
    return isinstance(v, tuple) and v[0] == 'rd'


def rd_op(v, op, imm, byte=False):
    """Track bits an I/O read-modify-write can set (ors) or keep (ands)."""
    _, ea, size, ors, ands = v
    if op == 'AND':
        ands &= imm & M32
    elif op == 'OR':
        ors |= imm
    elif op == 'XOR':
        ors |= imm
        ands &= ~imm & M32
    return ('rd', ea, size, ors, ands)


def code_like(v):
    return isint(v) and 0x100 <= v < 0xFB00 and not (v & 1)


class Census:
    STATE_CAP = 8

    def __init__(self, img, name=''):
        self.img = img
        self.name = name
        self.reset()
        self.clobber = {}
        self.extra_roots = set()
        self.follow_literals = True
        self.follow_data = True

    def reset(self):
        self.code = {}
        self.states = {}        # pc -> list of state tuples seen
        self.acc = collections.defaultdict(set)    # addr -> {(dir,size,pc)}
        self.ext = collections.defaultdict(set)
        self.idx_io = collections.defaultdict(set)  # base -> {(dir,size,pc)} indexed on-chip accesses
        self.unres = []
        self.stack_acc = 0
        self.calls = collections.defaultdict(set)
        self.fn_entries = set()
        self.indirect = []
        self.tables = {}
        self.mn_count = collections.Counter()
        self.ldc_vbr = set()
        self.writes_val = collections.defaultdict(set)   # byte addr -> {(kind, byte|None)}
        self.wr_full = collections.defaultdict(set)      # (addr,size) -> {value|None}
        self.dyn_sites = collections.defaultdict(set)    # addr -> pcs writing an unknown value
        self.restores = collections.defaultdict(set)     # addr -> pcs restoring a saved value
        self.fn_body = collections.defaultdict(set)
        self.fn_of = {}
        self.ptr_loads = set()   # pcs of pc-relative literal loads that were executed

    # ---- memory image helpers
    def b(self, a):
        return self.img[a]

    def w(self, a):
        return (self.img[a] << 8) | self.img[a + 1]

    def l(self, a):
        return int.from_bytes(self.img[a:a + 4], 'big')

    def vec(self, n):
        return self.l(4 * n)

    @staticmethod
    def join(a, b):
        out = []
        for i, (x, y) in enumerate(zip(a, b)):
            if x == y:
                out.append(x)
            elif i == GBR and x is not None and y is not None:
                u = (x if isinstance(x, frozenset) else frozenset([x])) | (y if isinstance(y, frozenset) else frozenset([y]))
                out.append(u if len(u) <= 12 else None)
            else:
                out.append(None)
        return tuple(out)

    # ---- state set management
    def add_state(self, pc, st):
        """Record st at pc. Returns True if it adds information."""
        cur = self.states.setdefault(pc, [])
        for t in cur:
            if all(covers(x, y) for x, y in zip(t, st)):
                return False
        cur[:] = [t for t in cur if not all(covers(x, y) for x, y in zip(st, t))]
        if len(cur) >= self.STATE_CAP:
            j = st
            for t in cur:
                j = self.join(j, t)
            cur[:] = [j]
            return True
        cur.append(st)
        return True

    # ---- accesses
    def rec(self, pc, ins, ea, size, d, base_desc, val=None):
        if ea is None:
            if base_desc == 'sp':
                self.stack_acc += 1
            else:
                self.unres.append((pc, ins.text, d, size, base_desc))
            return
        if isinstance(ea, tuple):      # ('off', base): indexed access, base known
            base = ea[1]
            if IO_LO <= base <= IO_HI:
                self.idx_io[base].add((d, size, pc))
            return
        ea &= M32
        if IO_LO <= ea <= IO_HI:
            self.acc[ea].add((d, size, pc))
            if 'W' in d:
                if isint(val):
                    v = val & ((1 << (8 * size)) - 1)
                    self.wr_full[(ea, size)].add(v)
                    for k in range(size):
                        self.writes_val[ea + k].add(('set', (v >> (8 * (size - 1 - k))) & 0xFF))
                elif isinstance(val, tuple) and val[0] in ('and', 'or', 'xor'):
                    self.writes_val[ea].add((val[0], val[1]))
                elif isinstance(val, tuple) and val[0] == 'keep':
                    # restore of a value that was saved from the same register: no new bits
                    self.restores[ea].add(pc)
                    for k in range(size):
                        self.writes_val[ea + k].add(('keep', 0))
                elif is_rd(val) and val[1] + val[2] == ea + size and size <= val[2]:
                    # read-modify-write of the same register: only the OR/AND constants matter
                    for k in range(size):
                        sh = 8 * (size - 1 - k)
                        ob = (val[3] >> sh) & 0xFF
                        ab = (val[4] >> sh) & 0xFF
                        if ob:
                            self.writes_val[ea + k].add(('or', ob))
                        if ab != 0xFF:
                            self.writes_val[ea + k].add(('and', ab))
                        if not ob and ab == 0xFF:
                            self.writes_val[ea + k].add(('keep', 0))
                else:
                    self.wr_full[(ea, size)].add(None)
                    self.dyn_sites[ea].add(pc)
                    for k in range(size):
                        self.writes_val[ea + k].add(('set', None))
        else:
            self.ext[ea].add((d, size, pc))

    def is_stack_restore(self, pc, reg):
        """True if the previous instruction is `mov.l @r15+,reg` (a register restored from the stack)."""
        if pc < 2:
            return False
        i = decode(self.w(pc - 2))
        return i.mn == 'MOV.L' and i.mem == ('post', 4, 'R') and i.m == 15 and i.n == reg

    def load_value(self, ea, size):
        if isint(ea) and IO_LO <= (ea & M32) <= IO_HI:
            return ('rd', ea & M32, size, 0, 0xFFFFFFFF)   # value read from an I/O register, tracked for RMW
        return self.rom_load(ea, size)

    def rom_load(self, ea, size):
        if ea is None:
            return None
        if isinstance(ea, tuple):
            return ('tbl', ea[1]) if size == 4 else None
        ea &= M32
        if ea + size <= ROM_END and not (RAM_REGION[0] <= ea < RAM_REGION[1]):
            if size == 1:
                v = self.b(ea)
                return v - 256 if v & 0x80 else v
            if size == 2:
                return s16(self.w(ea))
            return self.l(ea)
        return None

    # ---- abstract step
    def step(self, pc, ins, st):
        """st is a list, mutated in place."""
        mn = ins.mn
        n, m = ins.n, ins.m

        def K(r):
            return st[r]

        def setr(r, v):
            st[r] = (v & M32) if isint(v) else v

        def ival(r):
            v = st[r]
            return v if isint(v) else None

        if ins.mem:
            mode, size, d = ins.mem
            if mode == 'pcrel':
                if size == 4:
                    ea = ((pc + 4) & ~3) + ins.disp
                    v = self.l(ea)
                else:
                    ea = pc + 4 + ins.disp
                    v = s16(self.w(ea)) & M32
                self.ptr_loads.add((pc, ea))
                setr(n, v)
                return
            ea = None
            desc = None
            if mode in ('gbrd', 'gbr0'):
                g = K(GBR)
                gs = list(g) if isinstance(g, frozenset) else ([g] if isint(g) else [])
                gval = None
                if d == 'W' and mn.startswith('MOV'):
                    gval = K(0)
                    if gval is None and self.is_stack_restore(pc, 0):
                        gval = ('keep',)
                elif mn in ('AND.B', 'OR.B', 'XOR.B'):
                    gval = (mn[:-2].lower(), ins.imm)
                r0 = K(0)
                if not gs:
                    self.rec(pc, ins, None, size, d, 'gbr(unknown)' if mode == 'gbrd' else 'gbr+r0(unknown)', gval)
                    ea = None
                for gv in gs:
                    ea = None
                    desc = None
                    if mode == 'gbrd':
                        ea = gv + ins.disp
                    elif isint(r0):
                        ea = gv + r0
                    else:
                        ea = ('off', gv)
                    self.rec(pc, ins, ea, size, d, desc, gval)
                if 'R' in d and mn.startswith('MOV'):
                    setr(0, self.load_value(ea if len(gs) == 1 else None, size))
                return
            if mn in ('MAC.W', 'MAC.L'):
                base = m
            elif mode in ('post', 'pre') and mn.startswith(('LDS', 'LDC', 'STS', 'STC')):
                base = n
            elif mn == 'TAS.B':
                base = n
            elif d == 'R':
                base = m
            else:
                base = n
            bv = K(base)
            desc = 'sp' if base == 15 else 'r%d' % base
            if mode in ('ind', 'post'):
                ea = bv if isint(bv) else (('off', bv[1]) if isinstance(bv, tuple) and bv[0] == 'off' else None)
            elif mode == 'disp':
                if isint(bv):
                    ea = bv + ins.disp
                elif isinstance(bv, tuple) and bv[0] == 'off':
                    ea = ('off', bv[1] + ins.disp)
            elif mode == 'r0':
                r0 = K(0)
                if isint(bv) and isint(r0):
                    ea = bv + r0
                elif isint(bv) and r0 is None and code_or_io(bv):
                    ea = ('off', bv)
                elif isint(r0) and bv is None and code_or_io(r0):
                    ea = ('off', r0)
                else:
                    desc = ('r%d+r0' % base) if base != 15 else 'sp'
            elif mode == 'pre':
                ea = (bv - size) & M32 if isint(bv) else None
                setr(base, ea)
            val = None
            if d == 'W' and mn.startswith('MOV'):
                src = 0 if (ins.op >> 12) == 8 else m
                val = K(src)
                if val is None and self.is_stack_restore(pc, src):
                    val = ('keep',)
            self.rec(pc, ins, ea, size, d, desc, val)
            if mode == 'post':
                if mn in ('MAC.W', 'MAC.L'):
                    setr(m, None)
                    setr(n, None)
                else:
                    setr(base, bv + size if isint(bv) else None)
            if d == 'R' and mn.startswith('MOV'):
                setr(n, self.load_value(ea, size))
            return

        if mn == 'MOV#':
            setr(n, ins.imm)
        elif mn == 'MOV':
            setr(n, K(m))
        elif mn == 'ADD#':
            v = K(n)
            if isint(v):
                setr(n, v + ins.imm)
            elif isinstance(v, tuple) and v[0] == 'off':
                setr(n, ('off', v[1] + ins.imm))
            else:
                setr(n, None)
        elif mn == 'ADD':
            a, b = K(n), K(m)
            if isint(a) and isint(b):
                setr(n, a + b)
            elif isint(a) and b is None and code_or_io(a):
                setr(n, ('off', a))
            elif isint(b) and a is None and code_or_io(b):
                setr(n, ('off', b))
            else:
                setr(n, None)
        elif mn == 'SUB':
            a, b = ival(n), ival(m)
            setr(n, None if a is None or b is None else a - b)
        elif mn in ('AND', 'OR', 'XOR'):
            a, b = K(n), K(m)
            if isint(a) and isint(b):
                setr(n, {'AND': a & b, 'OR': a | b, 'XOR': a ^ b}[mn])
            elif is_rd(a) and isint(b):
                setr(n, rd_op(a, mn, b))
            elif is_rd(b) and isint(a):
                setr(n, rd_op(b, mn, a))
            else:
                setr(n, None)
        elif mn in ('AND#', 'OR#', 'XOR#'):
            v = K(0)
            if isint(v):
                setr(0, {'AND#': v & ins.imm, 'OR#': v | ins.imm, 'XOR#': v ^ ins.imm}[mn])
            elif is_rd(v):
                # the 8-bit immediate is zero-extended; AND# clears the upper bits too
                setr(0, rd_op(v, mn[:-1], ins.imm, byte=True))
            else:
                setr(0, None)
        elif mn in ('SHLL', 'SHAL'):
            v = ival(n)
            setr(n, None if v is None else v << 1)
        elif mn == 'SHLR':
            v = ival(n)
            setr(n, None if v is None else v >> 1)
        elif mn == 'SHAR':
            v = ival(n)
            setr(n, None if v is None else s32(v) >> 1)
        elif mn in ('SHLL2', 'SHLL8', 'SHLL16'):
            v = ival(n)
            setr(n, None if v is None else v << int(mn[4:]))
        elif mn in ('SHLR2', 'SHLR8', 'SHLR16'):
            v = ival(n)
            setr(n, None if v is None else v >> int(mn[4:]))
        elif mn in ('EXTU.B', 'EXTU.W') and is_rd(K(m)):
            setr(n, rd_op(K(m), 'AND', 0xFF if mn == 'EXTU.B' else 0xFFFF))
        elif mn == 'EXTU.B':
            v = ival(m)
            setr(n, None if v is None else v & 0xFF)
        elif mn == 'EXTU.W':
            v = ival(m)
            setr(n, None if v is None else v & 0xFFFF)
        elif mn == 'EXTS.B':
            v = ival(m)
            setr(n, None if v is None else ((v & 0xFF) - 256 if v & 0x80 else v & 0xFF))
        elif mn == 'EXTS.W':
            v = ival(m)
            setr(n, None if v is None else s16(v & 0xFFFF))
        elif mn == 'NEG':
            v = ival(m)
            setr(n, None if v is None else -v)
        elif mn == 'NOT':
            v = ival(m)
            setr(n, None if v is None else ~v)
        elif mn == 'SWAP.W':
            v = ival(m)
            setr(n, None if v is None else ((v << 16) | (v >> 16)))
        elif mn == 'SWAP.B':
            v = ival(m)
            setr(n, None if v is None else (v & 0xFFFF0000) | ((v & 0xFF) << 8) | ((v >> 8) & 0xFF))
        elif mn == 'MOVA':
            setr(0, ((pc + 4) & ~3) + ins.disp)
        elif mn == 'LDC':
            ctl = ins.text.split(',')[1]
            if ctl == 'gbr':
                v = K(n)
                st[GBR] = v if (isint(v) or isinstance(v, frozenset)) else None
            elif ctl == 'vbr':
                st[VBR] = ival(n)
                self.ldc_vbr.add((pc, ival(n)))
        elif mn == 'STC':
            ctl = ins.text.split(' ')[1].split(',')[0]
            gv = st[GBR] if ctl == 'gbr' else st[VBR] if ctl == 'vbr' else None
            setr(n, gv if isint(gv) else None)
        else:
            for r in self.dest_regs(ins):
                if r < 16:
                    st[r] = None
            if mn in ('LDC.L',):
                ctl = ins.text.split(',')[1]
                if ctl == 'gbr':
                    st[GBR] = None
                elif ctl == 'vbr':
                    st[VBR] = None

    def table_targets(self, base):
        """Enumerate a ROM table of code pointers starting at base."""
        if base in self.tables:
            return self.tables[base]
        out = []
        a = base
        while a + 4 <= ROM_END and a % 4 == 0:
            v = self.l(a)
            if not code_like(v) or decode(self.w(v)).mn == '.word':
                break
            out.append(v)
            a += 4
            if len(out) >= 256:
                break
        self.tables[base] = out
        return out

    # ---- driver
    def run(self):
        self.vector_roots = {v: self.vec(v) for v in range(0, 128)}
        roots = {self.vector_roots[0], self.vector_roots[2]}
        for v, t in self.vector_roots.items():
            if v not in (0, 1, 2, 3) and 0x100 <= t < ROM_END and t % 2 == 0:
                roots.add(t)
        roots |= self.extra_roots
        self.roots = roots
        self.addr_taken = set()
        self.origin = {}
        for it in range(16):
            self._pass(roots | self.addr_taken)
            before = {k: set(v) for k, v in self.clobber.items()}
            self.compute_clobber()
            # words that look like code pointers become roots (callbacks stored to RAM, handler tables)
            new = set()
            if self.follow_literals:
                for pc, ea in self.ptr_loads:
                    if ea % 4 == 0:
                        v = self.l(ea)
                        if code_like(v) and v not in self.code and plausible_fn(self, v):
                            new.add(v)
                            self.origin.setdefault(v, 'literal@%05X' % ea)
            if self.follow_data:
                inside = set()
                for pc in self.code:
                    inside.add(pc & ~3)
                for a in range(0, ROM_END, 4):
                    if a in inside or RAM_REGION[0] <= a < RAM_REGION[1]:
                        continue
                    v = self.l(a)
                    if code_like(v) and v not in self.code and self.w(v) != 0xFFFF and plausible_fn(self, v):
                        new.add(v)
                        self.origin.setdefault(v, 'data@%05X' % a)
            if before == self.clobber and not (new - self.addr_taken):
                break
            self.addr_taken |= new
        self.n_pass = it

    def _pass(self, roots):
        self.reset()
        self.fn_entries = set(roots)
        work = []
        blank = tuple([None] * 18)
        for r in roots:
            self.push(work, r, blank, r)
        while work:
            pc, st, fn = work.pop()
            self.exec_from(pc, list(st), fn, work)

    def push(self, work, pc, st, fn):
        if not isint(pc) or pc >= ROM_END or pc & 1:
            return
        st = tuple(st)
        if self.add_state(pc, st):
            work.append((pc, st, fn))

    def exec_from(self, pc, st, fn, work):
        first = True
        while True:
            if pc >= ROM_END or pc < 0:
                return
            if not first:
                if not self.add_state(pc, tuple(st)):
                    return
            first = False
            ins = decode(self.w(pc))
            self.code[pc] = ins
            self.fn_body[fn].add(pc)
            if ins.mn == '.word':
                return
            if ins.flow is None:
                self.step(pc, ins, st)
                pc += 2
                continue
            fl = ins.flow
            slot = decode(self.w(pc + 2)) if ins.delay else None
            if fl in ('bra', 'bsr', 'bt', 'bf'):
                tgts = [pc + 4 + 2 * ins.imm]
            elif fl in ('jmp', 'jsr'):
                v = st[ins.n]
                if isint(v):
                    tgts = [v]
                elif isinstance(v, tuple) and v[0] == 'tbl':
                    tgts = list(self.table_targets(v[1]))
                    if not tgts:
                        tgts = None
                else:
                    tgts = None
            elif fl in ('braf', 'bsrf'):
                v = st[ins.n]
                tgts = [pc + 4 + v] if isint(v) else None
            else:
                tgts = []
            tst = list(st)
            if slot is not None:
                self.code[pc + 2] = slot
                self.fn_body[fn].add(pc + 2)
                if slot.flow is None:
                    self.step(pc + 2, slot, tst)
            if fl in ('bt', 'bf'):
                self.push(work, tgts[0], tst, fn)
                pc += 4 if ins.delay else 2
                st = tst
                continue
            if fl == 'bra':
                self.push(work, tgts[0], tst, fn)
                return
            if fl in ('jmp', 'braf'):
                if tgts is None:
                    self.indirect.append((pc, ins.text))
                else:
                    for t in tgts:
                        self.push(work, t, tst, fn)
                return
            if fl in ('bsr', 'jsr', 'bsrf'):
                if tgts is None:
                    self.indirect.append((pc, ins.text))
                    after = list(tst)
                    for r in list(range(0, 8)) + [GBR]:
                        after[r] = None
                else:
                    after = list(tst)
                    clob = set()
                    unknown = False
                    for t in tgts:
                        self.calls[fn].add(t)
                        self.fn_entries.add(t)
                        self.push(work, t, tst, t)
                        if t in self.clobber:
                            clob |= self.clobber[t]
                        else:
                            unknown = True
                    if unknown:
                        clob |= set(range(0, 8)) | {GBR}
                    for r in clob:
                        after[r] = None
                st = after
                pc += 4
                continue
            if fl == 'trapa':
                for r in range(8):
                    st[r] = None
                pc += 2
                continue
            return  # rts / rte

    def compute_clobber(self):
        res = {}
        for fn, body in self.fn_body.items():
            wr = set()
            pushed = set()
            popped = set()
            for p in body:
                i = self.code[p]
                wr |= self.dest_regs(i)
                if i.mem and i.mem[0] == 'pre' and i.mn.startswith('MOV') and i.n == 15:
                    pushed.add(i.m)
                if i.mem and i.mem[0] == 'post' and i.mn.startswith('MOV') and i.m == 15:
                    popped.add(i.n)
            wr -= (pushed & popped)
            wr.discard(15)
            res[fn] = wr
        changed = True
        while changed:
            changed = False
            for fn, callees in self.calls.items():
                for c in callees:
                    add = res.get(c, set()) - res.get(fn, set())
                    if add:
                        res.setdefault(fn, set()).update(add)
                        changed = True
        for fn, body in self.fn_body.items():
            for p in body:
                i = self.code[p]
                if i.flow in ('jsr', 'bsrf') and (p, i.text) in set(self.indirect):
                    res[fn] |= set(range(8))
        self.clobber = res

    @staticmethod
    def dest_regs(i):
        d = set()
        mn = i.mn
        if i.mem and i.mem[2] == 'R' and mn.startswith('MOV') and i.mem[0] != 'pcrel':
            d.add(i.n)
        if i.mem and i.mem[0] == 'pcrel':
            d.add(i.n)
        if i.mem and i.mem[0] == 'post' and (mn.startswith('MOV') or mn in ('MAC.W', 'MAC.L')):
            d.add(i.m)
        if i.mem and i.mem[0] == 'post' and mn in ('MAC.W', 'MAC.L'):
            d.add(i.n)
        if i.mem and i.mem[0] == 'post' and mn.startswith(('LDS', 'LDC')):
            d.add(i.n)
        if i.mem and i.mem[0] == 'pre':
            d.add(i.n)
        if mn in DEST_N:
            d.add(i.n)
        if mn in ('AND#', 'OR#', 'XOR#', 'MOVA'):
            d.add(0)
        if mn in ('LDC', 'LDC.L'):
            ctl = i.text.split(',')[1]
            if ctl == 'gbr':
                d.add(GBR)
            elif ctl == 'vbr':
                d.add(VBR)
        d.discard(None)
        return d


def code_or_io(v):
    return isint(v) and (0x100 <= v < ROM_END or IO_LO <= v <= IO_HI)


DEST_N = {'MOV', 'MOV#', 'ADD#', 'ADD', 'SUB', 'AND', 'OR', 'XOR', 'NOT', 'NEG', 'SWAP.B', 'SWAP.W', 'EXTU.B',
          'EXTU.W', 'EXTS.B', 'EXTS.W', 'SHLL', 'SHLR', 'SHAL', 'SHAR', 'SHLL2', 'SHLL8', 'SHLL16', 'SHLR2',
          'SHLR8', 'SHLR16', 'XTRCT', 'DIV1', 'NEGC', 'SUBC', 'SUBV', 'ADDC', 'ADDV', 'ROTL', 'ROTR', 'ROTCL',
          'ROTCR', 'DT', 'MOVT', 'STS', 'STC'}



def usage_report(c):
    """Return (used mnemonics, unused SH-1/SH-2 mnemonics)."""
    cnt = collections.Counter(i.mn for i in c.code.values())
    return cnt


ALL_MN = """MOV.B MOV.W MOV.L MOV MOV# ADD ADD# ADDC ADDV SUB SUBC SUBV NEG NEGC AND AND# OR OR# XOR XOR# NOT TST TST#
TST.B AND.B OR.B XOR.B CMP/EQ CMP/EQ# CMP/HS CMP/GE CMP/HI CMP/GT CMP/PZ CMP/PL CMP/STR DIV0S DIV0U DIV1 DT EXTS.B
EXTS.W EXTU.B EXTU.W MOVA MOVT SWAP.B SWAP.W XTRCT SHLL SHLR SHAL SHAR ROTL ROTR ROTCL ROTCR SHLL2 SHLR2 SHLL8 SHLR8
SHLL16 SHLR16 MUL.L MULS.W MULU.W DMULS.L DMULU.L MAC.L MAC.W CLRMAC STS STC LDS LDC STS.L STC.L LDS.L LDC.L
BRA BSR BRAF BSRF JMP JSR RTS RTE BT BF BT/S BF/S TRAPA NOP CLRT SETT SLEEP TAS.B""".split()


def load_image(path):
    """Load a MIF; images stored byte-swapped per 32-bit word (SP vector 0x0F001000) are swapped back."""
    img = load_mif(path)
    if int.from_bytes(img[4:8], 'little') == 0x0F001000:
        for a in range(0, len(img), 4):
            img[a:a + 4] = img[a:a + 4][::-1]
    return img


def analyse(path, conservative=True):
    img = load_image(path)
    c = Census(img, os.path.basename(path))
    c.follow_literals = conservative
    c.follow_data = conservative
    c.run()
    return c


def reg_masks(c, base, nbytes):
    """Return (ever1, ever0, dynamic) masks over the register bytes (MSB byte first)."""
    e1 = e0 = 0
    dyn = False
    for k in range(nbytes):
        sh = 8 * (nbytes - 1 - k)
        for kind, v in c.writes_val.get(base + k, ()):
            if v is None:
                dyn = True
            elif kind == 'set':
                e1 |= v << sh
                e0 |= (~v & 0xFF) << sh
            elif kind == 'or':
                e1 |= v << sh
            elif kind == 'and':
                e0 |= (~v & 0xFF) << sh
            elif kind == 'keep':
                pass
            elif kind == 'xor':
                e1 |= v << sh
                e0 |= v << sh
    return e1, e0, dyn


def fmt_writes(c, base, e):
    nbytes = next((sz for a, sz, n, m in REGS if a == base), 1)
    e1, e0, dyn = reg_masks(c, base, nbytes)
    vals = sorted(v for (a, sz), vs in c.wr_full.items() if a == base and sz == nbytes for v in vs if v is not None)
    if not e['W']:
        return ''
    w = 2 * nbytes
    txt = ' ever1=%0*X ever0=%0*X%s' % (w, e1, w, e0, ' DYN' if dyn else '')
    if vals:
        txt += ' set=' + ','.join('%0*X' % (w, v) for v in sorted(set(vals))[:8])
    return txt


def fmt_reg(a):
    if a in REG_AT:
        base, n, m = REG_AT[a]
        return '%s.%s' % (m, n)
    return 'unmapped'


def summarize(c):
    out = collections.OrderedDict()
    per_reg = collections.OrderedDict()
    for a in sorted(c.acc):
        base, n, m = REG_AT.get(a, (a, 'unmapped@%07X' % a, 'unmapped'))
        e = per_reg.setdefault((base, n, m), {'R': set(), 'W': set(), 'sizes': set(), 'pcs': set()})
        for d, s, pc in c.acc[a]:
            if 'R' in d:
                e['R'].add(pc)
            if 'W' in d:
                e['W'].add(pc)
            e['sizes'].add(s)
            e['pcs'].add(pc)
    return per_reg


def ext_areas(c):
    areas = collections.defaultdict(lambda: {'R': 0, 'W': 0, 'lo': None, 'hi': None})
    for a, s in c.ext.items():
        if a < ROM_END:
            continue
        ar = 'RAM(0xF)' if (a >> 24) == 0xF else (a >> 24) & 7
        e = areas[ar]
        for d, sz, pc in s:
            if 'R' in d:
                e['R'] += 1
            if 'W' in d:
                e['W'] += 1
        e['lo'] = a if e['lo'] is None else min(e['lo'], a)
        e['hi'] = a if e['hi'] is None else max(e['hi'], a)
    return areas


def io_literals(img):
    """All aligned 32-bit words in the image that fall in the on-chip I/O range, and where."""
    out = collections.defaultdict(list)
    for a in range(0, len(img) - 3, 4):
        v = int.from_bytes(img[a:a + 4], 'big')
        if IO_LO <= v <= IO_HI:
            out[v].append(a)
    return out


def module_of(a):
    return REG_AT[a][2] if a in REG_AT else 'unmapped'


def report(path, out):
    P = analyse(path, False)
    C = analyse(path, True)
    pr = lambda *a: print(*a, file=out)
    pr('=' * 78)
    pr('image: %s' % path)
    pr('reset PC %08X SP %08X | manual reset PC %08X SP %08X' % (C.vec(0), C.vec(1), C.vec(2), C.vec(3)))
    pr('precise trace (vectors + resolved calls/tables): %d instructions, %d functions'
       % (len(P.code), len(P.fn_entries)))
    pr('conservative trace (+ %d address-taken roots from literal pools / data words): %d instructions, %d functions'
       % (len(C.addr_taken), len(C.code), len(C.fn_entries)))
    pr('VBR writes: %s' % sorted(C.ldc_vbr))
    cnt = collections.Counter(C.vector_roots[v] for v in range(4, 128))
    default, _ = cnt.most_common(1)[0]
    pr('default vector target %06X (%d entries); non-default vectors:' % (default, cnt[default]))
    for v in range(4, 128):
        t = C.vector_roots[v]
        if t != default:
            pr('  vec %3d  %-16s -> %06X' % (v, VEC_NAMES.get(v, '?'), t))
    per = summarize(C)
    perP = summarize(P)
    pr('on-chip register accesses (C = also reached only by the conservative trace):')
    mods = collections.OrderedDict()
    for (base, n, m), e in per.items():
        mods.setdefault(m, []).append((base, n, e))
    for m, lst in mods.items():
        pr('  [%s]' % m)
        for base, n, e in lst:
            tag = '  ' if (base, n, m) in perP else 'C '
            pr('   %s%07X %-10s R:%-3d W:%-3d sz=%s%s' % (tag, base, n, len(e['R']), len(e['W']),
                                                       ''.join(map(str, sorted(e['sizes']))), fmt_writes(C, base, e)))
    pr('indexed on-chip accesses (base known, offset not): %s' % {hex(k): len(v) for k, v in C.idx_io.items()})
    pr('external bus accesses (resolved, by area):')
    for ar, e in sorted(ext_areas(C).items(), key=lambda kv: str(kv[0])):
        pr('  area %s  R-sites=%d W-sites=%d  range %08X..%08X' % (ar, e['R'], e['W'], e['lo'], e['hi']))
    byb = collections.Counter(u[4] for u in C.unres)
    pr('unresolved memory accesses: %d (+%d stack); by base register: %s'
       % (len(C.unres), C.stack_acc, dict(byb.most_common())))
    pr('unresolved indirect jumps/calls: %s' % sorted(set(C.indirect)))
    lits = io_literals(C.img)
    loaded = {}
    for pc, ea in C.ptr_loads:
        v = C.l(ea) if ea % 4 == 0 else None
        if v in lits:
            loaded.setdefault(v, set()).add(pc)
    pr('on-chip I/O address literals in the image: %d distinct; not loaded by any reachable instruction: %s'
       % (len(lits), ['%08X' % v for v in sorted(lits) if v not in loaded]))
    mn = collections.Counter(i.mn for i in C.code.values())
    pr('reachable mnemonics: %s' % dict(mn.most_common()))
    pr('SH-1 mnemonics never reached: %s' % [x for x in ALL_MN if x not in mn and x not in
                                              ('MAC.L', 'MUL.L', 'DMULS.L', 'DMULU.L', 'BRAF', 'BSRF', 'BT/S', 'BF/S', 'DT')])
    pr('SH-2-only encodings (not valid on SH-1) in reachable code: %d' % sum(1 for i in C.code.values() if 'sh2-only' in i.text))
    modes = collections.Counter()
    for i in C.code.values():
        if i.mem:
            modes[(i.mem[0], i.mem[1])] += 1
    pr('addressing modes (mode,size): %s' % dict(sorted(modes.items())))
    return P, C



# ---- consistency check of src/.../SH7034_fw.sv against the census
# name -> (registers in channel order, write mask, reset value, what the constant means)
FW_REGS = {
    'TSTR': ([0x5FFFF00], 0x1F, 0xE0, 'set'), 'TCR': ([0x5FFFF04, 0x5FFFF0E, 0x5FFFF18, 0x5FFFF22, 0x5FFFF32], 0x7F, 0x00, 'set'),
    'TIOR': ([0x5FFFF05, 0x5FFFF0F, 0x5FFFF19, 0x5FFFF23, 0x5FFFF33], 0x77, 0x88, 'set'),
    'TIER': ([0x5FFFF06, 0x5FFFF10, 0x5FFFF1A, 0x5FFFF24, 0x5FFFF34], 0x07, 0xF8, 'set'),
    'GRA_ONE': ([0x5FFFF0A, 0x5FFFF14, 0x5FFFF1E, 0x5FFFF28, 0x5FFFF38], 0xFFFF, 0xFFFF, 'one'),
    'GRB_ONE': ([0x5FFFF0C, 0x5FFFF16, 0x5FFFF20, 0x5FFFF2A, 0x5FFFF3A], 0xFFFF, 0xFFFF, 'one'),
    'CHCR': ([0x5FFFF4E, 0x5FFFF5E, 0x5FFFF6E, 0x5FFFF7E], 0xFFFF, 0x0000, 'set'),
    'DMAOR': ([0x5FFFF48], 0x0307, 0x0000, 'set'),
    'IPRA': ([0x5FFFF84], 0xFFFF, 0, 'set'), 'IPRB': ([0x5FFFF86], 0xFFFF, 0, 'set'), 'IPRC': ([0x5FFFF88], 0xFFFF, 0, 'set'),
    'IPRD': ([0x5FFFF8A], 0xFFFF, 0, 'set'), 'IPRE': ([0x5FFFF8C], 0xFFF0, 0, 'set'), 'ICR': ([0x5FFFF8E], 0x01FF, 0, 'set'),
    'SMR': ([0x5FFFEC0], 0xFF, 0, 'set'), 'SCR': ([0x5FFFEC2], 0xFF, 0, 'set'),
    'BCR': ([0x5FFFFA0], 0xF800, 0, 'set'), 'DCR': ([0x5FFFFA8], 0xFF00, 0, 'set'), 'PCR': ([0x5FFFFAA], 0xF800, 0, 'set'),
    'PADR': ([0x5FFFFC0], 0xFFFF, 0, 'set'), 'PBDR': ([0x5FFFFC2], 0xFFFF, 0, 'set'),
    'PAIOR': ([0x5FFFFC4], 0xFFFF, 0, 'set'), 'PBIOR': ([0x5FFFFC6], 0xFFFF, 0, 'set'),
    'PACR1': ([0x5FFFFC8], 0xFFFF, 0, 'set'), 'PACR2': ([0x5FFFFCA], 0xFFFF, 0, 'set'),
    'PBCR1': ([0x5FFFFCC], 0xFFFF, 0, 'set'), 'PBCR2': ([0x5FFFFCE], 0xFFFF, 0, 'set'),
}


def check_fw(path, union):
    import re
    txt = open(path).read()
    bad = 0
    for m in re.finditer(r"localparam\s+bit\s*(?:\[[^\]]+\]\s*)*(\w+)\s*=\s*([^;]+);", txt):
        name, rhs = m[1], m[2]
        if name not in FW_REGS:
            continue
        regs, wmask, init, kind = FW_REGS[name]
        vals = [int(x, 16) for x in re.findall(r"\d+'h([0-9A-Fa-f]+)", rhs)][::-1]   # ch0 = lowest
        for i, a in enumerate(regs):
            if i >= len(vals):
                break
            u = union.get('%07X' % a)
            if u is None:
                continue          # never written: any mask is safe
            if kind == 'set':
                miss = u['ever1'] & wmask & ~vals[i] & ~init
                if miss:
                    print('FAIL %s[%d] (%07X): firmware sets %X not in mask %X' % (name, i, a, u['ever1'], vals[i]))
                    bad += 1
                if u['dyn']:
                    print('NOTE %s[%d] (%07X): has writes of unknown value' % (name, i, a))
            else:
                miss = u['ever0'] & vals[i]
                if miss:
                    print('FAIL %s[%d] (%07X): firmware clears stuck bits %X' % (name, i, a, miss))
                    bad += 1
    print('check-fw: %s' % ('FAILED (%d)' % bad if bad else 'ok'))
    return bad


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('images', nargs='+')
    ap.add_argument('--json', help='write per-register masks (union over images) as JSON')
    ap.add_argument('--check-fw', metavar='SH7034_fw.sv', help='verify the RTL write masks cover everything the firmware writes')
    args = ap.parse_args()
    union = {}
    for path in args.images:
        P, C = report(path, sys.stdout)
        touched = set()
        for a in list(C.acc):
            if a in REG_AT:
                touched.add(REG_AT[a][0])
        for a in list(C.writes_val):
            if a in REG_AT:
                touched.add(REG_AT[a][0])
        for base, nbytes, n, m in REGS:
            if base not in touched:
                continue
            e1, e0, dyn = reg_masks(C, base, nbytes)
            r = sum(1 for k in range(nbytes) if any('R' in d for d, sz, pc in C.acc.get(base + k, ())))
            w = sum(1 for k in range(nbytes) if base + k in C.writes_val)
            u = union.setdefault('%07X' % base, {'name': n, 'module': m, 'bytes': nbytes, 'R': 0, 'W': 0,
                                                 'ever1': 0, 'ever0': 0, 'dyn': False, 'images': []})
            u['R'] += r
            u['W'] += w
            u['ever1'] |= e1
            u['ever0'] |= e0
            u['dyn'] |= dyn
            u['images'].append(os.path.basename(path))
    if args.json:
        json.dump(union, open(args.json, 'w'), indent=1, sort_keys=True)
    if args.check_fw:
        sys.exit(1 if check_fw(args.check_fw, union) else 0)


if __name__ == '__main__':
    main()
