#!/bin/bash
# usage: go.sh <name> [macro|-]   snapshot SCUP sources, map+fit+sta in the background
cd "$(dirname "$0")"
TOP=SCUP2 ./mk.sh $1 src/fpga/saturn/Saturn/SCUP2 ${2:--} SCUP2_DSP_PKG.sv SCUP2_RAM.sv SCUP2_PKG.sv SCUP2_DSP.sv SCUP2_DSPC.sv SCUP2.sv
nohup ./run.sh $1 "map fit sta" > $1.out 2>&1 &
