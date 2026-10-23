#!/bin/sh
# TOP=<module> overrides the top (no wrapper file added).
# usage: mkproj.sh <rev> <define|-> <file>...   creates m68k_<rev>.qpf/.qsf (paths relative to sizing/m68k)
rev=$1; def=$2; shift 2
H=$(cd "$(dirname "$0")" && pwd)
{ sed -n '1,/^set_global_assignment -name SEED/p' $H/../area_profile.qsf
cat <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name OPTIMIZATION_MODE "BALANCED"
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name SYNTH_TIMING_DRIVEN_SYNTHESIS OFF
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name TOP_LEVEL_ENTITY ${TOP:-m68k_wrap}
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$rev
Q
[ "$def" != "-" ] && echo "set_global_assignment -name VERILOG_MACRO \"$def=1\""
for f in "$@"; do case $f in *.vhd) t=VHDL_FILE;; *.v) t=VERILOG_FILE;; *) t=SYSTEMVERILOG_FILE;; esac; echo "set_global_assignment -name $t $f"; done
echo "set_instance_assignment -name VIRTUAL_PIN ON -to *"
[ -z "$TOP" ] && echo "set_global_assignment -name SYSTEMVERILOG_FILE m68k_wrap.sv"
} > $H/m68k_$rev.qsf
echo "PROJECT_REVISION = \"m68k_$rev\"" > $H/m68k_$rev.qpf
