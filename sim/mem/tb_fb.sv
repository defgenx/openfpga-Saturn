// tb_fb: vdp1_fb_pocket + sram_pocket + SRAM model, with a VDP1-style stimulus and a cd_stream-style
// client sharing the SRAM pins.
//
//   A  draw     random pixel writes and read-modify-write on FB0 (SRAM) and FB1 (M10K) with the VDP1 FB_RDY
//               protocol; throughput in pixels per microsecond
//   B  display  one 16 bit read per dot (8 clk_sys), erase write to the same pixel at DCE_R; FB0_Q must
//               hold the pre-erase pixel; latency from address change to valid FB0_Q
//   C  vberase  VBlank erase: one FB0 write every 2 clk_sys for a whole region while the CD ring reads
//               and writes the same SRAM; no write may be lost, CD data must stay intact
//   +CDBURST    the CD ring takes a bridge word every ~25 clk_sys during test C (a sector burst): the
//               erase FIFO overflows, drops are reported and the run fails (known limit, docs/memory.md)
//   -DSRAMAA_PS=n  SRAM access time in the model (default 10000; 30000 makes the controller fail)
//   +N=count    operations in test A

`timescale 1ps/1ps

module tb_fb;

localparam integer T_RAM = 8730;
localparam integer TCO = 3500, TIN = 1000;

reg clk_ram = 0, clk_sys = 0;
always #(T_RAM/2) clk_ram = ~clk_ram;
always #(T_RAM)   clk_sys = ~clk_sys;
reg rst = 1;

integer n_ops = 4000;
initial if (!$value$plusargs("N=%d", n_ops)) n_ops = 4000;

// ---------------------------------------------------------------- DUT
reg         mode3 = 0;
reg  [17:1] fb0_a = 0, fb1_a = 0;
reg  [15:0] fb0_d = 0, fb1_d = 0;
reg   [1:0] fb0_we = 0, fb1_we = 0;
reg         fb0_rd = 0, fb1_rd = 0;
wire [15:0] fb0_q, fb1_q;
wire        fb_rdy;
wire  [7:0] fb_drop;
wire        sr_hint, sr_req, sr_we, sr_ready, sr_done;
wire [16:0] sr_a; wire [15:0] sr_d, sr_q; wire [1:0] sr_be;

vdp1_fb_pocket fb (
	.clk_sys(clk_sys), .clk_ram(clk_ram), .rst(rst), .FB_MODE3(mode3),
	.FB0_A(fb0_a), .FB0_D(fb0_d), .FB0_WE(fb0_we), .FB0_RD(fb0_rd), .FB0_Q(fb0_q),
	.FB1_A(fb1_a), .FB1_D(fb1_d), .FB1_WE(fb1_we), .FB1_RD(fb1_rd), .FB1_Q(fb1_q),
	.FB_RDY(fb_rdy), .dbg_drop(fb_drop),
	.sr_hint(sr_hint), .sr_req(sr_req), .sr_we(sr_we), .sr_a(sr_a), .sr_d(sr_d), .sr_be(sr_be), .sr_ready(sr_ready), .sr_q(sr_q), .sr_done(sr_done)
);

wire [16:0] sram_a; wire [15:0] sram_dq_o, sram_dq_i; wire sram_dq_oe, sram_oe_n, sram_we_n, sram_ub_n, sram_lb_n;
reg  [16:0] cd_a = 0; reg [15:0] cd_dq_o = 0; reg cd_dq_oe = 0, cd_oe_n = 1, cd_we_n = 1, cd_req = 0;
wire        cd_gnt; wire [15:0] cd_dq_i;

sram_pocket sr (
	.clk(clk_ram),
	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),
	.cd_a(cd_a), .cd_dq_o(cd_dq_o), .cd_dq_oe(cd_dq_oe), .cd_oe_n(cd_oe_n), .cd_we_n(cd_we_n), .cd_ub_n(1'b0), .cd_lb_n(1'b0),
	.cd_req(cd_req), .cd_gnt(cd_gnt), .cd_dq_i(cd_dq_i),
	.fb_hint(sr_hint), .fb_req(sr_req), .fb_we(sr_we), .fb_a(sr_a), .fb_d(sr_d), .fb_be(sr_be), .fb_ready(sr_ready), .fb_q(sr_q), .fb_done(sr_done)
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
`define SRAMAA_PS 10000
`endif
sram_model #(.T_AA(`SRAMAA_PS)) smem (.a(a_d), .dq(dq), .oe_n(oen_d), .we_n(wen_d), .ub_n(ub_d), .lb_n(lb_d), .errors(s_err), .n_rd(s_rd), .n_wr(s_wr));

