#!/bin/sh
# Sweep sdram_pocket cap_sel (0..7) against the pad delays with tb_sdram (data + SDRAM model timing checks).
# usage: sh sweep.sh [TIN_ps]   rows: TCO (ps, clock and command out); columns: cap_sel 0..7; '#' = PASS
TIN=${1:-1000}
cd "$(dirname "$0")" || exit 1
[ -x build/tb_sdram ] || make build/tb_sdram >/dev/null
for tco in $(seq 1000 500 11500); do
	for cap in 0 1 2 3 4 5 6 7; do echo "$tco $cap"; done
done | xargs -P 10 -L 1 sh -c 'r=$(vvp build/tb_sdram +PROFILE=0 +RUN_US=40 +TCO=$0 +TIN='$TIN' +CAP=$1 | grep -c "tb_sdram: PASS"); echo "$0 $1 $r"' | sort -n -k1,1 -k2,2 | awk -v tin=$TIN '
	{ if ($1 != last) { if (last != "") print line; line = sprintf("TCO %5d TIN %d  ", $1, tin); last = $1 } line = line ($3 ? "#" : ".") }
	END { print line }'
