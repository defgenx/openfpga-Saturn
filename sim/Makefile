# Simulation targets. Needs iverilog (>= 12) and python3. No Quartus.
#   make -C sim cd         CD drive: synthetic discs, SH-1 host model, APF bridge model (about 5 minutes)
#   make -C sim mem        memory subsystem (sdram, psram, ddram_pocket, framebuffer, loader), several minutes
#   make -C sim mem-long   64 ms SDRAM retention run (about 10 minutes)
#   make -C sim cd-real    300 ms bridge stall at the real CDD_CE spacing (324 clk per CE; slow)

CDRTL := $(wildcard ../src/fpga/core/cd/*.sv)
CD    := cd

.PHONY: cd cd-real mem mem-long clean

mem:
	$(MAKE) -C mem all

mem-long:
	$(MAKE) -C mem long

cd: $(CD)/build/tb_cdd.vvp
	cd $(CD) && python3 gen_disc.py
	cd $(CD) && vvp build/tb_cdd.vvp +DISC=A +LOG=build/A.log > build/A.out
	cd $(CD) && vvp build/tb_cdd.vvp +DISC=B +LOG=build/B.log > build/B.out
	cd $(CD) && python3 check.py build/A.log build/A && python3 check.py build/B.log build/B

cd-real: $(CD)/build/tb_cdd.vvp
	cd $(CD) && python3 gen_disc.py
	cd $(CD) && vvp build/tb_cdd.vvp +DISC=A +STALLONLY +CE=325 +LOG=build/Areal.log > build/Areal.out
	cd $(CD) && python3 check.py build/Areal.log build/A

$(CD)/build/tb_cdd.vvp: $(CD)/tb_cdd.sv $(CDRTL)
	mkdir -p $(CD)/build
	iverilog -g2012 -s tb_cdd -o $@ $(CD)/tb_cdd.sv $(CDRTL)

clean:
	rm -rf $(CD)/build
	$(MAKE) -C mem clean
