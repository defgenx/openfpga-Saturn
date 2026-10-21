#!/usr/bin/env python3
"""Boot test ROM for the full-system sim: a BIOS-like early boot written from the public Saturn documentation
(SMPC / SCU / VDP1 / VDP2 / SCSP / CD block register maps), no Sega code. It is loaded as slot 0 (the BIOS).

Every step stores a marker to the mailbox 0x06000F00 (begin 0x0001xxxx, pass 0x0002xxxx, fail 0x0003xxxx plus the
value read at mailbox +4); tb_sys logs them. Failed steps do not stop the ROM, the run ends with 0x00FF<failures>.

usage: gen_rom.py out.bin"""
import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'sh2', 'tools'))
from sh2asm import Asm  # noqa: E402

MK = 0x26000F00           # mailbox (WRAM-H, cache-through alias)
SLAVE_FLAG = 0x26000F80   # master sets MAGIC here before SSHON; the slave sees it at entry
SLAVE_UP = 0x26000F84
VBFLAG = 0x26000F40
SMFLAG = 0x26000F44
MAGIC = 0x5A5AA5A5
SLV_CMD, SLV_ACK, SLV_RES = 0x26000F90, 0x26000F94, 0x26000F98
VT = 0x06000000           # vector table (VBR)
MSP, SSP = 0x06080000, 0x060A0000

# SMPC (odd byte addresses), SCU, VDP regs
SMPC_IREG = lambda i: 0x20100001 + 2 * i
SMPC_COMREG, SMPC_SR, SMPC_SF = 0x2010001F, 0x20100061, 0x20100063
SMPC_OREG = lambda i: 0x20100021 + 2 * i
SCU_IMS, SCU_IST = 0x25FE00A0, 0x25FE00A4
VDP2 = 0x25F80000
VDP1 = 0x25D00000
CD = 0x25890000

T_SMPC = int(os.environ.get('T_SMPC', 0x10000))   # poll iterations; with the cache on one iteration is about 0.3 us
T_VBL = int(os.environ.get('T_VBL', 0x40000))
T_MISC = int(os.environ.get('T_MISC', 0x8000))
T_CDBOOT = int(os.environ.get('T_CDBOOT', 0x300000))

a = Asm(0x400)
_n = [0]


def L(p='L'):
    _n[0] += 1
    return '%s%d' % (p, _n[0])


def st(addr, val, size=4, ra=1, rb=2):
    a.li(ra, addr)
    a.li(rb, val)
    {1: a.movb_st, 2: a.movw_st, 4: a.movl_st}[size](rb, ra)


def ld(addr, size=4, rd=0, ra=1):
    a.li(ra, addr)
    {1: a.movb_ld, 2: a.movw_ld, 4: a.movl_ld}[size](ra, rd)


def mark(v):
    st(MK, v)


def fail(step):
    mark(0x00030000 | step)
    a.li(1, MK + 4)
    a.movl_st(0, 1)         # r0 = the value that was wrong
    a.addi(8, 1)


def begin(step):
    mark(0x00010000 | step)


def ok(step):
    mark(0x00020000 | step)


def check(step, mask, expect, size=4):
    """r0 = value; pass if (r0 & mask) == expect. Marks the step passed or failed."""
    good, end = L('ok'), L('end')
    a.li(3, mask)
    a.and_(3, 0)
    a.li(3, expect)
    a.cmpeq(3, 0)
    a.bt(good)
    fail(step)
    a.bra(end)
    a.nop()
    a.label(good)
    ok(step)
    a.label(end)


def poll(addr, size, mask, want_set, count):
    """Spin until (mem & mask) is set (want_set) or clear; r4 = 1 on timeout, r0 = last value."""
    top, done, end = L('pt'), L('pd'), L('pe')
    a.li(5, count)
    a.label(top)
    ld(addr, size)
    a.li(3, mask)
    a.tst(3, 0)                    # T = ((r0 & mask) == 0)
    (a.bf if want_set else a.bt)(done)
    a.dt(5)
    a.bf(top)
    a.movi(4, 1)
    a.bra(end)
    a.nop()
    a.label(done)
    a.movi(4, 0)
    a.label(end)


