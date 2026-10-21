// CDD end of the SH-1 serial link plus the two 12-byte packet RAMs.
//
// Same wire behaviour as Saturn_MiSTer rtl/hps2cdd.sv (GPL-3.0): COMSYNC_N low for the first byte,
// byte clock from the SH-1, COMREQ_N request per byte, 0x3FF-clock gap between bytes, status
// bytes out and command bytes in at the same time. The byte store is two small RAMs instead of
// 192 registers.

`default_nettype none

module cdd_link (
	input  wire        clk,
	input  wire        rst_n,

	output reg         CD_CDATA = 1'b0,
	input  wire        CD_HDATA,
	input  wire        CD_COMCLK,
	output reg         CD_COMREQ_N = 1'b1,
	output reg         CD_COMSYNC_N = 1'b1,

	// packet side (cdd_ctl)
	input  wire        pk_we,
	input  wire [3:0]  pk_wa,
	input  wire [7:0]  pk_wd,
	input  wire        pk_send,
	input  wire [3:0]  pk_ha,
	output reg  [7:0]  pk_hq = 8'd0,
	output reg         pk_cmd_new = 1'b0,
	input  wire        pk_cmd_ack
);

reg [7:0] stat_mem [0:15];
reg [7:0] host_mem [0:15];
reg [3:0] sa = 4'd0;
reg [7:0] sq = 8'd0;
reg [3:0] hwa = 4'd0;
reg [7:0] hwd = 8'd0;
reg       hwe = 1'b0;

always @(posedge clk) begin
	if (pk_we) stat_mem[pk_wa] <= pk_wd;
	sq <= stat_mem[sa];
	if (hwe) host_mem[hwa] <= hwd;
	pk_hq <= host_mem[pk_ha];
end

reg [7:0]  host_data = 8'd0;
reg [7:0]  cdd_data = 8'd0;
reg [3:0]  byte_pos = 4'd0;
reg [2:0]  bit_pos = 3'd0;
reg        comclk_old = 1'b1;
reg        next_byte = 1'b0;
reg        io_done = 1'b0;
reg [10:0] delay_cnt = 11'd0;
reg        ld = 1'b0;
reg        ld1 = 1'b0;
reg        ld_zero = 1'b0;
integer    ii;
initial for (ii = 0; ii < 16; ii = ii + 1) begin stat_mem[ii] = 8'd0; host_mem[ii] = 8'd0; end
reg        start_d = 1'b0;

always @(posedge clk) begin
	hwe <= 1'b0;
	comclk_old <= CD_COMCLK;
	io_done <= 1'b0;
	next_byte <= 1'b0;
	start_d <= pk_send;

	if (pk_cmd_ack) pk_cmd_new <= 1'b0;

	if (!rst_n) begin
		bit_pos <= 3'd0; byte_pos <= 4'd0; delay_cnt <= 11'd0; ld <= 1'b0; ld1 <= 1'b0;
		CD_COMSYNC_N <= 1'b1; CD_COMREQ_N <= 1'b1;
	end else begin
		if (pk_send) begin               // io start
			CD_COMREQ_N <= 1'b1;
			bit_pos <= 3'd0;
			byte_pos <= 4'd0;
			sa <= 4'd0; ld <= 1'b1; ld_zero <= 1'b0;
			CD_COMSYNC_N <= 1'b0;
			delay_cnt <= 11'h3FF;
		end else begin
			if (next_byte) CD_COMREQ_N <= 1'b0;

			if (!CD_COMCLK && comclk_old) begin
				{cdd_data, CD_CDATA} <= {1'b0, cdd_data};
			end else if (CD_COMCLK && !comclk_old) begin
				host_data <= {CD_HDATA, host_data[7:1]};
				CD_COMREQ_N <= 1'b1;
				bit_pos <= bit_pos + 3'd1;
				if (bit_pos == 3'd7) io_done <= 1'b1;
			end

			ld1 <= ld;
			if (ld) ld <= 1'b0;
			if (ld1) cdd_data <= ld_zero ? 8'd0 : sq;

			if (io_done) begin
				hwa <= byte_pos; hwd <= host_data; hwe <= 1'b1;
				CD_COMSYNC_N <= 1'b1;
				byte_pos <= byte_pos + 4'd1;
				delay_cnt <= 11'h3FF;
				if (byte_pos < 4'd11) begin
					sa <= byte_pos + 4'd1; ld <= 1'b1; ld_zero <= 1'b0;
				end else begin
					ld <= 1'b1; ld_zero <= 1'b1;
					pk_cmd_new <= 1'b1;
				end
			end

			if (delay_cnt != 11'd0) begin
				delay_cnt <= delay_cnt - 11'd1;
				if (delay_cnt == 11'd1) next_byte <= 1'b1;
			end
		end
	end
end

endmodule

`default_nettype wire
