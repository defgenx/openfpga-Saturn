#!/bin/sh
# Sweep sdram_pocket cap_sel (0..7) against the pad delays: prints one row per TCO (clock+command out, ps) and TIN (pad->register, ps).
# usage: sh sweep.sh [TIN]   (after `make -C sim sndram`; PASS = '#', FAIL = '.')   columns: cap_sel 0..7
TIN=${1:-1000}
cd "$(dirname "$0")/build" || exit 1
for tco in $(seq 1000 500 11500); do
	for cap in 0 1 2 3 4 5 6 7; do echo "$tco $cap"; done
done | xargs -P 10 -L 1 sh -c 'r=$(./Vtb +TCO=$0 +TIN='$TIN' +CAP=$1 | grep -c "^PASS"); echo "$0 $1 $r"' | sort -n -k1,1 -k2,2 | awk -v tin=$TIN '
	{ if ($1 != last) { if (last != "") print line; line = sprintf("TCO %5d TIN %d  ", $1, tin); last = $1 } line = line ($3 ? "#" : ".") }
	END { print line }'
