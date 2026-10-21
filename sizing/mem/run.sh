#!/bin/sh
# Map + fit mem_pocket standalone with the area profile (virtual pins).
#   run.sh <name> [src dir relative to the worktree root, default src/fpga/core/mem]
# MODE=map: quartus_map only (fast, ALUT/REG per entity); default also runs quartus_fit.
# Writes sizing/mem/out_<name>/ and sizing/mem/<name>.entities.txt. Container: mem-fit-<name>.
set -e
W=$(cd "$(dirname "$0")/../.." && pwd)
N=$1; S=${2:-src/fpga/core/mem}
D=$W/sizing/mem
cat > "$D/m_$N.qsf" <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY mem_pocket
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$N
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
source ../area_profile.qsf
Q
for f in mem_pocket sdram_pocket sdram_clk_out psram_sync ddram_pocket load_pocket sram_pocket vdp1_fb_pocket; do
  echo "set_global_assignment -name SYSTEMVERILOG_FILE ../../$S/$f.sv" >> "$D/m_$N.qsf"
done
python3 "$D/ports.py" "$W/$S/mem_pocket.sv" >> "$D/m_$N.qsf"
echo "PROJECT_REVISION = \"m_$N\"" > "$D/m_$N.qpf"
CMD="quartus_map m_$N && quartus_cdb m_$N --vqm=out_$N/m_$N.vqm"; [ "$MODE" = map ] || CMD="$CMD && quartus_fit m_$N"
QRUN_MAX=${QRUN_MAX:-3} /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh "mem-fit-$N" "$W" /build/sizing/mem sh -c "$CMD" > "$D/m_$N.log" 2>&1 || { echo FAIL; tail -20 "$D/m_$N.log"; exit 1; }
if [ "$MODE" = map ]; then python3 "$D/maptab.py" "$D/out_$N/m_$N.map.rpt" > "$D/$N.entities.txt"
else python3 "$W/tools/fit_entities.py" "$D/out_$N/m_$N.fit.rpt" 0 > "$D/$N.entities.txt"; fi
python3 "$W/sizing/scu/cones.py" "$D/out_$N/m_$N.vqm" > "$D/$N.cones.txt" || true
cat "$D/$N.entities.txt"
