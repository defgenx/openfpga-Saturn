// Behavioural stand-ins for the Altera megafunctions that survive in the Pocket file list (simulation only):
// altsyncram (DUAL_PORT, BIDIR_DUAL_PORT, SINGLE_PORT, ROM; the clock1 variants exist only under
// ALTERA_RESERVED_QIS, which the sim does not define), altdpram (MLAB, asynchronous read) and dcfifo.
// M10K reads return the OLD word when the other port writes the same address on the same edge (what the
// silicon gives for DONT_CARE); a port reading its own write returns the new word.

`timescale 1ps/1ps

module altsyncram #(
	parameter string operation_mode = "DUAL_PORT",
	parameter int width_a = 1, parameter int width_b = 1,
	parameter int widthad_a = 1, parameter int widthad_b = 1,
	parameter int numwords_a = 0, parameter int numwords_b = 0,
	parameter int width_byteena_a = 1, parameter int width_byteena_b = 1,
	parameter int byte_size = 8,
	parameter string outdata_reg_a = "UNREGISTERED", parameter string outdata_reg_b = "UNREGISTERED",
	parameter string address_reg_b = "CLOCK1",
	parameter string init_file = "", parameter string power_up_uninitialized = "FALSE",
	parameter string intended_device_family = "", parameter string lpm_hint = "", parameter string lpm_type = "",
	parameter string ram_block_type = "", parameter string clock_enable_input_a = "", parameter string clock_enable_input_b = "",
	parameter string clock_enable_output_a = "", parameter string clock_enable_output_b = "",
	parameter string indata_reg_b = "", parameter string byteena_reg_b = "", parameter string wrcontrol_wraddress_reg_b = "",
	parameter string outdata_aclr_a = "", parameter string outdata_aclr_b = "", parameter string address_aclr_b = "",
	parameter string read_during_write_mode_mixed_ports = "", parameter string read_during_write_mode_port_a = "",
	parameter string read_during_write_mode_port_b = "", parameter string rdcontrol_reg_b = ""
) (
	input  wire [widthad_a-1:0] address_a, input wire [widthad_b-1:0] address_b,
	input  wire clock0, input wire clock1,
	input  wire [width_a-1:0] data_a, input wire wren_a,
	output wire [width_b-1:0] q_b,
	input  wire aclr0, input wire aclr1, input wire addressstall_a, input wire addressstall_b,
	input  wire [width_byteena_a-1:0] byteena_a, input wire [width_byteena_b-1:0] byteena_b,
	input  wire clocken0, input wire clocken1, input wire clocken2, input wire clocken3,
	input  wire [width_b-1:0] data_b, output wire eccstatus, output wire [width_a-1:0] q_a,
	input  wire rden_a, input wire rden_b, input wire wren_b
);
	localparam bit BIDIR = (operation_mode == "BIDIR_DUAL_PORT");
	localparam bit DUAL  = (operation_mode == "DUAL_PORT");
	localparam int NW = (numwords_a != 0) ? numwords_a : (1 << widthad_a);
	// the storage is organised in width_a words; DUAL_PORT with width_b = 2 * width_a reads two adjacent words
	reg [width_a-1:0] mem [0:NW-1];
	initial for (int i = 0; i < NW; i++) mem[i] = '0;

	localparam int LA = width_a / width_byteena_a;
	localparam int LB = width_b / width_byteena_b;
	reg [width_a-1:0] qa_r = '0;
	reg [width_b-1:0] qb_r = '0;

	reg [widthad_b-1:0] ab_r;
	always @(posedge clock0) begin
		if (DUAL) begin
			// read first (old data), then write
			if (width_b == width_a) qb_r <= mem[address_b];
			else qb_r <= {mem[{address_b, 1'b1}], mem[{address_b, 1'b0}]};
			if (wren_a) for (int l = 0; l < width_byteena_a; l++) if (byteena_a[l]) mem[address_a][l*LA +: LA] <= data_a[l*LA +: LA];
		end else if (BIDIR) begin
			// true dual port, one clock (same model as sim/scsp/altsyncram.v): both ports read the array as it was before this
			// edge (old data on a same-edge write); port B can hold its data in an output register enabled by clocken3
			qa_r <= mem[address_a];
			ab_r <= address_b;
			if (outdata_reg_b == "CLOCK1") begin
				if (clocken3) qb_r <= mem[ab_r];
			end else
				qb_r <= mem[address_b];
			if (wren_a) for (int l = 0; l < width_byteena_a; l++) if (byteena_a[l]) mem[address_a][l*LA +: LA] <= data_a[l*LA +: LA];
			if (wren_b) for (int l = 0; l < width_byteena_b; l++) if (byteena_b[l]) mem[address_b][l*LB +: LB] <= data_b[l*LB +: LB];
		end else begin
			// single port / ROM: the output shows the post-write word
			if (wren_a) for (int l = 0; l < width_byteena_a; l++) if (byteena_a[l]) mem[address_a][l*LA +: LA] <= data_a[l*LA +: LA];
			qa_r <= mem[address_a];
		end
	end
	// single port outputs show the post-write word (reads sampled after the nonblocking update)
	reg [width_a-1:0] qa_n = '0;
	always @(posedge clock0) if (!DUAL && !BIDIR) begin
		#1;
		qa_n <= mem[address_a];
	end
	assign q_a = DUAL ? '0 : BIDIR ? qa_r : qa_n;
	// DUAL_PORT with clock1 = ~clock0 (SCUP2_DRAM, address_reg_b = CLOCK1): the silicon registers the read address on the
	// falling edge of clock0 and the output is unregistered, so the data is valid in the same clock0 cycle (half-cycle read).
	reg half_r = 0; initial begin #1000; half_r = DUAL && (clock1 === ~clock0); end
	reg [widthad_b-1:0] ab_h = '0;
	always @(posedge clock1) if (half_r) ab_h <= address_b;
	assign q_b = half_r ? mem[ab_h] : qb_r;
	assign eccstatus = 1'b0;
endmodule

module altdpram #(
	parameter int width = 1, parameter int widthad = 1, parameter int width_byteena = 1, parameter int byte_size = 8,
	parameter string indata_aclr = "OFF", parameter string indata_reg = "INCLOCK",
	parameter string intended_device_family = "", parameter string lpm_type = "",
	parameter string outdata_aclr = "OFF", parameter string outdata_reg = "UNREGISTERED",
	parameter string power_up_uninitialized = "FALSE", parameter string ram_block_type = "",
	parameter string rdaddress_aclr = "OFF", parameter string rdaddress_reg = "UNREGISTERED",
	parameter string rdcontrol_aclr = "OFF", parameter string rdcontrol_reg = "UNREGISTERED",
	parameter string read_during_write_mode_mixed_ports = "",
	parameter string wraddress_aclr = "OFF", parameter string wraddress_reg = "INCLOCK",
	parameter string wrcontrol_aclr = "OFF", parameter string wrcontrol_reg = "INCLOCK"
) (
	input  wire [width-1:0] data, input wire inclock, input wire outclock,
	input  wire [widthad-1:0] rdaddress, input wire [widthad-1:0] wraddress, input wire wren,
	output wire [width-1:0] q, input wire aclr, input wire [width_byteena-1:0] byteena,
	input  wire inclocken, input wire outclocken, input wire rdaddressstall, input wire rden, input wire wraddressstall
);
	reg [width-1:0] mem [0:(1<<widthad)-1];
	initial for (int i = 0; i < (1<<widthad); i++) mem[i] = '0;
	localparam int L = width / width_byteena;
	always @(posedge inclock) if (wren) for (int l = 0; l < width_byteena; l++) if (byteena[l]) mem[wraddress][l*L +: L] <= data[l*L +: L];
	assign q = mem[rdaddress];
endmodule

module dcfifo #(
	parameter string intended_device_family = "", parameter int lpm_numwords = 4, parameter string lpm_showahead = "OFF",
	parameter string lpm_type = "", parameter int lpm_width = 1, parameter int lpm_widthu = 2,
	parameter string overflow_checking = "ON", parameter int rdsync_delaypipe = 5, parameter string underflow_checking = "ON",
	parameter string use_eab = "ON", parameter int wrsync_delaypipe = 5
) (
	input  wire [lpm_width-1:0] data, input wire rdclk, input wire rdreq, input wire wrclk, input wire wrreq,
	output reg  [lpm_width-1:0] q, output wire rdempty, input wire aclr, output wire eccstatus,
	output wire rdfull, output wire [lpm_widthu-1:0] rdusedw, output wire wrempty, output wire wrfull, output wire [lpm_widthu-1:0] wrusedw
);
	reg [lpm_width-1:0] mem [0:lpm_numwords-1];
	reg [lpm_widthu:0] wp = '0, rp = '0;
	reg [lpm_widthu:0] wp_s1 = '0, wp_s2 = '0, wp_s3 = '0;
	assign rdempty = (rp == wp_s3);
	assign wrfull = ((wp - rp) >= lpm_numwords);
	assign wrempty = (wp == rp);
	assign rdfull = 1'b0; assign rdusedw = '0; assign wrusedw = '0; assign eccstatus = 1'b0;
	always @(posedge wrclk) if (wrreq && !wrfull) begin mem[wp[lpm_widthu-1:0]] <= data; wp <= wp + 1'b1; end
	always @(posedge rdclk) begin
		wp_s1 <= wp; wp_s2 <= wp_s1; wp_s3 <= wp_s2;
		if (rdreq && !rdempty) begin q <= mem[rp[lpm_widthu-1:0]]; rp <= rp + 1'b1; end
	end
endmodule
