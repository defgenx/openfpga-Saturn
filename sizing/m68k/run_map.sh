#!/bin/sh
# usage: run_map.sh <rev> [fit]   quartus_map (and quartus_fit) in Docker; prints key numbers
H=$(cd "$(dirname "$0")" && pwd); R=$1
cmd="quartus_map m68k_$R"; [ "$2" = fit ] && cmd="$cmd && quartus_fit m68k_$R"
docker run --rm --platform linux/amd64 --name m68k-$R-$$ -v $H/../..:/build -w /build/sizing/m68k raetro/quartus:21.1 sh -c "$cmd" > $H/out_$R.log 2>&1
f=$H/out_$R/m68k_$R.map.rpt
g() { grep -m1 "$1" $f | awk -F';' '{gsub(/ /,"",$3); print $3}'; }
echo "$R: mapALM=$(g 'Estimate of Logic utilization') ALUT=$(g 'Combinational ALUT usage for logic') REG=$(g 'Dedicated logic registers') MEMbits=$(g 'Total block memory bits') MLAB=$(g 'Total MLAB memory bits')"
[ "$2" = fit ] && grep -m3 "Logic utilization\|ALMs needed" $H/out_$R/m68k_$R.fit.summary
