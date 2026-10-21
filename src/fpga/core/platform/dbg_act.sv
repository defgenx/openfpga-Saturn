// dbg_act.sv - activity flag for the debug overlay (POCKET_DEBUG_OVERLAY): y = `s` changed during the
// previous window (tick closes a window).
`default_nettype none
module dbg_act (
	input  wire clk,
	input  wire tick,
	input  wire s,
	output reg  y = 1'b0
);
reg q = 1'b0, f = 1'b0;
always @(posedge clk) begin
	q <= s;
	if (tick) begin y <= f | (q ^ s); f <= 1'b0; end
	else if (q ^ s) f <= 1'b1;
end
endmodule
`default_nettype wire
