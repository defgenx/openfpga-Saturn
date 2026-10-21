#!/bin/sh
# usage: map.sh <block dir under sizing/, e.g. sh2> <project> <name> [macro ...]
# Snapshots src/ and the block's sizing dir, then runs quartus_map (area profile) on the snapshot in a uniquely named
# container so later source edits cannot leak into a long run. Result: $OUT/<name>.rpt and a one-line summary.
set -e
R=$(cd "$(dirname "$0")/../.." && pwd)
B=$1; P=$2; N=$3; shift 3
OUT=${OUT:-/private/tmp/claude-503/cl}
S=$OUT/snap_$N
rm -rf $S; mkdir -p $S/sizing
cp -R $R/src $S/src
cp -R $R/sizing/$B $S/sizing/$B
cp $R/sizing/area_profile.qsf $S/sizing/ 2>/dev/null || true
for m in "$@"; do echo "set_global_assignment -name VERILOG_MACRO \"$m=1\"" >> $S/sizing/$B/$P.qsf; done
docker run --rm --platform linux/amd64 --name cuts-low-$N -v $S:/build -w /build/sizing/$B raetro/quartus:21.1 quartus_map $P > $OUT/$N.log 2>&1 || true
f=$(ls $S/sizing/$B/out_*/$P.map.rpt 2>/dev/null | head -1)
[ -n "$f" ] && cp $f $OUT/$N.rpt
g() { grep -m1 "$1" $f | awk -F';' '{gsub(/ /,"",$3); print $3}'; }
echo "$N: ALM=$(g 'Estimate of Logic utilization') ALUT=$(g 'Combinational ALUT usage for logic') MALUT=$(g '^; Memory ALUT usage') REG=$(g 'Dedicated logic registers') M10Kbits=$(g 'Total block memory bits') MLABbits=$(g 'Total MLAB memory bits') DSP=$(g 'Total DSP Blocks')" | tee $OUT/$N.sum
