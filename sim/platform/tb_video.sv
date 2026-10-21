// pocket_video: synthetic Saturn pixel stream for one width/height combination. Checks, per frame: 640/704 DE
// clocks per line, the right number of lines, low-res pixels doubled, the scaler slot word on the first clock after
// each line, HS at least 3 clocks after VS, RGB zero outside DE and the slot word.
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
	localparam HIRES = `HIRES_V, WIDE = `WIDE_V, VRES = `VRES_V;       // HRES[1], HRES[0], VRES[1:0]
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
	                  .video_rgb(rgb), .video_de(de), .video_hs(hs), .video_vs(vs), .video_skip(skip));

	always @(posedge clk_sys) begin
		DCLK <= 0;
		dc = dc + 1;
		if (dc == DOT) begin
			dc = 0;
			DCLK <= 1;
			x = x + 1;
			if (x == TOTW) begin x = 0; y = y + 1; if (y == TOTH) y = 0; end
			HBL_N <= (x < W);
			VBL_N <= (y >= 8 && y < 8 + H);
			HS_N  <= !(x >= W + 10 && x < W + 30);
			VS_N  <= !(y >= 1 && y < 4 && x < W + 30);
			R <= x[7:0]; G <= y[7:0]; B <= 8'hA5;
		end
	end

	integer lines = 0, de_run = 0, since_vs = 1000, errors = 0, frames = 0, slot_checks = 0, hs_count = 0;
	reg de_q = 0;
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
			if (de_q) begin
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

	initial begin
		#(90e6);
		$display("HIRES=%0d WIDE=%0d VRES=%0d: frames %0d, lines %0d, hs %0d, slot checks %0d, errors %0d", HIRES, WIDE, VRES, frames, lines, hs_count, slot_checks, errors);
		if (errors == 0 && frames >= 3 && slot_checks > 100) $display("RESULT: PASS"); else $display("RESULT: FAIL");
		$finish;
	end
endmodule
