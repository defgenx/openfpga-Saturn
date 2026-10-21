// Lock-step wrapper: golden REF_SCSP and the shrunk SCSP share every input
// except the sound RAM read data, which each gets from its own model.
module tb_top #(parameter MIDI = 0) (
	input         CLK, RST_N, CE, RES_N, CE_R, CE_F,
	input  [15:0] DI,
	input         CS_N, AD_N, DTEN_N, REQ_N,
	input  [23:1] SCA,
	input  [15:0] SCDI,
	input         SCRW_N, SCAS_N, SCLDS_N, SCUDS_N,
	input  [ 2:0] SCFC,
	input  [15:0] ESL, ESR,
	input  [ 2:0] SND_EN,
	input  [15:0] R_RAM_Q, N_RAM_Q,

	output [15:0] R_DO, N_DO,
	output        R_RDY_N, N_RDY_N, R_INT_N, N_INT_N,
	output        R_SCCE_R, N_SCCE_R, R_SCCE_F, N_SCCE_F,
	output [15:0] R_SCDO, N_SCDO,
	output        R_SCDTACK_N, N_SCDTACK_N, R_SCAVEC_N, N_SCAVEC_N,
	output [ 2:0] R_SCIPL_N, N_SCIPL_N,
	output [18:1] R_RAM_A, N_RAM_A,
	output [15:0] R_RAM_D, N_RAM_D,
	output [ 1:0] R_RAM_WE, N_RAM_WE,
	output        R_RAM_RD, N_RAM_RD, R_RAM_CS, N_RAM_CS, R_RAM_RFS, N_RAM_RFS,
	output [15:0] R_SOUND_L, N_SOUND_L, R_SOUND_R, N_SOUND_R
);
	REF_SCSP ref_i (
		.CLK(CLK), .RST_N(RST_N), .CE(CE), .RES_N(RES_N), .CE_R(CE_R), .CE_F(CE_F),
		.DI(DI), .DO(R_DO), .CS_N(CS_N), .AD_N(AD_N), .DTEN_N(DTEN_N), .REQ_N(REQ_N),
		.RDY_N(R_RDY_N), .INT_N(R_INT_N), .SCCE_R(R_SCCE_R), .SCCE_F(R_SCCE_F),
		.SCA(SCA), .SCDI(SCDI), .SCDO(R_SCDO), .SCRW_N(SCRW_N), .SCAS_N(SCAS_N),
		.SCLDS_N(SCLDS_N), .SCUDS_N(SCUDS_N), .SCDTACK_N(R_SCDTACK_N), .SCFC(SCFC),
		.SCAVEC_N(R_SCAVEC_N), .SCIPL_N(R_SCIPL_N),
		.RAM_A(R_RAM_A), .RAM_D(R_RAM_D), .RAM_Q(R_RAM_Q), .RAM_WE(R_RAM_WE),
		.RAM_RD(R_RAM_RD), .RAM_CS(R_RAM_CS), .RAM_RFS(R_RAM_RFS), .RAM_RDY(1'b1),
		.ESL(ESL), .ESR(ESR), .SOUND_L(R_SOUND_L), .SOUND_R(R_SOUND_R), .SND_EN(SND_EN));
	SCSP #(.MIDI_REGS(MIDI)) new_i (
		.CLK(CLK), .RST_N(RST_N), .CE(CE), .RES_N(RES_N), .CE_R(CE_R), .CE_F(CE_F),
		.DI(DI), .DO(N_DO), .CS_N(CS_N), .AD_N(AD_N), .DTEN_N(DTEN_N), .REQ_N(REQ_N),
		.RDY_N(N_RDY_N), .INT_N(N_INT_N), .SCCE_R(N_SCCE_R), .SCCE_F(N_SCCE_F),
		.SCA(SCA), .SCDI(SCDI), .SCDO(N_SCDO), .SCRW_N(SCRW_N), .SCAS_N(SCAS_N),
		.SCLDS_N(SCLDS_N), .SCUDS_N(SCUDS_N), .SCDTACK_N(N_SCDTACK_N), .SCFC(SCFC),
		.SCAVEC_N(N_SCAVEC_N), .SCIPL_N(N_SCIPL_N),
		.RAM_A(N_RAM_A), .RAM_D(N_RAM_D), .RAM_Q(N_RAM_Q), .RAM_WE(N_RAM_WE),
		.RAM_RD(N_RAM_RD), .RAM_CS(N_RAM_CS), .RAM_RFS(N_RAM_RFS), .RAM_RDY(1'b1),
		.ESL(ESL), .ESR(ESR), .SOUND_L(N_SOUND_L), .SOUND_R(N_SOUND_R), .SND_EN(SND_EN));
endmodule
