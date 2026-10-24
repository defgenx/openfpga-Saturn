#!/bin/sh
# usage: sizing/sh2p/run.sh <project> <map|fit> <container-suffix>
# <project> is a .qpf/.qsf pair in this directory (see mk.sh). Runs quartus_map (or map+fit) in Docker, log in <project>.<step>.log.
D=$(cd "$(dirname "$0")/../.." && pwd)
P=$1; S=$2; N=$3
if [ "$S" = fit ]; then CMD="quartus_map $P && quartus_fit $P"; else CMD="quartus_map $P"; fi
docker run --rm --platform linux/amd64 --name sh2p-$S-$N -v $D:/build -w /build/sizing/sh2p raetro/quartus:21.1 sh -c "$CMD" > $D/sizing/sh2p/$P.$S.log 2>&1
