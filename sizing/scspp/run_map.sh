#!/bin/sh
# usage: run_map.sh <rev>   quartus_map + VQM export (for profile.py); prints key numbers
H=$(cd "$(dirname "$0")" && pwd); R=$1
docker run --rm --platform linux/amd64 --name scspp-m-$R-$$ -v $H/../..:/build -w /build/sizing/scspp raetro/quartus:21.1 sh -c "quartus_map scspp_$R && quartus_cdb scspp_$R --vqm=out_$R/$R.vqm" > $H/outm_$R.log 2>&1
f=$H/out_$R/scspp_$R.map.rpt
g() { grep -m1 "$1" $f | awk -F';' '{gsub(/ /,"",$3); print $3}'; }
echo "$R: mapALM=$(g 'Estimate of Logic utilization') ALUT=$(g 'Combinational ALUT usage for logic') REG=$(g 'Dedicated logic registers') MEMbits=$(g 'Total block memory bits') MLAB=$(g 'Total MLAB memory bits') DSP=$(g 'Total DSP Blocks')"
