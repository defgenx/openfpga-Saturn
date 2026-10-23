#!/usr/bin/env python3
"""Random but valid 68000 program for the lockstep bench, shaped like a sound driver: byte/word register-heavy
code, bit tests, table lookups through (An)/(An)+/d8(An,Xn), short loops (DBRA), JSR/RTS helpers, MOVEM, MULU/DIVU,
shifts, interrupt handlers with RTE, TRAP, MOVE SR. Writes a 64 KiB memory image (big endian).
usage: gen_prog.py <seed> <out.bin> [instructions]"""
import random, struct, sys
seed, out = int(sys.argv[1]), sys.argv[2]
n = int(sys.argv[3]) if len(sys.argv) > 3 else 600
R = random.Random(seed)
mem = bytearray(0x10000)
DATA = 0x8000                       # data RAM 0x8000-0xBFFF; A0-A5 point inside, stack at 0xF000
def w16(a, v): mem[a:a + 2] = struct.pack('>H', v & 0xffff)
def w32(a, v): mem[a:a + 4] = struct.pack('>I', v & 0xffffffff)
for i in range(0x4000): mem[DATA + i] = R.randrange(256)
pc = 0x400
def emit(*ws):
    global pc
    for x in ws:
        w16(pc, x); pc += 2
def emit32(v): emit(v >> 16, v & 0xffff)
SZ = {'b': 0, 'w': 1, 'l': 2}
def ea_mem(allow_pc=False, dst=False, sz='w'):
    """memory-alterable-safe EA: returns (mode,reg,extwords). Address regs A0-A5 stay in the data area."""
    ks = ['ind', 'ind', 'd16', 'absw', 'absl'] + ([] if dst or not allow_pc else ['pcd16'])
    if sz == 'b': ks += ['d8'] + ([] if dst or not allow_pc else ['pcd8'])      # odd addresses only for byte accesses
    else: ks += ['post', 'pre']                                                 # (An)+/-(An) keep An even
    k = R.choice(ks)
    a = R.randrange(6)
    if k == 'ind': return (2, a, [])
    if k == 'post': return (3, a, [])
    if k == 'pre': return (4, a, [])
    if k == 'd16': return (5, a, [R.randrange(0, 0x40) * 2])
    if k == 'd8': return (6, a, [(R.randrange(8) << 12) | (R.choice([0, 0x800]) ) | R.randrange(0, 0x40)])  # Xn long/word, small disp
    if k == 'absw': return (7, 0, [DATA + R.randrange(0, 0x3000) * 1 & 0xfffe])
    if k == 'absl': return (7, 1, [0, DATA + (R.randrange(0, 0x3000) & 0xfffe)])
    if k == 'pcd16': return (7, 2, [R.randrange(0, 0x200) * 2])
    if k == 'pcd8': return (7, 3, [(R.randrange(8) << 12) | R.randrange(0, 0x40) * 2])
def ea_any(sz, src=True, allow_an=True):
    k = R.random()
    if k < 0.28: return (0, R.randrange(8), [])
    if k < 0.34 and allow_an and sz != 'b': return (1, R.randrange(8), [])
    if k < 0.45 and src:
        imm = R.randrange(0x100) if sz == 'b' else R.randrange(0x10000) if sz == 'w' else R.randrange(1 << 32)
        return (7, 4, [imm] if sz != 'l' else [imm >> 16, imm & 0xffff])
    return ea_mem(allow_pc=src, dst=not src, sz=sz)
def ea_bits(e): return e[0] << 3 | e[1]
def op_ea(base, e, *pre):           # base opcode word with EA in low six bits
    emit(base | ea_bits(e), *e[2])
def dn(): return R.randrange(8)