def timeout_check(step):
    good, end = L('tok'), L('tend')
    a.tst(4, 4)                    # T = (r4 == 0)
    a.bt(good)
    fail(step)
    a.bra(end)
    a.nop()
    a.label(good)
    ok(step)
    a.label(end)


def smpc(step, cmd, iregs=(), clear_flag=None):
    begin(step)
    poll(SMPC_SF, 1, 1, False, T_SMPC)           # SF must be idle
    for i, v in enumerate(iregs):
        st(SMPC_IREG(i), v, 1)
    st(SMPC_SF, 1, 1)
    st(SMPC_COMREG, cmd, 1)
    poll(SMPC_SF, 1, 1, False, T_SMPC)           # command done: SF cleared by the SMPC
    ld(SMPC_SR, 1)
    a.li(1, MK + 8)
    a.movl_st(0, 1)                              # detail: SR after the command
    timeout_check(step)


# ===================================================================== entry (both CPUs)
a.label('entry')
a.li(1, SLAVE_FLAG)
a.movl_ld(1, 0)
a.li(2, MAGIC)
a.cmpeq(2, 0)
a.bf('master')
a.li(15, SSP)                                    # slave: stack, signal, spin
a.li(1, SLAVE_UP)
a.li(2, 0x55AA0001)
a.movl_st(2, 1)
a.label('slave_spin')
a.li(1, SLV_CMD)
a.movl_ld(1, 0)
a.movi(2, 1)
a.cmpeq(2, 0)
a.bf('slv_n1')
st(0x21800000, 0x1234, 2)                        # SINIT write, as the games do after SSHON
st(SLV_CMD, 0)
a.label('slv_n1')
a.li(1, SLV_CMD)
a.movl_ld(1, 0)
a.movi(2, 2)
a.cmpeq(2, 0)
a.bf('slave_spin')
ld(0xFFFFFE11, 1)
st(0xFFFFFE11, 0, 1)                             # clear own FTCSR.ICF
st(SLV_ACK, 1)
poll(0xFFFFFE11, 1, 0x80, True, T_MISC)          # the master's MINIT write must raise it
a.li(1, SLV_RES)
a.movl_st(4, 1)
st(SLV_CMD, 0)
a.bra('slave_spin')
a.nop()

a.label('master')
a.li(15, MSP)
begin(1)                                         # 1: reset vector and stack
a.li(1, MK + 4)
a.movl_st(15, 1)
a.movi(8, 0)                                     # r8 = failed steps
ok(1)

# ---- 2: bus state controller, vector table in WRAM-H, clear the flags
begin(2)
KEY = 0xA55A0000
for reg, v in ((0xFFFFFFE8, 0x0A55), (0xFFFFFFEC, 0x0008), (0xFFFFFFF8, 0x0040), (0xFFFFFFF4, 0x0000), (0xFFFFFFF0, 0x0008)):
    st(reg, KEY | v)                             # WCR, MCR, RTCOR, RTCNT, RTCSR as the SH-2 sim programs for the Saturn
a.li(1, 'vtab')
a.li(2, VT)
a.li(3, 256)
a.label('vcopy')
a.movl_post(1, 0)
a.movl_st(0, 2)
a.addi(2, 4)
a.dt(3)
a.bf('vcopy')
st(0xFFFFFE92, 0x10, 1)                          # CCR: purge, then enable the cache (the BIOS runs cached)
st(0xFFFFFE92, 0x01, 1)
for addr in (VBFLAG, SMFLAG, SLAVE_UP, SLV_CMD, SLV_ACK, SLV_RES):
    st(addr, 0)
st(SLAVE_FLAG, MAGIC)
ld(VT + 0x40 * 4)
a.li(2, 'h_vbin')
a.cmpeq(2, 0)
a.bt('s2ok')
fail(2)
a.bra('s2end')
a.nop()
a.label('s2ok')
ok(2)
a.label('s2end')

