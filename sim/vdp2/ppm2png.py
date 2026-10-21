#!/usr/bin/env python3
"""Convert a binary P6 PPM to PNG (no dependencies). usage: ppm2png.py in.ppm out.png"""
import sys, zlib, struct
d = open(sys.argv[1], 'rb').read()
parts = d.split(b'\n', 3)
w, h = map(int, parts[1].split()); pix = parts[3]
raw = b''.join(b'\x00' + pix[y * w * 3:(y + 1) * w * 3] for y in range(h))
def ch(t, b):
    c = struct.pack('>I', len(b)) + t + b
    return c + struct.pack('>I', zlib.crc32(t + b) & 0xffffffff)
open(sys.argv[2], 'wb').write(b'\x89PNG\r\n\x1a\n' + ch(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0)) + ch(b'IDAT', zlib.compress(raw)) + ch(b'IEND', b''))
