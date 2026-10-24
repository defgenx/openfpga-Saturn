// In-design-like wrapper: FTCI tied high and IBUS_BUSY unused as in the Saturn instance (`MOD set by the project).
module blk_wrap_frt (
	input CLK, RST_N, CE_R, CE_F, EN, RES_N, SBY, output FTOA, FTOB, input FTI,
	input CLK4_CE, CLK8_CE, CLK32_CE, CLK128_CE,
	input [31:0] IBUS_A, IBUS_DI, output [31:0] IBUS_DO, input [3:0] IBUS_BA, input IBUS_WE, IBUS_REQ, output IBUS_ACT,
	output ICI_IRQ, OCIA_IRQ, OCIB_IRQ, OVI_IRQ);
	`MOD u (.FTCI(1'b1), .IBUS_BUSY(), .*);
endmodule
