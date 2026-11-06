// tb_fb: vdp1_fb_pocket + sram_pocket + SRAM model, with a VDP1-style stimulus.
//
//   A  draw     random pixel writes and read-modify-write on FB0 (SRAM) and FB1 (M10K) with the VDP1 FB_RDY
//               protocol, FB_DRAW0 following the buffer drawn; throughput in pixels per microsecond
//   B  display  one 16 bit read per dot (8 clk_sys), erase write to the same pixel at DCE_R; FB0_Q must
//               hold the pre-erase pixel; latency from address change to valid FB0_Q
//   C  vberase  VBlank erase: one FB0 write every 2 clk_sys for a whole region; no write may be lost
//   B2, D       FB1 display across the M10K / SRAM tail boundary, concurrent erase and draw on both SRAM streams
//   E           draws into erased blocks (partial blocks, byte lanes, two blocks interleaved, reads in between), every
//               word read back; display reads across erased / untouched / materialised blocks; the same in FB_MODE3
//   -DSRAMAA_PS=n  SRAM access time in the model (default 55000, the Pocket's AS6C2016-55)
//   -DCLK_ALIGNED  clk_sys rising with every other clk_ram rising edge (the PLL's phase); default half a clk_ram off
//   +N=count    operations in test A;  +SEED=n  another random sequence;  +MEMRAND  random SRAM power-up contents (never visible: all blocks start erased)
//
// The shadows sh0 / sh1 follow the lazy erase rules of vdp1_fb_pocket.sv (bf0 / bf1 = flagged blocks): a block
// flagged by an earlier erase reads the buffer's latest erase value.

`timescale 1ps/1ps

module tb_fb;

localparam integer T_RAM = 8730;
localparam integer TCO = 3500, TIN = 1000;

reg clk_ram = 0, clk_sys = 0;
always #(T_RAM/2) clk_ram = ~clk_ram;
`ifdef CLK_ALIGNED
initial begin #(T_RAM/2); forever begin clk_sys = ~clk_sys; #(T_RAM); end end   // rising edges together, as from the PLL
`else
always #(T_RAM)   clk_sys = ~clk_sys;                                             // clk_sys edges between clk_ram edges
`endif
reg rst = 1;

integer n_ops = 4000, seed;
initial if (!$value$plusargs("N=%d", n_ops)) n_ops = 4000;
initial if ($value$plusargs("SEED=%d", seed)) seed = $urandom(seed);

// ---------------------------------------------------------------- DUT
reg         mode3 = 0;
reg         fsel = 0;                       // FB_DRAW0 (VDP1P FB_SEL): 1 = FB0 drawn, FB1 displayed
reg  [17:1] fb0_a = 0, fb1_a = 0;
reg  [15:0] fb0_d = 0, fb1_d = 0;
reg   [1:0] fb0_we = 0, fb1_we = 0;
reg         fb0_rd = 0, fb1_rd = 0;
wire [15:0] fb0_q, fb1_q;
wire        fb_rdy;
wire  [7:0] fb_drop;
wire        sr_req, sr_we, sr_ready, sr_done;
wire [16:0] sr_a; wire [15:0] sr_d, sr_q; wire [1:0] sr_be;

vdp1_fb_pocket fb (
	.clk_sys(clk_sys), .clk_ram(clk_ram), .rst(rst), .FB_MODE3(mode3), .FB_DRAW0(fsel),
	.FB0_A(fb0_a), .FB0_D(fb0_d), .FB0_WE(fb0_we), .FB0_RD(fb0_rd), .FB0_Q(fb0_q),
	.FB1_A(fb1_a), .FB1_D(fb1_d), .FB1_WE(fb1_we), .FB1_RD(fb1_rd), .FB1_Q(fb1_q),
	.FB_RDY(fb_rdy), .dbg_drop(fb_drop),
	.sr_req(sr_req), .sr_we(sr_we), .sr_a(sr_a), .sr_d(sr_d), .sr_be(sr_be), .sr_ready(sr_ready), .sr_q(sr_q), .sr_done(sr_done)
);

