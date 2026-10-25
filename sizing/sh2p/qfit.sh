#!/bin/sh
# usage: qfit.sh <project> <name> [map|fit|sta]  -- queued Quartus run (tools/qrun.sh from main), log <project>.<step>.log
D=$(cd "$(dirname "$0")/../.." && pwd)
P=$1; N=$2; S=${3:-fit}
case $S in map) C="quartus_map $P";; fit) C="quartus_map $P && quartus_fit $P";; sta) C="quartus_map $P && quartus_fit $P && quartus_sta $P && quartus_sta -t fmax/paths_cpu.tcl";; esac
QRUN_MAX=${QRUN_MAX:-3} /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh sh2p-$S-$N "$D" /build/sizing/sh2p sh -c "$C" > $D/sizing/sh2p/$P.$S.log 2>&1
