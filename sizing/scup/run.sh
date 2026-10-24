#!/bin/bash
# usage: run.sh <name> [steps]  Docker raetro/quartus:21.1, unique container name, logs in <name>/
cd "$(dirname "$0")"; W=$(cd ../.. && pwd)
n=$1; steps=${2:-"map fit sta"}
rm -rf $n/db $n/incremental_db $n/out
cmd=""; for s in $steps; do case $s in
 map) cmd="$cmd quartus_map $n > map.log 2>&1;";; fit) cmd="$cmd quartus_fit $n > fit.log 2>&1;";;
 sta) cmd="$cmd quartus_sta $n > sta.log 2>&1;";; vqm) cmd="$cmd quartus_cdb $n --vqm=$n.vqm > vqm.log 2>&1;";; esac; done
docker run --rm --platform linux/amd64 --name scup-$n-$$ -v $W:/build -w /build/sizing/scup/$n raetro/quartus:21.1 sh -c "$cmd"
