// In-design-like wrapper: all WDT outputs are used in the Saturn instance (`MOD set by the project).
module blk_wrap_wdt (
	input CLK, RST_N, CE_R, CE_F, EN, RES_N, SBY, NMI, output WDTOVF_N,
	input CLK2_CE, CLK64_CE, CLK128_CE, CLK256_CE, CLK512_CE, CLK1024_CE, CLK4096_CE, CLK8192_CE,
	input [31:0] IBUS_A, IBUS_DI, output [31:0] IBUS_DO, input [3:0] IBUS_BA, input IBUS_WE, IBUS_REQ, output IBUS_BUSY, IBUS_ACT,
	output ITI_IRQ, OVF, PRES, MRES);
	`MOD #(0) u (.*);
endmodule