# ---- 3-6: SMPC commands
smpc(3, 0x03)                                    # SSHOFF
smpc(4, 0x06)                                    # SNDON
smpc(5, 0x07)                                    # SNDOFF
smpc(6, 0x19)                                    # RESENAB

# ---- 7: SCU and SH-2 INTC: VECMD = 1, IMS unmasks VBLANK-IN and the SMPC interrupt, VBR, SR.I = 0
begin(7)
st(0xFFFFFEE0, 0x0001, 2)                        # ICR.VECMD: external vector from the SCU
st(SCU_IMS, 0xFFFFFF7E)
st(SCU_IST, 0)
ok(7)
a.li(1, VT)
a.ldc_vbr(1)
a.movi(1, 0)
a.ldc_sr(1)                                      # I = 0

# ---- 8: INTBACK (status only) and the SMPC interrupt (vector 0x47)
begin(8)
st(SMFLAG, 0)
poll(SMPC_SF, 1, 1, False, T_SMPC)
st(SMPC_IREG(0), 0x01, 1)                        # get status
st(SMPC_IREG(1), 0x00, 1)                        # no peripheral data
st(SMPC_IREG(2), 0xF0, 1)
st(SMPC_SF, 1, 1)
st(SMPC_COMREG, 0x10, 1)
poll(SMPC_SF, 1, 1, False, T_SMPC)
a.li(1, MK + 8)
a.movl_st(0, 1)
ld(SMPC_SR, 1)
a.li(1, MK + 12)
a.movl_st(0, 1)
ld(SMPC_OREG(9), 1)
a.li(1, MK + 16)
a.movl_st(0, 1)                                  # detail: OREG9 (area code)
poll(SMFLAG, 4, 0xFFFFFFFF, True, T_VBL)         # the handler counts the interrupt
timeout_check(8)

# ---- 9: VBLANK-IN interrupt (vector 0x40)
begin(9)
st(VBFLAG, 0)
poll(VBFLAG, 4, 0xFFFFFFFF, True, T_VBL)
timeout_check(9)

# ---- 10: VDP2: NBG0 checker, colour RAM, back screen, then TVMD.DISP
begin(10)
st(VDP2 + 0x00, 0x0000, 2)                       # TVMD: display off
st(VDP2 + 0x0E, 0x0000, 2)                       # RAMCTL
for off, v in ((0x10, 0x04FF), (0x12, 0xFFFF), (0x14, 0xFFFF), (0x16, 0xFFFF), (0x18, 0xFFFF), (0x1A, 0xFFFF), (0x1C, 0xFFFF), (0x1E, 0xFFFF)):
    st(VDP2 + off, v, 2)                         # CYCA0..CYCB1: NBG0 pattern name at T0, character data at T1
for off, v in ((0x28, 0x0000), (0x30, 0x8000), (0x3A, 0x0000), (0x3C, 0x0000), (0x40, 0x0000), (0x42, 0x0000),
               (0xAC, 0x0000), (0xAE, 0x3000), (0xF8, 0x0007)):
    st(VDP2 + off, v, 2)                         # CHCTLA, PNCN0, PLSZ, MPOFN, MPABN0, MPCDN0, BKTAU/L, PRINA
