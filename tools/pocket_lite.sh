#!/usr/bin/env bash
# Configuration B "lite": copy the tree to <dest> and add the feature-cut macros to its ap_core.qsf.
# usage: tools/pocket_lite.sh <dest>   (then compile in <dest>/src/fpga as in docs/fit-status.md)
set -euo pipefail
SRC=$(cd "$(dirname "$0")/.." && pwd)
DEST=$1
mkdir -p "$DEST"
rsync -a --delete --exclude .git --exclude 'src/fpga/db' --exclude 'src/fpga/incremental_db' \
      --exclude 'src/fpga/output_files' --exclude 'sizing/*/out*' "$SRC/" "$DEST/"
# the SH2 cuts target the old SH7604; with POCKET_SH2P they do not apply
# low game impact only (docs/game-impact.md); COEF, LINESCROLL, ZOOM, RGB32, BITMAP, HIRES, SHADOW, SPECIAL stay
# SCSP_DSP=compact keeps the SCSP DSP in its compact form (docs/scsp-rewrite.md section 6) instead of cutting it
SCSP_DSP_MACRO=POCKET_CUT_SCSP_DSP
[ "${SCSP_DSP:-cut}" = compact ] && SCSP_DSP_MACRO=POCKET_SCSP_DSP_COMPACT
for m in POCKET_CUT_SCU_DSP $SCSP_DSP_MACRO POCKET_CUT_VDP2_RPARAMB POCKET_CUT_VDP2_EXTCC POCKET_CUT_VDP2_LNCOL \
         POCKET_CUT_VDP2_MOSAIC POCKET_CUT_VDP2_SPRWIN POCKET_CUT_VDP2_LINEWIN POCKET_CUT_VDP2_BACKLINE; do
	grep -q "\"$m=1\"" "$DEST/src/fpga/ap_core.qsf" || echo "set_global_assignment -name VERILOG_MACRO \"$m=1\"" >> "$DEST/src/fpga/ap_core.qsf"
done
