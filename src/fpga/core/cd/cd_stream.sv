// Disc layer: TOC store, sector prefetcher, sector ring and sector streamer.
//
// Knows nothing about the SH-1 serial link or the CDD command set. A controller (cdd_ctl, or a
// future CD block model) uses three things:
//   - the TOC lookup port (lk_*)         track by FAD or by index, record fields
//   - the prefetch port (pf_*, pf_ready) restart prefetch at a FAD; a sector is ready or not
//   - the issue port (sd_*)              start streaming the oldest ready sector (or a generated
//                                        lead-out ring sector) out of cd_data/cd_ck/cd_audio
// All positions are FADs (LBA + 150), 24 bits.
//
// Memory: sector ring in PSRAM1 through ddram_pocket (8 slots x 4 KB, 16 bit words: rg_* ports), TOC in one
// 512 x 32 dual-clock RAM (cd_toc_ram). The bridge words wait in a 64 entry FIFO (one M10K pair) because
// PSRAM1 can be busy for a few microseconds with a VDP1 burst.
//
// Bridge map (clk_74a):
//   0x6xxxxxxx  TOC file (2048 bytes, big-endian words, data slot "CD TOC", pushed at load)
//   0x3xxxxxxx  sector ring window, slot n at +n*4096 (written by the dataslot reads issued here)
//
// TOC word layout (docs/cd.md): 0 magic, 1 {ver, ntracks BCD, hacks, ntracks}, 2 lead-out FAD,
// 4..68 boot header, 72 + 3*r: record r = {A: end FAD | data | 2048 | file, B: start FAD | index1,
// C: file origin FAD}; r = ntracks is the lead-out record. Word 511 closes the file (commit).
//
// t_* are driven from clk registers that hold still from before the request toggles until the
// transfer is done; constrain them as false paths.

