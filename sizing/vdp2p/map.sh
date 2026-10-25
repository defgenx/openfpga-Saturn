#!/bin/sh
# usage: sizing/vdp2p/map.sh <tag> [src dir]   area-profile quartus_map of VDP2P (copy in sizing/vdp2p/snap/<tag>/)
# Result: snap/<tag>/<tag>.log, output_files/p.map.rpt, <tag>.vqm. Summary: sizing/vdp2/summary.sh snap/<tag>/output_files/p.map.rpt
set -e
TAG=$1
D=$(cd "$(dirname "$0")/../.." && pwd)
V=${2:-$D/src/fpga/saturn/Saturn/VDP2P}
S=$D/sizing/vdp2p/snap/$TAG
rm -rf $S; mkdir -p $S
cp $V/VDP2P.sv $V/VDP2P_pkg.sv $V/VDP2P_mem.sv $D/sizing/vdp2/area.qsf $S/
sed 's/^\tVDP2 u (/\tVDP2P u (/; s/module vdp2_wrap/module vdp2_wrap/' $D/sizing/vdp2/vdp2_wrap.sv > $S/vdp2_wrap.sv
cat > $S/p.qpf <<Q
PROJECT_REVISION = "p"
Q
cat > $S/p.qsf <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY vdp2_wrap
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY output_files
set_global_assignment -name OPTIMIZATION_MODE "BALANCED"
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name SYNTH_TIMING_DRIVEN_SYNTHESIS OFF
set_global_assignment -name VERILOG_MACRO "LIGHT_SATURN=1"
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name SYSTEMVERILOG_FILE VDP2P_pkg.sv
set_global_assignment -name SYSTEMVERILOG_FILE VDP2P.sv
set_global_assignment -name SYSTEMVERILOG_FILE VDP2P_mem.sv
set_global_assignment -name SYSTEMVERILOG_FILE vdp2_wrap.sv
set_instance_assignment -name VIRTUAL_PIN ON -to *
source area.qsf
Q
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh vdp2p-map-$TAG $D /build/sizing/vdp2p/snap/$TAG sh -c "quartus_map p > $TAG.log 2>&1; quartus_cdb p --vqm=$TAG.vqm >> $TAG.log 2>&1"
