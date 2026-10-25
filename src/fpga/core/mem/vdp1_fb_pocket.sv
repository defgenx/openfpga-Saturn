// vdp1_fb_pocket.sv - the two VDP1 frame buffers on the Pocket.
//
// Same FB interface as the VDP1 module (FBn_A/D/WE/RD/Q, FB_RDY, FB_MODE3) with the address
// translation that Saturn_MiSTer's emu does, so rtl/Saturn/Saturn.sv and VDP1 are unchanged.
//
//   FB0  external 128K x 16 SRAM (sram_pocket), words FB_BASE .. FB_BASE + 90111
//   FB1  index < 65536 (columns 0-255): M10K, 65536 x 16
//        index 65536 .. 90111 (columns 256-351): the SRAM tail, words FB_BASE + 90112 ..
// Both hold the first 352 columns of the 512 x 256 buffer (index = x*256 + y, as MiSTer's M10K part).
// Writes with x >= 352 are dropped and reads return 0 (MiSTer keeps those columns in DDR3).
//
// SRAM access rules, derived from VDP1.sv (they hold for FB0 and for the FB1 tail):
//   * writes (draw, CPU, erase at DCE_R or at every CE_R in VBlank erase) are posted into 256 entry
//     FIFOs on clk_sys (one per buffer, FB0 and FB1 can write in the same cycle); the engine on
//     clk_ram drains them ahead of everything else, the fuller FIFO first. FB_RDY goes low while a
//     FIFO holds STALL entries or more, so a draw is held back and the (unstoppable) erase keeps
//     room.
//   * a read strobe (draw read, CPU read) holds FB_RDY low until the data is in FBn_Q
//   * the display read has no strobe: whenever FBn_A changes to an address that no write strobe
//     accompanied, FBn_Q is refreshed from the SRAM (about SRAM_CYC * 2 clk_ram later). An erase
//     write to the pixel just displayed does not disturb FBn_Q.
//
`default_nettype none

module vdp1_fb_pocket #(
	parameter int FB_BASE = 16384,
	parameter int STALL   = 192
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
	output wire [15:0] FB1_Q,
	output wire        FB_RDY,
	output wire  [7:0] dbg_drop,           // SRAM writes lost to a full FIFO (saturating)

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

localparam int COLS = 352;
localparam int WORDS = COLS * 256;
localparam [16:0] TAIL_BASE = FB_BASE + WORDS;

function automatic [16:0] xlate(input mode3, input [17:1] a);
	xlate = mode3 ? a[17:1] : {a[9:1], a[17:10]};
endfunction
// SRAM word of a buffer index
function automatic [16:0] sram_a0(input [16:0] i);
	sram_a0 = FB_BASE[16:0] + i;
endfunction
function automatic [16:0] sram_a1(input [16:0] i);
	sram_a1 = TAIL_BASE + {1'b0, i[15:0]};
endfunction

wire [16:0] i0 = xlate(FB_MODE3, FB0_A);
wire [16:0] i1 = xlate(FB_MODE3, FB1_A);
wire        in0 = i0 < WORDS;
wire        in1 = i1 < WORDS;
wire        mm1 = !i1[16];                 // FB1 in M10K (always in range)
wire        t1  = i1[16] && in1;           // FB1 in the SRAM tail
wire [16:0] sa0 = sram_a0(i0);
wire [16:0] sa1 = sram_a1(i1);

// ---------------------------------------------------------------- FB1 M10K part
// 65536 x 16 simple dual port, byte enables, address registered (read data one clock after the address)
reg [15:0] m1_q;
reg        m1_sel, t1_sel;
reg [15:0] fb1_sq;                         // SRAM tail data (clk_ram)
`ifdef ALTERA_RESERVED_QIS
// Quartus builds this as 16 bit wide, 512 words per block (8192 bits): 128 blocks. Columns of 5 / 2 / 1 bits per
// byte lane use the same 8192 bits per block (tried: 128 blocks, more logic); 10 bit columns would hold 10240 bits
// but cannot be written per byte lane.
altsyncram #(
	.operation_mode("DUAL_PORT"), .intended_device_family("Cyclone V"), .ram_block_type("M10K"),
	.width_a(16), .widthad_a(16), .numwords_a(65536), .width_byteena_a(2),
	.width_b(16), .widthad_b(16), .numwords_b(65536),
	.address_reg_b("CLOCK0"), .outdata_reg_b("UNREGISTERED"), .rdcontrol_reg_b("CLOCK0"),
	.read_during_write_mode_mixed_ports("DONT_CARE"), .power_up_uninitialized("TRUE"), .lpm_type("altsyncram")
) fb1_ram (
	.clock0(clk_sys), .address_a(i1[15:0]), .data_a(FB1_D), .wren_a(|FB1_WE && mm1), .byteena_a(FB1_WE),
	.address_b(i1[15:0]), .q_b(m1_q), .rden_b(1'b1),
	.aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0), .addressstall_b(1'b0), .byteena_b(1'b1),
	.clock1(1'b1), .clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1), .clocken3(1'b1),
	.data_b({16{1'b1}}), .eccstatus(), .q_a(), .rden_a(1'b1), .wren_b(1'b0)
);
`else
reg [15:0] m1 [0:65535];
always @(posedge clk_sys) begin
	if (FB1_WE[0] && !i1[16]) m1[i1[15:0]][7:0]  <= FB1_D[7:0];
	if (FB1_WE[1] && !i1[16]) m1[i1[15:0]][15:8] <= FB1_D[15:8];
	m1_q <= m1[i1[15:0]];
end
`endif
always @(posedge clk_sys) begin m1_sel <= mm1; t1_sel <= t1; end
assign FB1_Q = m1_sel ? m1_q : t1_sel ? fb1_sq : 16'h0000;

// ---------------------------------------------------------------- SRAM write FIFOs (clk_sys -> clk_ram), 256 entries each:
// a VBlank erase pushes one write per two clk_sys, the SRAM takes one per SRAM_CYC clk_ram, and the CD ring can hold the bus for a
// few writes at a time
reg [34:0] wf0 [0:255];            // {SRAM word, byte enables, data}, one M10K each
reg [34:0] wf1 [0:255];
reg  [8:0] wptr0 = 9'd0, wptr1 = 9'd0;     // clk_sys
reg  [8:0] rptr0 = 9'd0, rptr1 = 9'd0;     // clk_ram
reg  [8:0] wptr0_d = 9'd0, wptr1_d = 9'd0; // wptr seen one clk_ram late: wf_q has the entry by then
wire [8:0] occ0 = wptr0 - rptr0, occ1 = wptr1 - rptr1;
wire       full0 = occ0 >= 9'd255, full1 = occ1 >= 9'd255;
wire       stall = occ0 >= STALL || occ1 >= STALL;
wire       ne0 = (wptr0_d != rptr0), ne1 = (wptr1_d != rptr1);
reg [34:0] wf0_q, wf1_q;           // synchronous read, so the FIFOs map to M10K
always @(posedge clk_ram) begin
	wptr0_d <= wptr0; wptr1_d <= wptr1;
	wf0_q <= wf0[rptr0[7:0]]; wf1_q <= wf1[rptr1[7:0]];
end
assign sr_hint = ne0 || ne1;

reg  [7:0] wf_drop = 8'd0;
assign dbg_drop = wf_drop;

reg        rd_t = 1'b0, rd_ack = 1'b0;    // read strobe handshake: toggle on clk_sys, ack on clk_ram
reg        rd_b = 1'b0, rd_oor = 1'b0;
reg [16:0] rd_idx;
reg [16:0] sup0 = 17'h1FFFF, sup1 = 17'h1FFFF;   // index of the last posted write per buffer

always @(posedge clk_sys) begin
	if (rst) begin wptr0 <= 9'd0; wptr1 <= 9'd0; end
	else begin
		if (|FB0_WE && in0) begin
			if (!full0) begin wf0[wptr0[7:0]] <= {sa0, FB0_WE, FB0_D}; wptr0 <= wptr0 + 1'd1; end
			else if (wf_drop != 8'hFF) wf_drop <= wf_drop + 1'd1;
		end
		if (|FB1_WE && t1) begin
			if (!full1) begin wf1[wptr1[7:0]] <= {sa1, FB1_WE, FB1_D}; wptr1 <= wptr1 + 1'd1; end
			else if (wf_drop != 8'hFF) wf_drop <= wf_drop + 1'd1;
		end
	end
	if (|FB0_WE) sup0 <= i0;
	if (|FB1_WE) sup1 <= i1;
	if (FB0_RD) begin rd_t <= ~rd_t; rd_b <= 1'b0; rd_oor <= !in0; rd_idx <= i0; end
	else if (FB1_RD && t1) begin rd_t <= ~rd_t; rd_b <= 1'b1; rd_oor <= 1'b0; rd_idx <= i1; end
end
wire rd_busy = (rd_t != rd_ack);
assign FB_RDY = !(stall || rd_busy);

// ---------------------------------------------------------------- engine (clk_ram)
reg        have0 = 1'b0, have1 = 1'b0;
reg [16:0] last0, last1;
reg  [2:0] es = 3'd0;
reg        e_b, trk;
wire       need0 = sr_ready && (!have0 || i0 != last0);
wire       need1 = sr_ready && t1 && (!have1 || i1 != last1);
wire       pick1 = ne1 && (!ne0 || occ1 > occ0);
wire [34:0] wq = pick1 ? wf1_q : wf0_q;

always @(posedge clk_ram) begin
	sr_req <= 1'b0;
	if (rst) begin rptr0 <= 9'd0; rptr1 <= 9'd0; rd_ack <= rd_t; es <= 3'd0; have0 <= 1'b0; have1 <= 1'b0; end
	else case (es)
	3'd0: begin
		if ((ne0 || ne1) && sr_ready) begin
			sr_req <= 1'b1; sr_we <= 1'b1;
			sr_a <= wq[34:18]; sr_be <= wq[17:16]; sr_d <= wq[15:0];
			if (pick1) rptr1 <= rptr1 + 1'd1; else rptr0 <= rptr0 + 1'd1;
			es <= 3'd4;                                // posted: the next write may follow right away
		end else if (rd_busy && sr_ready) begin
			if (rd_oor) begin FB0_Q <= 16'h0000; rd_ack <= rd_t; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= rd_b ? sram_a1(rd_idx) : sram_a0(rd_idx); sr_be <= 2'b11; es <= 3'd2;
				e_b <= rd_b;
				if (rd_b) begin last1 <= rd_idx; have1 <= 1'b1; end else begin last0 <= rd_idx; have0 <= 1'b1; end
			end
		end else if (need1 && (!need0 || trk)) begin
			trk <= 1'b0;
			if (i1 == sup1) begin last1 <= i1; have1 <= 1'b1; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= sa1; sr_be <= 2'b11;
				last1 <= i1; have1 <= 1'b1; e_b <= 1'b1; es <= 3'd3;
			end
		end else if (need0) begin
			trk <= 1'b1;
			if (i0 == sup0) begin last0 <= i0; have0 <= 1'b1; end
			else if (!in0) begin FB0_Q <= 16'h0000; last0 <= i0; have0 <= 1'b1; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= sa0; sr_be <= 2'b11;
				last0 <= i0; have0 <= 1'b1; e_b <= 1'b0; es <= 3'd3;
			end
		end
	end
	3'd4: es <= 3'd0;
	3'd2: if (sr_done) begin if (e_b) fb1_sq <= sr_q; else FB0_Q <= sr_q; rd_ack <= rd_t; es <= 3'd0; end
	3'd3: if (sr_done) begin if (e_b) fb1_sq <= sr_q; else FB0_Q <= sr_q; es <= 3'd0; end
	default: es <= 3'd0;
	endcase
end

endmodule

`default_nettype wire
