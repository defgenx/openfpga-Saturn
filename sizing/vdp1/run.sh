#!/bin/bash
# usage: run.sh <name>  (project made by mk.sh); log in <name>/map.log
W=$(cd ../.. && pwd)
docker run --rm --platform linux/amd64 --name vdp1-map-$1 -v $W:/build -w /build/sizing/vdp1/$1 raetro/quartus:21.1 quartus_map $1 > $1/map.log 2>&1
grep -A3 "Total combinational\|Total registers\|Total block memory\|DSP" $1/out/$1.map.summary > $1/summary.txt 2>/dev/null
