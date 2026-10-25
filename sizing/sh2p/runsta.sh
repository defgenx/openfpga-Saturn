#!/bin/sh
# usage: runsta.sh <project> <suffix>: map + fit + sta in Docker; reports in out_<project>/
D=$(cd "$(dirname "$0")/../.." && pwd)
docker run --rm --platform linux/amd64 --name sh2p-sta-$2 -v $D:/build -w /build/sizing/sh2p raetro/quartus:21.1 sh -c "quartus_map $1 && quartus_fit $1 && quartus_sta $1" > $D/sizing/sh2p/$1.sta.log 2>&1
