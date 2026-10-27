// Behavioural model of the altsyncram configurations used by the SCSP
// (DUAL_PORT, single clock, registered read address, old data on conflict).
module altsyncram #(
	parameter width_a = 8,
	parameter widthad_a = 5,
	parameter numwords_a = 32,
	parameter width_b = 8,
	parameter widthad_b = 5,
	parameter numwords_b = 32,
	parameter width_byteena_a = 1,
	parameter width_byteena_b = 1,
	parameter byte_size = 8,
	parameter operation_mode = "DUAL_PORT",
	parameter address_aclr_b = "NONE",
	parameter address_reg_b = "CLOCK0",
	parameter clock_enable_input_a = "BYPASS",
	parameter clock_enable_input_b = "BYPASS",
	parameter clock_enable_output_b = "BYPASS",
	parameter intended_device_family = "Cyclone V",
	parameter lpm_type = "altsyncram",
	parameter outdata_aclr_b = "NONE",
	parameter outdata_reg_a = "UNREGISTERED",
	parameter outdata_reg_b = "UNREGISTERED",
	parameter power_up_uninitialized = "FALSE",
	parameter ram_block_type = "M10K",
	parameter read_during_write_mode_mixed_ports = "DONT_CARE",
	// true dual-port settings, not modelled beyond the registered read address
	parameter byteena_reg_b = "CLOCK1",
	parameter clock_enable_output_a = "BYPASS",
	parameter indata_reg_b = "CLOCK1",
	parameter outdata_aclr_a = "NONE",
	parameter read_during_write_mode_port_a = "DONT_CARE",
	parameter read_during_write_mode_port_b = "DONT_CARE",
	parameter wrcontrol_wraddress_reg_b = "CLOCK1"
) (
	input  [widthad_a-1:0] address_a,
	input  [widthad_b-1:0] address_b,
	input  [width_byteena_a-1:0] byteena_a,
	input  [width_byteena_b-1:0] byteena_b,
	input                  clock0, clock1,
	input                  clocken0, clocken1, clocken2, clocken3,
	input  [width_a-1:0]   data_a,
	input  [width_b-1:0]   data_b,
	input                  wren_a, wren_b, rden_a, rden_b,
	input                  aclr0, aclr1, addressstall_a, addressstall_b,
	output [width_a-1:0]   q_a,
	output [width_b-1:0]   q_b,
	output                 eccstatus
);
	localparam LANES = width_byteena_a;
	localparam LW = width_a / LANES;
	reg [width_a-1:0] mem [0:numwords_a-1];
	integer i;
	initial for (i = 0; i < numwords_a; i = i + 1) mem[i] = 0;
	generate if (operation_mode == "BIDIR_DUAL_PORT") begin : g_tdp
		// True dual port, one clock: both ports read (registered address, old data on a same-edge write) and write;
		// port B can hold its read data in an output register enabled by clocken3.
		localparam LB = width_byteena_b;
		localparam LWB = width_b / LB;
		reg [width_a-1:0] qa;
		reg [width_b-1:0] qb;
		reg [widthad_b-1:0] ab_r;
		integer k;
		always @(posedge clock0) begin
			qa <= mem[address_a];
			ab_r <= address_b;
			if (outdata_reg_b == "CLOCK1") begin
				if (clocken3) qb <= mem[ab_r];
			end else
				qb <= mem[address_b];
			if (wren_a)
				for (k = 0; k < LANES; k = k + 1)
					if (LANES == 1 || byteena_a[k])
						mem[address_a][k*LW +: LW] <= data_a[k*LW +: LW];
			if (wren_b)
				for (k = 0; k < LB; k = k + 1)
					if (LB == 1 || byteena_b[k])
						mem[address_b][k*LWB +: LWB] <= data_b[k*LWB +: LWB];
		end
		assign q_a = qa;
		assign q_b = qb;
	end else begin : g_sdp
		reg [width_b-1:0] q;
		// outdata_reg_b = "CLOCK1" (clock1 tied to clock0): the block's output register, enabled by clocken3,
		// holds what the array returned for the registered address.
		reg [widthad_b-1:0] areg;
		// outdata_aclr_b = "CLEAR1": aclr1 clears the output register asynchronously.
		always @(posedge clock0 or posedge aclr1) if (aclr1 && outdata_aclr_b == "CLEAR1") q <= 0; else begin
			if (outdata_reg_b == "CLOCK1") begin
				if (clocken3) q <= mem[areg];
			end else
				q <= mem[address_b];
		end
		always @(posedge clock0) begin
			areg <= address_b;
			if (wren_a)
				for (i = 0; i < LANES; i = i + 1)
					if (LANES == 1 || byteena_a[i])
						mem[address_a][i*LW +: LW] <= data_a[i*LW +: LW];
		end
		assign q_b = q;
		assign q_a = 0;
	end endgenerate
	assign eccstatus = 0;
endmodule

// MLAB with asynchronous read, registered write.
module altdpram #(
	parameter width = 8,
	parameter widthad = 5,
	parameter width_byteena = 1,
	parameter byte_size = 8,
	parameter indata_aclr = "OFF",
	parameter indata_reg = "INCLOCK",
	parameter intended_device_family = "Cyclone V",
	parameter lpm_type = "altdpram",
	parameter outdata_aclr = "OFF",
	parameter outdata_reg = "UNREGISTERED",
	parameter power_up_uninitialized = "FALSE",
	parameter ram_block_type = "MLAB",
	parameter rdaddress_aclr = "OFF",
	parameter rdaddress_reg = "UNREGISTERED",
	parameter rdcontrol_aclr = "OFF",
	parameter rdcontrol_reg = "UNREGISTERED",
	parameter read_during_write_mode_mixed_ports = "DONT_CARE",
	parameter wraddress_aclr = "OFF",
	parameter wraddress_reg = "INCLOCK",
	parameter wrcontrol_aclr = "OFF",
	parameter wrcontrol_reg = "INCLOCK"
) (
	input  [width-1:0]    data,
	input                 inclock,
	input  [widthad-1:0]  rdaddress,
	input  [widthad-1:0]  wraddress,
	input                 wren,
	input  [width_byteena-1:0] byteena,
	input                 aclr, inclocken, rdaddressstall, rden, wraddressstall,
	output [width-1:0]    q
);
	localparam LANES = width_byteena;
	localparam LW = width / LANES;
	reg [width-1:0] mem [0:(1<<widthad)-1];
	integer i;
	initial for (i = 0; i < (1<<widthad); i = i + 1) mem[i] = 0;
	always @(posedge inclock)
		if (wren)
			for (i = 0; i < LANES; i = i + 1)
				if (LANES == 1 || byteena[i])
					mem[wraddress][i*LW +: LW] <= data[i*LW +: LW];
	assign q = mem[rdaddress];
endmodule
