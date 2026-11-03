// APF boot status for core_bridge_cmd (clk_74a). Owning doc: docs/integration.md ("Host handshake").
//
// Boot done and setup done are reported together, once the PLL has locked and the RAM controllers accept
// writes (setup_ready_74a), and they never fall again. pll_lite relocks the PLL on every PAL / dot-clock
// change: a live lock flag would report "booting" to a running host and re-send Ready to Run (0x0140),
// which leaves the target command engine waiting for an answer while disc reads queue behind it.

`default_nettype none

module pocket_status (
	input  wire clk_74a,
	input  wire setup_ready_74a,       // PLL locked and RAM ready (saturn_pocket)
	output reg  ready = 1'b0           // status_boot_done and status_setup_done
);

always @(posedge clk_74a) if (setup_ready_74a) ready <= 1'b1;

endmodule

`default_nettype wire
