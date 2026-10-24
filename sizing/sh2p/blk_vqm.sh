#!/bin/sh
# usage: blk_vqm.sh <project> <suffix>   after a map run: writes out_<project>/<project>.vqm (LUT-level netlist) via quartus_cdb
D=$(cd "$(dirname "$0")/../.." && pwd)
P=$1; S=$2
me=$$
while :; do
  o=$(pgrep -f "blk_queue.sh|blk_q2.sh|runall_gold.sh|blk_vqm.sh" | grep -v "^$me$" | while read p; do [ $p -lt $me ] && echo $p; done)
  [ -z "$o" ] && break; sleep 10
done
docker run --rm --platform linux/amd64 --name sh2p-vqm-$S -v $D:/build -w /build/sizing/sh2p raetro/quartus:21.1 sh -c "quartus_cdb $P --vqm=out_$P/$P.vqm" > $D/sizing/sh2p/$P.vqm.log 2>&1
