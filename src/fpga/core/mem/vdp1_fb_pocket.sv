// vdp1_fb_pocket.sv - the two VDP1 frame buffers on the Pocket.
//
// Same FB interface as the VDP1 module (FBn_A/D/WE/RD/Q, FB_RDY, FB_MODE3) with the address
// translation that Saturn_MiSTer's emu does, plus FB_DRAW0 (VDP1P FB_SEL: which buffer is drawn).
//
//   FB0  external 128K x 16 SRAM (sram_pocket), words FB0_BASE .. FB0_BASE + 90111 (0xA000 ..)
//   FB1  index < 49152 (columns 0-191): M10K, 49152 x 16
//        index 49152 .. 90111 (columns 192-351): the SRAM tail, words 0x0000 .. 0x9FFF
// Both hold the first 352 columns of the 512 x 256 buffer (index = x*256 + y, as MiSTer's M10K part).
// Writes with x >= 352 are dropped and reads return 0 (MiSTer keeps those columns in DDR3).
//
// Lazy erase (docs/memory.md section 2, "Lazy erase"): a write to the displayed buffer is an erase and never reaches
// the SRAM; it flags its 8 word block (on word 7) and latches the erase value, which flagged words read as. The first
// draw / CPU write into a flagged block opens it; leaving it queues one fill entry for its unwritten words.
//
// SRAM access rules (they hold for FB0 and for the FB1 tail):
//   * draw and CPU writes are posted into one 256 entry FIFO one clk_sys after the strobe (two for one that opens
//     a block); the engine on clk_ram drains it ahead of everything else. FB_RDY goes low while it holds STALL
//     entries or more. Erase writes (FB_DRAW0 says which buffer is displayed) are never queued.
//   * a read strobe (draw read, CPU read; its rising edge) holds FB_RDY low until the data is in FBn_Q
//   * the display read has no strobe: whenever FBn_A changes to an address that no write strobe accompanied, FBn_Q is
//     refreshed (about SRAM_CYC * 2 clk_ram later). An erase write to the pixel just displayed does not disturb FBn_Q.
//   * draw-side strobes are two clk_sys apart or more, and FBn_A holds for the clk_sys after one (VDP1P FB_ST); the
//     flag of a block is read at the strobe and written in the next clk_sys.
//
`default_nettype none

module vdp1_fb_pocket #(
	parameter int FB_BASE = 40960,                 // FB0 in the SRAM, after the FB1 tail
	parameter int M1_WORDS = 49152,                // FB1 words in the M10K
	parameter int STALL   = 192
) (
	input  wire        clk_sys,
	input  wire        clk_ram,            // 2 x clk_sys, phase aligned
	input  wire        rst,

	input  wire        FB_MODE3,
	input  wire        FB_DRAW0,           // 1: FB0 drawn, FB1 displayed (and erased); 0: the reverse
	input  wire        FB_DISP_SOON,       // VDP1P: a display line's first pixel within 8 dots
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
localparam [16:0] TAIL_BASE = 17'(-M1_WORDS);      // SRAM word of FB1 index M1_WORDS is 0

function automatic [16:0] xlate(input mode3, input [17:1] a);
	xlate = mode3 ? a[17:1] : {a[9:1], a[17:10]};
endfunction
// SRAM word of a buffer index
function automatic [16:0] sram_a0(input [16:0] i);
	sram_a0 = FB_BASE[16:0] + i;
endfunction
function automatic [16:0] sram_a1(input [16:0] i);
	sram_a1 = TAIL_BASE + i;
endfunction
// erase block of an index and the word in it. FB_BASE and TAIL_BASE leave SRAM address bits 12:0 as the index's.
function automatic [13:0] blk(input mode3, input [16:0] i);
	blk = {i[16:11], mode3 ? i[10:3] : i[7:0]};
endfunction
function automatic [2:0] wrd(input mode3, input [16:0] i);
	wrd = mode3 ? i[2:0] : i[10:8];
endfunction

wire [16:0] i0 = xlate(FB_MODE3, FB0_A);
wire [16:0] i1 = xlate(FB_MODE3, FB1_A);
wire        in0 = i0 < WORDS;
wire        in1 = i1 < WORDS;
wire        mm1 = i1 < M1_WORDS;           // FB1 in M10K (always in range)
wire        t1  = !mm1 && in1;             // FB1 in the SRAM tail

// The engine (clk_ram) sees the buffer indexes one clk_ram late: VDP1's address logic is too deep for one clk_ram.
reg  [16:0] i0r, i1r;
reg         w0r = 1'b0, w1r = 1'b0;         // a write strobe came with that index: no display read
always @(posedge clk_ram) begin i0r <= i0; i1r <= i1; w0r <= |FB0_WE; w1r <= |FB1_WE; end
wire        in0r = i0r < WORDS;
wire        t1r  = !(i1r < M1_WORDS) && (i1r < WORDS);
wire [16:0] sa0r = sram_a0(i0r);
wire [16:0] sa1r = sram_a1(i1r);
// and one more clk_ram for the compares and SRAM words it picks from (setup at 114.5 MHz). d0 / d1 compare against
// last0 / last1 as they were a clk_ram earlier: right after an issue they can still ask again for one clk_ram, which
// only repeats a branch that does not leave es 0.
reg  [16:0] i0q, i1q, sa0q, sa1q;
reg         in0q = 1'b0, t1q = 1'b0, d0 = 1'b0, d1 = 1'b0, eq0 = 1'b0, eq1 = 1'b0;

// ---------------------------------------------------------------- FB1 M10K part
// 49152 x 16 simple dual port, byte enables, address registered (read data one clock after the address)
reg [15:0] m1_q;
reg        m1_sel, t1_sel;
reg [15:0] fb1_sq;                         // SRAM tail data (clk_ram)
`ifdef ALTERA_RESERVED_QIS
// Quartus builds this as 16 bit wide, 512 words per block (8192 bits): 128 blocks. Columns of 5 / 2 / 1 bits per
// byte lane use the same 8192 bits per block (tried: 128 blocks, more logic); 10 bit columns would hold 10240 bits
// but cannot be written per byte lane.
altsyncram #(
	.operation_mode("DUAL_PORT"), .intended_device_family("Cyclone V"), .ram_block_type("M10K"),
	.width_a(16), .widthad_a(16), .numwords_a(49152), .width_byteena_a(2),
	.width_b(16), .widthad_b(16), .numwords_b(49152),
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
reg [15:0] m1 [0:M1_WORDS-1];
always @(posedge clk_sys) begin
	if (FB1_WE[0] && mm1) m1[i1[15:0]][7:0]  <= FB1_D[7:0];
	if (FB1_WE[1] && mm1) m1[i1[15:0]][15:8] <= FB1_D[15:8];
	m1_q <= m1[i1[15:0]];
