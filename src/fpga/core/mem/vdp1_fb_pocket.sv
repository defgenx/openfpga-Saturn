// vdp1_fb_pocket.sv - the two VDP1 frame buffers on the Pocket.
//
// Same FB interface as the VDP1 module (FBn_A/D/WE/RD/Q, FB_RDY, FB_MODE3) with the address
// translation that Saturn_MiSTer's emu does, so rtl/Saturn/Saturn.sv and VDP1 are unchanged.
//
//   FB0  external 128K x 16 SRAM (sram_pocket), words FB_BASE .. FB_BASE + 90111
//   FB1  M10K, 90112 x 16 (141 blocks)
// Both hold the first 352 columns of the 512 x 256 buffer (index = x*256 + y, as MiSTer's M10K part).
// Writes with x >= 352 are dropped and reads return 0 (MiSTer keeps those columns in DDR3).
//
// FB0 access rules, derived from VDP1.sv:
//   * writes (draw, CPU, erase at DCE_R or at every CE_R in VBlank erase) are posted into an 8 entry
//     FIFO on clk_sys; the engine on clk_ram drains it ahead of everything else
//   * a read strobe (draw read, CPU read) holds FB_RDY low until the data is in FB0_Q
//   * the display read has no strobe: whenever FB0_A changes to an address that no write strobe
//     accompanied, FB0_Q is refreshed from the SRAM (about SRAM_CYC * 2 clk_ram later). An erase
//     write to the pixel just displayed does not disturb FB0_Q.
//
`default_nettype none

module vdp1_fb_pocket #(
	parameter int FB_BASE = 16384
) (
	input  wire        clk_sys,
	input  wire        clk_ram,            // 2 x clk_sys, phase aligned
	input  wire        rst,

	input  wire        FB_MODE3,
	input  wire [17:1] FB0_A,
	input  wire [15:0] FB0_D,
	input  wire  [1:0] FB0_WE,
	input  wire        FB0_RD,
	output reg  [15:0] FB0_Q,
	input  wire [17:1] FB1_A,
	input  wire [15:0] FB1_D,
	input  wire  [1:0] FB1_WE,
	input  wire        FB1_RD,
	output reg  [15:0] FB1_Q,
	output wire        FB_RDY,
	output wire  [7:0] dbg_drop,           // FB0 writes lost to a full FIFO (saturating)

	// sram_pocket framebuffer port (clk_ram)
	output wire        sr_hint,
	output reg         sr_req,
	output reg         sr_we,
	output reg  [16:0] sr_a,
	output reg  [15:0] sr_d,
	output reg   [1:0] sr_be,
	input  wire        sr_ready,
	input  wire [15:0] sr_q,
	input  wire        sr_done
);

reg  [7:0] wf_drop = 8'd0;
localparam int COLS = 352;
localparam int WORDS = COLS * 256;

function automatic [16:0] xlate(input mode3, input [17:1] a);
	xlate = mode3 ? a[17:1] : {a[9:1], a[17:10]};
endfunction

assign dbg_drop = wf_drop;
wire [16:0] i0 = xlate(FB_MODE3, FB0_A);
wire [16:0] i1 = xlate(FB_MODE3, FB1_A);
wire        in0 = i0 < WORDS;
wire        in1 = i1 < WORDS;

// ---------------------------------------------------------------- FB1 (M10K)
reg [7:0] m1l [0:WORDS-1];
reg [7:0] m1h [0:WORDS-1];
always @(posedge clk_sys) begin
	if (FB1_WE[0] && in1) m1l[i1] <= FB1_D[7:0];
	if (FB1_WE[1] && in1) m1h[i1] <= FB1_D[15:8];
	FB1_Q <= in1 ? {m1h[i1], m1l[i1]} : 16'h0000;
end

// ---------------------------------------------------------------- FB0 write FIFO (clk_sys -> clk_ram), 256 entries: a VBlank erase pushes one write per two clk_sys, the
// SRAM takes one per SRAM_CYC clk_ram, and the CD ring can hold the bus for a few writes at a time
reg [34:0] wf [0:255];             // {index, byte enables, data}, one M10K
reg  [8:0] wptr = 9'd0;            // clk_sys
reg  [8:0] rptr = 9'd0;            // clk_ram
wire       wf_full  = (wptr - rptr) >= 9'd255;
wire       wf_empty = (wptr == rptr);
assign sr_hint = !wf_empty;

reg        rd_pend = 1'b0;         // set on clk_sys, cleared on clk_ram: toggle handshake
reg        rd_t = 1'b0, rd_ack = 1'b0;
reg [16:0] rd_idx;
reg [16:0] sup_idx = 17'h1FFFF;    // address of the last posted write

always @(posedge clk_sys) begin
	if (rst) begin wptr <= 9'd0; end
	else if (|FB0_WE && in0) begin
		if (!wf_full) begin
			wf[wptr[7:0]] <= {i0, FB0_WE, FB0_D};
			wptr <= wptr + 1'd1;
		end else if (wf_drop != 8'hFF) wf_drop <= wf_drop + 1'd1;
	end
	if (|FB0_WE) sup_idx <= i0;
	if (FB0_RD) begin rd_t <= ~rd_t; rd_idx <= in0 ? i0 : 17'h1FFFF; end
end
wire rd_busy = (rd_t != rd_ack);
assign FB_RDY = !(wf_full || rd_busy);

// ---------------------------------------------------------------- engine (clk_ram)
reg        have_last = 1'b0;
reg [16:0] last_idx;
reg  [2:0] es = 3'd0;
reg        e_is_rd_req;
wire [16:0] cur_idx = i0;
wire        cur_in  = in0;

always @(posedge clk_ram) begin
	sr_req <= 1'b0;
	if (rst) begin rptr <= 9'd0; rd_ack <= rd_t; es <= 3'd0; have_last <= 1'b0; end
	else case (es)
	3'd0: begin
		if (!wf_empty && sr_ready) begin
			sr_req <= 1'b1; sr_we <= 1'b1;
			sr_a <= FB_BASE[16:0] + wf[rptr[7:0]][34:18];
			sr_be <= wf[rptr[7:0]][17:16]; sr_d <= wf[rptr[7:0]][15:0];
			rptr <= rptr + 1'd1; es <= 3'd4;           // posted: the next write may follow right away
		end else if (rd_busy && sr_ready) begin
			if (rd_idx == 17'h1FFFF) begin FB0_Q <= 16'h0000; rd_ack <= rd_t; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= FB_BASE[16:0] + rd_idx; sr_be <= 2'b11; es <= 3'd2;
				last_idx <= rd_idx; have_last <= 1'b1;
			end
		end else if (sr_ready && (!have_last || cur_idx != last_idx)) begin
			if (cur_idx == sup_idx) begin last_idx <= cur_idx; have_last <= 1'b1; end
			else if (!cur_in) begin FB0_Q <= 16'h0000; last_idx <= cur_idx; have_last <= 1'b1; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= FB_BASE[16:0] + cur_idx; sr_be <= 2'b11;
				last_idx <= cur_idx; have_last <= 1'b1; es <= 3'd3;
			end
		end
	end
	3'd4: es <= 3'd0;
	3'd2: if (sr_done) begin FB0_Q <= sr_q; rd_ack <= rd_t; es <= 3'd0; end
	3'd3: if (sr_done) begin FB0_Q <= sr_q; es <= 3'd0; end
	default: es <= 3'd0;
	endcase
end

endmodule

`default_nettype wire
