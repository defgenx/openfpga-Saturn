#!/bin/sh
# Map one source snapshot with the area profile.
#   run.sh <name> <srcdir relative to the worktree root>
# Writes sizing/scu/out_<name>/ (reports, vqm). Container: scu-map-<name>.
set -e
W=$(cd "$(dirname "$0")/../.." && pwd)
N=$1; S=$2
D=$W/sizing/scu
cat > "$D/scu_$N.qsf" <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY SCU
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY out_$N
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
source area_profile.qsf
set_global_assignment -name SYSTEMVERILOG_FILE ../../$S/SCU_PKG.sv
set_global_assignment -name SYSTEMVERILOG_FILE ../../$S/DSP_PKG.sv
set_global_assignment -name SYSTEMVERILOG_FILE ../../$S/RAM.sv
set_global_assignment -name SYSTEMVERILOG_FILE ../../$S/DSP.sv
set_global_assignment -name SYSTEMVERILOG_FILE ../../$S/SCU.sv
set_instance_assignment -name VIRTUAL_PIN ON -to *
Q
echo "PROJECT_REVISION = \"scu_$N\"" > "$D/scu_$N.qpf"
docker run --rm --platform linux/amd64 --name "scu-map-$N" -v "$W":/build -w /build/sizing/scu \
  raetro/quartus:21.1 sh -c "quartus_map scu_$N && quartus_cdb scu_$N --vqm=out_$N/scu_$N.vqm" > "/tmp/scu-map-$N.log" 2>&1
python3 "$D/cones.py" "$D/out_$N/scu_$N.vqm" > "$D/out_$N/cones.txt" || true
