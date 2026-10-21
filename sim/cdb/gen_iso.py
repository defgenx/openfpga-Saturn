#!/usr/bin/env python3
"""Synthetic disc C for the CD block comparison: track 1 MODE1/2352 with an ISO 9660 file system, track 2 audio.

LBA 16 PVD, 17 terminator, 20 root directory, 21 directory SUB; files:
  ABC.TXT;1 (LBA 22, 3000 bytes), DATA.BIN;1 (LBA 24, 5000 bytes), SUB/X.DAT;1 (LBA 27, 100 bytes).
Writes build/C_f0.hex, C_f1.hex, C_toc.hex (32-bit big-endian words) like sim/cd/gen_disc.py.
"""
import os, struct, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, "..", "cd"))
import gen_disc as g

DATA_SECTORS = 100
FILES = {}

def rec(name, lba, size, flags):
    nm = name
    n = 33 + len(nm)
    if n & 1:
        n += 1
    r = bytearray(n)
    r[0] = n
    struct.pack_into("<I", r, 2, lba); struct.pack_into(">I", r, 6, lba)
    struct.pack_into("<I", r, 10, size); struct.pack_into(">I", r, 14, size)
    r[18:25] = bytes([96, 1, 1, 0, 0, 0, 0])
    r[25] = flags
    struct.pack_into("<H", r, 28, 1); struct.pack_into(">H", r, 30, 1)
    r[32] = len(nm)
    r[33:33 + len(nm)] = nm
    return bytes(r)

def dirsec(entries):
    b = b"".join(entries)
    return b + b"\0" * (2048 - len(b))

def user_data():
    u = {}
    root = dirsec([rec(b"\0", 20, 2048, 2), rec(b"\1", 20, 2048, 2), rec(b"SUB", 21, 2048, 2),
                   rec(b"ABC.TXT;1", 22, 3000, 0), rec(b"DATA.BIN;1", 24, 5000, 0)])
    sub = dirsec([rec(b"\0", 21, 2048, 2), rec(b"\1", 20, 2048, 2), rec(b"X.DAT;1", 27, 100, 0)])
    pvd = bytearray(2048)
    pvd[0] = 1; pvd[1:6] = b"CD001"; pvd[6] = 1
    pvd[8:40] = b"SEGA SEGASATURN".ljust(32); pvd[40:72] = b"TESTDISC".ljust(32)
    struct.pack_into("<I", pvd, 80, DATA_SECTORS); struct.pack_into(">I", pvd, 84, DATA_SECTORS)
    pvd[156:156 + 34] = rec(b"\0", 20, 2048, 2)[:34]
    term = bytearray(2048); term[0] = 255; term[1:6] = b"CD001"; term[6] = 1
    u[16] = bytes(pvd); u[17] = bytes(term); u[20] = root; u[21] = sub
    for lba, size, seed in ((22, 3000, 0x11), (24, 5000, 0x22), (27, 100, 0x33)):
        d = bytes((seed + i * 7 + (i >> 8)) & 0xFF for i in range(size))
        for k in range((size + 2047) // 2048):
            c = d[k * 2048:(k + 1) * 2048]
            u[lba + k] = c + b"\0" * (2048 - len(c))
    return u

def build():
    u = user_data()
    d = os.path.join(HERE, "build", "C")
    os.makedirs(d, exist_ok=True)
    with open(os.path.join(d, "track01.bin"), "wb") as f:
        for lba in range(DATA_SECTORS):
            s = bytearray(g.data_sector_raw(lba))
            if lba in u:
                s[16:2064] = u[lba]
            f.write(bytes(s))
    with open(os.path.join(d, "track02.bin"), "wb") as f:
        for n in range(g.AUDIO_SECTORS):
            f.write(g.audio_sector(n))
    open(os.path.join(d, "disc.cue"), "w").write(
        'FILE "track01.bin" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n'
        'FILE "track02.bin" BINARY\n  TRACK 02 AUDIO\n    INDEX 00 00:00:00\n    INDEX 01 00:02:00\n')
    subprocess.check_call([sys.executable, g.MKTOC, os.path.join(d, "disc.cue"), "-o", d])
    out = os.path.join(HERE, "build")
    for i, fn in enumerate(["track01.bin", "track02.bin"]):
        data = open(os.path.join(d, fn), "rb").read()
        data += b"\0" * (-len(data) % 4)
        with open(os.path.join(out, f"C_f{i}.hex"), "w") as h:
            for j in range(0, len(data), 4):
                h.write("%08x\n" % struct.unpack(">I", data[j:j + 4])[0])
    toc = open(os.path.join(d, "disc.toc"), "rb").read()
    with open(os.path.join(out, "C_toc.hex"), "w") as h:
        for j in range(0, len(toc), 4):
            h.write("%08x\n" % struct.unpack(">I", toc[j:j + 4])[0])

if __name__ == "__main__":
    build()
