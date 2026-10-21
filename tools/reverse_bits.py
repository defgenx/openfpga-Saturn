#!/usr/bin/env python3
"""Convert a Quartus .rbf into the bit-reversed .rbf_r the Pocket loads."""
import sys

table = bytes(int(f"{b:08b}"[::-1], 2) for b in range(256))
src, dst = sys.argv[1], sys.argv[2]
with open(src, "rb") as f:
    data = f.read()
with open(dst, "wb") as f:
    f.write(data.translate(table))
