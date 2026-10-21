// sram_pocket.sv - owner of the Pocket's 128K x 16 asynchronous SRAM pins.
//
// Two clients:
//   * the framebuffer engine (vdp1_fb_pocket): one 16 bit access at a time on clk_ram. Reads take RD_CYC = 4
//     cycles (35 ns, needs tAA below about 25 ns), writes WR_CYC = 3 (26 ns, WE# low 8.7 ns, needs tWP <= 8 ns).
//     A VBlank erase pushes one write per 4 cycles, so writes must be faster than that (docs/memory.md).
//   * the CD sector ring (cd_stream): it drives the pins itself on clk_sys and asks for the bus with
//     cd_req; the grant is held until cd_req drops. cd_stream starts no access without cd_gnt.
// The ring lives at SRAM words 0x0000-0x3FFF, the framebuffer at FB_BASE (0x4000) and up.
//
// The top level wraps dq in a tri-state: sram_dq = sram_dq_oe ? sram_dq_o : 16'bz.

`default_nettype none

module sram_pocket #(
	parameter int RD_CYC = 4,            // clk_ram cycles per read: data sampled RD_CYC-1 cycles after the address
	parameter int WR_CYC = 3,            // per write: WE# low for WR_CYC-2 cycles
	parameter int CD_WAIT = 24           // clk_ram cycles the CD ring may be kept waiting (bridge word hold is >= 50)
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

	// CD ring (pin level, clk_sys domain, aligned to clk)
	input  wire [16:0] cd_a,
	input  wire [15:0] cd_dq_o,
	input  wire        cd_dq_oe,
	input  wire        cd_oe_n,
	input  wire        cd_we_n,
	input  wire        cd_ub_n,
	input  wire        cd_lb_n,
	input  wire        cd_req,
	output reg         cd_gnt,
	output wire [15:0] cd_dq_i,

	// framebuffer engine
	input  wire        fb_hint,             // framebuffer writes are queued: the grant waits (at most CD_WAIT cycles)
	input  wire        fb_req,              // pulse, taken when fb_ready
	input  wire        fb_we,
	input  wire [16:0] fb_a,
	input  wire [15:0] fb_d,
	input  wire  [1:0] fb_be,
	output wire        fb_ready,
	output reg  [15:0] fb_q,
	output reg         fb_done              // pulse at the end of a read, fb_q valid (writes are posted: no pulse)
);

assign cd_dq_i = sram_dq_i;

// ---- engine
localparam int CW = $clog2((RD_CYC > WR_CYC ? RD_CYC : WR_CYC) + 1);
reg           busy = 1'b0, e_we = 1'b0;
reg [CW-1:0]  cnt = '0;
reg [16:0]    e_a;
reg [15:0]    e_d;
reg  [1:0]    e_be;
reg           e_oe_n = 1'b1, e_we_n = 1'b1, e_dq_oe = 1'b0;

reg [5:0] cd_w = 6'd0;
reg cd_pre = 1'b0;                  // a grant is due: no new framebuffer access may start
wire [CW-1:0] n_last = e_we ? WR_CYC - 1 : RD_CYC - 1;
wire finishing = busy && cnt == n_last;
// ready one cycle before the access ends, so that the next request follows back to back
assign fb_ready = (!busy || (busy && cnt == n_last - 1)) && !cd_gnt && !cd_pre;

always @(posedge clk) begin
	fb_done <= 1'b0;
	// a request issued while fb_ready was high is always taken; the grant waits for it
	if (cd_gnt) begin
		if (!cd_req) cd_gnt <= 1'b0;
	end else if (cd_pre && !busy && !fb_req) begin
		cd_gnt <= 1'b1; cd_pre <= 1'b0;
	end else if (cd_req && (!fb_hint || cd_w >= CD_WAIT)) cd_pre <= 1'b1;
	cd_w <= (cd_req && !cd_gnt) ? (cd_w == 6'd63 ? cd_w : cd_w + 1'd1) : 6'd0;

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
	if (fb_req && !cd_gnt && (!busy || finishing)) begin
		busy <= 1'b1; cnt <= '0; e_we <= fb_we; e_a <= fb_a; e_d <= fb_d; e_be <= fb_be;
		e_oe_n <= fb_we; e_we_n <= 1'b1; e_dq_oe <= fb_we;
	end
end
initial begin cd_pre = 1'b0; cd_gnt = 1'b0; fb_q = 16'd0; fb_done = 1'b0; end

assign sram_a     = cd_gnt ? cd_a     : e_a;
assign sram_dq_o  = cd_gnt ? cd_dq_o  : e_d;
assign sram_dq_oe = cd_gnt ? cd_dq_oe : e_dq_oe;
assign sram_oe_n  = cd_gnt ? cd_oe_n  : e_oe_n;
assign sram_we_n  = cd_gnt ? cd_we_n  : e_we_n;
assign sram_ub_n  = cd_gnt ? cd_ub_n  : ~(e_we ? e_be[1] : 1'b1);
assign sram_lb_n  = cd_gnt ? cd_lb_n  : ~(e_we ? e_be[0] : 1'b1);

endmodule

`default_nettype wire
