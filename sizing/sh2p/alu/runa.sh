#!/bin/sh
# usage: runp.sh <project> <suffix> : quartus_map in Docker (cwd sizing/sh2p/alu)
D=$(cd "$(dirname "$0")/../../.." && pwd)
docker run --rm --platform linux/amd64 --name sh2p-map-$2 -v $D:/build -w /build/sizing/sh2p/alu raetro/quartus:21.1 quartus_map $1 > $D/sizing/sh2p/alu/$1.map.log 2>&1
