// Behavioural stand-ins for the Altera megafunctions used by the SH-1 (simulation only).

// 32 x 32 register-file RAM of SH_core: write at posedge, asynchronous read.
module SH_regram (
	input         clock,
	input  [31:0] data,
	input  [4:0]  rdaddress,
	input  [4:0]  wraddress,
	input         wren,
	output [31:0] q
);
	reg [31:0] mem [0:31];
	integer i;
	initial for (i = 0; i < 32; i = i + 1) mem[i] = 32'h0;
	always @(posedge clock) if (wren) mem[wraddress] <= data;
	assign q = mem[rdaddress];
endmodule

