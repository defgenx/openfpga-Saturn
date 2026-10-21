#!/bin/sh
# Full Quartus compile in src/fpga using every CPU for fit and timing.
# quartus_map hangs under x86 emulation with more than one processor, and quartus_fit ignores --parallel
# when ap_core.qsf sets NUM_PARALLEL_PROCESSORS, so the qsf is switched to ALL after synthesis and restored.
#   (cd src/fpga && sh ../../tools/qflow.sh)
set -e
q=ap_core.qsf
cp "$q" "$q.qflow"
trap 'mv -f "$q.qflow" "$q"' EXIT
sed -i 's/-name NUM_PARALLEL_PROCESSORS .*/-name NUM_PARALLEL_PROCESSORS 1/' "$q"
quartus_map ap_core
sed -i 's/-name NUM_PARALLEL_PROCESSORS .*/-name NUM_PARALLEL_PROCESSORS ALL/' "$q"
quartus_fit ap_core
quartus_asm ap_core
quartus_sta ap_core
