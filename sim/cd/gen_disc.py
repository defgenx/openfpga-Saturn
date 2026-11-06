#!/usr/bin/env python3
"""Synthetic 2-track Saturn disc for the CD testbench.

disc A: track 1 MODE1/2352 data (DATA_SECTORS), track 2 AUDIO with a 150-sector INDEX 00 pregap in its file.
disc B: track 1 MODE1/2048 cooked data, track 2 AUDIO (synthesised header + EDC path).

Writes <out>/<disc>/{track01.bin,track02.bin,disc.cue,disc.toc,disc.json} and <disc>_f<N>.hex (32-bit big-endian
words, one per line) for the testbench's bridge model.
"""
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
MKTOC = os.path.join(HERE, "..", "..", "tools", "mktoc.py")
DATA_SECTORS = 120
AUDIO_SECTORS = 230   # 150 pregap + 80 playable


def bcd(v):
    return ((v // 10) << 4) | (v % 10)


def msf(lba):
    return lba // 75 // 60, lba // 75 % 60, lba % 75


def data_sector_raw(lba):
    m, s, f = msf(lba + 150)
    b = bytearray(2352)
    b[0] = 0x00
    b[1:11] = b"\xff" * 10
    b[11] = 0
    b[12:16] = bytes([bcd(m), bcd(s), bcd(f), 1])
    for i in range(2048):
        b[16 + i] = (lba * 7 + i * 3 + (i >> 8)) & 0xFF
    if lba == 0:
        hdr = bytearray(256)
        hdr[:16] = b"SEGA SEGASATURN "
        hdr[0x10:0x20] = b"SEGA ENTERPRISES"
        hdr[0x20:0x2A] = b"T-12345G  "
        hdr[0x40:0x4A] = b"JUE       "
        b[16:272] = hdr
    # EDC/ECC area carries junk: the core must rewrite it
    for i in range(2064, 2352):
        b[i] = 0xA5
    return bytes(b)


def audio_sector(n):
    b = bytearray(2352)
    for i in range(0, 2352, 4):
        l = (n * 131 + i) & 0xFFFF
        r = (0xFFFF - (n * 17 + i * 5)) & 0xFFFF
        struct.pack_into("<HH", b, i, l, r)
    return bytes(b)


def build(disc, cooked):
    d = os.path.join(HERE, "build", disc)
    os.makedirs(d, exist_ok=True)
    with open(os.path.join(d, "track01.bin"), "wb") as f:
        for lba in range(DATA_SECTORS):
            s = data_sector_raw(lba)
            f.write(s[16:2064] if cooked else s)
    with open(os.path.join(d, "track02.bin"), "wb") as f:
        for n in range(AUDIO_SECTORS):
            f.write(audio_sector(n))
    mode = "MODE1/2048" if cooked else "MODE1/2352"
    open(os.path.join(d, "disc.cue"), "w").write(
        f'FILE "track01.bin" BINARY\n  TRACK 01 {mode}\n    INDEX 01 00:00:00\n'
        'FILE "track02.bin" BINARY\n  TRACK 02 AUDIO\n    INDEX 00 00:00:00\n    INDEX 01 00:02:00\n')
    subprocess.check_call([sys.executable, MKTOC, os.path.join(d, "disc.cue"), "-o", d])
    out = os.path.join(HERE, "build")
    for i, fn in enumerate(["track01.bin", "track02.bin"]):
        data = open(os.path.join(d, fn), "rb").read()
        data += b"\0" * (-len(data) % 4)
        with open(os.path.join(out, f"{disc}_f{i}.hex"), "w") as h:
            for j in range(0, len(data), 4):
                h.write("%08x\n" % struct.unpack(">I", data[j:j + 4])[0])
    toc = open(os.path.join(d, "disc.toc"), "rb").read()
    with open(os.path.join(out, f"{disc}_toc.hex"), "w") as h:
        for j in range(0, len(toc), 4):
            h.write("%08x\n" % struct.unpack(">I", toc[j:j + 4])[0])


if __name__ == "__main__":
    build("A", False)
    build("B", True)
