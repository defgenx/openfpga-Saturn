// In-design-like wrapper: the Saturn instance ties UBC/BSC/SCI interrupt sources low (`MOD set by the project).
module blk_wrap_intc (
	input CLK, RST_N, CE_R, CE_F, EN, RES_N, NMI_N, input [3:0] IRL_N,
	input [3:0] INT_MASK, input INT_ACK, INT_ACP, output [3:0] INT_LVL, output [7:0] INT_VEC, output INT_REQ,
	input VECT_REQ, output VECT_WAIT, output NMI_REQ,
	input [31:0] IBUS_A, IBUS_DI, output [31:0] IBUS_DO, input [3:0] IBUS_BA, input IBUS_WE, IBUS_REQ, output IBUS_BUSY, IBUS_ACT,
	output [3:0] VBUS_A, input [7:0] VBUS_DI, output VBUS_REQ, input VBUS_WAIT,
	input DIVU_IRQ, input [7:0] DIVU_VEC, input DMAC0_IRQ, input [7:0] DMAC0_VEC, input DMAC1_IRQ, input [7:0] DMAC1_VEC,
	input WDT_IRQ, input FRT_ICI_IRQ, FRT_OCI_IRQ, FRT_OVI_IRQ);
	`MOD u (.UBC_IRQ(1'b0), .BSC_IRQ(1'b0), .SCI_ERI_IRQ(1'b0), .SCI_RXI_IRQ(1'b0), .SCI_TXI_IRQ(1'b0), .SCI_TEI_IRQ(1'b0), .*);
endmodule
