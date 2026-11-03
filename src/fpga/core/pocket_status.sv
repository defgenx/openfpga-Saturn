// APF boot status for core_bridge_cmd (clk_74a). Owning doc: docs/integration.md ("Host handshake").
//
// Boot done rises at the first PLL lock and setup done once the RAM is ready (setup_ready_74a); neither falls
// again. pll_lite relocks the PLL on every PAL / dot-clock change: a live lock flag would report "booting" to a
// running host and a second rising setup done would re-send Ready to Run (0x0140).

`default_nettype none

module pocket_status (
	input  wire clk_74a,
	input  wire pll_locked_74a,        // live PLL lock (saturn_pocket)
	input  wire setup_ready_74a,       // RAM ready or its timeout (saturn_pocket)
	output reg  boot_done = 1'b0,
	output reg  setup_done = 1'b0
);

always @(posedge clk_74a) begin
	if (pll_locked_74a) boot_done <= 1'b1;
	if (setup_ready_74a) setup_done <= 1'b1;
end

endmodule

`default_nettype wire