wire [16:0] sram_a; wire [15:0] sram_dq_o, sram_dq_i; wire sram_dq_oe, sram_oe_n, sram_we_n, sram_ub_n, sram_lb_n;

sram_pocket sr (
	.clk(clk_ram),
	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),
	.fb_req(sr_req), .fb_we(sr_we), .fb_a(sr_a), .fb_d(sr_d), .fb_be(sr_be), .fb_ready(sr_ready), .fb_q(sr_q), .fb_done(sr_done)
);

// pins with transport delays
reg [16:0] a_d; reg [15:0] o_d; reg oe_d, oen_d, wen_d, ub_d, lb_d;
always @(sram_a)     a_d   <= #(TCO) sram_a;
always @(sram_dq_o)  o_d   <= #(TCO) sram_dq_o;
always @(sram_dq_oe) oe_d  <= #(TCO) sram_dq_oe;
always @(sram_oe_n)  oen_d <= #(TCO) sram_oe_n;
always @(sram_we_n)  wen_d <= #(TCO) sram_we_n;
always @(sram_ub_n)  ub_d  <= #(TCO) sram_ub_n;
always @(sram_lb_n)  lb_d  <= #(TCO) sram_lb_n;
initial begin a_d = 0; o_d = 0; oe_d = 0; oen_d = 1; wen_d = 1; ub_d = 1; lb_d = 1; end
wire [15:0] dq;
assign dq = oe_d ? o_d : 16'hzzzz;
reg [15:0] dq_in_r;
always @(dq) dq_in_r <= #(TIN) dq;
assign sram_dq_i = dq_in_r;

wire [31:0] s_err, s_rd, s_wr;
`ifndef SRAMAA_PS
`define SRAMAA_PS 55000
`endif
sram_model #(.T_AA(`SRAMAA_PS)) smem (.a(a_d), .dq(dq), .oe_n(oen_d), .we_n(wen_d), .ub_n(ub_d), .lb_n(lb_d), .errors(s_err), .n_rd(s_rd), .n_wr(s_wr));

// ---------------------------------------------------------------- shadows, lazy erase reference, helpers
reg [15:0] sh0 [0:90111];
reg [15:0] sh1 [0:90111];
reg        bf0 [0:16383];                   // flagged blocks, by vdp1_fb_pocket's block number (no FB1 offset)
reg        bf1 [0:16383];
reg [15:0] bev0 = 16'h0, bev1 = 16'h0;      // erase values
integer errs = 0, i;
// FB1 index 49152 .. 90111 (columns 192-351) at SRAM word 0 .., FB0 at SRAM word 40960 ..
initial begin
	for (i = 0; i < 90112; i = i + 1) begin
		sh0[i] = 16'h0; sh1[i] = 16'h0;
		if (!$test$plusargs("MEMRAND")) smem.mem[40960 + i] = 16'h0;
		if (i < 49152) fb.m1[i] = 16'h0; else if (!$test$plusargs("MEMRAND")) smem.mem[i - 49152] = 16'h0;
	end
	for (i = 0; i < 16384; i = i + 1) begin bf0[i] = 1; bf1[i] = 1; end
end

function automatic [17:1] vaddr(input [8:0] x, input [7:0] y);   // VDP1 FBn_A for pixel (x,y), normal mode
	vaddr = {y[7:0], x[8:0]};
endfunction
function automatic [16:0] idx_of(input [8:0] x, input [7:0] y);
	idx_of = {x, y};
endfunction
function automatic [16:0] xl(input [17:1] a);                    // buffer index of FBn_A in the current mode
	xl = mode3 ? a[17:1] : {a[9:1], a[17:10]};
endfunction
function automatic [13:0] blk_of(input [16:0] idx);
	blk_of = mode3 ? idx[16:3] : {idx[16:11], idx[7:0]};
