#!/bin/sh
# usage: snap.sh <name>   freezes src/.../SCSP/ into snap/<name>/ and creates project scsp_snap_<name>
# so a long Quartus run is not affected by later edits.
H=$(cd "$(dirname "$0")" && pwd); n=$1
mkdir -p $H/snap/$n
cp $H/../../src/fpga/saturn/Saturn/SCSP/SCSP.sv $H/../../src/fpga/saturn/Saturn/SCSP/SCSP_pkg.sv $H/snap/$n/
sed -e "s#../../src/fpga/saturn/Saturn/SCSP/#snap/$n/#; s#out_new#out_snap_$n#" $H/scsp_new.qsf > $H/scsp_snap_$n.qsf
echo "PROJECT_REVISION = \"scsp_snap_$n\"" > $H/scsp_snap_$n.qpf
