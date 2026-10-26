#!/bin/bash
# usage: mk.sh <name> [define]   standalone SMPC_SERV project (area profile, virtual pins, 57.27 MHz clock); sources snapshot in <name>/src
set -e
cd "$(dirname "$0")"
n=$1; mac=${2:--}
SRC=../../src/fpga/saturn/Saturn
mkdir -p $n/src; cp $SRC/SMPC_SERV.sv $SRC/smpc_fw.hex $SRC/CD/hle/serv/*.v $n/src/ 2>/dev/null; [ -f $SRC/SMPC_SERV/smpc_rf_top.v ] && cp $SRC/SMPC_SERV/*.v $n/src/ || true
cd $n
echo 'QUARTUS_VERSION = "21.1"' > $n.qpf; echo "PROJECT_REVISION = \"$n\"" >> $n.qpf
{
cat <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY SMPC_SERV
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
Q
[ "$mac" != "-" ] && echo "set_global_assignment -name VERILOG_MACRO \"$mac=1\""
for f in src/*.v src/*.sv; do echo "set_global_assignment -name SYSTEMVERILOG_FILE $f"; done
echo 'set_global_assignment -name SDC_FILE ../clk.sdc'
for p in $(cat ../ports.txt); do echo "set_instance_assignment -name VIRTUAL_PIN ON -to $p"; done
echo 'source ../../area_profile.qsf'
} > $n.qsf
