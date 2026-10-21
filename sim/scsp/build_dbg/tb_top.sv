// Lock-step wrapper: golden REF_SCSP and the shrunk SCSP share every input
// except the sound RAM read data, which each gets from its own model.
module tb_top (
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
	SCSP new_i (
		.CLK(CLK), .RST_N(RST_N), .CE(CE), .RES_N(RES_N), .CE_R(CE_R), .CE_F(CE_F),
		.DI(DI), .DO(N_DO), .CS_N(CS_N), .AD_N(AD_N), .DTEN_N(DTEN_N), .REQ_N(REQ_N),
		.RDY_N(N_RDY_N), .INT_N(N_INT_N), .SCCE_R(N_SCCE_R), .SCCE_F(N_SCCE_F),
		.SCA(SCA), .SCDI(SCDI), .SCDO(N_SCDO), .SCRW_N(SCRW_N), .SCAS_N(SCAS_N),
		.SCLDS_N(SCLDS_N), .SCUDS_N(SCUDS_N), .SCDTACK_N(N_SCDTACK_N), .SCFC(SCFC),
		.SCAVEC_N(N_SCAVEC_N), .SCIPL_N(N_SCIPL_N),
		.RAM_A(N_RAM_A), .RAM_D(N_RAM_D), .RAM_Q(N_RAM_Q), .RAM_WE(N_RAM_WE),
		.RAM_RD(N_RAM_RD), .RAM_CS(N_RAM_CS), .RAM_RFS(N_RAM_RFS), .RAM_RDY(1'b1),
		.ESL(ESL), .ESR(ESR), .SOUND_L(N_SOUND_L), .SOUND_R(N_SOUND_R), .SND_EN(SND_EN));

	always @(posedge CLK) if (ref_i.SFT_REG !== new_i.SFT_REG) $display("DBGDIFF SFT_REG ref=%h new=%h", ref_i.SFT_REG, new_i.SFT_REG);
	always @(posedge CLK) if (ref_i.DSP_MEMA_REG !== new_i.DSP_MEMA_REG) $display("DBGDIFF DSP_MEMA_REG ref=%h new=%h", ref_i.DSP_MEMA_REG, new_i.DSP_MEMA_REG);
	always @(posedge CLK) if (ref_i.MDEC_CT !== new_i.MDEC_CT) $display("DBGDIFF MDEC_CT ref=%h new=%h", ref_i.MDEC_CT, new_i.MDEC_CT);
	always @(posedge CLK) if (ref_i.DSP_INP_REG !== new_i.DSP_INP_REG) $display("DBGDIFF DSP_INP_REG ref=%h new=%h", ref_i.DSP_INP_REG, new_i.DSP_INP_REG);
	always @(posedge CLK) if (ref_i.DSP_OUT_REG !== new_i.DSP_OUT_REG) $display("DBGDIFF DSP_OUT_REG ref=%h new=%h", ref_i.DSP_OUT_REG, new_i.DSP_OUT_REG);


	reg once=0; reg [25:0] pr,pn; reg [40:0] hr[0:15]; reg [40:0] hn[0:15]; integer k;
	always @(posedge CLK) begin
	  pr<=ref_i.SFT_REG; pn<=new_i.SFT_REG;
	  for (k=15;k>0;k=k-1) begin hr[k]<=hr[k-1]; hn[k]<=hn[k-1]; end
	  hr[0] <= {ref_i.MPRO1_Q[43:38], ref_i.CYCLE_NUM[2:0], ref_i.INPUTS, ref_i.CYCLE1_CE, ref_i.CYCLE0_CE, 4'b0}; 
	  hn[0] <= {new_i.MPRO1_Q[43:38], new_i.CYCLE_NUM[2:0], new_i.INPUTS, new_i.CYCLE1_CE, new_i.CYCLE0_CE, 4'b0};
	  if (!once && pr!==pn) begin once<=1;
	   for (k=0;k<14;k=k+1) $display("H%0d ira/cyc/inputs/c1/c0 ref=%h new=%h", k, hr[k], hn[k]);
	  end end
endmodule
