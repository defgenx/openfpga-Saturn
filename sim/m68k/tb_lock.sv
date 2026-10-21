// Lockstep bench: REF_fx68k (golden) and m68kp (DUT) get identical pins; the C++ side compares every output each clk.
module tb_lock (
	input         clk,
	input         extReset, pwrUp, enPhi1, enPhi2,
	input         DTACKn, VPAn,
	input  [2:0]  IPLn,
	input  [15:0] iEdb,
	output [63:0] ref_o, dut_o,
	output [15:0] ref_edb, dut_edb,
	output [23:1] ref_eab, dut_eab,
	output [15:0] ref_ird,
	output [575:0] ref_regs, dut_regs,
	output [15:0] ref_psw, dut_psw
);
	wire [3:0]  r_ctl, d_ctl;
	wire [2:0]  r_fc, d_fc;
	wire r_rw, r_as, r_lds, r_uds, r_e, r_vma, r_bg, r_rst, r_halt;
	wire d_rw, d_as, d_lds, d_uds, d_e, d_vma, d_bg, d_rst, d_halt;

	REF_fx68k REF (.clk, .HALTn(1'b1), .extReset, .pwrUp, .enPhi1, .enPhi2,
		.eRWn(r_rw), .ASn(r_as), .LDSn(r_lds), .UDSn(r_uds), .E(r_e), .VMAn(r_vma),
		.FC0(r_fc[0]), .FC1(r_fc[1]), .FC2(r_fc[2]), .BGn(r_bg), .oRESETn(r_rst), .oHALTEDn(r_halt),
		.DTACKn, .VPAn, .BERRn(1'b1), .BRn(1'b1), .BGACKn(1'b1),
		.IPL0n(IPLn[0]), .IPL1n(IPLn[1]), .IPL2n(IPLn[2]),
		.iEdb, .oEdb(ref_edb), .eab(ref_eab));
	m68kp DUT (.clk, .HALTn(1'b1), .extReset, .pwrUp, .enPhi1, .enPhi2,
		.eRWn(d_rw), .ASn(d_as), .LDSn(d_lds), .UDSn(d_uds), .E(d_e), .VMAn(d_vma),
		.FC0(d_fc[0]), .FC1(d_fc[1]), .FC2(d_fc[2]), .BGn(d_bg), .oRESETn(d_rst), .oHALTEDn(d_halt),
		.DTACKn, .VPAn, .BERRn(1'b1), .BRn(1'b1), .BGACKn(1'b1),
		.IPL0n(IPLn[0]), .IPL1n(IPLn[1]), .IPL2n(IPLn[2]),
		.iEdb, .oEdb(dut_edb), .eab(dut_eab));
	assign ref_ird = REF.Ird;
	assign ref_psw = REF.psw;
	assign dut_psw = DUT.psw;
	genvar gi;
	generate for (gi = 0; gi < 18; gi++) begin : probe
		assign ref_regs[gi*32 +: 32] = {REF.REF_excUnit.regs68H[gi], REF.REF_excUnit.regs68L[gi]};
		assign dut_regs[gi*32 +: 32] = {DUT.mp_excUnit.rHX.m[gi], DUT.mp_excUnit.rHiX.m[gi], DUT.mp_excUnit.rLoX.m[gi]};
	end endgenerate
	assign ref_o = {53'd0, r_halt, r_rst, r_bg, r_vma, r_e, r_fc, r_uds, r_lds, r_as, r_rw};
	assign dut_o = {53'd0, d_halt, d_rst, d_bg, d_vma, d_e, d_fc, d_uds, d_lds, d_as, d_rw};
endmodule
