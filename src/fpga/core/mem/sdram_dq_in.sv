// sdram_dq_in.sv - SDRAM read data capture in the I/O cells (altddio_in): q_h is DQ sampled on the rising edge of
// clk, q_l is DQ sampled on the falling edge and re-registered to the rising edge, so after edge k q_h = DQ at k
// and q_l = DQ at k - 0.5. Every bit has the same pad-to-register delay (docs/memory.md section 3).

`default_nettype none

module sdram_dq_in (
	input  wire        clk,
	input  wire [15:0] dq,
	output wire [15:0] q_h,
	output wire [15:0] q_l
);
`ifdef ALTERA_RESERVED_QIS
	altddio_in #(
		.intended_device_family("Cyclone V"), .invert_input_clocks("OFF"), .lpm_hint("UNUSED"),
		.lpm_type("altddio_in"), .power_up_high("OFF"), .width(16)
	) ddio (
		.datain(dq), .inclock(clk), .dataout_h(q_h), .dataout_l(q_l),
		.aclr(1'b0), .aset(1'b0), .inclocken(1'b1), .sclr(1'b0), .sset(1'b0)
	);
`else
	reg [15:0] h = '0, n = '0, l = '0;
	always @(posedge clk) begin h <= dq; l <= n; end
	always @(negedge clk) n <= dq;
	assign q_h = h;
	assign q_l = l;
`endif
endmodule

`default_nettype wire
