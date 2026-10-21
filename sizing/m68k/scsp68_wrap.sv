// SCSP with its 68K as connected in Saturn.sv: measures the 68K in the context of the block it talks to.
module scsp68_wrap (
	input         CLK, RST_N, CE, SCSP_RES_N, SCPU_RES_N,
	input         CE_R, CE_F,
	input  [15:0] DI,
	output [15:0] DO,
	input         CS_N, AD_N, DTEN_N, REQ_N,
	output        RDY_N, INT_N,
	output [18:1] RAM_A, output [15:0] RAM_D, input [15:0] RAM_Q,
	output [1:0]  RAM_WE, output RAM_RD, RAM_CS, RAM_RFS,
	input  [15:0] ESL, ESR,
	output [15:0] SOUND_L, SOUND_R
);
	wire SCCE_R, SCCE_F, SCRW_N, SCAS_N, SCLDS_N, SCUDS_N, SCDTACK_N, SCAVEC_N, M68K_RESO_N;
	wire [23:1] SCA; wire [15:0] SCDI, SCDO; wire [2:0] SCFC, SCIPL_N;
	SCSP SCSP (.CLK, .RST_N, .CE, .RES_N(SCSP_RES_N), .CE_R, .CE_F, .DI, .DO, .CS_N, .AD_N, .DTEN_N, .REQ_N, .RDY_N, .INT_N,
		.SCCE_R, .SCCE_F, .SCA, .SCDI, .SCDO, .SCRW_N, .SCAS_N, .SCLDS_N, .SCUDS_N, .SCDTACK_N, .SCFC, .SCAVEC_N, .SCIPL_N,
		.RAM_A, .RAM_D, .RAM_WE, .RAM_RD, .RAM_CS, .RAM_Q, .RAM_RFS, .RAM_RDY(1'b1),
		.ESL, .ESR, .SOUND_L, .SOUND_R, .SND_EN(3'b111));
`ifdef POCKET_M68KP
	m68kp M68K
`else
	fx68k M68K
`endif
	(.clk(CLK), .extReset(~SCPU_RES_N | ~M68K_RESO_N), .pwrUp(~RST_N), .enPhi1(SCCE_R), .enPhi2(SCCE_F),
		.eab(SCA), .iEdb(SCDO), .oEdb(SCDI), .eRWn(SCRW_N), .ASn(SCAS_N), .LDSn(SCLDS_N), .UDSn(SCUDS_N),
		.DTACKn(SCDTACK_N), .IPL0n(SCIPL_N[0]), .IPL1n(SCIPL_N[1]), .IPL2n(SCIPL_N[2]), .VPAn(SCAVEC_N),
		.FC0(SCFC[0]), .FC1(SCFC[1]), .FC2(SCFC[2]), .BGn(), .BRn(1'b1), .BGACKn(1'b1), .BERRn(1'b1), .HALTn(1'b1),
		.oRESETn(M68K_RESO_N));
endmodule
