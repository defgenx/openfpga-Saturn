#!/bin/bash
# usage: snap.sh <name>  copies the current src VDP1 into sizing/vdp1/steps/<name>, makes an area-profile project and starts the map run
cd "$(dirname "$0")"
mkdir -p steps/$1
cp ../../src/fpga/saturn/Saturn/VDP1/VDP1.sv ../../src/fpga/saturn/Saturn/VDP1/VDP1_pkg.sv steps/$1/
./mk.sh $1 sizing/vdp1/steps/$1 area
(nohup ./run.sh $1 >/dev/null 2>&1 &)
