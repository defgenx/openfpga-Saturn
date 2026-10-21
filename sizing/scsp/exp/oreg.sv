module SCSP_RAM_LW
#(
	parameter W = 16,
	parameter addr_width = 5
)
(
	input                    CLK,
	input  [addr_width-1:0]  WRADDR,
	input           [W-1:0]  DATA,
	input                    WREN,
	input  [addr_width-1:0]  RDADDR,
	input                    EN,
	input                    CLR,
	output          [W-1:0]  Q
);
	altsyncram	altsyncram_component (
				.address_a (WRADDR),
				.byteena_a (1'b1),
				.clock0 (CLK),
				.data_a (DATA),
				.wren_a (WREN),
				.address_b (RDADDR),
				.q_b (Q),
				.aclr0 (1'b0),
				.aclr1 (CLR),
				.addressstall_a (1'b0),
				.addressstall_b (1'b0),
				.byteena_b (1'b1),
				.clock1 (CLK),
				.clocken0 (1'b1),
				.clocken1 (1'b1),
				.clocken2 (1'b1),
				.clocken3 (EN),
				.data_b ({W{1'b1}}),
				.eccstatus (),
				.q_a (),
				.rden_a (1'b1),
				.rden_b (1'b1),
				.wren_b (1'b0));
	defparam
		altsyncram_component.address_aclr_b = "NONE",
		altsyncram_component.address_reg_b = "CLOCK1",
		altsyncram_component.clock_enable_input_a = "BYPASS",
		altsyncram_component.clock_enable_input_b = "BYPASS",
		altsyncram_component.clock_enable_output_b = "NORMAL",
		altsyncram_component.intended_device_family = "Cyclone V",
		altsyncram_component.lpm_type = "altsyncram",
		altsyncram_component.numwords_a = 2**addr_width,
		altsyncram_component.numwords_b = 2**addr_width,
		altsyncram_component.operation_mode = "DUAL_PORT",
		altsyncram_component.outdata_aclr_b = "CLEAR1",
		altsyncram_component.outdata_reg_b = "CLOCK1",
		altsyncram_component.power_up_uninitialized = "FALSE",
		altsyncram_component.ram_block_type = "M10K",
		altsyncram_component.read_during_write_mode_mixed_ports = "DONT_CARE",
		altsyncram_component.widthad_a = addr_width,
		altsyncram_component.widthad_b = addr_width,
		altsyncram_component.width_a = W,
		altsyncram_component.width_b = W,
		altsyncram_component.width_byteena_a = 1;
endmodule
module oreg(input CLK, input [4:0] wa, input [11:0] wd, input we, input [4:0] ra, input en, input clr, output [11:0] q);
	SCSP_RAM_LW #(12,5) u(CLK,wa,wd,we,ra,en,clr,q);
endmodule
