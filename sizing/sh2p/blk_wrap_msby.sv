// In-design-like wrapper: only SBY is used in the Saturn instance (`MOD set by the project).
module blk_wrap_msby (
	input CLK, RST_N, CE_R, CE_F, EN, RES_N,
	input [31:0] IBUS_A, IBUS_DI, input [3:0] IBUS_BA, input IBUS_WE, IBUS_REQ,
	input SLEEP, WDT_OVF, output SBY);
	`MOD u (.IBUS_DO(), .IBUS_BUSY(), .IBUS_ACT(), .*);
endmodule
