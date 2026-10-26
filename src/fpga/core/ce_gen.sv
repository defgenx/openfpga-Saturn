// ce_gen - clock enable at out_clk/in_clk of the in_ce rate (a fractional accumulator, as CEGen.vhd but only as wide as
// the ratio needs). `ev` is the enable one clock before `ce`; a decimator on `ev` gives a registered enable on the
// same clock as ce.
`default_nettype none
module ce_gen #(
	parameter W = 26
) (
	input  wire         clk,
	input  wire [W-1:0] in_clk,
	input  wire [W-1:0] out_clk,
	input  wire         in_ce,
	output reg          ce = 1'b0,
	output wire         ev
);
reg  [W-1:0] sum = '0;
wire [W:0]   nxt = {1'b0, sum} + {1'b0, out_clk};
wire         ge  = nxt >= {1'b0, in_clk};
assign ev = in_ce & ge;
always @(posedge clk) begin
	ce <= ev;
	if (in_ce) sum <= ge ? nxt[W-1:0] - in_clk : nxt[W-1:0];
end
endmodule

// ce_div - registered enable on every N-th pulse of ev
module ce_div #(
	parameter N = 10
) (
	input  wire clk,
	input  wire ev,
	output reg  ce = 1'b0
);
reg [$clog2(N)-1:0] cnt = '0;
wire last = (cnt == N - 1);
always @(posedge clk) begin
	ce <= ev & last;
	if (ev) cnt <= last ? '0 : cnt + 1'd1;
end
endmodule
`default_nettype wire
