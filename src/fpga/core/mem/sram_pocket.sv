// sram_pocket.sv - owner of the Pocket's 128K x 16 asynchronous SRAM pins, for the framebuffer engine
// (vdp1_fb_pocket): one 16 bit access at a time on clk_ram. Reads take RD_CYC = 4 cycles (35 ns, needs tAA below
// about 25 ns), writes WR_CYC = 3 (26 ns, WE# low 8.7 ns, needs tWP <= 8 ns). A VBlank erase pushes one write per
// 4 cycles, so writes must be faster than that (docs/memory.md). The whole SRAM holds framebuffer pixels
// (FB1 tail words 0x0000-0x9FFF, FB0 words 0xA000-0x1FFFF).
//
// The top level wraps dq in a tri-state: sram_dq = sram_dq_oe ? sram_dq_o : 16'bz.

`default_nettype none

module sram_pocket #(
	parameter int RD_CYC = 4,            // clk_ram cycles per read: data sampled RD_CYC-1 cycles after the address
	parameter int WR_CYC = 3             // per write: WE# low for WR_CYC-2 cycles
) (
	input  wire        clk,                 // clk_ram

	// pins
	output wire [16:0] sram_a,
	output wire [15:0] sram_dq_o,
	output wire        sram_dq_oe,
	input  wire [15:0] sram_dq_i,
	output wire        sram_oe_n,
	output wire        sram_we_n,
	output wire        sram_ub_n,
	output wire        sram_lb_n,

	// framebuffer engine
	input  wire        fb_req,              // pulse, taken when fb_ready
	input  wire        fb_we,
	input  wire [16:0] fb_a,
	input  wire [15:0] fb_d,
	input  wire  [1:0] fb_be,
	output wire        fb_ready,
	output reg  [15:0] fb_q,
	output reg         fb_done              // pulse at the end of a read, fb_q valid (writes are posted: no pulse)
);

localparam int CW = $clog2((RD_CYC > WR_CYC ? RD_CYC : WR_CYC) + 1);
reg           busy = 1'b0, e_we = 1'b0;
reg [CW-1:0]  cnt = '0;
reg [16:0]    e_a;
reg [15:0]    e_d;
reg  [1:0]    e_be;
reg           e_oe_n = 1'b1, e_we_n = 1'b1, e_dq_oe = 1'b0;
reg           e_ub_n = 1'b1, e_lb_n = 1'b1;   // byte strobes, registered (1 for a read)

wire [CW-1:0] n_last = e_we ? WR_CYC - 1 : RD_CYC - 1;
wire finishing = busy && cnt == n_last;
// ready one cycle before the access ends, so that the next request follows back to back
assign fb_ready = !busy || (busy && cnt == n_last - 1);

always @(posedge clk) begin
	fb_done <= 1'b0;
	if (busy) begin
		cnt <= cnt + 1'd1;
		if (e_we) begin
			// cycle 0 address/data set up, then WE# low until the last cycle but one
			if (cnt == 0) e_we_n <= 1'b0;
			if (cnt == WR_CYC - 2) e_we_n <= 1'b1;
			if (cnt == WR_CYC - 1) begin busy <= 1'b0; e_dq_oe <= 1'b0; end
		end else begin
			if (cnt == RD_CYC - 2) fb_q <= sram_dq_i;
			if (cnt == RD_CYC - 1) begin busy <= 1'b0; e_oe_n <= 1'b1; fb_done <= 1'b1; end
		end
	end
	if (fb_req && (!busy || finishing)) begin
		busy <= 1'b1; cnt <= '0; e_we <= fb_we; e_a <= fb_a; e_d <= fb_d; e_be <= fb_be;
		e_ub_n <= fb_we ? ~fb_be[1] : 1'b1; e_lb_n <= fb_we ? ~fb_be[0] : 1'b1;
		e_oe_n <= fb_we; e_we_n <= 1'b1; e_dq_oe <= fb_we;
	end
end
initial begin fb_q = 16'd0; fb_done = 1'b0; end

assign sram_a     = e_a;
assign sram_dq_o  = e_d;
assign sram_dq_oe = e_dq_oe;
assign sram_oe_n  = e_oe_n;
assign sram_we_n  = e_we_n;
assign sram_ub_n  = e_ub_n;
assign sram_lb_n  = e_lb_n;

endmodule

`default_nettype wire