st(0x25E06000, 0x4C00, 2)                        # back screen colour (VRAM word 0x3000)
st(0x25F00002, 0x7FFF, 2)                        # colour RAM 1: white
st(0x25F00004, 0x03E0, 2)                        # colour RAM 2: green
# characters 0x100 and 0x101 (4 bpp, 32 bytes each) at VRAM 0x2000 and 0x2020
a.li(1, 0x25E02000)
a.li(2, 0x11111111)
a.li(3, 0x22222222)
a.movi(4, 8)
a.label('chars')
a.movl_st(2, 1)
a.addi(1, 4)
a.dt(4)
a.bf('chars')
a.movi(4, 8)
a.label('chars2')
a.movl_st(3, 1)
a.addi(1, 4)
a.dt(4)
a.bf('chars2')
# pattern name table: 64 x 28 words, checker of the two characters
a.li(1, 0x25E00000)
a.li(2, 0x0100)
a.li(3, 0x0101)
a.movi(5, 28)
a.label('rows')
a.movi(4, 32)
a.label('cols')
a.movw_st(2, 1)
a.addi(1, 2)
a.movw_st(3, 1)
a.addi(1, 2)
a.dt(4)
a.bf('cols')
a.mov(2, 0)                                      # swap the two characters for the next row
a.mov(3, 2)
a.mov(0, 3)
a.dt(5)
a.bf('rows')
st(VDP2 + 0x20, 0x0001, 2)                       # BGON: NBG0
st(VDP2 + 0x00, 0x8000, 2)                       # TVMD: DISP = 1, 320 x 224
ld(VDP2 + 0x00, 2)
check(10, 0x8000, 0x8000)

# ---- 11: VDP1 init, command table with one END command, plot, wait for the command-end flag
begin(11)
for off, v in ((0x00, 0x0000), (0x02, 0x0000), (0x04, 0x0000), (0x06, 0x0000), (0x08, 0x0000), (0x0A, 0x50DF)):
    st(VDP1 + off, v, 2)                         # TVMR, FBCR, PTMR, EWDR, EWLR, EWRR
st(0x25C00000, 0x8000, 2)                        # command table: END
ld(0x25C00000, 2)
a.li(3, 0xFFFF)
a.and_(3, 0)
a.li(3, 0x8000)
a.cmpeq(3, 0)
a.bt('s11a')
fail(11)
a.label('s11a')
st(VDP1 + 0x04, 0x0001, 2)                       # PTMR: start drawing now
poll(VDP1 + 0x10, 2, 0x0002, True, T_MISC)       # EDSR.CEF
timeout_check(11)

# ---- 12: CD block through the HLE: "CDBLOCK" signature (CR1 = 0x0043, CR4 = 0x434B), then a Get Status command
def eq16(addr, val, store):
    ld(addr, 2)
    a.li(1, MK + store)
    a.movl_st(0, 1)
    a.li(3, 0xFFFF)
    a.and_(3, 0)
    a.li(3, val)
    a.cmpeq(3, 0)
    a.movt(6)
    a.and_(6, 9)                                 # r9 &= match


def verdict(step):
    good, end = L('vg'), L('ve')
    a.tst(9, 9)
    a.bf(good)
    fail(step)
    a.bra(end)
    a.nop()
    a.label(good)
    ok(step)
    a.label(end)


# ---- 14: SCSP: sound RAM and a common register
begin(14)
st(0x25A00100, 0xA55A, 2)
st(0x25A00104, 0x12345678)
a.movi(9, 1)
eq16(0x25A00100, 0xA55A, 4)
ld(0x25A00104)
a.li(3, 0x12345678)
a.cmpeq(3, 0)
a.movt(6)
a.and_(6, 9)
st(0x25B00400, 0x0009, 2)                        # MVOL
ld(0x25B00400, 2)
a.li(3, 0x000F)
a.and_(3, 0)
a.li(3, 9)
a.cmpeq(3, 0)
a.movt(6)
a.and_(6, 9)
verdict(14)

# ---- 20: 68K: program in sound RAM, SNDON, the 68K writes a marker word and SCSP MVOL
begin(20)
st(0x25A00000, 0x00000800)                       # initial SP
st(0x25A00004, 0x00000100)                       # initial PC
for i, w in enumerate((0x33FC, 0xBEEF, 0x0000, 0x0500,      # move.w #$BEEF,$000500
                       0x33FC, 0x000B, 0x0010, 0x0400,      # move.w #$000B,$100400   (SCSP MVOL)
                       0x33FC, 0x0001, 0x0000, 0x0502,      # move.w #1,$000502
                       0x60FE)):                            # bra.s *
    st(0x25A00100 + 2 * i, w, 2)
