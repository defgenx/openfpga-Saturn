#!/bin/sh
# usage: mk.sh <name> <top> <bal|area> <wrapper.sv> [extra qsf lines]
n=$1; top=$2; prof=$3; wrap=$4
{ echo "set_global_assignment -name TOP_LEVEL_ENTITY $top"; echo "set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$n"; cat sh2_base.qsf.inc
  if [ "$prof" = area ]; then cat area_profile.qsf; else echo 'set_global_assignment -name OPTIMIZATION_MODE "BALANCED"'; fi
  [ -n "$5" ] && echo "$5"
  echo "source sh2_files.qip"; echo "set_global_assignment -name SYSTEMVERILOG_FILE $wrap"; } > $n.qsf
echo "PROJECT_REVISION = \"$n\"" > $n.qpf
