// Sizing wrapper: one SH-2 (MSH) exactly as Saturn.sv instantiates it. SH2_MOD selects SH7604 (golden) or SH7604P.
`ifndef SH2_MOD
`define SH2_MOD SH7604
`endif
module one_wrap (
	input CLK, input RST_N, input CE_R, input CE_F, input EN, input FAST,
	input RES_N, input NMI_N, input [3:0] IRL_N, input WAIT_N, input BRLS_N, input FTI,
	input [31:0] DI,
	input [26:0] EA, input [31:0] EDO, input EBS_N, input ECS0_N, input ECS1_N, input ECS2_N, input ECS3_N, input ERD_WR_N, input [3:0] EWE_N, input ERD_N,
	output [26:0] A, output [31:0] DO, output BS_N, output CS0_N, output CS1_N, output CS2_N, output CS3_N,
	output RD_WR_N, output [3:0] DQM_N, output RD_N, output IVECF_N, output RFS, output BGR_N,
	output [31:0] EDI
);
	`SH2_MOD #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({1'b0,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) MSH
	(
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN),
		.RES_N(RES_N), .NMI_N(NMI_N), .IRL_N(IRL_N),
		.A(A), .DI(DI), .DO(DO), .BS_N(BS_N), .CS0_N(CS0_N), .CS1_N(CS1_N), .CS2_N(CS2_N), .CS3_N(CS3_N),
		.RD_WR_N(RD_WR_N), .WE_N(DQM_N), .RD_N(RD_N), .IVECF_N(IVECF_N), .RFS(RFS),
		.EA(EA), .EDI(EDI), .EDO(EDO), .EBS_N(EBS_N), .ECS0_N(ECS0_N), .ECS1_N(ECS1_N), .ECS2_N(ECS2_N), .ECS3_N(ECS3_N),
		.ERD_WR_N(ERD_WR_N), .EWE_N(EWE_N), .ERD_N(ERD_N), .ECE_N(1'b1), .EOE_N(1'b1), .EIVECF_N(1'b1),
		.WAIT_N(WAIT_N), .BRLS_N(BRLS_N), .BGR_N(BGR_N),
		.DREQ0(1'b1), .DREQ1(1'b1), .FTCI(1'b1), .FTI(FTI),
		.RXD(1'b1), .TXD(), .SCKO(), .SCKI(1'b1), .MD(6'b001000), .FAST(FAST)
	);
endmodule
