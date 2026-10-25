#!/usr/bin/env bash
# Configuration B "lite": copy the tree to <dest> and add the four feature-cut macros to its ap_core.qsf.
# usage: tools/pocket_lite.sh <dest>   (then compile in <dest>/src/fpga as in docs/fit-status.md)
set -euo pipefail
SRC=$(cd "$(dirname "$0")/.." && pwd)
DEST=$1
mkdir -p "$DEST"
rsync -a --delete --exclude .git --exclude 'src/fpga/db' --exclude 'src/fpga/incremental_db' \
      --exclude 'src/fpga/output_files' --exclude 'sizing/*/out*' "$SRC/" "$DEST/"
for m in POCKET_CUT_SCU_DSP POCKET_CUT_SCSP_DSP POCKET_CUT_SH2_WDT POCKET_CUT_SH2_DIVU_SHARED; do
	echo "set_global_assignment -name VERILOG_MACRO \"$m=1\"" >> "$DEST/src/fpga/ap_core.qsf"
done
