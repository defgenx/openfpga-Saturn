#!/bin/bash
# usage: chain.sh <name> : snapshot now, then start the fit once none of my earlier scup2 fits is running (one at a time)
cd "$(dirname "$0")"
TOP=SCUP2 ./mk.sh $1 src/fpga/saturn/Saturn/SCUP2 - SCUP2_DSP_PKG.sv SCUP2_RAM.sv SCUP2_PKG.sv SCUP2_DSP.sv SCUP2.sv
( while docker ps --format '{{.Names}}' | grep -q '^scup2-'; do sleep 30; done; ./run.sh $1 "map fit sta" > $1.out 2>&1 ) > /dev/null 2>&1 &
