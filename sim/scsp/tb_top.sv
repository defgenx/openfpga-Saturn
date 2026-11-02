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
	output [15:0] R_SOUND_L, N_SOUND_L, R_SOUND_R, N_SOUND_R,
	output [ 4:0] N_OP7SLOT,
	output [ 2:0] N_CYC
);
	assign N_OP7SLOT = new_i.OP7.SLOT;
	assign N_CYC = new_i.CYCLE_NUM;
`ifdef MC_CHECK
	// SCSP multicycles of core_constraints.sdc: no -from register changes at the clock before an edge where its -to set
	// captures, and the -to set changes only at its enable. The control set (DSEL, SCR_G7 output) is single-cycle on
	// purpose and must show violations. Reset edges are skipped (SYSRES_N is held for many clocks in the core).
	wire acc_en = new_i.RES_N & (new_i.DSEL | new_i.SLOT1_CE);
	wire op5_en = new_i.RES_N & new_i.SLOT1_CE;
	wire [$bits(new_i.OP7)+15:0] acc_src = {new_i.OP7, new_i.EFREG_Q};
	wire [$bits(new_i.OP7_SCR8):0] ctl_src = {new_i.DSEL, new_i.OP7_SCR8};
	wire [35:0] acc_dst = {new_i.ACC_L, new_i.ACC_R};
	wire [$bits(new_i.OP4)+$bits(new_i.OP4_SCR1)+$bits(new_i.OP4_SCR2)+$bits(new_i.OP4_SCR5)+$bits(new_i.OP4_SCR6)+15+32+8+12-1:0] op5_src =
		{new_i.OP4, new_i.OP4_SCR1, new_i.OP4_SCR2, new_i.OP4_SCR5, new_i.OP4_SCR6, new_i.SCNT, new_i.OP4_WD0, new_i.OP4_WD1,
		 new_i.OP4_LFO_Q, new_i.OP4_EVOL_Q};
	wire [$bits(new_i.OP5)+12+5+2-1:0] op5_dst = {new_i.OP5, new_i.EVOL_RAM_D, new_i.MONITOR_EG, new_i.MONITOR_SGC};
	reg [$bits(acc_src)-1:0] acc_src_d; reg [$bits(ctl_src)-1:0] ctl_src_d; reg [$bits(op5_src)-1:0] op5_src_d;
	reg [35:0] acc_dst_d; reg [$bits(op5_dst)-1:0] op5_dst_d;
	reg res_d = 1'b0, acc_en_d = 1'b0, op5_en_d = 1'b0;
	integer acc_viol = 0, op5_viol = 0, wr_viol = 0, ctl_viol = 0, acc_caps = 0, op5_caps = 0;
	always @(posedge CLK) begin
		if (res_d && new_i.RES_N) begin
			if (acc_en) acc_caps = acc_caps + 1;
			if (op5_en) op5_caps = op5_caps + 1;
			if (acc_en && acc_src != acc_src_d) acc_viol = acc_viol + 1;
			if (acc_en && ctl_src != ctl_src_d) ctl_viol = ctl_viol + 1;
			if (op5_en && op5_src != op5_src_d) op5_viol = op5_viol + 1;
			if ((acc_dst != acc_dst_d && !acc_en_d) || (op5_dst != op5_dst_d && !op5_en_d)) wr_viol = wr_viol + 1;
		end
		acc_src_d <= acc_src; ctl_src_d <= ctl_src; op5_src_d <= op5_src; acc_dst_d <= acc_dst; op5_dst_d <= op5_dst;
		res_d <= new_i.RES_N; acc_en_d <= acc_en; op5_en_d <= op5_en;
	end
	final $display("MC_CHECK acc_caps=%0d op5_caps=%0d acc_viol=%0d op5_viol=%0d wr_viol=%0d ctl_viol=%0d",
	               acc_caps, op5_caps, acc_viol, op5_viol, wr_viol, ctl_viol);
`endif
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
	SCSPP #(.MIDI_REGS(MIDI)) new_i (
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
