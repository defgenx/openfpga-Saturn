#!/bin/sh
# usage: sizing/vdp2p/map.sh <tag> [src dir]   area-profile quartus_map of VDP2P (copy in sizing/vdp2p/snap/<tag>/)
# MACROS="POCKET_CUT_VDP2_ZOOM ..." adds VERILOG_MACRO assignments.
# Result: snap/<tag>/<tag>.log, output_files/p.map.rpt, <tag>.vqm. Summary: sizing/vdp2/summary.sh snap/<tag>/output_files/p.map.rpt
set -e
TAG=$1
D=$(cd "$(dirname "$0")/../.." && pwd)
PFX=${PFX:-VDP2P}
V=${2:-$D/src/fpga/saturn/Saturn/$PFX}
S=$D/sizing/vdp2p/snap/$TAG
rm -rf $S; mkdir -p $S
cp $V/$PFX.sv $V/${PFX}_pkg.sv $V/${PFX}_mem.sv $D/sizing/vdp2/area.qsf $S/
sed "s/^\tVDP2 u (/\t$PFX u (/" $D/sizing/vdp2/vdp2_wrap.sv > $S/vdp2_wrap.sv
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
$(for m in $MACROS; do echo "set_global_assignment -name VERILOG_MACRO \"$m=1\""; done)
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name SYSTEMVERILOG_FILE ${PFX}_pkg.sv
set_global_assignment -name SYSTEMVERILOG_FILE ${PFX}.sv
set_global_assignment -name SYSTEMVERILOG_FILE ${PFX}_mem.sv
set_global_assignment -name SYSTEMVERILOG_FILE vdp2_wrap.sv
set_instance_assignment -name VIRTUAL_PIN ON -to *
source area.qsf
Q
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh vdp2p-map-$TAG $D /build/sizing/vdp2p/snap/$TAG sh -c "quartus_map p > $TAG.log 2>&1; quartus_cdb p --vqm=$TAG.vqm >> $TAG.log 2>&1"