endfunction
function automatic [16:0] idx_in(input [13:0] b, input [2:0] k);
	idx_in = mode3 ? {b, k} : {b[13:8], k, b[7:0]};
endfunction
function automatic integer in_sram(input integer fb_sel, input [16:0] idx);
	in_sram = idx < 90112 && (fb_sel == 0 || idx >= 49152);
endfunction

// a new erase value: every flagged block reads it
task automatic ev_change(input integer fb_sel, input [15:0] v);
	integer b, k; reg [16:0] x;
	begin
		for (b = 0; b < 16384; b = b + 1) if (fb_sel == 0 ? bf0[b] : bf1[b])
			for (k = 0; k < 8; k = k + 1) begin
				x = idx_in(b, k);
				if (in_sram(fb_sel, x)) begin if (fb_sel == 0) sh0[x] = v; else sh1[x] = v; end
			end
		if (fb_sel == 0) bev0 = v; else bev1 = v;
	end
endtask
// the model side of one erase write
task automatic ers_model(input integer fb_sel, input [16:0] x, input [15:0] v);
	begin
		if (v !== (fb_sel == 0 ? bev0 : bev1)) ev_change(fb_sel, v);
		if (x < 90112) begin if (fb_sel == 0) sh0[x] = v; else sh1[x] = v; end
		if (in_sram(fb_sel, x) && (mode3 ? &x[2:0] : &x[10:8])) begin if (fb_sel == 0) bf0[blk_of(x)] = 1; else bf1[blk_of(x)] = 1; end
	end
endtask
// one erase write (VBlank erase pacing: one per 2 clk_sys)
task automatic ers(input integer fb_sel, input [17:1] a, input [15:0] v);
	begin
		@(posedge clk_sys);
		fsel <= (fb_sel == 1);
		if (fb_sel == 0) begin fb0_a <= a; fb0_d <= v; fb0_we <= 2'b11; end else begin fb1_a <= a; fb1_d <= v; fb1_we <= 2'b11; end
		ers_model(fb_sel, xl(a), v);
		@(posedge clk_sys);
		if (fb_sel == 0) fb0_we <= 2'b00; else fb1_we <= 2'b00;
	end
