#!/bin/sh
# Map (and optionally fit) one module standalone with the area profile and virtual pins, plus the register/LUT profile.
#   run.sh <name> <top> <file> [file ...]     (files relative to the worktree root)   MODE=map: no fit
set -e
W=$(cd "$(dirname "$0")/../.." && pwd)
N=$1; TOP=$2; shift 2
D=$W/sizing/cd
{
echo 'set_global_assignment -name FAMILY "Cyclone V"'
echo 'set_global_assignment -name DEVICE 5CEBA4F23C8'
echo "set_global_assignment -name TOP_LEVEL_ENTITY $TOP"
echo 'set_global_assignment -name NUM_PARALLEL_PROCESSORS 1'
echo "set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$N"
echo 'set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005'
echo 'set_global_assignment -name AUTO_RAM_RECOGNITION ON'
echo 'set_global_assignment -name AUTO_ROM_RECOGNITION ON'
echo 'source ../area_profile.qsf'
for f in "$@"; do echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../$f"; done
echo 'set_instance_assignment -name VIRTUAL_PIN ON -to *'
} > "$D/c_$N.qsf"
echo "PROJECT_REVISION = \"c_$N\"" > "$D/c_$N.qpf"
CMD="quartus_map c_$N && quartus_cdb c_$N --vqm=out_$N/c_$N.vqm"; [ "$MODE" = map ] || CMD="$CMD && quartus_fit c_$N"
QRUN_MAX=${QRUN_MAX:-3} /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh "cd-$N" "$W" /build/sizing/cd sh -c "$CMD" > "$D/c_$N.log" 2>&1 || { echo FAIL; tail -20 "$D/c_$N.log"; exit 1; }
python3 "$W/sizing/scu/cones.py" "$D/out_$N/c_$N.vqm" > "$D/$N.cones.txt" || true
python3 "$W/sizing/mem/regs.py" "$D/out_$N/c_$N.vqm" > "$D/$N.regs.txt" || true
if [ "$MODE" != map ]; then python3 "$W/tools/fit_entities.py" "$D/out_$N/c_$N.fit.rpt" 0 > "$D/$N.entities.txt"; fi
grep -E "Total registers|Estimate of Logic" "$D/out_$N/c_$N.map.rpt" | head -3
