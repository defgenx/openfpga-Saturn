#!/bin/sh
# usage: run_map.sh <project, e.g. scsp_ref> <container-suffix>
# Runs quartus_map (emulated) on the project and prints the key resource numbers.
D=$(cd "$(dirname "$0")/../.." && pwd)
P=$1
docker run --rm --platform linux/amd64 --name scsp-map-$2 -v $D:/build -w /build/sizing/scsp raetro/quartus:21.1 quartus_map $P > /private/tmp/claude-503/scsp_map_$2.log 2>&1
f=$D/sizing/scsp/out_${P#scsp_}/$P.map.rpt
g() { grep -m1 "$1" $f | awk -F';' '{gsub(/ /,"",$3); print $3}'; }
echo "$P: ALM=$(g 'Estimate of Logic utilization') ALUT=$(g 'Combinational ALUT usage for logic') MALUT=$(g '^; Memory ALUT usage') REG=$(g 'Dedicated logic registers') M10Kbits=$(g 'Total block memory bits') MLABbits=$(g 'Total MLAB memory bits') DSP=$(g 'Total DSP Blocks')"
