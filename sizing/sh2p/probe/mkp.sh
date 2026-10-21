#!/bin/sh
# usage: mkp.sh <name> <core.sv>   (core probe: SH_pkg + SH_regfile + <core.sv> + sh_core_wrap)
n=$1; c=$2
{
echo "set_global_assignment -name TOP_LEVEL_ENTITY sh_core_wrap"
echo "set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$n"
echo 'set_global_assignment -name FAMILY "Cyclone V"'
echo 'set_global_assignment -name DEVICE 5CEBA4F23C8'
echo 'set_global_assignment -name NUM_PARALLEL_PROCESSORS 1'
echo 'set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005'
echo 'set_global_assignment -name VERILOG_MACRO "LIGHT_SATURN=1"'
echo 'set_global_assignment -name AUTO_RAM_RECOGNITION ON'
echo 'set_instance_assignment -name VIRTUAL_PIN ON -to *'
grep -v '^#' ../area_profile.qsf
echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../../src/fpga/saturn/SH/core/SH_pkg.sv"
echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../../src/fpga/saturn/SH/core/SH_regfile.sv"
echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../../src/fpga/saturn/SH_mem.sv"
echo "set_global_assignment -name SYSTEMVERILOG_FILE $c"
echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../sh2/sh_core_wrap.sv"
} > $n.qsf
echo "PROJECT_REVISION = \"$n\"" > $n.qpf
