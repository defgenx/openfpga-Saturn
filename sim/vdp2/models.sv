// Behavioural models of the Altera megafunctions used by the VDP2 sources.
// altsyncram: true dual port, unregistered output (address registered), byte enables,
// write-through on the same port.
module altsyncram (
	input         clock0,
	input         wren_a,
	input  [ 9:0] address_a,
	input  [15:0] data_a,
	output [15:0] q_a,
	input         wren_b,
	input  [ 9:0] address_b,
	input  [15:0] data_b,
	output [15:0] q_b,
	input  [ 1:0] byteena_a,
	input  [ 1:0] byteena_b,
	input         aclr0, aclr1, addressstall_a, addressstall_b, clock1,
	input         clocken0, clocken1, clocken2, clocken3, rden_a, rden_b,
	output        eccstatus
);
	parameter numwords_a = 1024, numwords_b = 1024, widthad_a = 10, widthad_b = 10;
	parameter width_a = 16, width_b = 16, width_byteena_a = 2, width_byteena_b = 2, byte_size = 8;
	parameter operation_mode = "", intended_device_family = "", lpm_type = "";
	parameter address_reg_b = "", byteena_reg_b = "", clock_enable_input_a = "", clock_enable_input_b = "";
	parameter clock_enable_output_a = "", clock_enable_output_b = "", indata_reg_b = "";
	parameter outdata_aclr_a = "", outdata_aclr_b = "", outdata_reg_a = "", outdata_reg_b = "";
	parameter power_up_uninitialized = "", read_during_write_mode_mixed_ports = "";
	parameter read_during_write_mode_port_a = "", read_during_write_mode_port_b = "";
	parameter wrcontrol_wraddress_reg_b = "";

	reg [15:0] mem [0:1023];
	reg [ 9:0] aa, ab;
	integer i;
	initial for (i = 0; i < 1024; i = i + 1) mem[i] = 16'h0000;
	always @(posedge clock0) begin
		aa <= address_a;
		ab <= address_b;
		if (wren_a) begin
			if (byteena_a[0]) mem[address_a][ 7:0] <= data_a[ 7:0];
			if (byteena_a[1]) mem[address_a][15:8] <= data_a[15:8];
		end
		if (wren_b) begin
			if (byteena_b[0]) mem[address_b][ 7:0] <= data_b[ 7:0];
			if (byteena_b[1]) mem[address_b][15:8] <= data_b[15:8];
		end
	end
	assign q_a = mem[aa];
	assign q_b = mem[ab];
	assign eccstatus = 1'b0;
endmodule

// altdpram: 8 x 36 MLAB, registered write, unregistered read.
module altdpram (
	input  [35:0] data,
	input         inclock,
	input  [ 2:0] rdaddress,
	input  [ 2:0] wraddress,
	input         wren,
	output [35:0] q,
	input         aclr, byteena, inclocken, rdaddressstall, rden, wraddressstall
);
	parameter indata_aclr = "", indata_reg = "", intended_device_family = "", lpm_type = "";
	parameter outdata_aclr = "", outdata_reg = "", ram_block_type = "", rdaddress_aclr = "";
	parameter rdaddress_reg = "", rdcontrol_aclr = "", rdcontrol_reg = "";
	parameter read_during_write_mode_mixed_ports = "", width = 36, widthad = 3, width_byteena = 1;
	parameter wraddress_aclr = "", wraddress_reg = "", wrcontrol_aclr = "", wrcontrol_reg = "";
	reg [35:0] mem [0:7];
	integer i;
	initial for (i = 0; i < 8; i = i + 1) mem[i] = 36'd0;
	always @(posedge inclock) if (wren) mem[wraddress] <= data;
	assign q = mem[rdaddress];
endmodule
