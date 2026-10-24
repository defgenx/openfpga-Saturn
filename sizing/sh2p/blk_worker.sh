#!/bin/sh
# Single worker for my Quartus jobs. Queue file: blk_jobs.txt, one job per line: "map <project>" or "vqm <project>" or "fit <project>".
# Runs one job at a time (waits until none of my sh2p-map-q*/sh2p-vqm-* containers is running).
cd "$(dirname "$0")"
D=$(cd ../.. && pwd)
while :; do
  if docker ps --format '{{.Names}}' | grep -qE '^sh2p-(map|fit)-q|^sh2p-vqm-'; then sleep 10; continue; fi
  job=$(head -n1 blk_jobs.txt 2>/dev/null)
  [ -z "$job" ] && { sleep 10; continue; }
  sed -i '' '1d' blk_jobs.txt
  set -- $job; kind=$1; p=$2
  case $kind in
    map) ./run.sh $p map q$p ;;
    fit) ./run.sh $p fit q$p ;;
    vqm) docker run --rm --platform linux/amd64 --name sh2p-vqm-$p -v $D:/build -w /build/sizing/sh2p raetro/quartus:21.1 sh -c "quartus_cdb $p --vqm=out_$p/$p.vqm" > $p.vqm.log 2>&1 ;;
  esac
done
