# Platform glue simulation (iverilog >= 12, verilator >= 5 for the bridge bench): resampler, video path, APF status, pads.
#   make -C sim platform
PLAT := ../../src/fpga/core/platform
CORE := ../../src/fpga/core
.PHONY: all clean
all: build/tb_audio.vvp build/tb_ce.vvp
	vvp build/tb_ce.vvp | tee build/ce.log
	@grep -q 'RESULT: PASS' build/ce.log
	vvp build/tb_audio.vvp | tee build/audio.log
	@grep -q 'RESULT: PASS' build/audio.log
	@for cfg in "0 0 0 0 0" "0 1 1 0 0" "1 0 0 0 0" "1 1 2 0 0" "0 0 0 1 0" "0 1 1 1 0" "0 1 2 1 1" "0 0 2 1 1"; do set -- $$cfg; \
	  iverilog -g2012 -DHIRES_V=$$1 -DWIDE_V=$$2 -DVRES_V=$$3 -DMISMATCH_V=$$4 -DPAL_V=$$5 -o build/tb_video.vvp tb_video.sv $(PLAT)/pocket_video.sv && \
	  vvp build/tb_video.vvp | tee build/video.log && grep -q 'RESULT: PASS' build/video.log || exit 1; done
	iverilog -g2012 -DRESTART_V=1 -o build/tb_video.vvp tb_video.sv $(PLAT)/pocket_video.sv
	vvp build/tb_video.vvp | tee build/video.log
	@grep -q 'RESULT: PASS' build/video.log
	@for cfg in "0 1 1" "1 1 2"; do set -- $$cfg; \
	  iverilog -g2012 -DHIRES_V=$$1 -DWIDE_V=$$2 -DVRES_V=$$3 -DPARTIAL_V=1 -o build/tb_video.vvp tb_video.sv $(PLAT)/pocket_video.sv && \
	  vvp build/tb_video.vvp | tee build/video.log && grep -q 'RESULT: PASS' build/video.log || exit 1; done
	iverilog -g2012 -DPOCKET_DEBUG_OVERLAY -o build/tb_overlay.vvp tb_overlay.sv $(PLAT)/pocket_video.sv
	vvp build/tb_overlay.vvp | tee build/overlay.log
	@grep -q 'RESULT: PASS' build/overlay.log
	verilator --binary --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD --top-module tb_bridge_status \
	  tb_bridge_status.sv $(CORE)/core_bridge_cmd.v ../../src/fpga/apf/common.v -Mdir build/bs -o tb > build/bs.log 2>&1 || (tail -20 build/bs.log; false)
	build/bs/tb | tee build/bridge_status.log
	@grep -q 'RESULT: PASS' build/bridge_status.log
	iverilog -g2012 -o build/tb_save_size.vvp tb_save_size.sv $(CORE)/save_size.sv
	vvp build/tb_save_size.vvp | tee build/save_size.log
	@grep -q 'RESULT: PASS' build/save_size.log
	iverilog -g2012 -o build/tb_pad.vvp tb_pad.sv $(PLAT)/pad_pocket.sv
	vvp build/tb_pad.vvp | tee build/pad.log
	@grep -q 'RESULT: PASS' build/pad.log
	iverilog -g2012 -DNEG -o build/tb_pad_neg.vvp tb_pad.sv $(PLAT)/pad_pocket.sv
	vvp build/tb_pad_neg.vvp > build/pad_neg.log; grep -q 'RESULT: FAIL' build/pad_neg.log
build/tb_ce.vvp: tb_ce.sv ../../src/fpga/core/ce_gen.sv
	@mkdir -p build
	iverilog -g2012 -o $@ tb_ce.sv ../../src/fpga/core/ce_gen.sv
build/tb_audio.vvp: tb_audio.sv $(PLAT)/pocket_audio.sv
	@mkdir -p build
	iverilog -g2012 -o $@ tb_audio.sv $(PLAT)/pocket_audio.sv
clean:
	rm -rf build

# Quartus branch of pocket_audio_mac (altmult_add) against the simulation branch; needs Altera's altera_mf.v.
.PHONY: mac-equiv
mac-equiv:
	@test -n "$(ALTERA_MF)" || (echo "ALTERA_MF=<path to altera_mf.v>"; false)
	@mkdir -p build/mac
	python3 mac_split.py $(PLAT)/pocket_audio.sv $(ALTERA_MF) build/mac
	iverilog -g2012 -o build/mac/tb.vvp tb_audio_mac.sv build/mac/mac_qis.sv build/mac/mac_sim.sv build/mac/altmult_add_sim.v
	vvp -n build/mac/tb.vvp | tee build/mac/mac.log
	@grep -q ', 0 mismatches' build/mac/mac.log
