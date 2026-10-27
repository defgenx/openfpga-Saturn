#!/bin/sh
# Builds <dir>/ref (golden, renamed) and <dir>/cur (rewritten) source copies. usage: prep.sh [dir] [CUT names...]
# Both lose the "synopsys translate_off" regions (simulation-only reset values, ignored by Quartus).
# With CUT names the golden copy gets the same register-bit cuts as the macros do in the rewritten one.
set -e
cd "$(dirname "$0")"
OUT=${1:-build}; shift || true
GOLD=../../ref/Saturn_MiSTer/rtl/Saturn/VDP2
DUT=${DUT:-VDP2P}
CUR=${VDP2P_DIR:-../../src/fpga/saturn/Saturn/$DUT}
rm -rf $OUT/ref $OUT/cur; mkdir -p $OUT/ref $OUT/cur
for f in VDP2.sv VDP2_pkg.sv VDP2_mem.sv; do
	awk '/synopsys translate_off/{s=1;next} /synopsys translate_on/{s=0;next} !s' $GOLD/$f | \
		perl -pe 's/\bVDP2_PKG\b/REF_VDP2_PKG/g; s/\bVDP2_PAL_RAM\b/REF_VDP2_PAL_RAM/g; s/\bVDP2_WRITE_FIFO\b/REF_VDP2_WRITE_FIFO/g; s/^module VDP2 /module REF_VDP2 /' > $OUT/ref/$f
	g=$(echo $f | sed "s/VDP2/$DUT/")
	awk '/synopsys translate_off/{s=1;next} /synopsys translate_on/{s=0;next} !s' $CUR/$g > $OUT/cur/$f
done
if [ -n "$1" ]; then
	python3 - $OUT "$@" <<'PY'
import re, sys
out = sys.argv[1]
cur = open(out + '/cur/VDP2_pkg.sv').read()
a = cur.index('	//Optional feature cuts')
b = cur.index('	//Feature enables used outside')
hdr = cur[a:b]
ref = open(out + '/ref/VDP2_pkg.sv').read()
i = ref.index('package REF_VDP2_PKG;') + len('package REF_VDP2_PKG;')
ref = ref[:i] + '\n' + hdr + ref[i:]
names = set(re.findall(r'CUT_(\w+) =', hdr))
ref = re.sub(r"parameter bit \[15:0\] (\w+)_MASK = (16'h[0-9A-Fa-f]+);",
             lambda m: "parameter bit [15:0] %s_MASK = %s & ~CUT_%s;" % (m.group(1), m.group(2), m.group(1)) if m.group(1) in names else m.group(0), ref)
open(out + '/ref/VDP2_pkg.sv', 'w').write(ref)
PY
	for c in "$@"; do
		case $c in
		SHADOW) perl -pi -e "s/SDOT\\.SD/1'b0/g" $OUT/ref/VDP2.sv ;;
		esac
	done
fi
# Third copy, renamed GOLD_: the golden exactly as upstream (merged burst groups). Only its VRAM contents are used
# (tb.cpp compares them with the rewritten design's after the writes have drained). REF_ gets the lane drain of VDP2P.
rm -rf $OUT/gold; mkdir -p $OUT/gold
for f in VDP2.sv VDP2_pkg.sv VDP2_mem.sv; do sed 's/REF_/GOLD_/g' $OUT/ref/$f > $OUT/gold/$f; done
[ "$LANEPATCH" = 0 ] || python3 lane_patch.py $OUT/ref/VDP2.sv
