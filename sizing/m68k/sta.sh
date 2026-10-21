#!/bin/sh
# usage: sta.sh <rev> <sdc of the core>   (after run_map.sh <rev> fit): worst setup slack and Fmax at the 57.27 MHz constraint
H=$(cd "$(dirname "$0")" && pwd); R=$1; S=$2
cat > $H/sta_$R.tcl <<TCL
project_open m68k_$R
create_timing_netlist
read_sdc m68k.sdc
read_sdc $S
update_timing_netlist
report_clock_fmax_summary -file out_$R/m68k_$R.fmax.rpt
report_timing -setup -npaths 8 -detail summary -file out_$R/m68k_$R.paths.rpt
TCL
docker run --rm --platform linux/amd64 --name m68k-sta-$R-$$ -v $H/../..:/build -w /build/sizing/m68k raetro/quartus:21.1 quartus_sta -t sta_$R.tcl > $H/out_$R.sta.log 2>&1
cat $H/out_$R/m68k_$R.fmax.rpt | grep -v "^$" | head -20
