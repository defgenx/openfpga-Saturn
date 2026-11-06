#!/usr/bin/env python3
"""Synthetic discs for the cue-sheet path (docs/cd.md section 3a), no Sega data, and the check of the TOC the core built.
  gen_cue.py gen <card>            writes <card>/cue/Multi.cue (data + audio track files) and <card>/cue/One.cue (one .img),
                                   and mktoc's reference TOCs in <card>/ref/
  gen_cue.py check <toc_ram.hex> <ref.toc> <file index offset>
                                   compares the TOC RAM dump of tb_sys with mktoc's (file index offset 1: the core puts
                                   cue file f in slot 17 + f, mktoc in 16 + f)"""
import os, struct, subprocess, sys

HERE = os.path.dirname(os.path.abspath(__file__))
MKTOC = os.path.join(HERE, "../../tools/mktoc.py")
SYNC = bytes([0]) + bytes([255]) * 10 + bytes([0])


def bcd(v):
    return (v // 10) << 4 | v % 10


def data_sector(lba, user):
    f = lba + 150
    return SYNC + bytes([bcd(f // 4500), bcd(f // 75 % 60), bcd(f % 75), 1]) + user + bytes(2352 - 16 - len(user))


def gen(card):
    d = os.path.join(card, "cue")
    os.makedirs(d, exist_ok=True)
    hdr = bytearray(2048)
    hdr[0:16] = b"SEGA SEGASATURN "
    hdr[16:32] = b"SEGA ENTERPRISES"
    hdr[32:42] = b"T-0000-00 "
    hdr[0x40:0x4A] = b"JTUBKAEL  "
    hdr[0x60:0x70] = b"SIM CUE SHEET   "
    nd, na = 300, 225
    t1 = b"".join(data_sector(i, bytes(hdr) if i == 0 else bytes((i + k) & 255 for k in range(2048))) for i in range(nd))
    t2 = bytes((i * 7) & 255 for i in range(na * 2352))
    open(os.path.join(d, "Multi (Track 1).bin"), "wb").write(t1)
    open(os.path.join(d, "Multi (Track 2).bin"), "wb").write(t2)
    open(os.path.join(d, "Multi.cue"), "w").write(
        'FILE "Multi (Track 1).bin" BINARY\r\n  TRACK 01 MODE1/2352\r\n    INDEX 01 00:00:00\r\n'
        'FILE "Multi (Track 2).bin" BINARY\r\n  TRACK 02 AUDIO\r\n    INDEX 00 00:00:00\r\n    INDEX 01 00:02:00\r\n')
    open(os.path.join(d, "One.img"), "wb").write(t1 + t2)
    i0, i1 = nd, nd + 150
    msf = lambda x: f"{x // 4500:02d}:{x // 75 % 60:02d}:{x % 75:02d}"
    open(os.path.join(d, "One.cue"), "w").write(
        f'FILE "One.img" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n'
        f'  TRACK 02 AUDIO\n    INDEX 00 {msf(i0)}\n    INDEX 01 {msf(i1)}\n')
    ref = os.path.join(card, "ref")
    os.makedirs(ref, exist_ok=True)
    for name in ("Multi", "One"):
        subprocess.run([sys.executable, MKTOC, os.path.join(d, name + ".cue"), "-o", ref, "--merge", "never"], check=True,
                       stdout=subprocess.DEVNULL)


def check(dump, ref, foff):
    got = [int(l, 16) for l in open(dump) if l.strip()]
    want = list(struct.unpack(">512I", open(ref, "rb").read()))
    n = want[1] & 0x7F
    bad = 0
    for i in list(range(0, 3)) + list(range(4, 69)) + list(range(72, 72 + 3 * (n + 1))):
        w = want[i]
        if i >= 72 and (i - 72) % 3 == 0 and (i - 72) // 3 < n:
            w = (w & ~(0x1F << 26)) | ((((w >> 26) & 0x1F) + foff) << 26)
        if got[i] != w:
            bad += 1
            print(f"word {i}: core {got[i]:08x} mktoc {w:08x}")
    print(f"TOC check {ref}: {n} tracks, {'OK' if not bad else f'{bad} words differ'}")
    return 1 if bad else 0


if __name__ == "__main__":
    if sys.argv[1] == "gen":
        gen(sys.argv[2])
    else:
        sys.exit(check(sys.argv[2], sys.argv[3], int(sys.argv[4])))
