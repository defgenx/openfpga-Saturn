#!/usr/bin/env bash
# Regenerate src/fpga/core/pll_sys/{pll_sys.v,pll_sys_cfg.v,...} with ip-generate from the Quartus Docker image.
# 74.25 MHz reference, fractional PLL, runtime reconfiguration. Outputs:
#   0 clk_sys 57.2728 MHz   1 clk_ram 114.5456 MHz   2 clk_vid 14.3182 MHz   3 clk_vid_90 (+17460 ps = 90 degrees)
# pll_sys.qip (file list) is kept by hand.
set -euo pipefail
cd "$(dirname "$0")/.."
IMAGE=${QUARTUS_IMAGE:-raetro/quartus:21.1}
docker run --rm --platform linux/amd64 -v "$PWD":/build -w /build "$IMAGE" bash -c '
set -e
rm -rf /tmp/gen && mkdir /tmp/gen && cd /tmp/gen
ip-generate --component-name=altera_pll --output-name=pll_sys --output-directory=/tmp/gen/pll_sys \
  --file-set=QUARTUS_SYNTH --language=verilog --part=5CEBA4F23C8 --remove-qsys-generate-warning \
  --system-info=DEVICE_FAMILY="Cyclone V" \
  --component-parameter=gui_reference_clock_frequency=74.25 --component-parameter=gui_use_locked=true \
  --component-parameter=gui_pll_mode="Fractional-N PLL" --component-parameter=gui_number_of_clocks=4 \
  --component-parameter=gui_output_clock_frequency0=57.2728  --component-parameter=gui_phase_shift0=0 \
  --component-parameter=gui_output_clock_frequency1=114.5456 --component-parameter=gui_phase_shift1=0 \
  --component-parameter=gui_output_clock_frequency2=14.3182  --component-parameter=gui_phase_shift2=0 \
  --component-parameter=gui_output_clock_frequency3=14.3182  --component-parameter=gui_phase_shift3=17460 \
  --component-parameter=gui_en_reconf=true --component-parameter=gui_operation_mode=normal
ip-generate --component-name=altera_pll_reconfig --output-name=pll_sys_cfg --output-directory=/tmp/gen/pll_sys_cfg \
  --file-set=QUARTUS_SYNTH --language=verilog --part=5CEBA4F23C8 --remove-qsys-generate-warning \
  --system-info=DEVICE_FAMILY="Cyclone V"
cp /tmp/gen/pll_sys/pll_sys.v /tmp/gen/pll_sys_cfg/pll_sys_cfg.v /tmp/gen/pll_sys_cfg/submodules/*.v /build/src/fpga/core/pll_sys/
'
