# clk_sys of the Pocket core: 57.27 MHz; no multicycle exceptions (the slot logic is evaluated once per CE strobe but is not constrained that way).
create_clock -name CLK -period 17.46 [get_ports CLK]
derive_clock_uncertainty