// ---------------------------------------------------------------- shadows and helpers
reg [15:0] sh0 [0:90111];
reg [15:0] sh1 [0:90111];
integer errs = 0, i;
// FB0 at SRAM word 16384, the FB1 tail (index 65536 ..) at 16384 + 90112
initial for (i = 0; i < 90112; i = i + 1) begin
	sh0[i] = 16'h0; sh1[i] = 16'h0; smem.mem[16384 + i] = 16'h0;
	if (i < 65536) fb.m1[i] = 16'h0; else smem.mem[106496 + i - 65536] = 16'h0;
end

function automatic [17:1] vaddr(input [8:0] x, input [7:0] y);   // VDP1 FBn_A for pixel (x,y), normal mode
	vaddr = {y[7:0], x[8:0]};
endfunction
function automatic [16:0] idx_of(input [8:0] x, input [7:0] y);
	idx_of = {x, y};
endfunction

// ---------------------------------------------------------------- A: draw
integer wr_cnt = 0, t_start, t_end;
task automatic wait_rdy;
	begin @(posedge clk_sys); while (!fb_rdy) @(posedge clk_sys); end
endtask

task automatic draw_w(input integer fb_sel, input [8:0] x, input [7:0] y, input [15:0] d, input [1:0] be);
	reg [15:0] old;
	begin
		wait_rdy;
		if (fb_sel == 0) begin fb0_a <= vaddr(x, y); fb0_d <= d; fb0_we <= be; end
		else             begin fb1_a <= vaddr(x, y); fb1_d <= d; fb1_we <= be; end
		@(posedge clk_sys);
		fb0_we <= 0; fb1_we <= 0;
		if (x < 352) begin
			old = (fb_sel == 0) ? sh0[idx_of(x, y)] : sh1[idx_of(x, y)];
			if (be[0]) old[7:0] = d[7:0];
			if (be[1]) old[15:8] = d[15:8];
			if (fb_sel == 0) sh0[idx_of(x, y)] = old; else sh1[idx_of(x, y)] = old;
		end
	end
endtask

