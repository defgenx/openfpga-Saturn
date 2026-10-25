#!/bin/sh
n=$1; top=$2; shift 2
{
echo "set_global_assignment -name TOP_LEVEL_ENTITY $top"
echo "set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$n"
echo 'set_global_assignment -name FAMILY "Cyclone V"'
echo 'set_global_assignment -name DEVICE 5CEBA4F23C8'
echo 'set_global_assignment -name NUM_PARALLEL_PROCESSORS 1'
echo 'set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005'
echo 'set_instance_assignment -name VIRTUAL_PIN ON -to *'
grep -v '^#' ../area_profile.qsf
for f in "$@"; do echo "set_global_assignment -name SYSTEMVERILOG_FILE $f"; done
} > $n.qsf
echo "PROJECT_REVISION = \"$n\"" > $n.qpf
