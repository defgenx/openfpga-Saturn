#!/bin/bash
# usage: run.sh <name> <top> [map|fit|sta...]  runs in Docker raetro/quartus:21.1 (unique container name), logs in <name>/*.log
cd "$(dirname "$0")"
W=$(cd ../.. && pwd)
n=$1; top=$2; steps=${3:-"map fit sta"}
rm -rf $n/db $n/incremental_db $n/out
cmd=""
for s in $steps; do
  case $s in
    map) cmd="$cmd quartus_map $n > map.log 2>&1;" ;;
    fit) cmd="$cmd quartus_fit $n > fit.log 2>&1;" ;;
    sta) cmd="$cmd quartus_sta $n > sta.log 2>&1;" ;;
  esac
done
docker run --rm --platform linux/amd64 --name vdp1rw-$n-$$ -v $W:/build -w /build/sizing/vdp1p/$n raetro/quartus:21.1 sh -c "$cmd" 