def gen_one():
    c = R.random()
    sz = R.choice(['b', 'w', 'w', 'l'])
    s = SZ[sz]
    if c < 0.22:                                   # MOVE
        src = ea_any(sz, True); dst = ea_any(sz, False, allow_an=False)
        if dst[0] == 1 or (dst[0] == 7 and dst[1] > 1): dst = (0, dn(), [])
        mv = {'b': 1, 'w': 3, 'l': 2}[sz]
        emit(mv << 12 | dst[1] << 9 | dst[0] << 6 | ea_bits(src), *src[2], *dst[2])
    elif c < 0.27 and sz != 'b':                  # MOVEA
        src = ea_any(sz, True); mv = {'w': 3, 'l': 2}[sz]
        emit(mv << 12 | R.randrange(6, 7) * 0 << 9 | 1 << 6 | ea_bits(src), *src[2]) if False else None
        emit(mv << 12 | R.randrange(6, 7) << 9 | 1 << 6 | ea_bits(src), *src[2])    # A6 only
    elif c < 0.40:                                 # ADD/SUB/AND/OR/CMP/EOR
        kind = R.choice([0xD000, 0x9000, 0xC000, 0x8000, 0xB000, 0xB100])
        if kind == 0xB100:                          # EOR Dn,<ea>
            dst = ea_any(sz, False, allow_an=False)
            if dst[0] == 1 or (dst[0] == 7 and dst[1] > 1): dst = (0, dn(), [])
            emit(0xB100 | s << 6 | dn() << 9 | ea_bits(dst), *dst[2]); return
        d = R.random() < 0.5 and kind != 0xB000
        e = ea_any(sz, not d, allow_an=(not d and kind in (0xD000, 0x9000, 0xB000)))
        if d and (e[0] in (0, 1) or (e[0] == 7 and e[1] > 1)): d = False; e = ea_any(sz, True, allow_an=False)
        emit(kind | dn() << 9 | (4 if d else 0) << 6 | s << 6 | ea_bits(e), *e[2])
    elif c < 0.45 and sz != 'b':                  # ADDA/SUBA/CMPA (A6 only)
        kind = R.choice([0xD000, 0x9000, 0xB000]); e = ea_any(sz, True)
        emit(kind | 6 << 9 | (3 if sz == 'w' else 7) << 6 | ea_bits(e), *e[2])
    elif c < 0.50:                                 # immediate ALU
        kind = R.choice([0x0600, 0x0400, 0x0200, 0x0000, 0x0A00, 0x0C00]); e = ea_any(sz, False, allow_an=False)
        if kind != 0x0C00 and (e[0] == 1 or (e[0] == 7 and e[1] > 1)): e = (0, dn(), [])
        if e[0] == 1 or (e[0] == 7 and e[1] > 1): e = (0, dn(), [])
        imm = R.randrange(0x100) if sz == 'b' else R.randrange(0x10000) if sz == 'w' else R.randrange(1 << 32)
        emit(kind | s << 6 | ea_bits(e), *( [imm] if sz != 'l' else [imm >> 16, imm & 0xffff]), *e[2])
    elif c < 0.55:                                 # ADDQ/SUBQ
        e = ea_any(sz, False, allow_an=(sz != 'b'))
        if e[0] == 7 and e[1] > 1: e = (0, dn(), [])
        if e[0] == 1 and sz == 'b': e = (0, dn(), [])
        if e[0] == 1 and e[1] < 6: e = (1, 6, [])
        emit(0x5000 | R.randrange(8) << 9 | R.randrange(2) << 8 | s << 6 | ea_bits(e), *e[2])
    elif c < 0.60:                                 # NEG NEGX NOT CLR TST
        kind = R.choice([0x4400, 0x4000, 0x4600, 0x4200, 0x4A00]); e = ea_any(sz, False, allow_an=False)
        if e[0] == 1 or (e[0] == 7 and e[1] > 1): e = (0, dn(), [])
        emit(kind | s << 6 | ea_bits(e), *e[2])
    elif c < 0.66:                                 # shifts/rotates reg and mem
        if R.random() < 0.8:
            emit(0xE000 | R.randrange(8) << 9 | R.randrange(2) << 8 | s << 6 | R.randrange(2) << 5 | R.randrange(4) << 3 | dn())
        else:
            e = ea_mem(dst=True, sz='w'); emit(0xE0C0 | R.randrange(4) << 9 | R.randrange(2) << 8 | ea_bits(e), *e[2])
    elif c < 0.72:                                 # bit ops
        kind = R.choice([0, 1, 2, 3]); e = ea_any('b', kind == 0, allow_an=False) if R.random() < 0.5 else (0, dn(), [])
        if kind and (e[0] == 1 or (e[0] == 7 and e[1] > 1)): e = (0, dn(), [])
        if e[0] == 7 and e[1] == 4: e = (0, dn(), [])
        if R.random() < 0.5: emit(0x0100 | kind << 6 | dn() << 9 | ea_bits(e), *e[2])
        else: emit(0x0800 | kind << 6 | ea_bits(e), R.randrange(0 if e[0] != 0 else 0, 8 if e[0] != 0 else 32), *e[2])
    elif c < 0.75:                                 # MULU MULS DIVU DIVS (divisor immediate nonzero)
        kind = R.choice([0xC0C0, 0xC1C0, 0x80C0, 0x81C0])
        if kind in (0x80C0, 0x81C0): emit(kind | dn() << 9 | 0x3C, R.randrange(1, 0x10000))
        else: e = ea_any('w', True, allow_an=False); emit(kind | dn() << 9 | ea_bits(e), *e[2])
    elif c < 0.78:                                 # EXT SWAP EXG LEA PEA Scc
        k = R.randrange(6)
        if k == 0: emit(0x4880 | R.randrange(2) << 6 | dn())
        elif k == 1: emit(0x4840 | dn())
        elif k == 2: emit(0xC100 | dn() << 9 | R.choice([0x40, 0x48]) | dn()) if False else emit(0xC140 | dn() << 9 | dn())
        elif k == 3: e = ea_mem(allow_pc=True, sz='w'); emit(0x41C0 | R.randrange(6, 7) << 9 | ea_bits(e), *e[2])
        elif k == 4: e = ea_mem(allow_pc=True); emit(0x4840 | ea_bits(e) | 0x0000, *e[2]) if False else emit(0x4850 | R.randrange(6), )
        else: e = ea_any('b', False, allow_an=False); (e := (0, dn(), [])) if (e[0] == 1 or (e[0] == 7 and e[1] > 1)) else None; emit(0x50C0 | R.randrange(16) << 8 | ea_bits(e), *e[2])
    elif c < 0.82:                                 # MOVEM to/from memory, MOVEP
        if R.random() < 0.7:
            mask = R.randrange(1, 0x100) & 0x7fff                # D0-D7 / A0-A6 low group
            e = (2, R.randrange(6), []) if R.random() < 0.5 else (5, R.randrange(6), [0])
            emit(0x4880 | (R.randrange(2) << 6) | ea_bits(e) | 0x0000, mask, *e[2]) if R.random() < 0.5 else emit(0x4C80 | (R.randrange(2) << 6) | ea_bits(e), mask & 0x7fff, *e[2])
        else:
            emit(0x0108 | dn() << 9 | R.randrange(4) << 6 | R.randrange(6), R.randrange(0, 0x20) * 2)
    elif c < 0.85:                                 # ABCD SBCD ADDX SUBX CMPM NBCD TAS
        k = R.randrange(7)
        if k == 0: emit(0xC100 | dn() << 9 | dn())
        elif k == 1: emit(0x8100 | dn() << 9 | dn())
        elif k == 2: emit(0xD100 | dn() << 9 | (s if s else 1) << 6 | (R.randrange(2) << 3 if s else 0) | (dn() if s == 0 or True else 0)) if True else None
        elif k == 3: emit(0x9100 | dn() << 9 | s << 6 | (R.randrange(2) << 3 if s else 0) | dn())
        elif k == 4: emit(0xB108 | (s if s else 1) << 6 | R.randrange(6) << 9 | R.randrange(6))
        elif k == 5: emit(0x4800 | dn())
        else: emit(0x4AC0 | dn())
    elif c < 0.88:                                 # CCR/SR/USP
        k = R.randrange(7)
        if k == 0: emit(0x44C0 | dn())                               # MOVE Dn,CCR
        elif k == 1: emit(0x42C0 | dn())                             # MOVE CCR,Dn (68010) -> illegal on 68000, still exercises the exception
        elif k == 2: emit(0x40C0 | dn())                             # MOVE SR,Dn
        elif k == 3: emit(0x027C, 0xf8ff if R.random() < 0.5 else 0x7fff)   # ANDI #,SR clear trace
        elif k == 4: emit(0x003C, R.randrange(32))                   # ORI to CCR
        elif k == 5: emit(0x0A3C, R.randrange(32))                   # EORI to CCR
        else: emit(0x4E40 | R.randrange(3))                          # TRAP #0-2 (handler RTEs)
    elif c < 0.93:                                 # short forward branch over a few words
        cc = R.randrange(16)
        if cc == 1: cc = 0
        emit(0x6000 | cc << 8 | R.choice([4, 6, 8]) & 0xff)
        for _ in range(R.randrange(1, 4)): emit(0x4E71)
    elif c < 0.97:                                 # DBRA loop with a body (D7 is the counter)
        emit(0x3E3C, R.randrange(2, 7))                              # MOVE.W #n,D7
        start = pc
        for _ in range(R.randrange(1, 3)): emit(0xD018 | R.randrange(1, 7) << 9)   # ADD.B (A0)+,Dn
        emit(0x51CF, (start - (pc + 2)) & 0xffff)                    # DBRA D7,start
    else:                                          # JSR to helper
        emit(0x4EB9); emit32(0x300 + 8 * R.randrange(4))
    # stay in code area