end
`endif
always @(posedge clk_sys) begin m1_sel <= mm1; t1_sel <= t1; end
assign FB1_Q = m1_sel ? m1_q : t1_sel ? fb1_sq : 16'h0000;

// ---------------------------------------------------------------- erase flags (clk_sys)
// 16384 x 1 true dual port, port A = FB0 blocks {x[8:3], y} (0 .. 11263), port B = FB1 tail blocks with x[8:3] + 20
// (44 .. 63). The RAM holds 1 = "block in the SRAM" (0 = flagged), so the power-up zeros flag every block.
// Each port is addressed by its FBn_A every clk_sys and writes at most one bit: an erase sets, an opening write clears.
wire [13:0] k0 = blk(FB_MODE3, i0), k1 = blk(FB_MODE3, i1);
wire [13:0] fa0 = k0, fa1 = {k1[13:8] + 6'd20, k1[7:0]};
wire        er0 = |FB0_WE && !FB_DRAW0, er1 = |FB1_WE && FB_DRAW0;
wire        set0 = er0 && in0 && &wrd(FB_MODE3, i0);
wire        set1 = er1 && t1  && &wrd(FB_MODE3, i1);
wire        clr0, clr1;
wire        fw0 = set0 || clr0, fw1 = set1 || clr1;
wire        fq0_n, fq1_n;                  // RAM bit of the block FBn_A pointed to at the last clk_sys edge
wire        fq0 = !fq0_n, fq1 = !fq1_n;    // flagged
reg         lk0 = 1'b0, lk1 = 1'b0;        // that edge read (did not write) the bit
always @(posedge clk_sys) begin lk0 <= !fw0; lk1 <= !fw1; end
`ifdef ALTERA_RESERVED_QIS
altsyncram #(
	.operation_mode("BIDIR_DUAL_PORT"), .intended_device_family("Cyclone V"), .ram_block_type("M10K"),
	.width_a(1), .widthad_a(14), .numwords_a(16384), .width_b(1), .widthad_b(14), .numwords_b(16384),
	.outdata_reg_a("UNREGISTERED"), .outdata_reg_b("UNREGISTERED"), .address_reg_b("CLOCK0"),
	.indata_reg_b("CLOCK0"), .wrcontrol_wraddress_reg_b("CLOCK0"),
	.read_during_write_mode_port_a("NEW_DATA_NO_NBE_READ"), .read_during_write_mode_port_b("NEW_DATA_NO_NBE_READ"),
	.read_during_write_mode_mixed_ports("DONT_CARE"), .power_up_uninitialized("FALSE"), .lpm_type("altsyncram")
) flags (
	.clock0(clk_sys), .address_a(fa0), .data_a(!set0), .wren_a(fw0), .q_a(fq0_n),
	.address_b(fa1), .data_b(!set1), .wren_b(fw1), .q_b(fq1_n),
	.aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0), .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
	.clock1(1'b1), .clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1), .clocken3(1'b1),
	.eccstatus(), .rden_a(1'b1), .rden_b(1'b1)
);
`else
reg flg [0:16383];
reg fqa = 1'b0, fqb = 1'b0;
integer fi;
initial for (fi = 0; fi < 16384; fi = fi + 1) flg[fi] = 1'b0;
always @(posedge clk_sys) begin
	if (fw0) begin flg[fa0] <= !set0; fqa <= !set0; end else fqa <= flg[fa0];
	if (fw1) begin flg[fa1] <= !set1; fqb <= !set1; end else fqb <= flg[fa1];
end
assign fq0_n = fqa;
assign fq1_n = fqb;
`endif

