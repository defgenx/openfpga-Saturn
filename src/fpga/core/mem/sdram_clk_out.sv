// SDRAM clock pin: the inverted clk through a DDIO output (datain_h = 0 on the rising edge,
// datain_l = 1 on the falling edge), so the SDRAM samples half a cycle after the FPGA launches.

`default_nettype none

module sdram_clk_out (
	input  wire clk,
	output wire dram_clk
);
`ifdef ALTERA_RESERVED_QIS
	altddio_out #(
		.extend_oe_disable("OFF"), .intended_device_family("Cyclone V"), .invert_output("OFF"),
		.lpm_hint("UNUSED"), .lpm_type("altddio_out"), .oe_reg("UNREGISTERED"),
		.power_up_high("OFF"), .width(1)
	) ddio (
		.datain_h(1'b0), .datain_l(1'b1), .outclock(clk), .dataout(dram_clk),
		.aclr(1'b0), .aset(1'b0), .oe(1'b1), .outclocken(1'b1), .sclr(1'b0), .sset(1'b0)
	);
`else
	assign dram_clk = ~clk;
`endif
endmodule

`default_nettype wire
