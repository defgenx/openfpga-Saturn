#!/bin/bash
# usage: mk.sh <name> <top> <srcdir relative to worktree root> [files...]
#   standalone quartus project <name>/ for module <top>, area profile, 5CEBA4F23C8, virtual pins, 57.27 MHz clock.
set -e
cd "$(dirname "$0")"
n=$1; top=$2; d=$3; shift 3
files=${@:-"VDP1_pkg.sv VDP1.sv"}
mkdir -p $n; cd $n
echo 'QUARTUS_VERSION = "21.1"' > $n.qpf; echo "PROJECT_REVISION = \"$n\"" >> $n.qpf
{
cat <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY $top
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out
set_global_assignment -name OPTIMIZATION_MODE "BALANCED"
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
Q
for f in $files; do echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../../$d/$f"; done
echo 'set_global_assignment -name SDC_FILE ../clk.sdc'
for p in $(cat ../ports.txt); do echo "set_instance_assignment -name VIRTUAL_PIN ON -to $p"; done
echo 'source ../area_profile.qsf'
} > $n.qsf
