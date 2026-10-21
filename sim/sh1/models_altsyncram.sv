// Dual-port altsyncram as instantiated by SH1_MEM (port A write with byte enables, port B registered-address read).
// init_file is a Quartus MIF read at time zero; the +FW=<path> plusarg overrides the path.
module altsyncram #(
	parameter address_aclr_b = "NONE",
	parameter address_reg_b = "CLOCK1",
	parameter clock_enable_input_a = "BYPASS",
	parameter clock_enable_input_b = "BYPASS",
	parameter clock_enable_output_b = "BYPASS",
	parameter init_file = "",
	parameter intended_device_family = "",
	parameter lpm_type = "",
	parameter numwords_a = 16384,
	parameter numwords_b = 16384,
	parameter operation_mode = "DUAL_PORT",
	parameter outdata_aclr_b = "NONE",
	parameter outdata_reg_b = "UNREGISTERED",
	parameter power_up_uninitialized = "FALSE",
	parameter widthad_a = 14,
	parameter widthad_b = 14,
	parameter width_a = 32,
	parameter width_b = 32,
	parameter width_byteena_a = 4
) (
	input  [widthad_a-1:0] address_a,
	input  [widthad_b-1:0] address_b,
	input                  clock0,
	input                  clock1,
	input  [width_a-1:0]   data_a,
	input                  wren_a,
	output [width_b-1:0]   q_b,
	input                  aclr0, aclr1, addressstall_a, addressstall_b,
	input  [width_byteena_a-1:0] byteena_a,
	input                  byteena_b, clocken0, clocken1, clocken2, clocken3,
	input  [width_b-1:0]   data_b,
	output                 eccstatus,
	output [width_a-1:0]   q_a,
	input                  rden_a, rden_b, wren_b
);
	reg [width_a-1:0] mem [0:numwords_a-1];
	reg [widthad_b-1:0] addr_b_r;
	integer i, fd, n, a;
	reg [8*256-1:0] path;
	reg [8*512-1:0] line;
	reg [63:0] d;
	initial begin
		for (i = 0; i < numwords_a; i = i + 1) mem[i] = {width_a{1'b1}};
		path = init_file;
		if ($value$plusargs("FW=%s", path)) ;
		if (init_file != "" && init_file != " ") begin
			fd = $fopen(path, "r");
			if (fd == 0) begin
				$display("altsyncram: cannot open %0s", path);
				$finish;
			end
			while (!$feof(fd)) begin
				n = $fgets(line, fd);
				n = $sscanf(line, " %h : %h;", a, d);
				if (n == 2 && a < numwords_a) mem[a] = d[width_a-1:0];
			end
			$fclose(fd);
		end
	end
	always @(posedge clock0) begin
		if (wren_a)
			for (i = 0; i < width_byteena_a; i = i + 1)
				if (byteena_a[i]) mem[address_a][i*(width_a/width_byteena_a) +: (width_a/width_byteena_a)] <= data_a[i*(width_a/width_byteena_a) +: (width_a/width_byteena_a)];
		addr_b_r <= address_b;
	end
	assign q_b = mem[addr_b_r];
	assign q_a = {width_a{1'b0}};
	assign eccstatus = 1'b0;
endmodule
