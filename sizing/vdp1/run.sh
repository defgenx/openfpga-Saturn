#!/bin/bash
# usage: run.sh <name>  (project made by mk.sh); runs quartus_map in Docker, summary in <name>/summary.txt
W=$(cd ../.. && pwd)
rm -rf $1/db $1/incremental_db $1/out
docker run --rm --platform linux/amd64 --name vdp1-map-$1 -v $W:/build -w /build/sizing/vdp1/$1 raetro/quartus:21.1 quartus_map $1 > $1/map.log 2>&1
R=$1/out/$1.map.rpt
{ grep -m1 "^; |VDP1 " $R | awk -F';' '{print "VDP1 top: ALUTs " $3 " regs " $4 " blockbits " $5 " DSP " $6}'; grep -m1 "Total registers" $R; } > $1/summary.txt
