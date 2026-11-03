#!/bin/sh
# Sweep the SDRAM pad delay with tb_sdram (data + SDRAM model timing checks): one line per TCO (ps, clock and command out),
# PASS / FAIL. The capture is fixed at READ + 4 in the I/O cell register; the hardware-equivalent TCO is 3.2 to 5.1 ns
# (docs/memory.md section 3). The DQ overlap and tRP limits are the Makefile's SDARGS.
# usage: sh sweep.sh [TIN_ps]
TIN=${1:-0}
cd "$(dirname "$0")" || exit 1
[ -x build/tb_sdram ] || make build/tb_sdram >/dev/null
for tco in $(seq 500 500 9000); do echo "$tco"; done | xargs -P 6 -L 1 sh -c 'r=$(vvp build/tb_sdram +PROFILE=2 +RUN_US=30 +OVERLAP_PS=1700 +SD_TRP_PS=17400 +TCO=$0 +TIN='$TIN' | grep -c "tb_sdram: PASS"); echo "$0 $r"' | sort -n | awk -v tin=$TIN '{ printf "TCO %5d TIN %d  %s\n", $1, tin, ($2 ? "PASS" : "FAIL") }'
