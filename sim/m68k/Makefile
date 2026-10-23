# Lockstep equivalence bench: golden REF_fx68k vs m68kp. `make lock` builds, `make run_lock` sweeps seeds.
F  = ../../ref/Saturn_MiSTer/rtl/FX68K
M  = ../../src/fpga/saturn/M68KP
VFLAGS = --cc --exe --build -Wno-fatal -Wno-lint -O2 -CFLAGS -O2 --structs-packed --no-assert --public-flat-rw --top-module tb_lock

ref/fx68k.sv: rename.py $(F)/fx68k.sv
	python3 rename.py REF_ ref $(F)/fx68k.sv $(F)/fx68kAlu.sv $(F)/uaddrPla.sv

pla/pla_table.txt: pla/pla_dump.sv pla/pla_dump.cpp $(F)/fx68k.sv $(F)/uaddrPla.sv
	cd pla && verilator --cc --exe --build -Wno-fatal -Wno-lint --structs-packed --no-assert --top-module pla_dump ../$(F)/fx68k.sv ../$(F)/fx68kAlu.sv ../$(F)/uaddrPla.sv pla_dump.sv pla_dump.cpp -Mdir obj_pla -o pla_dump
	cd pla && obj_pla/pla_dump

# regenerate the ROM-based PLA replacement
plarom: pla/pla_table.txt
	python3 gen_pla_rom.py pla/pla_table.txt $(M)/m68kp_plarom.sv

obj_lock/Vtb_lock: ref/fx68k.sv tb_lock.sv tb_lock.cpp $(wildcard $(M)/*.sv)
	verilator $(VFLAGS) -Mdir obj_lock ref/fx68k.sv ref/fx68kAlu.sv ref/uaddrPla.sv $(M)/m68kp.sv $(M)/m68kp_alu.sv $(M)/m68kp_pla.sv $(M)/m68kp_plarom.sv tb_lock.sv tb_lock.cpp -o Vtb_lock
	cd obj_lock && for f in microrom nanorom; do ln -sf ../$(F)/$$f.mem .; done

lock: obj_lock/Vtb_lock

run_lock: lock
	cd obj_lock && for s in 1 2 3 4 5 6 7 8; do ./Vtb_lock $$s 300000 0 3 || exit 1; ./Vtb_lock $$s 300000 1 1 || exit 1; done

obj_pla/Vtb_pla: ref/fx68k.sv tb_pla.sv tb_pla.cpp $(M)/m68kp.sv $(M)/m68kp_plarom.sv
	verilator $(VFLAGS:--top-module%=) --top-module tb_pla --cc --exe --build -Wno-fatal -Wno-lint --structs-packed --no-assert -Mdir obj_pla ref/fx68k.sv ref/fx68kAlu.sv ref/uaddrPla.sv $(M)/m68kp.sv $(M)/m68kp_alu.sv $(M)/m68kp_pla.sv $(M)/m68kp_plarom.sv tb_pla.sv tb_pla.cpp -o Vtb_pla

# exhaustive check of the ROM decode against the original PLA
run_pla: obj_pla/Vtb_pla
	./obj_pla/Vtb_pla

# Lockstep over generated sound-driver-like programs (short programs, many seeds) and random waits/interrupts.
run_img: lock
	cd obj_lock && for s in $$(seq 1 60); do python3 ../gen_prog.py $$s /tmp/m68kp_img_$$s.bin 80 && ./Vtb_lock img /tmp/m68kp_img_$$s.bin 400000 $$((s % 4)) $$s || exit 1; done | awk '{print} /mismatches/ {m += $(NF-1); o += $(NF-3)} END {print "img total: mismatches", m}'

# SingleStepTests through the register loader, lockstep golden/DUT (tests.txt from sst2txt.py)
run_sst: lock
	cd obj_lock && ./Vtb_lock sst $(SST)
