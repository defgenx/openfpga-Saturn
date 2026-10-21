#!/bin/bash
# usage: run.sh <name> [steps]  Quartus 21.1 through tools/qrun.sh (QRUN_MAX=3), logs in <name>/
cd "$(dirname "$0")"; W=$(cd ../.. && pwd)
n=$1; steps=${2:-"map fit sta"}
case "$steps" in *map*) rm -rf $n/db $n/incremental_db $n/out;; esac
cmd=""; for s in $steps; do case $s in
 map) cmd="$cmd quartus_map $n > map.log 2>&1;";; fit) cmd="$cmd quartus_fit $n > fit.log 2>&1;";;
 sta) cmd="$cmd quartus_sta $n > sta.log 2>&1;";; esac; done
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh smpcs-$n-$$ $W /build/sizing/smpc-serv/$n sh -c "$cmd"
