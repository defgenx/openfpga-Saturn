#!/bin/bash
# usage: mk.sh <name> <ref|src> <area|bal>  -> creates dir <name> with a quartus project for VDP1 standalone
set -e
n=$1; src=$2; prof=$3
mkdir -p $n; cd $n
if [ $src = ref ]; then d=../../../ref/Saturn_MiSTer/rtl/Saturn/VDP1; else d=../../../src/fpga/saturn/Saturn/VDP1; fi
echo 'QUARTUS_VERSION = "21.1"' > $n.qpf; echo "PROJECT_REVISION = \"$n\"" >> $n.qpf
cat > $n.qsf <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY VDP1
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out
set_global_assignment -name OPTIMIZATION_MODE "BALANCED"
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name SYNTH_TIMING_DRIVEN_SYNTHESIS OFF
set_global_assignment -name VERILOG_MACRO "LIGHT_SATURN=1"
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name SYSTEMVERILOG_FILE $d/VDP1_pkg.sv
set_global_assignment -name SYSTEMVERILOG_FILE $d/VDP1.sv
set_instance_assignment -name VIRTUAL_PIN ON -to *
Q
[ $prof = area ] && echo 'source ../area_profile.qsf' >> $n.qsf
exit 0
