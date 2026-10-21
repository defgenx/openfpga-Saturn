#!/bin/sh
# usage: sta.sh <rev>   (after run_fit.sh <rev>): setup slack and Fmax at 57.27 MHz, through tools/qrun.sh
H=$(cd "$(dirname "$0")" && pwd); R=$1
cat > $H/sta_$R.tcl <<TCL
project_open scspp_$R
create_timing_netlist
read_sdc scspp.sdc
update_timing_netlist
report_clock_fmax_summary -file out_$R/scspp_$R.fmax.rpt
report_timing -setup -npaths 6 -detail summary -file out_$R/scspp_$R.paths.rpt
TCL
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh scspp-sta-$R-$$ $H/../.. /build/sizing/scspp quartus_sta -t sta_$R.tcl > $H/out_$R.sta.log 2>&1
grep -v "^$" $H/out_$R/scspp_$R.fmax.rpt | head -12
sed -n 1,30p $H/out_$R/scspp_$R.paths.rpt
