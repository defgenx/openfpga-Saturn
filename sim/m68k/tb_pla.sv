// Exhaustive opcode sweep: ROM decode (DUT) against the original PLA (REF), opcode held for 4 clk.
module tb_pla(input clk, input [15:0] opcode, output [39:0] ref_o, dut_o);
	wire [9:0] ra1, ra2, ra3, da1, da2, da3; wire rp, ri, rla, rlf, dp, di, dla, dlf;
	REF_uaddrDecode REF(.opcode, .a1(ra1), .a2(ra2), .a3(ra3), .isPriv(rp), .isIllegal(ri), .isLineA(rla), .isLineF(rlf), .lineBmap());
	mp_uaddrDecode  DUT(.clk, .opcode, .a1(da1), .a2(da2), .a3(da3), .isPriv(dp), .isIllegal(di), .isLineA(dla), .isLineF(dlf), .lineBmap());
	assign ref_o = {ra1, ra2, ra3, rp, ri, rla, rlf};
	assign dut_o = {da1, da2, da3, dp, di, dla, dlf};
endmodule
