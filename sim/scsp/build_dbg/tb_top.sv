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

	reg [255:0] dummy;
	reg once=0;
	always @(negedge CLK) if (!once) begin
		if (ref_i.OP2 !== new_i.OP2) begin once<=1; $display("FIRSTDIFF OP2 ref=%h new=%h", ref_i.OP2, new_i.OP2); end
		if (ref_i.OP3 !== new_i.OP3) begin once<=1; $display("FIRSTDIFF OP3 ref=%h new=%h", ref_i.OP3, new_i.OP3); end
		if (ref_i.OP4 !== new_i.OP4) begin once<=1; $display("FIRSTDIFF OP4 ref=%h new=%h", ref_i.OP4, new_i.OP4); end
		if (ref_i.OP5 !== new_i.OP5) begin once<=1; $display("FIRSTDIFF OP5 ref=%h new=%h", ref_i.OP5, new_i.OP5); end
		if (ref_i.OP6 !== new_i.OP6) begin once<=1; $display("FIRSTDIFF OP6 ref=%h new=%h", ref_i.OP6, new_i.OP6); end
		if (ref_i.OP7 !== new_i.OP7) begin once<=1; $display("FIRSTDIFF OP7 ref=%h new=%h", ref_i.OP7, new_i.OP7); end
		if (ref_i.SLOT !== new_i.SLOT) begin once<=1; $display("FIRSTDIFF SLOT ref=%h new=%h", ref_i.SLOT, new_i.SLOT); end
		if (ref_i.RST !== new_i.RST) begin once<=1; $display("FIRSTDIFF RST ref=%h new=%h", ref_i.RST, new_i.RST); end
		if (ref_i.SCNT !== new_i.SCNT) begin once<=1; $display("FIRSTDIFF SCNT ref=%h new=%h", ref_i.SCNT, new_i.SCNT); end
		if (ref_i.NOISE !== new_i.NOISE) begin once<=1; $display("FIRSTDIFF NOISE ref=%h new=%h", ref_i.NOISE, new_i.NOISE); end
		if (ref_i.MIXS_GEN !== new_i.MIXS_GEN) begin once<=1; $display("FIRSTDIFF MIXS_GEN ref=%h new=%h", ref_i.MIXS_GEN, new_i.MIXS_GEN); end
		if (ref_i.CR0 !== new_i.CR0) begin once<=1; $display("FIRSTDIFF CR0 ref=%h new=%h", ref_i.CR0, new_i.CR0); end
		if (ref_i.CR1 !== new_i.CR1) begin once<=1; $display("FIRSTDIFF CR1 ref=%h new=%h", ref_i.CR1, new_i.CR1); end
		if (ref_i.CR4 !== new_i.CR4) begin once<=1; $display("FIRSTDIFF CR4 ref=%h new=%h", ref_i.CR4, new_i.CR4); end
		if (ref_i.CR5 !== new_i.CR5) begin once<=1; $display("FIRSTDIFF CR5 ref=%h new=%h", ref_i.CR5, new_i.CR5); end
		if (ref_i.CR6 !== new_i.CR6) begin once<=1; $display("FIRSTDIFF CR6 ref=%h new=%h", ref_i.CR6, new_i.CR6); end
		if (ref_i.CR7 !== new_i.CR7) begin once<=1; $display("FIRSTDIFF CR7 ref=%h new=%h", ref_i.CR7, new_i.CR7); end
		if (ref_i.CR8 !== new_i.CR8) begin once<=1; $display("FIRSTDIFF CR8 ref=%h new=%h", ref_i.CR8, new_i.CR8); end
		if (ref_i.CR9 !== new_i.CR9) begin once<=1; $display("FIRSTDIFF CR9 ref=%h new=%h", ref_i.CR9, new_i.CR9); end
		if (ref_i.CR10 !== new_i.CR10) begin once<=1; $display("FIRSTDIFF CR10 ref=%h new=%h", ref_i.CR10, new_i.CR10); end
		if (ref_i.CR11 !== new_i.CR11) begin once<=1; $display("FIRSTDIFF CR11 ref=%h new=%h", ref_i.CR11, new_i.CR11); end
		if (ref_i.CR12 !== new_i.CR12) begin once<=1; $display("FIRSTDIFF CR12 ref=%h new=%h", ref_i.CR12, new_i.CR12); end
		if (ref_i.CR13 !== new_i.CR13) begin once<=1; $display("FIRSTDIFF CR13 ref=%h new=%h", ref_i.CR13, new_i.CR13); end
		if (ref_i.CR14 !== new_i.CR14) begin once<=1; $display("FIRSTDIFF CR14 ref=%h new=%h", ref_i.CR14, new_i.CR14); end
		if (ref_i.CR15 !== new_i.CR15) begin once<=1; $display("FIRSTDIFF CR15 ref=%h new=%h", ref_i.CR15, new_i.CR15); end
		if (ref_i.CR16 !== new_i.CR16) begin once<=1; $display("FIRSTDIFF CR16 ref=%h new=%h", ref_i.CR16, new_i.CR16); end
		if (ref_i.CR17 !== new_i.CR17) begin once<=1; $display("FIRSTDIFF CR17 ref=%h new=%h", ref_i.CR17, new_i.CR17); end
		if (ref_i.CR18 !== new_i.CR18) begin once<=1; $display("FIRSTDIFF CR18 ref=%h new=%h", ref_i.CR18, new_i.CR18); end
		if (ref_i.CR19 !== new_i.CR19) begin once<=1; $display("FIRSTDIFF CR19 ref=%h new=%h", ref_i.CR19, new_i.CR19); end
		if (ref_i.DIR_ACC_L !== new_i.DIR_ACC_L) begin once<=1; $display("FIRSTDIFF DIR_ACC_L ref=%h new=%h", ref_i.DIR_ACC_L, new_i.DIR_ACC_L); end
		if (ref_i.DIR_ACC_R !== new_i.DIR_ACC_R) begin once<=1; $display("FIRSTDIFF DIR_ACC_R ref=%h new=%h", ref_i.DIR_ACC_R, new_i.DIR_ACC_R); end
		if (ref_i.EFF_ACC_L !== new_i.EFF_ACC_L) begin once<=1; $display("FIRSTDIFF EFF_ACC_L ref=%h new=%h", ref_i.EFF_ACC_L, new_i.EFF_ACC_L); end
		if (ref_i.EFF_ACC_R !== new_i.EFF_ACC_R) begin once<=1; $display("FIRSTDIFF EFF_ACC_R ref=%h new=%h", ref_i.EFF_ACC_R, new_i.EFF_ACC_R); end
		if (ref_i.SUM_L !== new_i.SUM_L) begin once<=1; $display("FIRSTDIFF SUM_L ref=%h new=%h", ref_i.SUM_L, new_i.SUM_L); end
		if (ref_i.SUM_R !== new_i.SUM_R) begin once<=1; $display("FIRSTDIFF SUM_R ref=%h new=%h", ref_i.SUM_R, new_i.SUM_R); end
		if (ref_i.WD_READ !== new_i.WD_READ) begin once<=1; $display("FIRSTDIFF WD_READ ref=%h new=%h", ref_i.WD_READ, new_i.WD_READ); end
		if (ref_i.MEM_WD !== new_i.MEM_WD) begin once<=1; $display("FIRSTDIFF MEM_WD ref=%h new=%h", ref_i.MEM_WD, new_i.MEM_WD); end
		if (ref_i.DMA_MA !== new_i.DMA_MA) begin once<=1; $display("FIRSTDIFF DMA_MA ref=%h new=%h", ref_i.DMA_MA, new_i.DMA_MA); end
		if (ref_i.DMA_RA !== new_i.DMA_RA) begin once<=1; $display("FIRSTDIFF DMA_RA ref=%h new=%h", ref_i.DMA_RA, new_i.DMA_RA); end
		if (ref_i.DMA_LEN !== new_i.DMA_LEN) begin once<=1; $display("FIRSTDIFF DMA_LEN ref=%h new=%h", ref_i.DMA_LEN, new_i.DMA_LEN); end
		if (ref_i.DMA_EXEC !== new_i.DMA_EXEC) begin once<=1; $display("FIRSTDIFF DMA_EXEC ref=%h new=%h", ref_i.DMA_EXEC, new_i.DMA_EXEC); end
		if (ref_i.STACK_RGEN !== new_i.STACK_RGEN) begin once<=1; $display("FIRSTDIFF STACK_RGEN ref=%h new=%h", ref_i.STACK_RGEN, new_i.STACK_RGEN); end
		if (ref_i.STACK_WGEN !== new_i.STACK_WGEN) begin once<=1; $display("FIRSTDIFF STACK_WGEN ref=%h new=%h", ref_i.STACK_WGEN, new_i.STACK_WGEN); end
		if (ref_i.OP4_WD0 !== new_i.OP4_WD0) begin once<=1; $display("FIRSTDIFF OP4_WD0 ref=%h new=%h", ref_i.OP4_WD0, new_i.OP4_WD0); end
		if (ref_i.OP4_WD1 !== new_i.OP4_WD1) begin once<=1; $display("FIRSTDIFF OP4_WD1 ref=%h new=%h", ref_i.OP4_WD1, new_i.OP4_WD1); end
		if (ref_i.ADP_SA !== new_i.ADP_SA) begin once<=1; $display("FIRSTDIFF ADP_SA ref=%h new=%h", ref_i.ADP_SA, new_i.ADP_SA); end
		if (ref_i.SFT_REG !== new_i.SFT_REG) begin once<=1; $display("FIRSTDIFF SFT_REG ref=%h new=%h", ref_i.SFT_REG, new_i.SFT_REG); end
		if (ref_i.MDEC_CT !== new_i.MDEC_CT) begin once<=1; $display("FIRSTDIFF MDEC_CT ref=%h new=%h", ref_i.MDEC_CT, new_i.MDEC_CT); end
		if (ref_i.DSP_MEMA_REG !== new_i.DSP_MEMA_REG) begin once<=1; $display("FIRSTDIFF DSP_MEMA_REG ref=%h new=%h", ref_i.DSP_MEMA_REG, new_i.DSP_MEMA_REG); end
		if (ref_i.DSP_OUT_REG !== new_i.DSP_OUT_REG) begin once<=1; $display("FIRSTDIFF DSP_OUT_REG ref=%h new=%h", ref_i.DSP_OUT_REG, new_i.DSP_OUT_REG); end
		if (ref_i.DSP_INP_REG !== new_i.DSP_INP_REG) begin once<=1; $display("FIRSTDIFF DSP_INP_REG ref=%h new=%h", ref_i.DSP_INP_REG, new_i.DSP_INP_REG); end
		if (ref_i.MEM_ST !== new_i.MEM_ST) begin once<=1; $display("FIRSTDIFF MEM_ST ref=%h new=%h", ref_i.MEM_ST, new_i.MEM_ST); end
		if (ref_i.REG_ST !== new_i.REG_ST) begin once<=1; $display("FIRSTDIFF REG_ST ref=%h new=%h", ref_i.REG_ST, new_i.REG_ST); end
		if (ref_i.MEM_A !== new_i.MEM_A) begin once<=1; $display("FIRSTDIFF MEM_A ref=%h new=%h", ref_i.MEM_A, new_i.MEM_A); end
		if (ref_i.REG_A !== new_i.REG_A) begin once<=1; $display("FIRSTDIFF REG_A ref=%h new=%h", ref_i.REG_A, new_i.REG_A); end
		if (ref_i.REG_Q !== new_i.REG_Q) begin once<=1; $display("FIRSTDIFF REG_Q ref=%h new=%h", ref_i.REG_Q, new_i.REG_Q); end
		if (ref_i.MONITOR_CA !== new_i.MONITOR_CA) begin once<=1; $display("FIRSTDIFF MONITOR_CA ref=%h new=%h", ref_i.MONITOR_CA, new_i.MONITOR_CA); end
		if (ref_i.MONITOR_SGC !== new_i.MONITOR_SGC) begin once<=1; $display("FIRSTDIFF MONITOR_SGC ref=%h new=%h", ref_i.MONITOR_SGC, new_i.MONITOR_SGC); end
		if (ref_i.MONITOR_EG !== new_i.MONITOR_EG) begin once<=1; $display("FIRSTDIFF MONITOR_EG ref=%h new=%h", ref_i.MONITOR_EG, new_i.MONITOR_EG); end
		if (ref_i.ADP0_CURR !== new_i.ADP0_CURR) begin once<=1; $display("FIRSTDIFF ADP0_CURR ref=%h new=%h", ref_i.ADP0_CURR, new_i.ADP0_CURR); end
		if (ref_i.ADP0_NEXT !== new_i.ADP0_NEXT) begin once<=1; $display("FIRSTDIFF ADP0_NEXT ref=%h new=%h", ref_i.ADP0_NEXT, new_i.ADP0_NEXT); end
		if (ref_i.OP3_PHASE_FRAC_NEXT !== new_i.OP3_PHASE_FRAC_NEXT) begin once<=1; $display("FIRSTDIFF OP3_PHASE_FRAC_NEXT ref=%h new=%h", ref_i.OP3_PHASE_FRAC_NEXT, new_i.OP3_PHASE_FRAC_NEXT); end
		if (ref_i.DSP_EXTS !== new_i.DSP_EXTS) begin once<=1; $display("FIRSTDIFF DSP_EXTS ref=%h new=%h", ref_i.DSP_EXTS, new_i.DSP_EXTS); end
		if (ref_i.TMR_CE !== new_i.TMR_CE) begin once<=1; $display("FIRSTDIFF TMR_CE ref=%h new=%h", ref_i.TMR_CE, new_i.TMR_CE); end
		if (ref_i.SCU_RA !== new_i.SCU_RA) begin once<=1; $display("FIRSTDIFF SCU_RA ref=%h new=%h", ref_i.SCU_RA, new_i.SCU_RA); end
		if (ref_i.SCU_WA !== new_i.SCU_WA) begin once<=1; $display("FIRSTDIFF SCU_WA ref=%h new=%h", ref_i.SCU_WA, new_i.SCU_WA); end
		if (ref_i.SCPU_RA !== new_i.SCPU_RA) begin once<=1; $display("FIRSTDIFF SCPU_RA ref=%h new=%h", ref_i.SCPU_RA, new_i.SCPU_RA); end
		if (ref_i.SCPU_WA !== new_i.SCPU_WA) begin once<=1; $display("FIRSTDIFF SCPU_WA ref=%h new=%h", ref_i.SCPU_WA, new_i.SCPU_WA); end
		if (ref_i.SCU_D !== new_i.SCU_D) begin once<=1; $display("FIRSTDIFF SCU_D ref=%h new=%h", ref_i.SCU_D, new_i.SCU_D); end
		if (ref_i.SCPU_D !== new_i.SCPU_D) begin once<=1; $display("FIRSTDIFF SCPU_D ref=%h new=%h", ref_i.SCPU_D, new_i.SCPU_D); end
		if (ref_i.DSP_WRITE !== new_i.DSP_WRITE) begin once<=1; $display("FIRSTDIFF DSP_WRITE ref=%h new=%h", ref_i.DSP_WRITE, new_i.DSP_WRITE); end
		if (ref_i.DSP_READ !== new_i.DSP_READ) begin once<=1; $display("FIRSTDIFF DSP_READ ref=%h new=%h", ref_i.DSP_READ, new_i.DSP_READ); end
		if (ref_i.DSP_READ_NOFL1 !== new_i.DSP_READ_NOFL1) begin once<=1; $display("FIRSTDIFF DSP_READ_NOFL1 ref=%h new=%h", ref_i.DSP_READ_NOFL1, new_i.DSP_READ_NOFL1); end
		if (ref_i.DSP_READ_NOFL2 !== new_i.DSP_READ_NOFL2) begin once<=1; $display("FIRSTDIFF DSP_READ_NOFL2 ref=%h new=%h", ref_i.DSP_READ_NOFL2, new_i.DSP_READ_NOFL2); end
		if (ref_i.MPRO0_Q !== new_i.MPRO0_Q) begin once<=1; $display("FIRSTDIFF MPRO0_Q ref=%h new=%h", ref_i.MPRO0_Q, new_i.MPRO0_Q); end
	end
endmodule