task automatic draw_w0(input [8:0] x, input [7:0] y, input [15:0] d);
	begin draw_w(0, x, y, d, 2'b11); end
endtask

task automatic draw_r(input integer fb_sel, input [8:0] x, input [7:0] y);
	reg [15:0] exp, got;
	begin
		wait_rdy;
		if (fb_sel == 0) begin fb0_a <= vaddr(x, y); fb0_rd <= 1; end
		else             begin fb1_a <= vaddr(x, y); fb1_rd <= 1; end
		@(posedge clk_sys);
		fb0_rd <= 0; fb1_rd <= 0;
		@(posedge clk_sys);
		wait_rdy;
		@(posedge clk_sys);
		got = (fb_sel == 0) ? fb0_q : fb1_q;
		exp = (x >= 352) ? 16'h0 : ((fb_sel == 0) ? sh0[idx_of(x, y)] : sh1[idx_of(x, y)]);
		if (got !== exp) begin errs = errs + 1; if (errs < 10) $display("%0t draw read fb%0d (%0d,%0d) got %h exp %h", $time, fb_sel, x, y, got, exp); end
	end
endtask

// ---------------------------------------------------------------- CD ring client (cd_stream-like, clk_sys)
reg [15:0] cdmem [0:16383];
integer cd_n = 0, cd_err = 0, cd_active = 0;
reg cd_run = 0;
task automatic cd_write_word(input [13:0] a, input [15:0] d);
	begin
		cd_req <= 1;
		@(posedge clk_sys); while (!cd_gnt) @(posedge clk_sys);
		cd_a <= {3'd0, a}; cd_dq_o <= d; cd_dq_oe <= 1;
		@(posedge clk_sys); cd_we_n <= 0;
		@(posedge clk_sys); cd_we_n <= 1;
		@(posedge clk_sys); cd_dq_oe <= 0; cdmem[a] = d;
	end
endtask
task automatic cd_read_word(input [13:0] a);
	reg [15:0] g;
	begin
		cd_req <= 1;
		@(posedge clk_sys); while (!cd_gnt) @(posedge clk_sys);
		cd_a <= {3'd0, a}; cd_oe_n <= 0;
		@(posedge clk_sys); @(posedge clk_sys);
		g = cd_dq_i; cd_oe_n <= 1;
		if (g !== cdmem[a]) begin cd_err = cd_err + 1; if (cd_err < 5) $display("%0t CD read %h exp %h at %h", $time, g, cdmem[a], a); end
	end
endtask
integer cdw;
integer cd_gap = 600;                 // clk_sys between bridge words: 88K words/s at 2x speed is one per 650
initial begin if ($test$plusargs("CDBURST")) cd_gap = 12; end   // a sector burst at the bridge's full rate
always @(posedge cd_run) begin : cdloop
	integer k;
	for (k = 0; k < 16384; k = k + 1) cdmem[k] = 16'hxxxx;
	cdw = 0;
	while (cd_run) begin
		// one bridge word (>= 30 clk_74a = 25 clk_sys): two halves, a feed read every 8th word
		cd_write_word(cdw[13:0], $urandom); cd_req <= 1; cd_write_word(cdw[13:0] + 1, $urandom); cd_req <= 0;
		cd_n = cd_n + 2;
		if (cdw % 16 == 0) begin cd_read_word(cdw[13:0]); cd_req <= 0; cd_n = cd_n + 1; end
		cdw = cdw + 2;
		repeat (cd_gap) @(posedge clk_sys);
	end
end

// ---------------------------------------------------------------- stimulus
integer t, bx, by, px, py, k2, pass;
reg [15:0] rd16;
integer lat, lat_max = 0, lat_n = 0;
reg [15:0] expq;
integer t_a0;

initial begin
	repeat (8) @(posedge clk_sys);
	rst <= 0;
	repeat (8) @(posedge clk_sys);

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

	// ---- B: display read + erase, FB0 is the display buffer
	pass = errs;
	for (by = 0; by < 4; by = by + 1) for (bx = 0; bx < 352; bx = bx + 1) begin
		rd16 = $urandom; sh0[idx_of(bx, by)] = rd16; smem.mem[16384 + idx_of(bx, by)] = rd16;
	end
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
			// erase write at DCE_R (this is the same address), with 0x8000 + position
			fb0_we <= 2'b11; fb0_d <= {1'b1, bx[7:0], by[6:0]};
			@(posedge clk_sys);
			fb0_we <= 2'b00;
			sh0[idx_of(bx, by)] = {1'b1, bx[7:0], by[6:0]};
			// FB0_Q must keep the pre-erase pixel until the next address
			if (fb0_q !== expq) begin errs = errs + 1; if (errs - pass < 10) $display("%0t erase disturbed FB0_Q (%0d,%0d)", $time, bx, by); end
			repeat (3) @(posedge clk_sys);
		end
	end
	$display("tb_fb: B display: pixel on FB0_Q within %0d clk_sys of the address change (worst of %0d), errors %0d", lat_max, lat_n, errs - pass);

	// ---- C: VBlank erase with the CD ring using the same SRAM
	pass = errs;
	cd_run = 1;
	repeat (4) @(posedge clk_sys);
	for (t = 0; t < 30000; t = t + 1) begin
		@(posedge clk_sys);
		fb0_a <= vaddr(t % 352, (t / 352) % 85);
		fb0_d <= 16'h4000 + t;
		fb0_we <= 2'b11;
		sh0[idx_of(t % 352, (t / 352) % 85)] = 16'h4000 + t;
		@(posedge clk_sys);
		fb0_we <= 2'b00;
	end
	cd_run = 0;
	repeat (4000) @(posedge clk_sys);
	for (t = 0; t < 352 * 85; t = t + 37) begin
		draw_r(0, t % 352, (t / 352) % 85);
	end
	$display("tb_fb: C vberase: 30000 writes at 1 per 2 clk_sys with %0d CD accesses, FIFO drops %0d, errors %0d, CD read errors %0d",
	         cd_n, fb_drop, errs - pass, cd_err);

	// ---- B2: FB1 is the display buffer, tail columns 256..351 come from the SRAM
	pass = errs; lat_max = 0; lat_n = 0;
	for (by = 0; by < 4; by = by + 1) for (bx = 250; bx < 352; bx = bx + 1) begin
		rd16 = $urandom; sh1[idx_of(bx, by)] = rd16;
		if (bx < 256) fb.m1[idx_of(bx, by)] = rd16; else smem.mem[106496 + idx_of(bx, by) - 65536] = rd16;
	end
	for (by = 0; by < 4; by = by + 1) begin
		for (bx = 250; bx < 352; bx = bx + 1) begin
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
			fb1_we <= 2'b11; fb1_d <= {1'b1, bx[7:0], by[6:0]};
			@(posedge clk_sys);
			fb1_we <= 2'b00;
			sh1[idx_of(bx, by)] = {1'b1, bx[7:0], by[6:0]};
			if (fb1_q !== expq) begin errs = errs + 1; if (errs - pass < 10) $display("%0t erase disturbed FB1_Q (%0d,%0d)", $time, bx, by); end
			repeat (3) @(posedge clk_sys);
		end
	end
	$display("tb_fb: B2 FB1 display (M10K to tail boundary at column 256): valid within %0d clk_sys (worst of %0d), errors %0d", lat_max, lat_n, errs - pass);

	// ---- D: VBlank erase of the FB1 tail (one write per 2 clk_sys) while FB0 is drawn into with the FB_RDY protocol,
	// and the other way round: FB0 erase while FB1 tail draws
	pass = errs;
	fork
		begin : erase1
			integer e;
			for (e = 0; e < 20000; e = e + 1) begin
				@(posedge clk_sys);
				fb1_a <= vaddr(256 + (e % 96), (e / 96) % 208);
				fb1_d <= 16'h2000 + e; fb1_we <= 2'b11;
				sh1[idx_of(256 + (e % 96), (e / 96) % 208)] = 16'h2000 + e;
				@(posedge clk_sys);
				fb1_we <= 2'b00;
			end
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
		bx = 256 + (t % 96); by = (t / 96) % 208;
		@(posedge clk_sys); fb1_a <= vaddr(bx, by);
		repeat (10) @(posedge clk_sys);
		if (fb1_q !== sh1[idx_of(bx, by)]) begin errs = errs + 1; if (errs - pass < 10) $display("D tail erase (%0d,%0d) got %h exp %h", bx, by, fb1_q, sh1[idx_of(bx, by)]); end
	end
	fork
		begin : erase0
			integer e;
			for (e = 0; e < 20000; e = e + 1) begin
				@(posedge clk_sys);
				fb0_a <= vaddr(e % 352, (e / 352) % 56);
				fb0_d <= 16'h6000 + e; fb0_we <= 2'b11;
				sh0[idx_of(e % 352, (e / 352) % 56)] = 16'h6000 + e;
				@(posedge clk_sys);
				fb0_we <= 2'b00;
			end
		end
		begin : draw1
			integer d;
			for (d = 0; d < 3000; d = d + 1) begin
				px = 256 + $urandom % 96; py = 100 + $urandom % 156;
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

	$display("tb_fb: SRAM model errors %0d (%0d reads, %0d writes)", s_err, s_rd, s_wr);
	if (errs == 0 && cd_err == 0 && fb_drop == 0 && s_err == 0) $display("tb_fb: PASS"); else $display("tb_fb: FAIL");
	$finish;
end

endmodule
