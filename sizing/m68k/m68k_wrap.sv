// Sizing wrapper: the 68K as connected in Saturn.sv (BR/BGACK/BERR/HALT tied off).
// POCKET_M68KP selects the replacement core, otherwise FX68K.
module m68k_wrap (
	input         CLK,
	input         RST_N,
	input         RES_N,
	input         CE_R,
	input         CE_F,
	output [23:1] A,
	input  [15:0] DI,
	output [15:0] DO,
	output        RW_N,
	output        AS_N,
	output        LDS_N,
	output        UDS_N,
	input         DTACK_N,
	input  [2:0]  IPL_N,
	input         VPA_N,
	output [2:0]  FC,
	output        RESO_N
);
`ifdef POCKET_M68KP
	m68kp M68K (
`else
	fx68k M68K (
`endif
		.clk(CLK), .extReset(~RES_N), .pwrUp(~RST_N), .enPhi1(CE_R), .enPhi2(CE_F),
		.eab(A), .iEdb(DI), .oEdb(DO), .eRWn(RW_N), .ASn(AS_N), .LDSn(LDS_N), .UDSn(UDS_N),
		.DTACKn(DTACK_N), .IPL0n(IPL_N[0]), .IPL1n(IPL_N[1]), .IPL2n(IPL_N[2]), .VPAn(VPA_N),
		.FC0(FC[0]), .FC1(FC[1]), .FC2(FC[2]),
		.BGn(), .BRn(1'b1), .BGACKn(1'b1), .BERRn(1'b1), .HALTn(1'b1), .oRESETn(RESO_N));
endmodule
