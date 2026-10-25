// Probe: SH2P_dec + SH2P_decrom as in the core (class registered between them).
module dec_both (input CLK, input [15:0] IR, input [2:0] ST, input T, DS, RE, IE, LE, LS, EN_A, RESET, input [15:0] IRX, output SH2P_PKG::DecInstr_t ID, output SH2P_PKG::DecInstr_t EX);
	wire [7:0] cls;
	SH2P_dec #(1) d (.IR(IR), .STATE(ST), .T(T), .DS(DS), .RES_EXP(RE), .INT_EXP(IE), .ILI_EXP(LE), .ILSI(LS), .DECI(ID), .CLS_O(cls));
	SH2P_decrom r (.CLK(CLK), .EN_A(EN_A), .RESET(RESET), .CLS_D(cls), .IR(IRX), .DI(EX));
endmodule