# prologue: SSP, vectors, helpers, register init
w32(0, 0xf000); w32(4, 0x400)
for v in range(2, 64): w32(v * 4, 0x200)                                # default: NOP ; RTE
for v in (2, 3): w32(v * 4, 0x240)                                      # address error: restart the main loop
for v in (4, 8, 10, 11): w32(v * 4, 0x210)                              # illegal/privilege/line A/F: skip the opcode word
for v in range(25, 32): w32(v * 4, 0x280)                               # autovectors
w16(0x200, 0x4e71); w16(0x202, 0x4e73)
w16(0x210, 0x54af); w16(0x212, 0x0002); w16(0x214, 0x4e73)               # ADDQ.L #2,2(A7) ; RTE
w16(0x240, 0x2e7c); w32(0x242, 0xf000)                                  # MOVEA.L #stack,A7 ; JMP loop (patched below)
w16(0x280, 0x52b9); w32(0x282, DATA + 0x3ffc); w16(0x286, 0x4e73)         # ADDQ.L #1,$xxxx.L ; RTE
# helpers at 0x300,0x308,0x310,0x318: short subroutines ending in RTS
helpers = [[0xd041, 0x4e75], [0x4a58, 0x4e75], [0xe349, 0x4e75], [0x2018, 0x4e75]]
for i, h in enumerate(helpers):
    for j, x in enumerate(h): w16(0x300 + 8 * i + 2 * j, x)
pc = 0x400
emit(0x2E7C); emit32(0xf000)                                    # MOVEA.L #stack,A7
loop = pc
for a in range(6):                                              # A0-A5 into the data area
    emit(0x207C | a << 9); emit32(DATA + 0x400 + a * 0x400 + R.randrange(0, 0x100) * 2)
emit(0x2C7C); emit32(DATA + 0x2000)                             # A6
for d in range(8): emit(0x203C | d << 9); emit32(R.randrange(1 << 32))
emit(0x46FC, 0x2000)                                            # MOVE #$2000,SR: interrupts enabled, supervisor
for _ in range(n): gen_one()
assert pc < 0x7e00, hex(pc)
emit(0x4EF9); emit32(loop)                                      # JMP loop
w16(0x246, 0x4ef9); w32(0x248, loop)
open(out, 'wb').write(mem)
