// clamp only (shared constant)
module s7 (input CLK, input RST_N, input [63:0] di, input [63:0] b, input ld, input acc, input en, input ov, input k, output reg [63:0] q);
	always @(posedge CLK or negedge RST_N) if (!RST_N) q<=0; else if (en) q <= ov ? {64{k}} : (q & {64{acc}}) + b;
endmodule
// clamp via sload-able const, load via adder B
module s9 (input CLK, input RST_N, input [63:0] di, input [63:0] b, input ld, input acc, input en, input ov, input k, output reg [63:0] q);
	always @(posedge CLK or negedge RST_N) if (!RST_N) q<=0; else if (en) q <= ov ? {64{k}} : (q & {64{acc}}) + (ld ? di : b);
endmodule
// clamp zero via sclr, load via sload, sum
module s5 (input CLK, input RST_N, input [63:0] di, input [63:0] b, input ld, input acc, input en, input ov, input k, output reg [63:0] q);
	always @(posedge CLK or negedge RST_N) if (!RST_N) q<=0; else if (ov && !k) q <= 0; else if (en) q <= ld ? di : (q & {64{acc}}) + b;
endmodule
// load + clamp with two shared consts: k per half
module s10 (input CLK, input RST_N, input [63:0] di, input [63:0] b, input ld, input acc, input en, input ov, input k, input k2, output reg [63:0] q);
	always @(posedge CLK or negedge RST_N) if (!RST_N) q<=0; else if (en) q <= ld ? di : ov ? {{32{k2}},{32{k}}} : (q & {64{acc}}) + b;
endmodule
module probe_top (input CLK, input RST_N, input [63:0] di, input [63:0] b, input ld, input acc, input en, input ov, input k, input k2, output [63:0] p1, output [63:0] p2, output [63:0] p3, output [63:0] p4);
	s7 u1 (.*, .q(p1));
	s9 u2 (.*, .q(p2));
	s5 u3 (.*, .q(p3));
	s10 u4 (.*, .q(p4));
endmodule
