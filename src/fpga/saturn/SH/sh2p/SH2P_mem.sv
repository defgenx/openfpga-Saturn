// synopsys translate_off
`timescale 1 ps / 1 ps
// synopsys translate_on

// Simple dual port RAM in M10K whose read address is registered on the falling edge: for a register-sourced RA the
// value is the one an asynchronous MLAB read gives before the next rising edge. Writes on the rising edge.
module SH2P_FERAM #(
	parameter AW = 4,
	parameter DW = 32
) (
	input           CLK,
	input           WE,
	input  [AW-1:0] WA,
	input  [DW-1:0] WD,
	input  [AW-1:0] RA,
	output [DW-1:0] Q
);
`ifdef ALTERA_RESERVED_QIS
	altsyncram #(
		.address_aclr_b("NONE"), .address_reg_b("CLOCK1"), .clock_enable_input_a("BYPASS"), .clock_enable_input_b("BYPASS"),
		.clock_enable_output_b("BYPASS"), .intended_device_family("Cyclone V"), .lpm_type("altsyncram"),
		.numwords_a(2**AW), .numwords_b(2**AW), .operation_mode("DUAL_PORT"), .outdata_aclr_b("NONE"),
		.outdata_reg_b("UNREGISTERED"), .power_up_uninitialized("FALSE"), .ram_block_type("M10K"),
		.widthad_a(AW), .widthad_b(AW), .width_a(DW), .width_b(DW), .width_byteena_a(1)
	) ram (
		.address_a(WA), .address_b(RA), .clock0(CLK), .clock1(~CLK), .data_a(WD), .wren_a(WE), .q_b(Q),
		.aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0), .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
		.clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1), .clocken3(1'b1), .data_b({DW{1'b1}}), .eccstatus(),
		.q_a(), .rden_a(1'b1), .rden_b(1'b1), .wren_b(1'b0));
`else
	reg [DW-1:0] mem [0:(1<<AW)-1];
	reg [DW-1:0] q = '0;
	always @(posedge CLK) if (WE) mem[WA] <= WD;
	always @(negedge CLK) q <= mem[RA];
	assign Q = q;
`endif
endmodule

module SH2P_regram (
	input         clock,
	input  [31:0] data,
	input   [3:0] rdaddress,
	input   [3:0] wraddress,
	input         wren,
	output [31:0] q
);
	SH2P_FERAM #(4,32) ram(clock, wren, wraddress, data, rdaddress, q);
endmodule
