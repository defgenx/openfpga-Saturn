# Simulation targets. Needs iverilog (>= 12) and python3. No Quartus.
#   make -C sim cd         CD drive: synthetic discs, SH-1 host model, APF bridge model (about 5 minutes)
#   make -C sim mem        memory subsystem (sdram, psram, ddram_pocket, framebuffer, loader), several minutes
#   make -C sim mem-long   64 ms SDRAM retention run (about 10 minutes)
#   make -C sim platform   resampler and video path (seconds)
#   make -C sim pll        pll_lite vs the Altera PLL reconfiguration core on a DPRIO model (seconds)
#   make -C sim cdb        HLE CD block against the synthetic ISO disc (SERV firmware in Verilator, about 12 minutes)
#   make -C sim cdb-compare  the same script on the SH-1 LLE and the HLE (needs ../ref)
#   make -C sim sh1        SH-1 golden vs pruned (Verilator; firmware read from ../ref)
#   make -C sim scsp       SCSP golden vs shrunk (Verilator)
#   make -C sim vdp1       VDP1 golden vs shrunk (Verilator; vdp1-ppm dumps frames)
#   make -C sim sh2        SH-2 pair golden vs shrunk (Verilator)
#   make -C sim scu        SCU and DSP golden vs shrunk (Verilator)
#   make -C sim smpc      SMPC LLE (firmware from ../ref) vs SMPC_HLE: data and command timing (Verilator)
#   make -C sim irq        SH7604P + DCC + SMPC_SERV + SCUP2 as in Saturn.sv: SNDON handshake, VBLANK interrupt and vector fetch; duplicate-port check (seconds)
#   make -C sim sndram     SH-2 write/read-back of sound RAM through SCUP2, SCSPP, sdram_pocket and the SDRAM model (EXTRA=-DUSE_SCSP etc. swap in the MiSTer blocks)
#   make -C sim vdp2       VDP2 golden vs shrunk (Verilator; CUT=<name> for a cut, vdp2-ppm dumps frames)
#   make -C sim cd-real    300 ms bridge stall at the real CDD_CE spacing (324 clk per CE; slow)

CDRTL := $(wildcard ../src/fpga/core/cd/*.sv)
CD    := cd

.PHONY: pll cdb cdb-compare cd cd-real mem mem-long platform sh1 scsp vdp1 vdp1-ppm sh2 scu smpc irq sndram vdp2 vdp2-ppm clean

mem:
	$(MAKE) -C mem all

mem-long:
	$(MAKE) -C mem long

platform:
	$(MAKE) -C platform all

pll:
	$(MAKE) -C pll all

cdb:
	$(MAKE) -C cdb test

cdb-compare:
	$(MAKE) -C cdb compare

sh1:
	$(MAKE) -C sh1 run

scsp:
	$(MAKE) -C scsp run

vdp1:
	$(MAKE) -C vdp1 all

vdp1-ppm:
	$(MAKE) -C vdp1 ppm

sh2:
	$(MAKE) -C sh2 test

scu:
	$(MAKE) -C scu

smpc:
	$(MAKE) -C smpc run

irq:
	$(MAKE) -C irq run neg

sndram:
	$(MAKE) -C sndram run

vdp2 vdp2-ppm:
	$(MAKE) -C vdp2 $@

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
	$(MAKE) -C sh1 clean
	$(MAKE) -C vdp1 clean
