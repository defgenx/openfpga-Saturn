#!/bin/bash
# usage: mk.sh <name> <srcdir rel. to worktree> <macro|-> files...   standalone SCU project (area profile, virtual pins)
set -e
cd "$(dirname "$0")"
n=$1; d=$2; mac=$3; shift 3
files=${@:-"SCU_PKG.sv DSP_PKG.sv RAM.sv DSP.sv SCU.sv"}
mkdir -p $n; cd $n
echo 'QUARTUS_VERSION = "21.1"' > $n.qpf; echo "PROJECT_REVISION = \"$n\"" >> $n.qpf
{
cat <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY SCU
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
Q
[ "$mac" != "-" ] && echo "set_global_assignment -name VERILOG_MACRO \"$mac=1\""
for f in $files; do echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../../$d/$f"; done
echo 'set_global_assignment -name SDC_FILE ../clk.sdc'
for p in $(cat ../ports.txt); do echo "set_instance_assignment -name VIRTUAL_PIN ON -to $p"; done
echo 'source ../area_profile.qsf'
} > $n.qsf
