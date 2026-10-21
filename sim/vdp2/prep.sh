#!/bin/sh
# Builds build/ref (golden, renamed) and build/cur (rewritten) source copies.
# Both lose the "synopsys translate_off" regions (simulation-only reset values, ignored by Quartus).
set -e
cd "$(dirname "$0")"
GOLD=../../ref/Saturn_MiSTer/rtl/Saturn/VDP2
CUR=../../src/fpga/saturn/Saturn/VDP2
rm -rf build/ref build/cur; mkdir -p build/ref build/cur
for f in VDP2.sv VDP2_pkg.sv VDP2_mem.sv; do
	awk '/synopsys translate_off/{s=1;next} /synopsys translate_on/{s=0;next} !s' $GOLD/$f | \
		perl -pe 's/\bVDP2_PKG\b/REF_VDP2_PKG/g; s/\bVDP2_PAL_RAM\b/REF_VDP2_PAL_RAM/g; s/\bVDP2_WRITE_FIFO\b/REF_VDP2_WRITE_FIFO/g; s/^module VDP2 /module REF_VDP2 /' > build/ref/$f
	awk '/synopsys translate_off/{s=1;next} /synopsys translate_on/{s=0;next} !s' $CUR/$f > build/cur/$f
done