reg [15:0] ev0 = 16'h0000, ev1 = 16'h0000;   // erase values
always @(posedge clk_sys) begin if (er0) ev0 <= FB0_D; if (er1) ev1 <= FB1_D; end

// ---------------------------------------------------------------- draw side, clk_sys: stage 0 = the strobe, stage 1 = the
// next clk_sys, when the block's flag is known
reg        rdd0 = 1'b0, rdd1 = 1'b0;
always @(posedge clk_sys) begin rdd0 <= FB0_RD; rdd1 <= FB1_RD; end
wire       s0_w0 = |FB0_WE && FB_DRAW0 && in0, s0_w1 = |FB1_WE && !FB_DRAW0 && t1;
wire       s0_r0 = FB0_RD && !rdd0, s0_r1 = FB1_RD && !rdd1 && t1;   // CPU reads hold FBn_RD until FB_RDY
wire       s0_b  = !(s0_w0 || s0_r0);
reg        p_w = 1'b0, p_r = 1'b0, p_def = 1'b0, p_b, p_oor;
reg [16:0] p_i;
reg  [1:0] p_be;
reg [15:0] p_d;
always @(posedge clk_sys) begin
	p_w <= !rst && (s0_w0 || s0_w1);
	p_r <= !rst && (s0_r0 || s0_r1);
	if (s0_w0 || s0_w1 || s0_r0 || s0_r1) begin
		p_b <= s0_b; p_i <= s0_b ? i1 : i0; p_be <= s0_b ? FB1_WE : FB0_WE; p_d <= s0_b ? FB1_D : FB0_D; p_oor <= !s0_b && !in0;
	end
end

