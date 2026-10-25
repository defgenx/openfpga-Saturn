#!/usr/bin/env python3
"""bin -> $readmemh hex (little-endian 32-bit words, zero padded to ROMW words)."""
import struct, sys
src, words, hexf = sys.argv[1], int(sys.argv[2]), sys.argv[3]
d = open(src, "rb").read()
if len(d) > words * 4:
    sys.exit("firmware %d bytes exceeds ROM %d bytes" % (len(d), words * 4))
d += b"\0" * (words * 4 - len(d))
open(hexf, "w").write("".join("%08x\n" % x for x in struct.unpack("<%dI" % words, d)))
