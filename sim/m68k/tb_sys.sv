// System lockstep: two Saturn sound subsystems (golden SCSP + 68K as wired in Saturn.sv), one with the golden
// FX68K and one with m68kp. The only shared inputs are the clocks and the resets; sound RAM models are per system.
module tb_sys_one #(parameter REFCPU = 1) (
	input         CLK, RST_N, CE, SCSP_RES_N, SCPU_RES_N,
	input  [15:0] RAM_Q,
	output [18:1] RAM_A, output [15:0] RAM_D, output [1:0] RAM_WE, output RAM_RD, RAM_CS,
	output [15:0] SOUND_L, SOUND_R,
	output [63:0] cpu_o, output [23:1] cpu_eab, output [15:0] cpu_edb, output [2:0] ipl_n
);
	wire SCCE_R, SCCE_F, SCRW_N, SCAS_N, SCLDS_N, SCUDS_N, SCDTACK_N, SCAVEC_N, M68K_RESO_N;
	wire [23:1] SCA; wire [15:0] SCDI, SCDO; wire [2:0] SCFC, SCIPL_N;
	SCSP scsp (.CLK, .RST_N, .CE, .RES_N(SCSP_RES_N), .CE_R(1'b0), .CE_F(1'b1),
		.DI(16'h0000), .DO(), .CS_N(1'b1), .AD_N(1'b1), .DTEN_N(1'b1), .REQ_N(1'b1), .RDY_N(), .INT_N(),
		.SCCE_R, .SCCE_F, .SCA, .SCDI, .SCDO, .SCRW_N, .SCAS_N, .SCLDS_N, .SCUDS_N, .SCDTACK_N, .SCFC,
		.SCAVEC_N, .SCIPL_N,
		.RAM_A, .RAM_D, .RAM_WE, .RAM_RD, .RAM_CS, .RAM_Q, .RAM_RFS(), .RAM_RDY(1'b1),
		.ESL(16'h0), .ESR(16'h0), .SOUND_L, .SOUND_R, .SND_EN(3'b111));
	wire rw, as, lds, uds, e, vma, bg, rst, halt;
	assign ipl_n = SCIPL_N;
	generate if (REFCPU) begin : g
		REF_fx68k M68K (.clk(CLK), .extReset(~SCPU_RES_N | ~M68K_RESO_N), .pwrUp(~RST_N), .enPhi1(SCCE_R), .enPhi2(SCCE_F),
			.eab(SCA), .iEdb(SCDO), .oEdb(SCDI), .eRWn(SCRW_N), .ASn(SCAS_N), .LDSn(SCLDS_N), .UDSn(SCUDS_N),
			.DTACKn(SCDTACK_N), .IPL0n(SCIPL_N[0]), .IPL1n(SCIPL_N[1]), .IPL2n(SCIPL_N[2]), .VPAn(SCAVEC_N),
			.FC0(SCFC[0]), .FC1(SCFC[1]), .FC2(SCFC[2]), .BGn(bg), .BRn(1'b1), .BGACKn(1'b1), .BERRn(1'b1), .HALTn(1'b1),
			.oRESETn(M68K_RESO_N), .oHALTEDn(halt), .E(e), .VMAn(vma));
	end else begin : g
		m68kp M68K (.clk(CLK), .extReset(~SCPU_RES_N | ~M68K_RESO_N), .pwrUp(~RST_N), .enPhi1(SCCE_R), .enPhi2(SCCE_F),
			.eab(SCA), .iEdb(SCDO), .oEdb(SCDI), .eRWn(SCRW_N), .ASn(SCAS_N), .LDSn(SCLDS_N), .UDSn(SCUDS_N),
			.DTACKn(SCDTACK_N), .IPL0n(SCIPL_N[0]), .IPL1n(SCIPL_N[1]), .IPL2n(SCIPL_N[2]), .VPAn(SCAVEC_N),
			.FC0(SCFC[0]), .FC1(SCFC[1]), .FC2(SCFC[2]), .BGn(bg), .BRn(1'b1), .BGACKn(1'b1), .BERRn(1'b1), .HALTn(1'b1),
			.oRESETn(M68K_RESO_N), .oHALTEDn(halt), .E(e), .VMAn(vma));
	end endgenerate
	assign cpu_o = {SCCE_R, SCCE_F, SCDTACK_N, SCAVEC_N, M68K_RESO_N, bg, halt, vma, e, SCFC, SCUDS_N, SCLDS_N, SCAS_N, SCRW_N};
	assign cpu_eab = SCA;
	assign cpu_edb = SCRW_N ? SCDO : SCDI;
endmodule

module tb_sys (
	input CLK, RST_N, CE, SCSP_RES_N, SCPU_RES_N,
	input [15:0] A_RAM_Q, B_RAM_Q,
	output [18:1] A_RAM_A, B_RAM_A, output [15:0] A_RAM_D, B_RAM_D, output [1:0] A_RAM_WE, B_RAM_WE,
	output A_RAM_RD, B_RAM_RD, A_RAM_CS, B_RAM_CS,
	output [15:0] A_SL, B_SL, A_SR, B_SR,
	output [63:0] dbg, output [63:0] A_O, B_O, output [23:1] A_EAB, B_EAB, output [15:0] A_EDB, B_EDB, output [2:0] A_IPL, B_IPL);
	assign dbg = {a.scsp.CR8, a.scsp.CR12, a.scsp.CR11, a.scsp.CR14};
	tb_sys_one #(1) a (.CLK, .RST_N, .CE, .SCSP_RES_N, .SCPU_RES_N, .RAM_Q(A_RAM_Q), .RAM_A(A_RAM_A), .RAM_D(A_RAM_D),
		.RAM_WE(A_RAM_WE), .RAM_RD(A_RAM_RD), .RAM_CS(A_RAM_CS), .SOUND_L(A_SL), .SOUND_R(A_SR),
		.cpu_o(A_O), .cpu_eab(A_EAB), .cpu_edb(A_EDB), .ipl_n(A_IPL));
	tb_sys_one #(0) b (.CLK, .RST_N, .CE, .SCSP_RES_N, .SCPU_RES_N, .RAM_Q(B_RAM_Q), .RAM_A(B_RAM_A), .RAM_D(B_RAM_D),
		.RAM_WE(B_RAM_WE), .RAM_RD(B_RAM_RD), .RAM_CS(B_RAM_CS), .SOUND_L(B_SL), .SOUND_R(B_SR),
		.cpu_o(B_O), .cpu_eab(B_EAB), .cpu_edb(B_EDB), .ipl_n(B_IPL));
endmodule
