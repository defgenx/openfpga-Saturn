# clk_sys of the Pocket core: 57.27 MHz. The multicycle constraints are the ones shipped with FX68K
# (src/fpga/saturn/FX68K/fx68k.sdc, M68KP/m68kp.sdc), added per revision by sta.sh.
create_clock -name CLK -period 17.46 [get_ports CLK]
derive_clock_uncertainty
