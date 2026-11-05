// pocket_video: synthetic Saturn pixel stream for one width/height combination. Checks, per frame: 640/704 DE
// clocks per line, the right number of lines, low-res pixels doubled, the scaler slot word on the first clock after
// each line, HS at least 3 clocks after VS, RGB zero outside DE and the slot word. MISMATCH_V runs the other clock
// mode: NTSC 320 timing on the 352 clock and PAL 352 timing on the 320 clock must produce no DE, HS or VS.
`timescale 1ns/1ps
module tb_video;
	`ifndef HIRES_V
`define HIRES_V 0
`endif
`ifndef WIDE_V
`define WIDE_V 0
`endif
`ifndef VRES_V
`define VRES_V 0
`endif
`ifndef MISMATCH_V
`define MISMATCH_V 0
`endif
`ifndef PAL_V
`define PAL_V 0
`endif
`ifndef RESTART_V
`define RESTART_V 0
`endif
	localparam HIRES = `HIRES_V, WIDE = `WIDE_V, VRES = `VRES_V;       // HRES[1], HRES[0], VRES[1:0]
	localparam MISMATCH = `MISMATCH_V;             // 1: the clock mode is the other width class
	localparam PAL = `PAL_V;
	// gated: NTSC 320 timing on the 352 clock (63.8 Hz), PAL 352 timing on the 320 clock (46.9 Hz)
	localparam GATED = MISMATCH && (PAL ? WIDE : !WIDE);
	// RESTART_V: matched mode, then DCLK stops for 2 ms with VS_N low (VDP2 reset at a CKCHG) and the clock mode
	// becomes the other one; NTSC 320 then runs on the 352 clock: no VS or DE may follow
	localparam RESTART = `RESTART_V;
	reg stopped = 0, swapped = 0;
	initial if (RESTART) begin #(60e6); stopped = 1; #(2e6); swapped = 1; stopped = 0; end
	// PARTIAL_V: matched 352 mode, then DCLK stops for 2 ms and the timing restarts mid-frame (line 100) with 320-wide
	// lines while HRES already reads 352, until the middle of the next frame (the CKCHG352 sequence: the VDP2 leaves
	// reset in 320 timing and the game writes TVMD). Every DE line must stay 704 wide and every frame H lines.
`ifndef PARTIAL_V
`define PARTIAL_V 0
`endif
	localparam PARTIAL = `PARTIAL_V;
	reg narrow = 0; integer rs_lines = 0; reg restarted = 0;
	initial if (PARTIAL) begin #(40e6); stopped = 1; #(2e6); stopped = 0; restarted = 1; narrow = 1; end
	localparam DOT  = HIRES ? 4 : 8;               // clk_sys per Saturn pixel
	localparam W    = (WIDE ? 352 : 320) * (HIRES ? 2 : 1);   // pixels per line at the Saturn pixel rate
	localparam TOTW = W + 60 * (HIRES ? 2 : 1);
	localparam H    = VRES == 0 ? 224 : VRES == 1 ? 240 : 256;
	localparam TOTH = H + 30;
	localparam OUTW = WIDE ? 704 : 640;
	localparam [2:0] SLOT = (VRES == 0 ? 0 : VRES == 1 ? 1 : 2) * 2 + WIDE;

	reg clk_sys = 0, clk_vid = 0;
	reg [1:0] vdiv = 0;
	always #8.73 clk_sys = ~clk_sys;
	always @(posedge clk_sys) begin vdiv <= vdiv + 1'b1; if (vdiv[0]) clk_vid <= ~clk_vid; end

	reg [7:0] R = 0, G = 0, B = 0;
	reg DCLK = 0, HS_N = 1, VS_N = 1, HBL_N = 0, VBL_N = 0;
	integer x = 0, y = 0, dc = 0;
	wire [23:0] rgb; wire de, hs, vs, skip;

	pocket_video dut (.clk_sys(clk_sys), .clk_vid(clk_vid), .R(R), .G(G), .B(B), .DCLK(DCLK), .HS_N(HS_N), .VS_N(VS_N),
	                  .HBL_N(HBL_N), .VBL_N(VBL_N), .HRES({HIRES[0], WIDE[0]}), .VRES(VRES[1:0]),
	                  .clk_md({PAL[0], WIDE[0] ^ MISMATCH[0] ^ swapped}),
	                  .video_rgb(rgb), .video_de(de), .video_hs(hs), .video_vs(vs), .video_skip(skip));

	always @(posedge clk_sys) begin
		DCLK <= 0;
		dc = dc + 1;
		if (stopped) begin dc = 0; VS_N <= 1'b0; if (PARTIAL) begin x = 0; y = 100; end end
		else if (dc == DOT) begin
			dc = 0;
			DCLK <= 1;
			x = x + 1;
			if (x == TOTW) begin x = 0; y = y + 1; if (y == TOTH) y = 0;
				if (narrow) begin rs_lines = rs_lines + 1; if (rs_lines == TOTH - 100 + TOTH / 2) narrow = 0; end end
			HBL_N <= (x < (narrow ? W * 320 / 352 : W));
			VBL_N <= (y >= 8 && y < 8 + H);
			HS_N  <= !(x >= W + 10 && x < W + 30);
			VS_N  <= !(y >= 1 && y < 4 && x < W + 30);
			R <= x[7:0]; G <= y[7:0]; B <= 8'hA5;
		end
	end

	integer lines = 0, de_run = 0, since_vs = 1000, errors = 0, frames = 0, slot_checks = 0, hs_count = 0;
	reg de_q = 0;
	integer n_de = 0;
	integer n_after = 0;
	always @(posedge clk_vid) begin if (de || vs) n_de = n_de + 1; if (swapped && (de || vs || hs)) n_after = n_after + 1; end
	reg [23:0] prev_px = 0;
	always @(posedge clk_vid) begin
		de_q <= de;
		since_vs = since_vs + 1;
		if (vs) begin
			since_vs = 0;
			if (lines != 0) begin
				if (lines != H) begin errors = errors + 1; $display("frame lines %0d want %0d", lines, H); end
				frames = frames + 1;
			end
			lines = 0;
		end
		if (hs) begin hs_count = hs_count + 1; if (since_vs < 3) begin errors = errors + 1; $display("HS %0d clocks after VS", since_vs); end end
		if (de) begin
			de_run = de_run + 1;
			if (!HIRES && (de_run % 2 == 0) && rgb != prev_px) begin errors = errors + 1; $display("low-res pixel not doubled at %0d", de_run); end
			prev_px <= rgb;
		end else begin
			if (de_q && PARTIAL && stopped) de_run = 0;   // the line the reset cuts
			else if (de_q) begin
				if (de_run != OUTW) begin errors = errors + 1; $display("DE run %0d want %0d", de_run, OUTW); end
				lines = lines + 1;
				de_run = 0;
				if (frames >= 2) begin
					slot_checks = slot_checks + 1;
					if (rgb !== {8'h00, SLOT, 13'h0}) begin errors = errors + 1; $display("slot word %h want %h", rgb, {8'h00, SLOT, 13'h0}); end
				end
			end else if (rgb != 0) begin
				errors = errors + 1; $display("rgb %h outside DE", rgb);
			end
		end
	end

	integer frames_rs = 0;
	always @(posedge clk_vid) if (vs && restarted && lines != 0) frames_rs = frames_rs + 1;
	// the frame the reset cuts is already out (no frame buffer); it is not counted
	always @(posedge stopped) if (PARTIAL) lines = 0;
	initial begin
		#(PARTIAL ? 130e6 : 90e6);
		if (PARTIAL) begin
			$display("PARTIAL: errors %0d, frames after the restart %0d", errors, frames_rs);
			if (errors == 0 && frames_rs >= 2) $display("RESULT: PASS"); else $display("RESULT: FAIL");
			$finish;
		end
		$display("HIRES=%0d WIDE=%0d VRES=%0d MISMATCH=%0d PAL=%0d GATED=%0d: frames %0d, lines %0d, hs %0d, slot checks %0d, errors %0d", HIRES, WIDE, VRES, MISMATCH, PAL, GATED, frames, lines, hs_count, slot_checks, errors);
		if (RESTART) begin
			$display("RESTART: frames before %0d, DE/HS/VS clocks after the restart %0d", frames, n_after);
			if (frames >= 2 && n_after == 0) $display("RESULT: PASS"); else $display("RESULT: FAIL");
		end else if (GATED) begin
			if (errors == 0 && frames == 0 && hs_count == 0 && n_de == 0) $display("RESULT: PASS"); else $display("RESULT: FAIL");
		end else if (errors == 0 && frames >= 3 && slot_checks > 100) $display("RESULT: PASS"); else $display("RESULT: FAIL");
		$finish;
	end
endmodule
