#!/bin/sh
# usage: sizing/vdp2/run.sh <ref|cur|ref_area|cur_area> <container-suffix>
D=$(cd "$(dirname "$0")/../.." && pwd)
docker run --rm --platform linux/amd64 --name vdp2-map-$2 -v $D:/build -w /build/sizing/vdp2 raetro/quartus:21.1 quartus_map vdp2_$1 > $D/sizing/vdp2/$1.log 2>&1
