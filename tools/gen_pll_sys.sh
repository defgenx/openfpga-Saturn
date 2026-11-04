#!/usr/bin/env bash
# Regenerate src/fpga/core/pll_sys/{pll_sys.v,pll_sys_cfg.v,...} with ip-generate from the Quartus Docker image.
# MiSTer's PLL plan adapted to the 74.25 MHz reference (docs/integration.md section 2, tools/pllplan.py):
# ip-generate builds our five clocks at MiSTer's 50 MHz reference (post-divider 2, C0 8, C1 4, cp 20, bwctrl 4000),
# then pllplan.py --patch sets the 74.25 MHz reference, M and K of the compiled mode (NTSC 352) and checks the rest.
# pll_sys_320.v is the same template patched for NTSC 320 (build-only POCKET_PLL_COMPILE_320, docs/integration.md
# section 2); pll_sys_select.v picks one of the two.
#   0 clk_sys   1 clk_ram (2 x clk_sys)   2 clk_vid (clk_sys / 4)   3 clk_vid_90 (+90 deg)   4 clk_ram_cap (clk_ram +90 deg)
# pll_sys.qip (file list) and pll_sys_select.v are kept by hand.
set -euo pipefail
cd "$(dirname "$0")/.."
IMAGE=${QUARTUS_IMAGE:-raetro/quartus:21.1}
PLAN=$(python3 tools/pllplan.py --template)
docker run --rm --platform linux/amd64 --cpus 2 -e PLAN="$PLAN" -v "$PWD":/build -w /build "$IMAGE" bash -c '
set -e
mkdir /tmp/gen && cd /tmp/gen
ip-generate --component-name=altera_pll --output-name=pll_sys --output-directory=/tmp/gen/pll_sys \
  --file-set=QUARTUS_SYNTH --language=verilog --part=5CEBA4F23C8 --remove-qsys-generate-warning \
  --system-info=DEVICE_FAMILY="Cyclone V" --component-parameter=gui_use_locked=true \
  --component-parameter=gui_pll_mode="Fractional-N PLL" \
  --component-parameter=gui_en_reconf=true --component-parameter=gui_operation_mode=normal $PLAN
ip-generate --component-name=altera_pll_reconfig --output-name=pll_sys_cfg --output-directory=/tmp/gen/pll_sys_cfg \
  --file-set=QUARTUS_SYNTH --language=verilog --part=5CEBA4F23C8 --remove-qsys-generate-warning \
  --system-info=DEVICE_FAMILY="Cyclone V"
cp /tmp/gen/pll_sys/pll_sys.v /tmp/gen/pll_sys_cfg/pll_sys_cfg.v /tmp/gen/pll_sys_cfg/submodules/*.v /build/src/fpga/core/pll_sys/
cp /tmp/gen/pll_sys/pll_sys.v /build/src/fpga/core/pll_sys/pll_sys_320.v
'
python3 tools/pllplan.py --patch src/fpga/core/pll_sys/pll_sys.v
python3 tools/pllplan.py --patch src/fpga/core/pll_sys/pll_sys_320.v --mode "NTSC 320"
