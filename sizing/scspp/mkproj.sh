#!/bin/sh
# usage: mkproj.sh <rev> <define|-> <file>...  creates scspp_<rev>.qpf/.qsf; sources are snapshotted into snap_<rev>/
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
set_global_assignment -name TOP_LEVEL_ENTITY scsp_wrap
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$rev
Q
for d in $(echo $def | tr "," " "); do [ "$d" != "-" ] && echo "set_global_assignment -name VERILOG_MACRO \"$d=1\""; done
rm -rf $H/snap_$rev; mkdir -p $H/snap_$rev
for f in "$@"; do cp $f $H/snap_$rev/; echo "set_global_assignment -name SYSTEMVERILOG_FILE snap_$rev/$(basename $f)"; done
cp $H/scsp_wrap.sv $H/snap_$rev/; echo "set_global_assignment -name SYSTEMVERILOG_FILE snap_$rev/scsp_wrap.sv"
echo "set_instance_assignment -name VIRTUAL_PIN ON -to *"
} > $H/scspp_$rev.qsf
echo "PROJECT_REVISION = \"scspp_$rev\"" > $H/scspp_$rev.qpf