// the open block: its SRAM word without the word-in-block bits (the two buffers' ranges are disjoint), its buffer, the
// words written since it was opened, the erase value it was opened with (its buffer is not erased while drawn)
reg        ob_v = 1'b0, ob_b;
reg [13:0] ob_s;
reg  [7:0] ob_m;
reg [15:0] ob_ev;

wire  [2:0] p_k   = wrd(FB_MODE3, p_i);
wire        p_fl  = p_b ? fq1 : fq0;
wire [16:0] p_sa  = p_b ? sram_a1(p_i) : sram_a0(p_i);
wire [13:0] p_s   = blk(FB_MODE3, p_sa);
wire        hit   = ob_v && ob_s == p_s;
wire        hitw  = hit && ob_m[p_k];
wire [15:0] p_ev  = p_b ? ev1 : ev0;
// first write into a flagged block: its own push follows a clk_sys later (p_def). Not when FB_SEL flipped after the
// strobe: FBn_A then points at the display address, which the clear would hit.
wire        p_open = p_w && !hit && p_fl && p_b != FB_DRAW0;
wire        p_mrg  = p_def || (hit && !hitw);
wire        pushw  = (p_w && !p_open) || p_def;
wire        close  = ob_v && (p_open || (ob_b == FB_DRAW0 && !p_w && !p_def));   // opening another, or ob displayed
assign clr0 = p_open && !p_b;
assign clr1 = p_open && p_b;

// ---------------------------------------------------------------- SRAM write FIFO (clk_sys -> clk_ram), 256 entries
// {0, SRAM word, byte enables, 4'h0, data}, one M10K (256 x 40). A fill entry is {1, block (ob_s), 1'b0, words not to
// write, erase value}: the engine writes the erase value into the others.
reg [39:0] wf [0:255];
reg  [8:0] wptr = 9'd0;                    // clk_sys
reg  [8:0] rptr = 9'd0;                    // clk_ram
wire [8:0] occ = wptr - rptr;
wire       full = occ >= 9'd255;
reg        stall = 1'b0;                   // a clk_sys late: at most one more push, STALL leaves 63 entries
always @(posedge clk_sys) stall <= occ >= STALL;
// ne = (wptr != rptr) as a register: the pick starts from a register instead of a 9 bit compare. Wrong for the one
// edge after a pop, when the engine is in es 4 and reads nothing.
reg        ne = 1'b0;
reg  [7:0] wra;                            // registered read address: the RAM output is the entry one clock after rptr
wire [39:0] wq = wf[wra];
always @(posedge clk_ram) wra <= rptr[7:0];

wire [39:0] wd = close ? {1'b1, ob_s, 1'b0, ob_m, ob_ev}
                       : {1'b0, p_sa, p_mrg ? 2'b11 : p_be, 4'h0,
                          p_mrg ? {p_be[1] ? p_d[15:8] : p_ev[15:8], p_be[0] ? p_d[7:0] : p_ev[7:0]} : p_d};

reg  [7:0] wf_drop = 8'd0;
assign dbg_drop = wf_drop;

reg        rd_t = 1'b0, rd_ack = 1'b0;    // read strobe handshake: toggle on clk_sys, ack on clk_ram
reg        rd_b = 1'b0, rd_oor = 1'b0, rd_ev = 1'b0;
reg [16:0] rd_idx;
reg [16:0] sup0 = 17'h1FFFF, sup1 = 17'h1FFFF;   // index of the last write strobe per buffer, cleared at a buffer swap
reg        dr_q = 1'b0;

