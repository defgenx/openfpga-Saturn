// Evaluates uaddrDecode for one opcode; the C++ harness sweeps all 65536.
module pla_dump(input [15:0] opcode, output [9:0] a1, a2, a3, output isPriv, isIllegal, isLineA, isLineF);
	uaddrDecode u(.opcode(opcode), .a1, .a2, .a3, .isPriv, .isIllegal, .isLineA, .isLineF, .lineBmap());
endmodule