st(0x25A00500, 0x0000, 2)
smpc(21, 0x06)                                   # SNDON releases the 68K
begin(22)
poll(0x25A00500, 2, 0xFFFF, True, T_MISC)
a.li(1, MK + 4)
a.movl_st(0, 1)
timeout_check(22)
ld(0x25B00400, 2)
a.li(1, MK + 8)
a.movl_st(0, 1)
a.li(3, 0x000F)
a.and_(3, 0)
a.li(3, 0x0B)
a.cmpeq(3, 0)
a.movt(6)
a.movi(9, 1)
a.and_(6, 9)
verdict(23)
smpc(24, 0x07)                                   # SNDOFF

# ---- 25: cached WRAM-H: fill through the cache, read back through-alias and cached
begin(25)
a.li(1, 0x06010000)
a.li(2, 0x01020304)
a.li(3, 256)
a.label('cfill')
a.movl_st(2, 1)
a.addi(1, 4)
a.add(2, 2)
a.dt(3)
a.bf('cfill')
a.li(1, 0x26010000)
a.li(2, 0x01020304)
a.li(3, 256)
a.movi(9, 1)
a.label('cchk')
a.movl_ld(1, 0)
a.cmpeq(2, 0)
a.movt(6)
a.and_(6, 9)
a.addi(1, 4)
a.add(2, 2)
a.dt(3)
a.bf('cchk')
verdict(25)

# ---- 26-28: SINIT write (0x21800000) of each width raises the master's FTCSR.ICF (input capture via DCC MFTI)
for step, size in ((26, 1), (27, 2), (28, 4)):
    begin(step)
    ld(0xFFFFFE11, 1)
    st(0xFFFFFE11, 0, 1)                         # clear ICF
    st(0x21800000, 0x1234, size)
    poll(0xFFFFFE11, 1, 0x80, True, T_MISC)
    timeout_check(step)

# ---- 15-17: slave SH-2: SSHON, wait for it to run, SSHOFF
smpc(15, 0x02)
begin(16)
poll(SLAVE_UP, 4, 0xFFFFFFFF, True, T_MISC)
timeout_check(16)
# ---- 29: slave writes SINIT -> master ICF; 30: master writes MINIT (0x21000000) -> slave ICF
begin(29)
ld(0xFFFFFE11, 1)
st(0xFFFFFE11, 0, 1)
st(SLV_CMD, 1)
poll(0xFFFFFE11, 1, 0x80, True, T_MISC)
timeout_check(29)
begin(30)
st(SLV_CMD, 2)
poll(SLV_ACK, 4, 0xFFFFFFFF, True, T_MISC)
st(0x21000000, 0x1234, 2)
poll(SLV_CMD, 4, 0xFFFFFFFF, False, T_MISC)
ld(SLV_RES)
a.li(3, 0xFFFFFFFF)
a.and_(3, 0)
a.li(3, 0)
a.cmpeq(3, 0)
a.movt(6)
a.movi(9, 1)
a.and_(6, 9)
verdict(30)
smpc(17, 0x03)                                   # SSHOFF again

# ---- 18: let a few frames go by with the display on, then finish
begin(18)
a.movi(10, 3)
a.label('frames')
st(VBFLAG, 0)
poll(VBFLAG, 4, 0xFFFFFFFF, True, T_VBL)
a.dt(10)
a.bf('frames')
timeout_check(18)