endtask
// SRAM content written directly, the block marked as holding it (whole blocks only)
task automatic preload(input integer fb_sel, input [16:0] x, input [15:0] v);
	reg [13:0] b;
	begin
		if (fb_sel == 0) begin sh0[x] = v; smem.mem[40960 + x] = v; end
		else begin sh1[x] = v; if (x < 49152) fb.m1[x] = v; else smem.mem[x - 49152] = v; end
		if (in_sram(fb_sel, x)) begin
			b = blk_of(x);
			if (fb_sel == 0) begin bf0[b] = 0; fb.flg[b] = 1'b1; end
			else begin bf1[b] = 0; fb.flg[{b[13:8] + 6'd20, b[7:0]}] = 1'b1; end
		end
	end
endtask

// ---------------------------------------------------------------- draw side
integer wr_cnt = 0, t_start, t_end;
task automatic wait_rdy;
	begin @(posedge clk_sys); while (!fb_rdy) @(posedge clk_sys); end
endtask

task automatic acc_w(input integer fb_sel, input [17:1] a, input [15:0] d, input [1:0] be);
	reg [15:0] old; reg [16:0] x;
	begin
		wait_rdy;
		fsel <= (fb_sel == 0);
		if (fb_sel == 0) begin fb0_a <= a; fb0_d <= d; fb0_we <= be; end
		else             begin fb1_a <= a; fb1_d <= d; fb1_we <= be; end
		@(posedge clk_sys);
		if (fb_sel == 0) fb0_we <= 0; else fb1_we <= 0;   // the other buffer may be erasing (test D)
		x = xl(a);
		if (x < 90112) begin
			old = (fb_sel == 0) ? sh0[x] : sh1[x];
			if (be[0]) old[7:0] = d[7:0];
			if (be[1]) old[15:8] = d[15:8];
			if (fb_sel == 0) sh0[x] = old; else sh1[x] = old;
			if (in_sram(fb_sel, x)) begin if (fb_sel == 0) bf0[blk_of(x)] = 0; else bf1[blk_of(x)] = 0; end
		end
	end
endtask

task automatic acc_r(input integer fb_sel, input [17:1] a);
	reg [15:0] exp, got; reg [16:0] x;
	begin
		wait_rdy;
		fsel <= (fb_sel == 0);
		if (fb_sel == 0) begin fb0_a <= a; fb0_rd <= 1; end
		else             begin fb1_a <= a; fb1_rd <= 1; end
		@(posedge clk_sys);
		if (fb_sel == 0) fb0_rd <= 0; else fb1_rd <= 0;
		@(posedge clk_sys);
		wait_rdy;
		@(posedge clk_sys);
		got = (fb_sel == 0) ? fb0_q : fb1_q;
		x = xl(a);
		exp = (x >= 90112) ? 16'h0 : ((fb_sel == 0) ? sh0[x] : sh1[x]);
		if (got !== exp) begin errs = errs + 1; if (errs < 10) $display("%0t draw read fb%0d a %h (index %0d) got %h exp %h", $time, fb_sel, a, x, got, exp); end
	end
endtask

task automatic draw_w(input integer fb_sel, input [8:0] x, input [7:0] y, input [15:0] d, input [1:0] be);
	begin acc_w(fb_sel, vaddr(x, y), d, be); end
endtask
task automatic draw_w0(input [8:0] x, input [7:0] y, input [15:0] d);
	begin draw_w(0, x, y, d, 2'b11); end
endtask
task automatic draw_r(input integer fb_sel, input [8:0] x, input [7:0] y);
	begin acc_r(fb_sel, vaddr(x, y)); end
endtask

// display read, one dot of 8 clk_sys: FBn_A changes (no strobe); FBn_Q must hold the pixel from some clk_sys of the dot
// to its end (the latency is that clk_sys)
integer lat, lat_max = 0, lat_n = 0;
task automatic disp(input integer fb_sel, input [17:1] a);
	reg [15:0] e, q; integer c, from; reg [16:0] x;
	begin
		@(posedge clk_sys);
		if (fb_sel == 0) fb0_a <= a; else fb1_a <= a;
		x = xl(a);
		e = (x >= 90112) ? 16'h0 : (fb_sel == 0) ? sh0[x] : sh1[x];
		from = 0;
		for (c = 1; c <= 8; c = c + 1) begin
			@(posedge clk_sys);
			q = (fb_sel == 0) ? fb0_q : fb1_q;
			if (q !== e) from = 0; else if (from == 0) from = c;
		end
		if (from == 0) begin errs = errs + 1; if (errs < 10) $display("%0t display fb%0d a %h (index %0d) q %h exp %h at the end of the dot", $time, fb_sel, a, x, q, e); end
		else begin if (from > lat_max) lat_max = from; lat_n = lat_n + 1; end
	end
endtask

// ---------------------------------------------------------------- stimulus
integer t, bx, by, px, py, k2, pass, n, w0;
reg [15:0] rd16;
reg [15:0] expq;
integer t_a0;
localparam [15:0] EV_B = 16'h8421, EV_C = 16'h4ABC, EV_B2 = 16'h9C3E, EV_D1 = 16'h2468, EV_D2 = 16'h6F0D,
                  EV_E1 = 16'h1357, EV_E0 = 16'h7531;

task automatic drain; begin repeat (3000) @(posedge clk_sys); end endtask

initial begin
	repeat (8) @(posedge clk_sys);
	rst <= 0;
	repeat (80) @(posedge clk_sys);              // sram_model ignores writes in its first microsecond

	// ---- A: draw
	t_start = $time;
	for (t = 0; t < n_ops; t = t + 1) begin
		px = $urandom % 380; py = $urandom % 256;
		case ($urandom % 4)
			0: draw_w($urandom % 2, px, py, $urandom, 2'b11);
			1: draw_w($urandom % 2, px, py, $urandom, $urandom % 3 + 1);
			default: draw_r($urandom % 2, px, py);
		endcase
	end
	t_end = $time;
	// back-to-back draw writes for the throughput figure
	t_start = $time;
	for (t = 0; t < 2000; t = t + 1) draw_w(0, t % 352, (t / 352) % 256, $urandom, 2'b11);
	t_end = $time;
	$display("tb_fb: A draw FB0 (SRAM): 2000 writes in %0d ns = %0d ns per pixel", (t_end - t_start) / 1000, (t_end - t_start) / 2000000);
	t_start = $time;
	for (t = 0; t < 2000; t = t + 1) draw_w(1, t % 352, (t / 352) % 256, $urandom, 2'b11);
	t_end = $time;
	$display("tb_fb: A draw FB1 (M10K + tail): 2000 writes in %0d ns = %0d ns per pixel", (t_end - t_start) / 1000, (t_end - t_start) / 2000000);
	repeat (200) @(posedge clk_sys);
	for (t = 0; t < 300; t = t + 1) begin draw_r(0, $urandom % 352, $urandom % 256); draw_r(1, $urandom % 352, $urandom % 256); end
	$display("tb_fb: A draw checks done, errors %0d", errs);

	// ---- B: display read + frame erase, FB0 is the display buffer
	pass = errs;
	@(posedge clk_sys) fsel <= 0;
	drain;
	for (by = 0; by < 4; by = by + 1) for (bx = 0; bx < 352; bx = bx + 1) preload(0, idx_of(bx, by), $urandom);
	for (by = 0; by < 4; by = by + 1) begin
		for (bx = 0; bx < 352; bx = bx + 1) begin
			// DOT_CE_F: address changes; the pixel must be on FB0_Q within the dot
			@(posedge clk_sys);
			fb0_a <= vaddr(bx, by);
			expq = sh0[idx_of(bx, by)];
			t_a0 = $time;
			begin : waitq
				integer c;
				for (c = 1; c <= 8; c = c + 1) begin
					@(posedge clk_sys);
					if (fb0_q === expq) begin
						if (c > lat_max) lat_max = c;
						lat_n = lat_n + 1;
						disable waitq;
					end
				end
				errs = errs + 1; if (errs - pass < 10) $display("%0t display (%0d,%0d) q %h exp %h not valid in 8 clk_sys", $time, bx, by, fb0_q, expq);
			end
			// erase write at DCE_R (this is the same address)
			fb0_we <= 2'b11; fb0_d <= EV_B;
			@(posedge clk_sys);
			fb0_we <= 2'b00;
			ers_model(0, idx_of(bx, by), EV_B);
			// FB0_Q must keep the pre-erase pixel until the next address
			if (fb0_q !== expq) begin errs = errs + 1; if (errs - pass < 10) $display("%0t erase disturbed FB0_Q (%0d,%0d)", $time, bx, by); end
			repeat (3) @(posedge clk_sys);
		end
	end
	$display("tb_fb: B display: pixel on FB0_Q within %0d clk_sys of the address change (worst of %0d), errors %0d", lat_max, lat_n, errs - pass);

	// ---- C: VBlank erase
	pass = errs; w0 = s_wr;
	repeat (4) @(posedge clk_sys);
	for (t = 0; t < 30000; t = t + 1) ers(0, vaddr(t % 352, (t / 352) % 85), EV_C);
	w0 = s_wr - w0;
	repeat (4000) @(posedge clk_sys);
	for (t = 0; t < 352 * 85; t = t + 37) draw_r(0, t % 352, (t / 352) % 85);
	$display("tb_fb: C vberase: 30000 writes at 1 per 2 clk_sys, FIFO drops %0d, SRAM writes %0d, errors %0d", fb_drop, w0, errs - pass);

	// ---- B2: FB1 is the display buffer, tail columns 192..351 come from the SRAM
	pass = errs; lat_max = 0; lat_n = 0;
	@(posedge clk_sys) fsel <= 1;
	drain;
	for (by = 0; by < 4; by = by + 1) for (bx = 184; bx < 352; bx = bx + 1) preload(1, idx_of(bx, by), $urandom);
	for (by = 0; by < 4; by = by + 1) begin
		for (bx = 186; bx < 352; bx = bx + 1) begin
			@(posedge clk_sys);
			fb1_a <= vaddr(bx, by);
			expq = sh1[idx_of(bx, by)];
			begin : waitq1
				integer c;
				for (c = 1; c <= 8; c = c + 1) begin
					@(posedge clk_sys);
					if (fb1_q === expq) begin
						if (c > lat_max) lat_max = c;
						lat_n = lat_n + 1;
						disable waitq1;
					end
				end
				errs = errs + 1; if (errs - pass < 10) $display("%0t FB1 display (%0d,%0d) q %h exp %h not valid in 8 clk_sys", $time, bx, by, fb1_q, expq);
			end
			fb1_we <= 2'b11; fb1_d <= EV_B2;
			@(posedge clk_sys);
			fb1_we <= 2'b00;
			ers_model(1, idx_of(bx, by), EV_B2);
			if (fb1_q !== expq) begin errs = errs + 1; if (errs - pass < 10) $display("%0t erase disturbed FB1_Q (%0d,%0d)", $time, bx, by); end
			repeat (3) @(posedge clk_sys);
		end
	end
	$display("tb_fb: B2 FB1 display (M10K to tail boundary at column 192): valid within %0d clk_sys (worst of %0d), errors %0d", lat_max, lat_n, errs - pass);

	// ---- D: VBlank erase of the FB1 tail (one write per 2 clk_sys) while FB0 is drawn into with the FB_RDY protocol,
	// and the other way round: FB0 erase while FB1 tail draws
	pass = errs;
	fork
		begin : erase1
			integer e;
			for (e = 0; e < 20000; e = e + 1) ers(1, vaddr(192 + (e % 160), (e / 160) % 208), EV_D1);
		end
		begin : draw0
			integer d;
			for (d = 0; d < 3000; d = d + 1) begin
				px = $urandom % 352; py = $urandom % 256;
				if ($urandom % 3) draw_w0(px, py, $urandom); else draw_r(0, px, py);
			end
		end
	join
	repeat (2000) @(posedge clk_sys);
	for (t = 0; t < 20000; t = t + 53) begin
		bx = 192 + (t % 160); by = (t / 160) % 208;
		@(posedge clk_sys); fb1_a <= vaddr(bx, by);
		repeat (10) @(posedge clk_sys);
		if (fb1_q !== sh1[idx_of(bx, by)]) begin errs = errs + 1; if (errs - pass < 10) $display("D tail erase (%0d,%0d) got %h exp %h", bx, by, fb1_q, sh1[idx_of(bx, by)]); end
	end
	fork
		begin : erase0
			integer e;
			for (e = 0; e < 20000; e = e + 1) ers(0, vaddr(e % 352, (e / 352) % 56), EV_D2);
		end
		begin : draw1
			integer d;
			for (d = 0; d < 3000; d = d + 1) begin
				px = 192 + $urandom % 160; py = 100 + $urandom % 156;
				if ($urandom % 3) draw_w(1, px, py, $urandom, 2'b11); else draw_r(1, px, py);
			end
		end
	join
	repeat (2000) @(posedge clk_sys);
	for (t = 0; t < 20000; t = t + 53) begin
		bx = t % 352; by = (t / 352) % 56;
		draw_r(0, bx, by);
	end
	$display("tb_fb: D concurrent erase and draw on both SRAM streams: FIFO drops %0d, errors %0d", fb_drop, errs - pass);

	// ---- E: draws into erased blocks. FB0 rows 0-55 and the FB1 tail rows 0-124 are erased (D); per row two
	// neighbouring blocks at a time get random words written (random byte lanes), with reads in between
	pass = errs;
	for (by = 0; by < 16; by = by + 1) for (bx = 0; bx < 44; bx = bx + 2)
		for (n = 0; n < 12; n = n + 1) begin
			px = (bx + $urandom % 2) * 8 + $urandom % 8;
			if ($urandom % 4 == 0) draw_r(0, px, by); else draw_w(0, px, by, $urandom, $urandom % 3 + 1);
		end
	for (by = 0; by < 16; by = by + 1) for (bx = 0; bx < 44; bx = bx + 2)
		for (n = 0; n < 12; n = n + 1) begin
			px = (bx + $urandom % 2) * 8 + $urandom % 8;
			if (px < 184) px = px + 184;
			if (px < 352) begin if ($urandom % 4 == 0) draw_r(1, px, by); else draw_w(1, px, by, $urandom, $urandom % 3 + 1); end
		end
	for (by = 0; by < 16; by = by + 1) for (bx = 0; bx < 352; bx = bx + 1) begin draw_r(0, bx, by); if (bx >= 184) draw_r(1, bx, by); end
	$display("tb_fb: E partial blocks: every word of FB0 and FB1 rows 0-15 read back, errors %0d", errs - pass);
	// display reads across erased, untouched and materialised blocks
	pass = errs; lat_max = 0; lat_n = 0;
	@(posedge clk_sys) fsel <= 0;
	drain;
	for (by = 0; by < 256; by = by + 17) for (bx = 0; bx < 352; bx = bx + 1) disp(0, vaddr(bx, by));
	@(posedge clk_sys) fsel <= 1;
	drain;
	for (by = 0; by < 256; by = by + 15) for (bx = 184; bx < 352; bx = bx + 1) disp(1, vaddr(bx, by));
	$display("tb_fb: E display of erased / drawn / untouched blocks: valid within %0d clk_sys (worst of %0d), errors %0d", lat_max, lat_n, errs - pass);
	// FB_MODE3 (blocks are 8 consecutive indexes): erase FB1 indexes 48896-50175 (M10K / tail boundary) and FB0
	// 0-2047, draw into them, read every word back, display them
	pass = errs; lat_max = 0; lat_n = 0;
	@(posedge clk_sys) mode3 <= 1;
	drain;
	for (t = 48896; t < 50176; t = t + 1) ers(1, t, EV_E1);
	for (t = 0; t < 2048; t = t + 1) ers(0, t, EV_E0);
	for (t = 0; t < 1500; t = t + 1) begin
		k2 = 48896 + $urandom % 1280;
		if ($urandom % 4 == 0) acc_r(1, k2); else acc_w(1, k2, $urandom, $urandom % 3 + 1);
		k2 = $urandom % 2048;
		if ($urandom % 4 == 0) acc_r(0, k2); else acc_w(0, k2, $urandom, $urandom % 3 + 1);
	end
	for (t = 48896; t < 50176; t = t + 1) acc_r(1, t);
	for (t = 0; t < 2048; t = t + 1) acc_r(0, t);
	@(posedge clk_sys) fsel <= 0;
	drain;
	for (t = 0; t < 2048; t = t + 1) disp(0, t);
	@(posedge clk_sys) fsel <= 1;
	drain;
	for (t = 48896; t < 50176; t = t + 1) disp(1, t);
	$display("tb_fb: E FB_MODE3: erase, partial draws, every word read back and displayed (within %0d clk_sys), errors %0d", lat_max, errs - pass);

	$display("tb_fb: SRAM model errors %0d (%0d reads, %0d writes), FIFO drops %0d", s_err, s_rd, s_wr, fb_drop);
	if (errs == 0 && fb_drop == 0 && s_err == 0) $display("tb_fb: PASS"); else $display("tb_fb: FAIL");
	$finish;
end

endmodule
