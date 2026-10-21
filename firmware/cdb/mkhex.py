#!/usr/bin/env python3
"""bin -> $readmemh hex (little-endian 32-bit words, padded with zeros to ROMW words) and Quartus .mif."""
import struct, sys
src, words, hexf, mif = sys.argv[1], int(sys.argv[2]), sys.argv[3], sys.argv[4]
d = open(src, "rb").read()
if len(d) > words * 4:
    sys.exit("firmware %d bytes exceeds ROM %d bytes" % (len(d), words * 4))
d += b"\0" * (words * 4 - len(d))
w = struct.unpack("<%dI" % words, d)
open(hexf, "w").write("".join("%08x\n" % x for x in w))
with open(mif, "w") as f:
    f.write("WIDTH=32;\nDEPTH=%d;\nADDRESS_RADIX=HEX;\nDATA_RADIX=HEX;\nCONTENT BEGIN\n" % words)
    for i, x in enumerate(w):
        f.write("%X : %08X;\n" % (i, x))
    f.write("END;\n")
