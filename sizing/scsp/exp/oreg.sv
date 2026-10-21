// Experiment: M10K read data held by the block's output register (enable = clocken3).
module oreg (input CLK, input [4:0] wa, input [15:0] wd, input we, input [4:0] ra, input en, output [15:0] q);
	altsyncram	altsyncram_component (
		.address_a (wa), .byteena_a (1'b1), .clock0 (CLK), .data_a (wd), .wren_a (we),
		.address_b (ra), .q_b (q), .aclr0 (1'b0), .aclr1 (1'b0), .addressstall_a (1'b0), .addressstall_b (1'b0),
		.byteena_b (1'b1), .clock1 (1'b1), .clocken0 (1'b1), .clocken1 (1'b1), .clocken2 (1'b1), .clocken3 (en),
		.data_b ({16{1'b1}}), .eccstatus (), .q_a (), .rden_a (1'b1), .rden_b (1'b1), .wren_b (1'b0));
	defparam
		altsyncram_component.address_aclr_b = "NONE",
		altsyncram_component.address_reg_b = "CLOCK0",
		altsyncram_component.clock_enable_input_a = "BYPASS",
		altsyncram_component.clock_enable_input_b = "BYPASS",
		altsyncram_component.clock_enable_output_b = "NORMAL",
		altsyncram_component.intended_device_family = "Cyclone V",
		altsyncram_component.lpm_type = "altsyncram",
		altsyncram_component.numwords_a = 32,
		altsyncram_component.numwords_b = 32,
		altsyncram_component.operation_mode = "DUAL_PORT",
		altsyncram_component.outdata_aclr_b = "NONE",
		altsyncram_component.outdata_reg_b = "CLOCK0",
		altsyncram_component.power_up_uninitialized = "FALSE",
		altsyncram_component.ram_block_type = "M10K",
		altsyncram_component.read_during_write_mode_mixed_ports = "DONT_CARE",
		altsyncram_component.widthad_a = 5, altsyncram_component.widthad_b = 5,
		altsyncram_component.width_a = 16, altsyncram_component.width_b = 16,
		altsyncram_component.width_byteena_a = 1;
endmodule
