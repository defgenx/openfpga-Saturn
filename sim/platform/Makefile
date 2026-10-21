# Platform glue simulation (iverilog >= 12): resampler and video path.
#   make -C sim platform
PLAT := ../../src/fpga/core/platform
.PHONY: all clean
all: build/tb_audio.vvp
	vvp build/tb_audio.vvp | tee build/audio.log
	@grep -q 'RESULT: PASS' build/audio.log
	@for cfg in "0 0 0" "0 1 1" "1 0 0" "1 1 2"; do set -- $$cfg; \
	  iverilog -g2012 -DHIRES_V=$$1 -DWIDE_V=$$2 -DVRES_V=$$3 -o build/tb_video.vvp tb_video.sv $(PLAT)/pocket_video.sv && \
	  vvp build/tb_video.vvp | tee build/video.log && grep -q 'RESULT: PASS' build/video.log || exit 1; done
build/tb_audio.vvp: tb_audio.sv $(PLAT)/pocket_audio.sv
	@mkdir -p build
	iverilog -g2012 -o $@ tb_audio.sv $(PLAT)/pocket_audio.sv
clean:
	rm -rf build
