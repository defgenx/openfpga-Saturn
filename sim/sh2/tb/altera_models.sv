// Behavioural stand-ins for the Altera megafunctions used by the SH-2 memory wrappers (simulation only).
module altdpram #(
	parameter int width = 1,
	parameter int widthad = 1,
	parameter int width_byteena = 1,
	parameter string indata_aclr = "OFF",
	parameter string indata_reg = "INCLOCK",
	parameter string intended_device_family = "",
	parameter string lpm_type = "",
	parameter string outdata_aclr = "OFF",
	parameter string outdata_reg = "UNREGISTERED",
	parameter string power_up_uninitialized = "FALSE",
	parameter string ram_block_type = "",
	parameter string rdaddress_aclr = "OFF",
	parameter string rdaddress_reg = "UNREGISTERED",
	parameter string rdcontrol_aclr = "OFF",
	parameter string rdcontrol_reg = "UNREGISTERED",
	parameter string read_during_write_mode_mixed_ports = "",
	parameter string wraddress_aclr = "OFF",
	parameter string wraddress_reg = "INCLOCK",
	parameter string wrcontrol_aclr = "OFF",
	parameter string wrcontrol_reg = "INCLOCK"
) (
	input  [width-1:0]   data,
	input                inclock,
	input                outclock,
	input  [widthad-1:0] rdaddress,
	input  [widthad-1:0] wraddress,
	input                wren,
	output [width-1:0]   q,
	input                aclr,
	input  [width_byteena-1:0] byteena,
	input                inclocken,
	input                outclocken,
	input                rdaddressstall,
	input                rden,
	input                wraddressstall
);
	reg [width-1:0] mem [0:(1<<widthad)-1];
	initial for (int i = 0; i < (1<<widthad); i++) mem[i] = '0;
	always @(posedge inclock) if (wren) mem[wraddress] <= data;
	assign q = mem[rdaddress];
endmodule

module altsyncram #(
	parameter int width_a = 1, parameter int width_b = 1,
	parameter int widthad_a = 1, parameter int widthad_b = 1,
	parameter int numwords_a = 1, parameter int numwords_b = 1,
	parameter int width_byteena_a = 1,
	parameter string address_aclr_b = "NONE", parameter string address_reg_b = "CLOCK1",
	parameter string clock_enable_input_a = "", parameter string clock_enable_input_b = "",
	parameter string clock_enable_output_b = "", parameter string intended_device_family = "",
	parameter string lpm_type = "", parameter string operation_mode = "",
	parameter string outdata_aclr_b = "NONE", parameter string outdata_reg_b = "UNREGISTERED",
	parameter string power_up_uninitialized = "FALSE", parameter string ram_block_type = "AUTO"
) (
	input [widthad_a-1:0] address_a, input [widthad_b-1:0] address_b,
	input clock0, input clock1,
	input [width_a-1:0] data_a, input wren_a,
	output [width_b-1:0] q_b,
	input aclr0, input aclr1, input addressstall_a, input addressstall_b,
	input [width_byteena_a-1:0] byteena_a, input byteena_b,
	input clocken0, input clocken1, input clocken2, input clocken3,
	input [width_b-1:0] data_b, output eccstatus, output [width_a-1:0] q_a,
	input rden_a, input rden_b, input wren_b
);
	reg [width_a-1:0] mem [0:numwords_a-1];
	reg [widthad_b-1:0] ab;
	initial begin for (int i = 0; i < numwords_a; i++) mem[i] = '0; ab = '0; end
	localparam int LANE = width_a / width_byteena_a;
	always @(posedge clock0) if (wren_a) for (int l = 0; l < width_byteena_a; l++) if (byteena_a[l]) mem[address_a][l*LANE +: LANE] <= data_a[l*LANE +: LANE];
	always @(posedge clock1) ab <= address_b;
	assign q_b = mem[ab];
	assign q_a = '0;
	assign eccstatus = 1'b0;
endmodule
