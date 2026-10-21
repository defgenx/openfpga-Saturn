# CD block transaction test: the same SCU-side script against the LLE (SH-1 + YGR019 + cdd_pocket) and the HLE.
# Verilator. The SH-1 firmware (LLE only) is read from ../../ref at run time and never copied.
ROOT   := $(abspath ../..)
SRC    := $(ROOT)/src/fpga
CDRTL  := $(SRC)/core/cd/cd_stream.sv $(SRC)/core/cd/cd_feed.sv $(SRC)/core/cd/cd_toc_ram.sv $(SRC)/core/cd/cdd_ctl.sv \
          $(SRC)/core/cd/cdd_link.sv $(SRC)/core/cd/cdd_pocket.sv
HLE    := $(SRC)/saturn/Saturn/CD/hle
HLERTL := $(HLE)/cdb_hle.sv $(HLE)/cdb_xfer.sv $(HLE)/cdb_sink.sv $(HLE)/cdb_dram.sv $(wildcard $(HLE)/serv/*.v)
FWHEX  := $(HLE)/cdb_fw.hex
SHD    := $(SRC)/saturn
SH     := $(SHD)/SH/core/SH_pkg.sv $(SHD)/SH/core/SH_regfile.sv $(SHD)/SH/core/SH_core.sv \
          $(SHD)/SH/SH7034/SH7034_pkg.sv $(SHD)/SH/SH7034/SH7034_fw.sv $(addprefix $(SHD)/SH/SH7034/,MULT.sv INTC.sv BSC.sv DMAC.sv UBC.sv ITU.sv WDT.sv SCI.sv PFC.sv RAM.sv ROM.sv SH7034.sv) \
          $(SHD)/Saturn/CD/YGR019_PKG.sv $(SHD)/Saturn/CD/YGR019.sv $(SHD)/Saturn/CD/SH1.sv ../sh1/models_regram.sv ../sh1/models_altsyncram.sv
SCRIPT ?= script_boot.txt
LLEFW  ?= $(ROOT)/ref/Saturn_MiSTer/rtl/cdb105m.mif
VFLAGS := --binary --timing --timescale 1ns/1ps -Wno-TIMESCALEMOD -Wno-fatal -Wno-lint -Wno-style -Wno-WIDTH -Wno-CASEINCOMPLETE \
          -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-IMPLICIT -Wno-PINMISSING -Wno-MULTIDRIVEN -O3 -j 4 --public-flat-rw
ALL    := tb_cdb.sv $(CDRTL) $(HLERTL) $(SH)

.PHONY: all gen hle lle run-hle run-lle test compare clean
all: test

# HLE against the disc image (check_hle.py) and the no-disc script; about 12 minutes
test: hle gen
	./build/hle/Vtb_cdb +SCRIPT=script_cmds.txt +LOG=build/hle_script_cmds.log > build/hle_script_cmds.out
	python3 check_hle.py build/hle_script_cmds.log
	./build/hle/Vtb_cdb +SCRIPT=script_nodisc.txt +LOG=build/hle_script_nodisc.log > build/hle_script_nodisc.out
	./build/hle/Vtb_cdb +SCRIPT=script_cooked.txt +LOG=build/hle_cooked.log +DISC=B > build/hle_cooked.out
	python3 check_hle.py build/hle_cooked.log cooked

# LLE (needs ../../ref) against the HLE on the no-disc script; about 10 more minutes
compare: lle test
	./build/lle/Vtb_cdb +SCRIPT=script_nodisc.txt +LOG=build/lle_script_nodisc.log +FW=$(LLEFW) > build/lle_script_nodisc.out
	python3 compare.py build/lle_script_nodisc.log build/hle_script_nodisc.log

gen: build/C_f0.hex
build/C_f0.hex: gen_iso.py
	python3 gen_iso.py
	cd ../cd && python3 gen_disc.py
	cp ../cd/build/B_f0.hex ../cd/build/B_f1.hex ../cd/build/B_toc.hex build/

build/hle/Vtb_cdb: $(ALL) $(FWHEX)
	verilator $(VFLAGS) --top-module tb_cdb -GLLE=0 -DFWPATH='"$(FWHEX)"' -Mdir build/hle $(ALL)
build/lle/Vtb_cdb: $(ALL)
	verilator $(VFLAGS) --top-module tb_cdb -GLLE=1 -DFWPATH='"$(FWHEX)"' -Mdir build/lle $(ALL)

hle: build/hle/Vtb_cdb
lle: build/lle/Vtb_cdb

run-hle: hle gen
	./build/hle/Vtb_cdb +SCRIPT=$(SCRIPT) +LOG=build/hle_$(basename $(SCRIPT)).log
run-lle: lle gen
	./build/lle/Vtb_cdb +SCRIPT=$(SCRIPT) +LOG=build/lle_$(basename $(SCRIPT)).log +FW=$(LLEFW)

clean:
	rm -rf build
