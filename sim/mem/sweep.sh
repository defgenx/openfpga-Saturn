#!/bin/sh
# Sweep sdram_pocket cap_sel (0..7) against the pad delays with tb_sdram (data + SDRAM model timing checks).
# usage: sh sweep.sh [TIN_ps]   rows: TCO (ps, clock and command out); columns: cap_sel 0..2 (READ + 4 / 5 / 6); '#' = PASS
# The DQ contention limit is raised (see the Makefile's OVL); the hardware-equivalent TCO is 3.2 to 5.1 ns (docs/memory.md section 3).
TIN=${1:-0}
cd "$(dirname "$0")" || exit 1
[ -x build/tb_sdram ] || make build/tb_sdram >/dev/null
for tco in $(seq 500 500 9000); do
	for cap in 0 1 2; do echo "$tco $cap"; done
done | xargs -P 10 -L 1 sh -c 'r=$(vvp build/tb_sdram +PROFILE=2 +RUN_US=30 +OVERLAP_PS=5000 +TCO=$0 +TIN='$TIN' +CAP=$1 | grep -c "tb_sdram: PASS"); echo "$0 $1 $r"' | sort -n -k1,1 -k2,2 | awk -v tin=$TIN '
	{ if ($1 != last) { if (last != "") print line; line = sprintf("TCO %5d TIN %d  ", $1, tin); last = $1 } line = line ($3 ? "#" : ".") }
	END { print line }'
