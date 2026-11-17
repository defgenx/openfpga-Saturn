#!/bin/sh
# Full Quartus compile in src/fpga.
# The fitter's result depends on the number of processors it may use, as it does on the seed, so a seed holds for
# one number only. The releases are fitted on 1 (the default here): with it the seed of a release gives the released
# bitstream on any host that runs this Quartus build. QFLOW_PROCS=ALL fits on every CPU, which needs seeds of its own.
# quartus_map hangs under x86 emulation with more than one processor, and quartus_fit ignores --parallel
# when ap_core.qsf sets NUM_PARALLEL_PROCESSORS, so the qsf is switched after synthesis and restored.
#   (cd src/fpga && sh ../../tools/qflow.sh)
set -e
procs=${QFLOW_PROCS:-1}
case $procs in
ALL|[1-9]|[1-9][0-9]) ;;
*) echo "qflow.sh: QFLOW_PROCS must be a number or ALL, not '$procs'" >&2; exit 1 ;;
esac
q=ap_core.qsf
cp "$q" "$q.qflow"
trap 'mv -f "$q.qflow" "$q"' EXIT
sed -i 's/-name NUM_PARALLEL_PROCESSORS .*/-name NUM_PARALLEL_PROCESSORS 1/' "$q"
quartus_map ap_core
sed -i "s/-name NUM_PARALLEL_PROCESSORS .*/-name NUM_PARALLEL_PROCESSORS $procs/" "$q"
quartus_fit ap_core
quartus_asm ap_core
quartus_sta ap_core
