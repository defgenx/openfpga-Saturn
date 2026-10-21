#!/bin/bash
# usage: go.sh <name> [macro|-]   snapshot SCUP sources, map+fit+sta in the background
cd "$(dirname "$0")"
TOP=SCUP ./mk.sh $1 src/fpga/saturn/Saturn/SCUP ${2:--} SCUP_DSP_PKG.sv SCUP_RAM.sv SCUP_PKG.sv SCUP_DSP.sv SCUP.sv
nohup ./run.sh $1 "map fit sta" > $1.out 2>&1 &
