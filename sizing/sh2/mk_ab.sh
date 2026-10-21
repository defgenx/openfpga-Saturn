#!/bin/sh
# usage: mk_ab.sh <name> <bal|area>   (run gen_ab.py first)
n=$1; prof=$2
{ echo "set_global_assignment -name TOP_LEVEL_ENTITY sh2_ab_wrap"; echo "set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$n"; cat sh2_base.qsf.inc
  if [ "$prof" = area ]; then cat area_profile.qsf; else echo 'set_global_assignment -name OPTIMIZATION_MODE "BALANCED"'; fi
  echo "source sh2_files.qip"; echo "set_global_assignment -name SYSTEMVERILOG_FILE sh2_pair_wrap.sv"; echo "source gen/ref_files.qip"; } > $n.qsf
echo "PROJECT_REVISION = \"$n\"" > $n.qpf
