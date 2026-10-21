#!/bin/sh
# usage: mk.sh <name> <top> <macro-defs|-> <file.qip|file.sv> [more files...]
# Writes <name>.qpf/.qsf with the area profile, NUM_PARALLEL_PROCESSORS 1, 5CEBA4F23C8, virtual pins.
n=$1; top=$2; mac=$3; shift 3
{
echo "set_global_assignment -name TOP_LEVEL_ENTITY $top"
echo "set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$n"
echo 'set_global_assignment -name FAMILY "Cyclone V"'
echo 'set_global_assignment -name DEVICE 5CEBA4F23C8'
echo 'set_global_assignment -name NUM_PARALLEL_PROCESSORS 1'
echo 'set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005'
echo 'set_global_assignment -name VHDL_INPUT_VERSION VHDL_2008'
echo 'set_global_assignment -name VERILOG_MACRO "LIGHT_SATURN=1"'
[ "$mac" != "-" ] && for m in $mac; do echo "set_global_assignment -name VERILOG_MACRO \"$m\""; done
echo 'set_global_assignment -name AUTO_RAM_RECOGNITION ON'
echo 'set_global_assignment -name AUTO_ROM_RECOGNITION ON'
echo 'set_global_assignment -name SYNTH_TIMING_DRIVEN_SYNTHESIS OFF'
echo 'set_instance_assignment -name VIRTUAL_PIN ON -to *'
cat area_profile.qsf | grep -v '^#'
for f in "$@"; do case $f in *.qip) echo "set_global_assignment -name QIP_FILE $f";; *) echo "set_global_assignment -name SYSTEMVERILOG_FILE $f";; esac; done
} > $n.qsf
echo "PROJECT_REVISION = \"$n\"" > $n.qpf
