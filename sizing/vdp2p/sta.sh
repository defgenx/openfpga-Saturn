#!/bin/sh
# usage: sizing/vdp2p/sta.sh <tag> [src dir] [period ns]   fit VDP2P in a registered wrapper and report setup slack at clk_sys
# PFX=VDP2P2 selects the module dir; MACROS="A B" adds VERILOG_MACRO=1. (57.27 MHz = 17.46 ns). Container vdp2p-sta-<tag>; results in sizing/vdp2p/snap/sta_<tag>/.
set -e
TAG=$1
D=$(cd "$(dirname "$0")/../.." && pwd)
PFX=${PFX:-VDP2P}
V=${2:-$D/src/fpga/saturn/Saturn/$PFX}
P=${3:-17.46}
S=$D/sizing/vdp2p/snap/sta_$TAG
rm -rf $S; mkdir -p $S
cp $V/$PFX.sv $V/${PFX}_pkg.sv $V/${PFX}_mem.sv $D/sizing/vdp2/area.qsf $S/
sed "s/^\tVDP2P u (/\t$PFX u (/" $D/sizing/vdp2p/vdp2p_reg_wrap.sv > $S/vdp2p_reg_wrap.sv
echo "create_clock -name CLK -period $P [get_ports CLK]" > $S/t.sdc
cat > $S/p.qpf <<Q
PROJECT_REVISION = "p"
Q
cat > $S/p.qsf <<Q
set_global_assignment -name FAMILY "Cyclone V"
set_global_assignment -name DEVICE 5CEBA4F23C8
set_global_assignment -name TOP_LEVEL_ENTITY vdp2p_reg_wrap
set_global_assignment -name NUM_PARALLEL_PROCESSORS 1
set_global_assignment -name PROJECT_OUTPUT_DIRECTORY output_files
set_global_assignment -name OPTIMIZATION_MODE "BALANCED"
set_global_assignment -name AUTO_RAM_RECOGNITION ON
set_global_assignment -name AUTO_ROM_RECOGNITION ON
set_global_assignment -name SYNTH_TIMING_DRIVEN_SYNTHESIS OFF
set_global_assignment -name VERILOG_MACRO "LIGHT_SATURN=1"
$(for m in $MACROS; do echo "set_global_assignment -name VERILOG_MACRO \"$m=1\""; done)
set_global_assignment -name VERILOG_INPUT_VERSION SYSTEMVERILOG_2005
set_global_assignment -name SYSTEMVERILOG_FILE ${PFX}_pkg.sv
set_global_assignment -name SYSTEMVERILOG_FILE ${PFX}.sv
set_global_assignment -name SYSTEMVERILOG_FILE ${PFX}_mem.sv
set_global_assignment -name SYSTEMVERILOG_FILE vdp2p_reg_wrap.sv
set_global_assignment -name SDC_FILE t.sdc
set_instance_assignment -name VIRTUAL_PIN ON -to *_P
source area.qsf
Q
QRUN_MAX=3 /Users/adelvecchio/Documents/workspace/openfpga-Saturn/tools/qrun.sh vdp2p-sta-$TAG $D /build/sizing/vdp2p/snap/sta_$TAG sh -c "quartus_map p > map.log 2>&1 && quartus_fit p > fit.log 2>&1 && quartus_sta p > sta.log 2>&1"
