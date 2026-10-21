// Sizing wrapper: the SCSP as instantiated in Saturn.sv, with the debug mute
// input SND_EN tied high (the Pocket core has no keyboard to toggle it).
module scsp_wrap (
	input              CLK,
	input              RST_N,
	input              CE,
	input              RES_N,
	input              CE_R,
	input              CE_F,
	input      [15: 0] DI,
	output     [15: 0] DO,
	input              CS_N,
	input              AD_N,
	input              DTEN_N,
	input              REQ_N,
	output             RDY_N,
	output             INT_N,
	output             SCCE_R,
	output             SCCE_F,
	input      [23: 1] SCA,
	input      [15: 0] SCDI,
	output     [15: 0] SCDO,
	input              SCRW_N,
	input              SCAS_N,
	input              SCLDS_N,
	input              SCUDS_N,
	output             SCDTACK_N,
	input      [ 2: 0] SCFC,
	output             SCAVEC_N,
	output     [ 2: 0] SCIPL_N,
	output     [18: 1] RAM_A,
	output     [15: 0] RAM_D,
	input      [15: 0] RAM_Q,
	output     [ 1: 0] RAM_WE,
	output             RAM_RD,
	output             RAM_CS,
	output             RAM_RFS,
	input              RAM_RDY,
	input      [15: 0] ESL,
	input      [15: 0] ESR,
	output     [15: 0] SOUND_L,
	output     [15: 0] SOUND_R
);
`ifdef POCKET_SCSPP
	SCSPP scsp (.*, .SND_EN(3'b111));
`else
	SCSP scsp (.*, .SND_EN(3'b111));
`endif
endmodule