if not os.environ.get('ROM_NOCD'):
    begin(12)
    poll(CD + 0x08, 2, 0x0001, True, T_CDBOOT)       # the CD block firmware announces itself (CMOK) about 430 ms after reset
    timeout_check(12)
    a.movi(9, 1)
    eq16(CD + 0x18, 0x0043, 4)
    eq16(CD + 0x1C, 0x4442, 8)
    eq16(CD + 0x20, 0x4C4F, 12)
    eq16(CD + 0x24, 0x434B, 16)
    begin(19)
    verdict(19)
    begin(13)                                        # 13: Get Status command, wait for HIRQ.CMOK
    st(CD + 0x08, 0xFFFE, 2)                         # clear CMOK
    for off in (0x18, 0x1C, 0x20):
        st(CD + off, 0x0000, 2)
    st(CD + 0x24, 0x0000, 2)                         # CR4 last: starts the command
    poll(CD + 0x08, 2, 0x0001, True, T_MISC)
    a.li(1, MK + 4)
    a.movl_st(0, 1)
    timeout_check(13)
    ld(CD + 0x18, 2)
    a.li(1, MK + 8)
    a.movl_st(0, 1)                                  # detail: CR1 (status)



a.li(1, MK)
a.li(2, 0x00FF0000)
a.or_(8, 2)
a.movl_st(2, 1)
a.label('done')
a.bra('done')
a.nop()

# ===================================================================== interrupt handlers
a.align4()
a.label('h_vbin')
a.movl_pre(0, 15)
a.movl_pre(1, 15)
a.movl_pre(2, 15)
a.li(1, VBFLAG)
a.movl_ld(1, 0)
a.addi(0, 1)
a.movl_st(0, 1)
a.li(1, SCU_IST)
a.li(2, 0xFFFFFFFE)                              # clear VBLANK-IN in IST
a.movl_st(2, 1)
if not os.environ.get('ROM_NOIMS'):
    a.li(1, SCU_IMS)
    a.li(2, 0xFFFFFF7E)
    a.movl_st(2, 1)
a.movl_post(15, 2)
a.movl_post(15, 1)
a.movl_post(15, 0)
a.rte()
a.nop()

a.align4()
a.label('h_smpc')
a.movl_pre(0, 15)
a.movl_pre(1, 15)
a.movl_pre(2, 15)
a.li(1, SMFLAG)
a.movl_ld(1, 0)
a.addi(0, 1)
a.movl_st(0, 1)
a.li(1, SCU_IST)
a.li(2, 0xFFFFFF7F)                              # clear the SMPC interrupt
a.movl_st(2, 1)
if not os.environ.get('ROM_NOIMS'):
    a.li(1, SCU_IMS)
    a.li(2, 0xFFFFFF7E)
    a.movl_st(2, 1)
a.movl_post(15, 2)
a.movl_post(15, 1)
a.movl_post(15, 0)
a.rte()
a.nop()

a.align4()
a.label('h_unexp')                               # r0 = vector number: report and stop
a.li(1, MK + 4)
a.movl_st(0, 1)
st(MK, 0x000E0000)
a.label('h_unexp_spin')
a.bra('h_unexp_spin')
a.nop()
for v in range(4, 0x80):
    a.align4()
    a.label('stub%d' % v)
    a.movi(0, v)
    a.bra('h_unexp')
    a.nop()

a.align4()
a.label('vtab')
for v in range(256):
    if v == 0x40:
        a.l('h_vbin')
    elif v == 0x47:
        a.l('h_smpc')
    elif 4 <= v < 0x80:
        a.l('stub%d' % v)
    else:
        a.l('h_unexp')

mem = a.assemble()
lab = a.labels


def put32(addr, v):
    for i in range(4):
        mem[addr + i] = (v >> (24 - 8 * i)) & 255


put32(0, lab['entry'])        # power-on PC, SP (the sim pool stack is set again at entry)
put32(4, MSP)
put32(8, lab['entry'])
put32(12, MSP)
size = max(mem) + 1
size = (size + 3) & ~3
img = bytearray(size)
for k, v in mem.items():
    img[k] = v
open(sys.argv[1], 'wb').write(img)
with open(sys.argv[1] + '.map', 'w') as f:
    for k, v in sorted(lab.items(), key=lambda kv: kv[1]):
        if isinstance(k, str) and not k.startswith('_li'):
            f.write('%08x %s\n' % (v, k))
print('rom %d bytes' % size, file=sys.stderr)