always @(posedge clk_sys) begin
	p_def <= !rst && p_open;
	if (rst) begin wptr <= 9'd0; ob_v <= 1'b0; end
	else begin
		if (pushw || (close && !(&ob_m))) begin   // a block written in full needs no fill
			if (!full) begin wf[wptr[7:0]] <= wd; wptr <= wptr + 1'd1; end
			else if (wf_drop != 8'hFF) wf_drop <= wf_drop + 1'd1;
		end
		if (p_open) begin ob_v <= 1'b1; ob_b <= p_b; ob_s <= p_s; ob_ev <= p_ev; ob_m <= 8'd1 << p_k; end
		else if (close) ob_v <= 1'b0;
		else if (p_w && hit) ob_m[p_k] <= 1'b1;
	end
	dr_q <= FB_DRAW0;
	if (|FB0_WE) sup0 <= i0; else if (dr_q != FB_DRAW0) sup0 <= 17'h1FFFF;   // or the display would skip the last drawn pixel
	if (|FB1_WE) sup1 <= i1; else if (dr_q != FB_DRAW0) sup1 <= 17'h1FFFF;
	if (p_r) begin rd_t <= ~rd_t; rd_b <= p_b; rd_oor <= p_oor; rd_idx <= p_i; rd_ev <= p_fl || (hit && !hitw); end
end
wire rd_busy = (rd_t != rd_ack);
assign FB_RDY = !(stall || rd_busy || p_r || (FB0_RD && !rdd0) || (FB1_RD && !rdd1));

// ---------------------------------------------------------------- engine (clk_ram)
// The displayed buffer's pixel read goes first. Any other access (write, fill word, draw / CPU read, a refresh of the
// drawn buffer) waits while SRAM pixels are being displayed (a display read less than DFREE clk_ram ago), in the 8
// dots before an FB0 line, and in FB1's two columns before the tail (docs/memory.md section 2, "Display read first").
localparam [4:0] DFREE = 5'd20;
reg        have0 = 1'b0, have1 = 1'b0;
reg [16:0] last0, last1;
reg  [2:0] es = 3'd0;
reg        e_b, trk, e_c = 1'b0, e_fl = 1'b0, e_ret = 1'b0;
reg  [2:0] fk;                             // fill: word in the block
reg  [4:0] dph = 5'd31;                    // clk_ram since the last display read of the SRAM (saturates)
reg  [3:0] sn = 4'd0;                      // FB_DISP_SOON, held 4 clk_ram longer: the first pixel's read is 3 later
reg  [4:0] age1 = 5'd31;                   // clk_ram since FB1's display address changed (saturates)
reg        g1 = 1'b0;                      // FB1 displayed at columns 190-191 and moving at dot rate (16 clk_ram)
always @(posedge clk_ram) begin
	i0q <= i0r; i1q <= i1r; sa0q <= sa0r; sa1q <= sa1r; in0q <= in0r; t1q <= t1r;
	d0 <= !have0 || i0r != last0;
	d1 <= t1r && (!have1 || i1r != last1);
	eq0 <= w0r || i0r == sup0; eq1 <= w1r || i1r == sup1;
	sn <= {sn[2:0], FB_DISP_SOON};
	age1 <= i1r != i1q ? 5'd0 : age1 + {4'd0, age1 != 5'd31};
	g1 <= i1r[16:9] == 8'd95 && (i1r != i1q || age1 < 5'd18);   // a parked address does not hold writes
