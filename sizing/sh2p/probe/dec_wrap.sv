// Probe: Decode() alone, registered I/O.
module dec_wrap (input CLK, input [15:0] IR_I, input [2:0] ST_I, input T_I, DS_I, RES_I, INT_I, ILI_I, ILSI_I, output reg [255:0] O);
	import SH2_PKG::*;
	reg [15:0] IR; reg [2:0] ST; reg T, DS, RE, IE, LE, LS;
	always @(posedge CLK) begin IR<=IR_I; ST<=ST_I; T<=T_I; DS<=DS_I; RE<=RES_I; IE<=INT_I; LE<=ILI_I; LS<=ILSI_I; end
	DecInstr_t D;
	assign D = Decode(IR, ST, T, DS, RE, IE, LE, LS, 1);
	always @(posedge CLK) O <= {D, 150'd0} >> 0;
endmodule
