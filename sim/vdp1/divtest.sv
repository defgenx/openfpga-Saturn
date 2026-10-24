// Exhaustive check: serial gouraud divider against the golden 29-bit divider for every (A, divisor) pair.
module divtest (input CLK, input START, input [4:0] A, input [11:0] S, output [16:0] QREF, output [16:0] QNEW);
	wire [16:0] qr;
	REF_VDP1_DIV_24_12 r (CLK, {A,12'b0}, S, START, qr);
	assign QREF = qr;
	wire qb, run;
	VDP1P_DIV_STEP n (CLK, A, S, START, qb, run);
	bit [16:0] q;
	always @(posedge CLK) if (run) q <= {q[15:0], qb};
	assign QNEW = q;
endmodule