end
wire       need0 = sr_ready && d0;
wire       need1 = sr_ready && d1;
wire       dn1 = need1 && FB_DRAW0, dn0 = need0 && !FB_DRAW0;   // the displayed buffer
wire       aok = !(FB_DRAW0 ? FB_MODE3 ? 1'b0 : g1 : (FB_DISP_SOON || |sn))   // columns 190-191 / line start
                 && (!(FB_DRAW0 ? t1q : in0q) || dph >= DFREE);
wire [16:0] fill_a = FB_MODE3 ? {wq[38:25], fk} : {wq[38:33], fk, wq[32:25]};

always @(posedge clk_ram) begin
	sr_req <= 1'b0;
	ne <= rst ? |wptr : (wptr != rptr);
	if (dph != 5'd31) dph <= dph + 5'd1;
	if (rst) begin rptr <= 9'd0; rd_ack <= rd_t; es <= 3'd0; have0 <= 1'b0; have1 <= 1'b0; e_ret <= 1'b0; end
	else if ((es == 3'd0 || es == 3'd5) && (dn0 || dn1)) begin
		// display read; from a fill (es 5) it returns there, the fill's progress (fk) kept
		e_ret <= es == 3'd5;
		if (dn1) begin
			last1 <= i1q; have1 <= 1'b1;
			if (!eq1) begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= sa1q; sr_be <= 2'b11; e_b <= 1'b1; e_c <= 1'b1; es <= 3'd3;
				dph <= 5'd0;
			end
		end else begin
			last0 <= i0q; have0 <= 1'b1;
			if (eq0) ;
			else if (!in0q) FB0_Q <= 16'h0000;
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= sa0q; sr_be <= 2'b11; e_b <= 1'b0; e_c <= 1'b1; es <= 3'd3;
				dph <= 5'd0;
			end
		end
	end else case (es)
	3'd0: begin
		e_ret <= 1'b0;
		if (ne) begin
			if (sr_ready && aok) begin
				if (wq[39]) begin fk <= 3'd0; es <= 3'd5; end   // fill: popped after its last word
				else begin
					sr_req <= 1'b1; sr_we <= 1'b1;
					sr_a <= wq[38:22]; sr_be <= wq[21:20]; sr_d <= wq[15:0];
					rptr <= rptr + 1'd1;
					es <= 3'd4;                                // posted: the next write may follow right away
				end
			end
		end else if (!aok) begin
		end else if (rd_busy && sr_ready) begin
			if (rd_b) begin last1 <= rd_idx; have1 <= 1'b1; end else begin last0 <= rd_idx; have0 <= 1'b1; end
			if (rd_oor || rd_ev) begin
				if (rd_b) fb1_sq <= ev1; else FB0_Q <= rd_oor ? 16'h0000 : ev0;
				rd_ack <= rd_t;
			end else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= rd_b ? sram_a1(rd_idx) : sram_a0(rd_idx); sr_be <= 2'b11; es <= 3'd2;
				e_b <= rd_b;
			end
		end else if (need1 && (!need0 || trk)) begin
			trk <= 1'b0;
			if (eq1) begin last1 <= i1q; have1 <= 1'b1; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= sa1q; sr_be <= 2'b11;
				last1 <= i1q; have1 <= 1'b1; e_b <= 1'b1; e_c <= 1'b1; es <= 3'd3;
			end
		end else if (need0) begin
			trk <= 1'b1;
			if (eq0) begin last0 <= i0q; have0 <= 1'b1; end
			else if (!in0q) begin FB0_Q <= 16'h0000; last0 <= i0q; have0 <= 1'b1; end
			else begin
				sr_req <= 1'b1; sr_we <= 1'b0; sr_a <= sa0q; sr_be <= 2'b11;
				last0 <= i0q; have0 <= 1'b1; e_b <= 1'b0; e_c <= 1'b1; es <= 3'd3;
			end
		end
	end
	3'd4: es <= 3'd0;
	3'd2: if (sr_done) begin if (e_b) fb1_sq <= sr_q; else FB0_Q <= sr_q; rd_ack <= rd_t; es <= 3'd0; end
	// display read: one clk_ram after the issue the flag RAM output is the bit of this block (both edge phases)
	3'd3: begin
		if (e_c) begin e_c <= 1'b0; e_fl <= e_b ? (lk1 && fq1) : (lk0 && fq0); end
		if (sr_done) begin if (e_b) fb1_sq <= e_fl ? ev1 : sr_q; else FB0_Q <= e_fl ? ev0 : sr_q; es <= e_ret ? 3'd5 : 3'd0; end
	end
	3'd5: begin
		if (wq[16 + fk] || (sr_ready && aok)) begin
			if (!wq[16 + fk]) begin sr_req <= 1'b1; sr_we <= 1'b1; sr_a <= fill_a; sr_be <= 2'b11; sr_d <= wq[15:0]; end
			fk <= fk + 1'd1;
			if (&fk) begin rptr <= rptr + 1'd1; es <= 3'd4; end
			else if (!wq[16 + fk]) es <= 3'd6;
		end
	end
	3'd6: es <= 3'd5;
	default: es <= 3'd0;
	endcase
end

endmodule

`default_nettype wire
