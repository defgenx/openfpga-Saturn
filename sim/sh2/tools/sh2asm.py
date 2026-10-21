"""Minimal SH-2 assembler used by the SH-2 differential tests.

Instructions are methods on Asm; operands are register numbers (0-15) or ints.
Labels resolve in a second pass; literal pools are placed by pool().
"""
import struct


class Asm:
    def __init__(self, base=0):
        self.base = base
        self.items = []          # ('w', word) | ('l', value) | ('lab', name) | ('fix', kind, label, ...)
        self.labels = {}
        self.pending_lits = []   # (index of item, value or label)
        self.pc = base

    # ---- layout ----
    def here(self):
        return self.pc

    def label(self, name):
        assert name not in self.labels, name
        self.labels[name] = self.pc

    def w(self, word):
        self.items.append(('w', self.pc, word & 0xFFFF))
        self.pc += 2

    def l(self, val):
        assert self.pc % 4 == 0
        self.items.append(('l', self.pc, val))
        self.pc += 4

    def align4(self, fill_nop=True):
        if self.pc % 4:
            self.w(0x0009)

    def org(self, addr):
        assert addr >= self.pc, (hex(addr), hex(self.pc))
        while self.pc < addr:
            self.w(0x0009)

    # ---- fixups ----
    def _fix(self, kind, label, word):
        self.items.append(('fix', self.pc, kind, label, word))
        self.pc += 2

    # ---- literal pool ----
    def lit(self, rn, val):
        """MOV.L @(disp,PC),Rn with a pooled constant (int or label name)."""
        self.pending_lits.append((self.pc, rn, val))
        self.items.append(('lit', self.pc, rn, val))
        self.pc += 2

    def pool(self):
        """Emit pending literals here (must be unreachable or after a branch)."""
        if not self.pending_lits:
            return
        if self.pc % 4:
            self.w(0x0009)
        for (pc, rn, val) in self.pending_lits:
            self.labels.setdefault(('pool', pc), self.pc)
            self.l(val)
        self.pending_lits = []

    # ---- generic format helpers ----
    def nm(self, op, n, m, low):
        self.w((op << 12) | (n << 8) | (m << 4) | low)

    def n_(self, op, n, low8):
        self.w((op << 12) | (n << 8) | low8)

    # ---- data transfer ----
    def movi(self, rn, imm): self.w(0xE000 | (rn << 8) | (imm & 0xFF))
    def mov(self, rm, rn): self.nm(6, rn, rm, 3)
    def movb_st(self, rm, rn): self.nm(2, rn, rm, 0)
    def movw_st(self, rm, rn): self.nm(2, rn, rm, 1)
    def movl_st(self, rm, rn): self.nm(2, rn, rm, 2)
    def movb_ld(self, rm, rn): self.nm(6, rn, rm, 0)
    def movw_ld(self, rm, rn): self.nm(6, rn, rm, 1)
    def movl_ld(self, rm, rn): self.nm(6, rn, rm, 2)
    def movb_pre(self, rm, rn): self.nm(2, rn, rm, 4)     # Rm,@-Rn
    def movw_pre(self, rm, rn): self.nm(2, rn, rm, 5)
    def movl_pre(self, rm, rn): self.nm(2, rn, rm, 6)
    def movb_post(self, rm, rn): self.nm(6, rn, rm, 4)    # @Rm+,Rn
    def movw_post(self, rm, rn): self.nm(6, rn, rm, 5)
    def movl_post(self, rm, rn): self.nm(6, rn, rm, 6)
    def movb_r0st(self, rm, rn): self.nm(0, rn, rm, 4)    # Rm,@(R0,Rn)
    def movw_r0st(self, rm, rn): self.nm(0, rn, rm, 5)
    def movl_r0st(self, rm, rn): self.nm(0, rn, rm, 6)
    def movb_r0ld(self, rm, rn): self.nm(0, rn, rm, 0xC)  # @(R0,Rm),Rn
    def movw_r0ld(self, rm, rn): self.nm(0, rn, rm, 0xD)
    def movl_r0ld(self, rm, rn): self.nm(0, rn, rm, 0xE)
    def movb_dst(self, rn, d): self.w(0x8000 | (rn << 4) | (d & 15))        # R0,@(d,Rn)
    def movw_dst(self, rn, d): self.w(0x8100 | (rn << 4) | (d & 15))
    def movl_dst(self, rm, rn, d): self.w(0x1000 | (rn << 8) | (rm << 4) | (d & 15))
    def movb_dld(self, rm, d): self.w(0x8400 | (rm << 4) | (d & 15))        # @(d,Rm),R0
    def movw_dld(self, rm, d): self.w(0x8500 | (rm << 4) | (d & 15))
    def movl_dld(self, rm, rn, d): self.w(0x5000 | (rn << 8) | (rm << 4) | (d & 15))
    def movb_gst(self, d): self.w(0xC000 | (d & 255))   # R0,@(d,GBR)
    def movw_gst(self, d): self.w(0xC100 | (d & 255))
    def movl_gst(self, d): self.w(0xC200 | (d & 255))
    def movb_gld(self, d): self.w(0xC400 | (d & 255))
    def movw_gld(self, d): self.w(0xC500 | (d & 255))
    def movl_gld(self, d): self.w(0xC600 | (d & 255))
    def mova(self, d): self.w(0xC700 | (d & 255))
    def movt(self, rn): self.w(0x0029 | (rn << 8))
    def movw_pc(self, rn, d): self.w(0x9000 | (rn << 8) | (d & 255))
    def movl_pc(self, rn, d): self.w(0xD000 | (rn << 8) | (d & 255))
    def swapb(self, rm, rn): self.nm(6, rn, rm, 8)
    def swapw(self, rm, rn): self.nm(6, rn, rm, 9)
    def xtrct(self, rm, rn): self.nm(2, rn, rm, 0xD)
    # ---- arithmetic ----
    def add(self, rm, rn): self.nm(3, rn, rm, 0xC)
    def addi(self, rn, imm): self.w(0x7000 | (rn << 8) | (imm & 0xFF))
    def addc(self, rm, rn): self.nm(3, rn, rm, 0xE)
    def addv(self, rm, rn): self.nm(3, rn, rm, 0xF)
    def sub(self, rm, rn): self.nm(3, rn, rm, 8)
    def subc(self, rm, rn): self.nm(3, rn, rm, 0xA)
    def subv(self, rm, rn): self.nm(3, rn, rm, 0xB)
    def and_(self, rm, rn): self.nm(2, rn, rm, 9)
    def or_(self, rm, rn): self.nm(2, rn, rm, 0xB)
    def xor(self, rm, rn): self.nm(2, rn, rm, 0xA)
    def not_(self, rm, rn): self.nm(6, rn, rm, 7)
    def neg(self, rm, rn): self.nm(6, rn, rm, 0xB)
    def negc(self, rm, rn): self.nm(6, rn, rm, 0xA)
    def andi(self, imm): self.w(0xC900 | (imm & 255))
    def ori(self, imm): self.w(0xCB00 | (imm & 255))
    def xori(self, imm): self.w(0xCA00 | (imm & 255))
    def tsti(self, imm): self.w(0xC800 | (imm & 255))
    def andb(self, imm): self.w(0xCD00 | (imm & 255))
    def orb(self, imm): self.w(0xCF00 | (imm & 255))
    def xorb(self, imm): self.w(0xCE00 | (imm & 255))
    def tstb(self, imm): self.w(0xCC00 | (imm & 255))
    def tst(self, rm, rn): self.nm(2, rn, rm, 8)
    def cmpeq(self, rm, rn): self.nm(3, rn, rm, 0)
    def cmphs(self, rm, rn): self.nm(3, rn, rm, 2)
    def cmpge(self, rm, rn): self.nm(3, rn, rm, 3)
    def cmphi(self, rm, rn): self.nm(3, rn, rm, 6)
    def cmpgt(self, rm, rn): self.nm(3, rn, rm, 7)
    def cmpstr(self, rm, rn): self.nm(2, rn, rm, 0xC)
    def cmppl(self, rn): self.n_(4, rn, 0x15)
    def cmppz(self, rn): self.n_(4, rn, 0x11)
    def cmpeqi(self, imm): self.w(0x8800 | (imm & 255))
    def dt(self, rn): self.n_(4, rn, 0x10)
    def extsb(self, rm, rn): self.nm(6, rn, rm, 0xE)
    def extsw(self, rm, rn): self.nm(6, rn, rm, 0xF)
    def extub(self, rm, rn): self.nm(6, rn, rm, 0xC)
    def extuw(self, rm, rn): self.nm(6, rn, rm, 0xD)
    def div0s(self, rm, rn): self.nm(2, rn, rm, 7)
    def div0u(self): self.w(0x0019)
    def div1(self, rm, rn): self.nm(3, rn, rm, 4)
    def shll(self, rn): self.n_(4, rn, 0x00)
    def shlr(self, rn): self.n_(4, rn, 0x01)
    def shal(self, rn): self.n_(4, rn, 0x20)
    def shar(self, rn): self.n_(4, rn, 0x21)
    def rotl(self, rn): self.n_(4, rn, 0x04)
    def rotr(self, rn): self.n_(4, rn, 0x05)
    def rotcl(self, rn): self.n_(4, rn, 0x24)
    def rotcr(self, rn): self.n_(4, rn, 0x25)
    def shll2(self, rn): self.n_(4, rn, 0x08)
    def shlr2(self, rn): self.n_(4, rn, 0x09)
    def shll8(self, rn): self.n_(4, rn, 0x18)
    def shlr8(self, rn): self.n_(4, rn, 0x19)
    def shll16(self, rn): self.n_(4, rn, 0x28)
    def shlr16(self, rn): self.n_(4, rn, 0x29)
    def tas(self, rn): self.n_(4, rn, 0x1B)
    # ---- multiply ----
    def mull(self, rm, rn): self.nm(0, rn, rm, 7)
    def mulsw(self, rm, rn): self.nm(2, rn, rm, 0xF)
    def muluw(self, rm, rn): self.nm(2, rn, rm, 0xE)
    def dmuls(self, rm, rn): self.nm(3, rn, rm, 0xD)
    def dmulu(self, rm, rn): self.nm(3, rn, rm, 5)
    def macl(self, rm, rn): self.nm(0, rn, rm, 0xF)
    def macw(self, rm, rn): self.nm(4, rn, rm, 0xF)
    def clrmac(self): self.w(0x0028)
    # ---- system ----
    def nop(self): self.w(0x0009)
    def clrt(self): self.w(0x0008)
    def sett(self): self.w(0x0018)
    def sleep(self): self.w(0x001B)
    def rts(self): self.w(0x000B)
    def rte(self): self.w(0x002B)
    def trapa(self, imm): self.w(0xC300 | (imm & 255))
    def ldc_sr(self, rm): self.n_(4, rm, 0x0E)
    def ldc_gbr(self, rm): self.n_(4, rm, 0x1E)
    def ldc_vbr(self, rm): self.n_(4, rm, 0x2E)
    def stc_sr(self, rn): self.n_(0, rn, 0x02)
    def stc_gbr(self, rn): self.n_(0, rn, 0x12)
    def stc_vbr(self, rn): self.n_(0, rn, 0x22)
    def ldcl_sr(self, rm): self.n_(4, rm, 0x07)
    def ldcl_gbr(self, rm): self.n_(4, rm, 0x17)
    def ldcl_vbr(self, rm): self.n_(4, rm, 0x27)
    def stcl_sr(self, rn): self.n_(4, rn, 0x03)
    def stcl_gbr(self, rn): self.n_(4, rn, 0x13)
    def stcl_vbr(self, rn): self.n_(4, rn, 0x23)
    def lds_mach(self, rm): self.n_(4, rm, 0x0A)
    def lds_macl(self, rm): self.n_(4, rm, 0x1A)
    def lds_pr(self, rm): self.n_(4, rm, 0x2A)
    def sts_mach(self, rn): self.n_(0, rn, 0x0A)
    def sts_macl(self, rn): self.n_(0, rn, 0x1A)
    def sts_pr(self, rn): self.n_(0, rn, 0x2A)
    def ldsl_mach(self, rm): self.n_(4, rm, 0x06)
    def ldsl_macl(self, rm): self.n_(4, rm, 0x16)
    def ldsl_pr(self, rm): self.n_(4, rm, 0x26)
    def stsl_mach(self, rn): self.n_(4, rn, 0x02)
    def stsl_macl(self, rn): self.n_(4, rn, 0x12)
    def stsl_pr(self, rn): self.n_(4, rn, 0x22)
    def jmp(self, rm): self.n_(4, rm, 0x2B)
    def jsr(self, rm): self.n_(4, rm, 0x0B)
    def braf(self, rm): self.n_(0, rm, 0x23)
    def bsrf(self, rm): self.n_(0, rm, 0x03)
    # ---- label branches ----
    def bra(self, lab): self._fix('b12', lab, 0xA000)
    def bsr(self, lab): self._fix('b12', lab, 0xB000)
    def bt(self, lab): self._fix('b8', lab, 0x8900)
    def bf(self, lab): self._fix('b8', lab, 0x8B00)
    def bts(self, lab): self._fix('b8', lab, 0x8D00)
    def bfs(self, lab): self._fix('b8', lab, 0x8F00)

    # ---- composite helpers ----
    def li(self, rn, val, pool=False):
        """Load a 32-bit constant: MOV #imm when it fits, else an inline literal (or a pooled one)."""
        v = val if isinstance(val, str) else (val & 0xFFFFFFFF)
        if not isinstance(v, str) and (v < 0x80 or v >= 0xFFFFFF80):
            self.movi(rn, v & 0xFF)
        elif pool:
            self.lit(rn, v)
        else:
            if (self.pc + 6) % 4:
                self.nop()
            skip = '_li%d' % self.pc
            self.w(0xD000 | (rn << 8) | 1)           # MOV.L @(1,PC),Rn
            self._fix('b12', skip, 0xA000)           # BRA skip
            self.nop()                               # delay slot
            self.l(v)
            self.label(skip)

    def jmp_far(self, label, tmp=2):
        self.li(tmp, label)
        self.jmp(tmp)
        self.nop()

    def assemble(self):
        """Return dict addr->byte for the whole program."""
        mem = {}

        def put16(a, v):
            mem[a] = (v >> 8) & 255
            mem[a + 1] = v & 255

        def put32(a, v):
            for i in range(4):
                mem[a + i] = (v >> (24 - 8 * i)) & 255

        for it in self.items:
            k = it[0]
            if k == 'w':
                put16(it[1], it[2])
            elif k == 'l':
                v = it[2]
                if isinstance(v, str):
                    v = self.labels[v]
                put32(it[1], v & 0xFFFFFFFF)
            elif k == 'fix':
                _, pc, kind, lab, word = it
                tgt = self.labels[lab]
                d = (tgt - (pc + 4)) // 2
                assert (tgt - (pc + 4)) % 2 == 0
                if kind == 'b12':
                    assert -2048 <= d < 2048, (lab, d)
                    put16(pc, word | (d & 0xFFF))
                else:
                    assert -128 <= d < 128, (lab, d)
                    put16(pc, word | (d & 0xFF))
            elif k == 'lit':
                _, pc, rn, val = it
                tgt = self.labels[('pool', pc)]
                d = (tgt - ((pc + 4) & ~3)) // 4
                assert 0 <= d < 256, ('literal too far', hex(pc), d)
                put16(pc, 0xD000 | (rn << 8) | d)
        return mem


def write_hex(mem, path, base=0, size=0x10000):
    """Write a $readmemh word image (32-bit big-endian words) for [base, base+size)."""
    words = []
    for a in range(base, base + size, 4):
        v = 0
        for i in range(4):
            v = (v << 8) | mem.get(a + i, 0)
        words.append(v)
    with open(path, 'w') as f:
        for v in words:
            f.write('%08x\n' % v)
