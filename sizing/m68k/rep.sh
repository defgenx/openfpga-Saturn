#!/bin/sh
# usage: rep.sh <rev>  : summary + entity table of a quartus_map run
f=$(dirname "$0")/out_$1/m68k_$1.map.rpt
gg() { grep -m1 "$1" $f | awk -F';' '{gsub(/ /,"",$3); print $3}'; }
echo "$1: mapALM=$(gg 'Estimate of Logic utilization') ALUT=$(gg 'Combinational ALUT usage for logic') REG=$(gg 'Dedicated logic registers') MEMbits=$(gg 'Total block memory bits') MLABbits=$(gg 'Total MLAB memory bits')"
n=$(grep -n "Resource Utilization by Entity" $f | tail -1 | cut -d: -f1)
sed -n "$((n)),$((n+70))p" $f | awk -F';' '{print $2 "|" $3 "|" $4 "|" $5}' | grep -v "^|||" | grep -v "altdpram\|dpram_\|altsyncram"