`default_nettype none

module cd_stream #(
	parameter [31:0] RING_BRIDGE = 32'h3000_0000,   // bits [14:0] must be zero
	parameter [15:0] TRACK_SLOT_BASE = 16'd16,
	parameter        BRIDGE_LITTLE = 0,             // bridge_endian_little
	parameter [3:0]  PREFETCH_MAX = 4'd6
) (
	input  wire        clk,                  // clk_sys
	input  wire        rst_n,                // feed only; TOC and prefetch state survive a Saturn reset
	input  wire        ce,                   // 176.4 kHz word clock

	// APF bridge, clk_74a domain
	input  wire        clk_74a,
	input  wire        bridge_wr,
	input  wire [31:0] bridge_addr,
	input  wire [31:0] bridge_wr_data,
	output reg         t_read = 1'b0,
	output wire [15:0] t_id,
	output wire [31:0] t_off,
	output wire [31:0] t_baddr,
	output wire [31:0] t_len,
	input  wire        t_ack,
	input  wire        t_done,
	input  wire [2:0]  t_err,

	// sector ring memory, 16384 x 16 (ddram_pocket handshake: a write of two words (one bridge word) is a one clock
	// pulse taken when !rg_wbusy; a read keeps rg_rd high, waits two clocks, then for !rg_rbusy, and rg_q is valid
	// in that clock)
	output reg         rg_wr = 1'b0,
	output reg  [12:0] rg_wa = 13'd0,        // word pair
	output reg  [31:0] rg_wd = 32'd0,        // {first word, second word}
	input  wire        rg_wbusy,
	output reg         rg_rd = 1'b0,
	output wire [13:0] rg_ra,
	input  wire [15:0] rg_q,
	input  wire        rg_rbusy,

	// disc
	output reg         disc_ok = 1'b0,
	output reg         disc_new = 1'b0,      // pulse: a TOC was loaded and the boot header replayed
	output wire        boot_busy,
	output reg         boot_wr = 1'b0,
	output reg  [8:0]  boot_addr = 9'd0,
	output reg  [15:0] boot_data = 16'd0,
	output reg  [6:0]  ntracks = 7'd0,
	output reg  [7:0]  ntbcd = 8'd0,
	output reg  [23:0] toc_end = 24'd0,      // lead-out FAD
	output reg         hack_wwf = 1'b0,
	output reg         hack_rr = 1'b0,

	// TOC lookup (results valid when lk_busy is low; hold lk_hold while using them)
	input  wire        lk_go,
	input  wire        lk_byidx,             // 0: track containing FAD lk_x, 1: record lk_idx
	input  wire [23:0] lk_x,
	input  wire [6:0]  lk_idx,
	input  wire        lk_hold,              // keeps the prefetcher out of the lookup engine
	output wire        lk_busy,
	output wire        eng_idle,             // TOC engine idle; wait for it after raising lk_hold
	output reg  [6:0]  lk_track = 7'd0,
	output reg  [7:0]  lk_tbcd = 8'd1,       // BCD of track + 1
	output reg  [23:0] lk_start = 24'd0,     // start FAD
	output reg  [7:0]  lk_idx1 = 8'd0,
	output reg         lk_data = 1'b0,
	output reg         lk_s2048 = 1'b0,

	// prefetch
	input  wire        pf_flush,             // restart: drop ready sectors, next fetch is FAD pf_fad
	input  wire [23:0] pf_fad,
	input  wire        pf_en,
	output wire        pf_ready,             // a sector is in the ring

	// issue + stream out
	input  wire        sd_go,                // needs !fd_busy; consumes a ring sector unless kind == 2
	input  wire [1:0]  sd_kind,              // 0 data, 1 audio, 2 security ring
	input  wire        sd_synth,
	input  wire        sd_spd2,
	input  wire [23:0] sd_hdr,
	output wire        fd_busy,
	output wire [17:0] cd_data,
	output wire        cd_ck,
	output wire        cd_audio,

	output reg  [7:0]  err_cnt = 8'd0,       // bridge reads that ended with an error
	output reg  [7:0]  ovf_cnt = 8'd0        // bridge words lost to a full ring FIFO (saturating)
);

// ------------------------------------------------------------------ bridge side (clk_74a)
wire toc_sel  = (bridge_addr[31:28] == 4'h6);
wire ring_sel = (bridge_addr[31:28] == RING_BRIDGE[31:28]);

reg        commit_t = 1'b0;
reg        rw_t = 1'b0;
reg [12:0] rw_a = 13'd0;
reg [31:0] rw_d = 32'd0;

always @(posedge clk_74a) begin
	if (bridge_wr && toc_sel && bridge_addr[10:2] == 9'd511) commit_t <= ~commit_t;
	if (bridge_wr && ring_sel) begin
		rw_a <= bridge_addr[14:2];
		rw_d <= bridge_wr_data;
		rw_t <= ~rw_t;
	end
end

// dataslot read request: fx_* are clk registers, stable while a request is open
reg  [31:0] fx_off = 32'd0;
reg  [4:0]  fx_file = 5'd0;
reg  [2:0]  fx_slot = 3'd0;
reg         fx_s2048 = 1'b0;
reg         fx_req_t = 1'b0;

assign t_id    = TRACK_SLOT_BASE + {11'd0, fx_file};
assign t_off   = fx_off;
assign t_baddr = {RING_BRIDGE[31:15], fx_slot, 7'd0, fx_s2048, 4'd0};
assign t_len   = fx_s2048 ? 32'd2048 : 32'd2352;

reg  [2:0]  rq_s = 3'd0;
reg         rq_seen = 1'b0;
reg  [1:0]  hs = 2'd0;
reg  [2:0]  hc = 3'd0;
reg         done_t = 1'b0;
reg         err_r = 1'b0;

always @(posedge clk_74a) begin
	rq_s <= {rq_s[1:0], fx_req_t};
	case (hs)
	2'd0: if (rq_s[2] != rq_seen) begin
		rq_seen <= rq_s[2];
		t_read <= 1'b1; hc <= 3'd0; hs <= 2'd1;
	end
	2'd1: begin
		hc <= hc + 3'd1;
		if (hc == 3'd5) begin t_read <= 1'b0; hs <= 2'd2; end
	end
	2'd2: if (t_ack || !t_done) hs <= 2'd3;
	2'd3: if (t_done) begin
		err_r <= (t_err != 3'd0);
		done_t <= ~done_t;
		hs <= 2'd0;
	end
	endcase
end

// ------------------------------------------------------------------ crossings to clk
reg [3:0] cm_s = 4'd0, rw_s = 4'd0, dn_s = 4'd0;
always @(posedge clk) begin
	cm_s <= {cm_s[2:0], commit_t};
	rw_s <= {rw_s[2:0], rw_t};
	dn_s <= {dn_s[2:0], done_t};
end
wire commit_ev = cm_s[3] != cm_s[2];
wire rw_ev     = rw_s[3] != rw_s[2];
wire done_sync = dn_s[3] != dn_s[2];

// ------------------------------------------------------------------ ring memory port
reg        r_pend = 1'b0;
reg [3:0]  ss = 4'd0;
reg        sr_rv = 1'b0;
reg [15:0] sr_d = 16'd0;
wire [13:0] fd_sr_a;
wire        fd_sr_rq;
assign rg_ra = fd_sr_a;

// rw_a / rw_d hold still for at least 30 clk_74a cycles after rw_t toggles (one bridge word)
localparam FW = 6;
reg [44:0]   wq [0:(1<<FW)-1];
reg [FW:0]   wq_w = 0, wq_r = 0;
reg [44:0]   wq_q;
wire         wq_empty = (wq_w == wq_r);
wire         wq_full  = (wq_w - wq_r) == (1 << FW);
always @(posedge clk) begin
	if (rw_ev) begin
		if (!wq_full) begin wq[wq_w[FW-1:0]] <= {rw_a, rw_d}; wq_w <= wq_w + 1'd1; end
		else if (ovf_cnt != 8'hFF) ovf_cnt <= ovf_cnt + 8'd1;
	end
	wq_q <= wq[wq_r[FW-1:0]];
end
wire [15:0] w_half0 = BRIDGE_LITTLE ? wq_q[15:0]  : {wq_q[23:16], wq_q[31:24]};
wire [15:0] w_half1 = BRIDGE_LITTLE ? wq_q[31:16] : {wq_q[7:0],   wq_q[15:8]};

always @(posedge clk) begin
	sr_rv <= 1'b0;
	rg_wr <= 1'b0;
	if (fd_sr_rq) r_pend <= 1'b1;
	case (ss)
	4'd0: if (r_pend) begin
		r_pend <= 1'b0; rg_rd <= 1'b1; ss <= 4'd8;
	end else if (!wq_empty && !rg_wbusy) begin
		ss <= 4'd1;
	end
	4'd1: ss <= 4'd2;                       // wq_q settles
	4'd2: begin
		rg_wa <= wq_q[44:32];
		rg_wd <= {w_half0, w_half1};
		rg_wr <= 1'b1; ss <= 4'd3;
	end
	4'd3: ss <= 4'd4;
	4'd4: ss <= 4'd5;                       // rg_wbusy rises
	4'd5: if (!rg_wbusy) begin wq_r <= wq_r + 1'd1; ss <= 4'd0; end
	4'd8: ss <= 4'd9;
	4'd9: ss <= 4'd10;
	4'd10: if (!rg_rbusy) begin sr_d <= rg_q; sr_rv <= 1'b1; rg_rd <= 1'b0; ss <= 4'd0; end
	default: ss <= 4'd0;
	endcase
end

// a sector is complete when its last bridge word has reached the ring memory: wait for the FIFO to drain
reg  done_pend = 1'b0;
wire done_ev = done_pend && wq_empty && ss == 4'd0 && !rg_wbusy && !rw_ev;
always @(posedge clk) begin
	if (done_sync) done_pend <= 1'b1;
	else if (done_ev) done_pend <= 1'b0;
end

// ------------------------------------------------------------------ ring bookkeeping
reg [2:0]  wr_ptr = 3'd0, rd_ptr = 3'd0;
reg [3:0]  n_ready = 4'd0;
reg        infl = 1'b0, discard = 1'b0;
reg [4:0]  dd = 5'd0;
reg        dd_run = 1'b0;
reg        fetch_en = 1'b0;
reg [23:0] fetch_fad = 24'd0;
wire       fd_held;
wire       fd_done;

assign pf_ready = (n_ready != 4'd0);

// ------------------------------------------------------------------ TOC engine
reg  [8:0]  ra = 9'd0;
wire [31:0] toc_q;
cd_toc_ram toc_ram (
	.wclk(clk_74a), .we(bridge_wr && toc_sel), .wa(bridge_addr[10:2]), .wd(bridge_wr_data),
	.rclk(clk), .ra(ra), .rq(toc_q)
);

localparam [8:0] REC0 = 9'd72;
localparam [4:0] E_IDLE = 0, E_WK1 = 1, E_WK2 = 2, E_LD0 = 3, E_LD1 = 4, E_LD2 = 5, E_LD3 = 6, E_LD4 = 7,
                 E_LH0 = 8, E_LH1 = 9, E_LH2 = 10, E_B1 = 11, E_B2 = 12, E_B3 = 13, E_B4 = 14,
                 E_F1 = 15, E_F2 = 16, E_F3 = 17, E_F4 = 18, E_F5 = 19;
reg [4:0]  es = E_IDLE;
reg        commit_pend = 1'b0;
reg        ld_run = 1'b0;
reg        owner_fetch = 1'b0;
reg [8:0]  rb = 9'd0;
reg [6:0]  wi = 7'd0;
reg [7:0]  wtb = 8'd1;
reg [6:0]  bi = 7'd0;
reg [23:0] c_forg = 24'd0;
reg [4:0]  c_file = 5'd0;
reg        c_s2048 = 1'b0;

wire ring_add  = dd_run && dd == 5'd24 && !discard;
wire ring_take = sd_go && sd_kind != 2'd2;
wire ring_drop = pf_flush || (es == E_IDLE && commit_pend && !lk_hold);

assign eng_idle = (es == E_IDLE);
assign lk_busy = (es != E_IDLE) && !owner_fetch;
assign boot_busy = commit_pend || ld_run;

wire [23:0] wx = owner_fetch ? fetch_fad : lk_x;
wire [23:0] fl_pos = (fetch_fad < 24'd150) ? 24'd150 : fetch_fad;
wire [24:0] fsec_d = {1'b0, fl_pos} - {1'b0, c_forg};
wire [23:0] fsec = fsec_d[24] ? 24'd0 : fsec_d[23:0];
wire can_fetch = fetch_en && !infl && disc_ok && !lk_hold &&
                 ({1'b0, n_ready} + {3'd0, fd_held} < {1'b0, PREFETCH_MAX}) &&
                 (fetch_fad < toc_end);

function [7:0] bcd_inc(input [7:0] v);
	bcd_inc = (v[3:0] == 4'd9) ? {v[7:4] + 4'd1, 4'd0} : {v[7:4], v[3:0] + 4'd1};
endfunction

always @(posedge clk) begin
	disc_new <= 1'b0;
	boot_wr  <= 1'b0;

	// ring bookkeeping events
	if (dd_run) begin
		dd <= dd + 5'd1;
		if (dd == 5'd24) begin
			dd_run <= 1'b0;
			infl <= 1'b0;
			if (discard) discard <= 1'b0;
		end
	end
	if (done_ev) begin dd <= 5'd0; dd_run <= 1'b1; if (err_r) err_cnt <= err_cnt + 8'd1; end
	if (commit_ev) commit_pend <= 1'b1;

	n_ready <= n_ready + {3'd0, ring_add} - {3'd0, ring_take};
	if (ring_take) rd_ptr <= rd_ptr + 3'd1;
	if (ring_drop) begin
		n_ready <= 4'd0;
		rd_ptr <= wr_ptr;
		if (infl) discard <= 1'b1;
	end
	if (pf_flush) begin
		fetch_fad <= pf_fad;
		fetch_en <= pf_en;
	end

	case (es)
	E_IDLE: begin
		if (commit_pend && !lk_hold) begin
			commit_pend <= 1'b0;
			disc_ok <= 1'b0;
			fetch_en <= 1'b0;
			ld_run <= 1'b1;
			ra <= 9'd1; es <= E_LH0;
		end else if (lk_go) begin
			owner_fetch <= 1'b0;
			if (lk_byidx) begin
				rb <= REC0 + {lk_idx, 2'b00} - {2'b00, lk_idx};   // 3*idx
				wi <= lk_idx;
				es <= E_LD0;
			end else begin
				rb <= REC0; ra <= REC0; wi <= 7'd0; wtb <= 8'd1; es <= E_WK1;
			end
		end else if (can_fetch) begin
			owner_fetch <= 1'b1;
			rb <= REC0; ra <= REC0; wi <= 7'd0; wtb <= 8'd1; es <= E_WK1;
		end
	end

	// load: header words, then boot header replay
	E_LH0: begin ra <= 9'd2; es <= E_LH1; end
	E_LH1: begin
		ntracks <= toc_q[6:0]; hack_wwf <= toc_q[8]; hack_rr <= toc_q[9]; ntbcd <= toc_q[23:16];
		ra <= 9'd4; es <= E_LH2;
	end
	E_LH2: begin toc_end <= toc_q[23:0]; ra <= 9'd4; bi <= 7'd0; es <= E_B1; end
	E_B1: es <= E_B2;
	E_B2: begin   // toc_q = word 4 + bi, ra held
		boot_wr <= 1'b1; boot_addr <= {bi, 2'b00}; boot_data <= {toc_q[23:16], toc_q[31:24]};
		es <= E_B3;
	end
	E_B3: begin
		boot_wr <= 1'b1; boot_addr <= {bi, 2'b10}; boot_data <= {toc_q[7:0], toc_q[15:8]};
		bi <= bi + 7'd1;
		ra <= 9'd5 + {2'd0, bi};
		es <= (bi == 7'd64) ? E_B4 : E_B1;
	end
	E_B4: begin disc_ok <= 1'b1; disc_new <= 1'b1; ld_run <= 1'b0; es <= E_IDLE; end

	// walk: find the track whose end FAD is beyond wx
	E_WK1: es <= E_WK2;
	E_WK2: begin
		if (wi != ntracks && toc_q[23:0] <= wx) begin
			wi <= wi + 7'd1; wtb <= bcd_inc(wtb);
			rb <= rb + 9'd3; ra <= rb + 9'd3;
			es <= E_WK1;
		end else begin
			es <= E_LD0;
		end
	end

	// record load (rb)
	E_LD0: begin ra <= rb; es <= E_LD1; end
	E_LD1: begin ra <= rb + 9'd1; es <= E_LD2; end
	E_LD2: begin
		ra <= rb + 9'd2;
		c_file <= toc_q[30:26];
		c_s2048 <= toc_q[25];
		if (!owner_fetch) begin lk_data <= toc_q[24]; lk_s2048 <= toc_q[25]; lk_track <= wi; lk_tbcd <= wtb; end
		es <= E_LD3;
	end
	E_LD3: begin
		if (!owner_fetch) begin lk_start <= toc_q[23:0]; lk_idx1 <= toc_q[31:24]; end
		es <= E_LD4;
	end
	E_LD4: begin
		c_forg <= toc_q[23:0];
		es <= owner_fetch ? E_F1 : E_IDLE;
	end

	// fetch: byte offset = file sector * 2352 (or 2048), issue
	E_F1: begin fx_off <= {8'd0, fsec} << 11; es <= c_s2048 ? E_F4 : E_F2; end
	E_F2: begin fx_off <= fx_off + ({8'd0, fsec} << 8); es <= E_F3; end
	E_F3: begin fx_off <= fx_off + ({8'd0, fsec} << 5); es <= E_F5; end
	E_F5: begin fx_off <= fx_off + ({8'd0, fsec} << 4); es <= E_F4; end
	E_F4: begin
		fx_file  <= c_file;
		fx_slot  <= wr_ptr;
		fx_s2048 <= c_s2048;
		fx_req_t <= ~fx_req_t;
		infl <= 1'b1;
		wr_ptr <= wr_ptr + 3'd1;
		fetch_fad <= fetch_fad + 24'd1;
		es <= E_IDLE;
	end
	default: es <= E_IDLE;
	endcase
end

// ------------------------------------------------------------------ feed
cd_feed feed (
	.clk(clk), .rst_n(rst_n), .ce(ce),
	.go(sd_go), .slot(rd_ptr), .kind(sd_kind), .synth(sd_synth), .spd2(sd_spd2), .hdr(sd_hdr),
	.busy(fd_busy), .held(fd_held), .done(fd_done),
	.sr_rq(fd_sr_rq), .sr_a(fd_sr_a), .sr_rv(sr_rv), .sr_d(sr_d),
	.cd_data(cd_data), .cd_ck(cd_ck), .cd_audio(cd_audio)
);

endmodule

`default_nettype wire
