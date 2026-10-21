#!/bin/sh
# usage: run_fit.sh <rev>   quartus_map + quartus_fit in Docker (unique container name); prints key numbers
H=$(cd "$(dirname "$0")" && pwd); R=$1
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh scspp-$R-$$ $H/../.. /build/sizing/scspp sh -c "quartus_map scspp_$R && quartus_fit scspp_$R" > $H/out_$R.log 2>&1
f=$H/out_$R/scspp_$R.map.rpt
g() { grep -m1 "$1" $f | awk -F';' '{gsub(/ /,"",$3); print $3}'; }
echo "$R: mapALM=$(g 'Estimate of Logic utilization') ALUT=$(g 'Combinational ALUT usage for logic') REG=$(g 'Dedicated logic registers') MEMbits=$(g 'Total block memory bits') MLAB=$(g 'Total MLAB memory bits') DSP=$(g 'Total DSP Blocks')"
grep -E "Logic utilization|ALMs needed|Total block memory bits|RAM Blocks" $H/out_$R/scspp_$R.fit.summary
