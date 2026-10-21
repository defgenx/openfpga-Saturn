#!/bin/sh
# usage: [SRC=ref] [SEDX=expr] sizing/vdp2/snap_run.sh <tag> [balanced|area]
# Copies the current VDP2 sources into sizing/vdp2/snap/<tag>/ and runs quartus_map on the copy
# (so later edits do not disturb the run). Result: snap/<tag>/<tag>.log and output_files/*.map.rpt.
set -e
TAG=$1; PROF=${2:-area}
D=$(cd "$(dirname "$0")/../.." && pwd)
S=$D/sizing/vdp2/snap/$TAG
rm -rf $S; mkdir -p $S
# SRC=ref uses the unmodified golden sources; SEDX='<sed expr>' (optional) is applied to the copied VDP2.sv (ablation runs)
if [ "$SRC" = ref ]; then V=$D/ref/Saturn_MiSTer/rtl/Saturn/VDP2; else V=$D/src/fpga/saturn/Saturn/VDP2; fi
cp $V/VDP2.sv $V/VDP2_pkg.sv $V/VDP2_mem.sv $D/sizing/vdp2/vdp2_wrap.sv $D/sizing/vdp2/area.qsf $S/
[ -n "$SEDX" ] && sed -i "" "$SEDX" $S/VDP2.sv
[ -n "$SEDP" ] && sed -i "" "$SEDP" $S/VDP2_pkg.sv
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
set_global_assignment -name SYSTEMVERILOG_FILE VDP2_pkg.sv
set_global_assignment -name SYSTEMVERILOG_FILE VDP2.sv
set_global_assignment -name SYSTEMVERILOG_FILE VDP2_mem.sv
set_global_assignment -name SYSTEMVERILOG_FILE vdp2_wrap.sv
set_instance_assignment -name VIRTUAL_PIN ON -to *
Q
[ "$PROF" = area ] && echo "source area.qsf" >> $S/p.qsf
docker run --rm --platform linux/amd64 --name vdp2-map-$TAG -v $D:/build -w /build/sizing/vdp2/snap/$TAG raetro/quartus:21.1 sh -c "quartus_map p > $TAG.log 2>&1; quartus_cdb p --vqm=$TAG.vqm >> $TAG.log 2>&1"
