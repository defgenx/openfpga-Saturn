#!/bin/sh
# usage: qmap.sh <project> <name>  (queued quartus_map in sizing/sh2p/alu)
D=$(cd "$(dirname "$0")/../../.." && pwd)
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh sh2p-amap-$2 "$D" /build/sizing/sh2p/alu quartus_map $1 > $D/sizing/sh2p/alu/$1.map.log 2>&1
