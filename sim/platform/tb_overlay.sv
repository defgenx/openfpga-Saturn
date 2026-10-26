// tb_overlay: POCKET_DEBUG_OVERLAY pocket_video with no Saturn video: generated timing, 16 squares.
`timescale 1ns/1ps
`define TXT_LAT 4
module tb_overlay;
reg clk_sys = 0, clk_vid = 0; reg [1:0] c = 0;
always #5 clk_sys = ~clk_sys;
always @(posedge clk_sys) begin c <= c + 1; if (c == 3) clk_vid <= 1; if (c == 1) clk_vid <= 0; end
wire [23:0] rgb; wire de, hs, vs, skip;
reg [15:0] g = 16'b1010_0000_0000_0011, y = 16'b0000_0000_1100_0000;
reg [31:0] wd = 0; reg we = 0;
pocket_video dut (.clk_sys(clk_sys), .clk_vid(clk_vid), .R(8'h0), .G(8'h0), .B(8'h0), .DCLK(1'b0), .HS_N(1'b1), .VS_N(1'b1),
	.HBL_N(1'b0), .VBL_N(1'b0), .HRES(2'b0), .VRES(2'b0), .video_rgb(rgb), .video_de(de), .video_hs(hs), .video_vs(vs), .video_skip(skip),
	.dbg_g(g), .dbg_y(y), .dbg_alive(1'b0),
	.dbg_wd(wd), .dbg_lo(4'd6), .dbg_we(we));
// text buffer: digit n = (n*5+3) & 15, written once at start
function [14:0] glyph(input [3:0] v);   // 5 rows x 3 bits, independent of the DUT's ROM
	case (v)
	4'h0: glyph = 15'b111101101101111; 4'h1: glyph = 15'b010110010010111; 4'h2: glyph = 15'b111001111100111;
	4'h3: glyph = 15'b111001111001111; 4'h4: glyph = 15'b101101111001001; 4'h5: glyph = 15'b111100111001111;
	4'h6: glyph = 15'b111100111101111; 4'h7: glyph = 15'b111001010010010; 4'h8: glyph = 15'b111101111101111;
	4'h9: glyph = 15'b111101111001111; 4'hA: glyph = 15'b010101111101101; 4'hB: glyph = 15'b110101110101110;
	4'hC: glyph = 15'b011100100100011; 4'hD: glyph = 15'b110101101101110; 4'hE: glyph = 15'b111100110100111;
	default: glyph = 15'b111100110100100;
	endcase
endfunction
integer ti, tbad = 0, tcell = 0, tlit = 0;
initial begin
	for (ti = 0; ti < 8; ti = ti + 1) wd[31 - 4*ti -: 4] = (ti*5+3) & 15;
	@(negedge clk_sys); we = 1; @(negedge clk_sys); we = 0;
end
integer x = 0, line = 0, bad = 0, nde = 0, nvs = 0, nhs = 0, slots = 0;
reg de_q = 0;
always @(posedge clk_vid) begin
	de_q <= de;
	if (de) begin
		nde = nde + 1;
		if (line == 3) begin : chk
			reg [23:0] e; integer idx;
			idx = x / 32;
			e = (x % 32 >= 24 || idx > 15) ? 24'h202020 : g[idx] ? 24'h00FF00 : y[idx] ? 24'hFFFF00 : 24'hFF0000;
			if (rgb !== e) begin bad = bad + 1; if (bad < 5) $display("x=%0d got %h exp %h", x, rgb, e); end
		end
		if (line >= 16 && line < 32 && x >= 32 + `TXT_LAT && x < 160 + `TXT_LAT) begin : tx
			integer rxx, cl, gx, gy, lcn; reg [14:0] glv; reg expb, isw;
			rxx = x - 32 - `TXT_LAT; cl = (line - 16) / 16 * 8 + rxx / 16; gx = (rxx % 16) / 4; lcn = (line - 16) % 16; gy = lcn / 2;
			glv = glyph((cl*5+3) & 15);
			expb = (gx < 3 && gy < 5) ? glv[14 - gy*3 - gx] : 1'b0;
			isw = (rgb === 24'hFFFFFF);
			if (expb) tlit = tlit + 1;
			if (!(rgb === 24'hFFFFFF || rgb === 24'h0) || isw !== expb) begin tbad = tbad + 1; if (tbad < 5) $display("text line %0d x %0d cl %0d isw %h exp %b", line, x, cl, rgb, expb); end
		end
		x = x + 1;
	end
	if (de_q & ~de) begin x = 0; line = line + 1; if (rgb[15:13] === 3'd0 && rgb[23:16] === 0) slots = slots + 1; end
	if (vs) begin nvs = nvs + 1; line = 0; end
	if (hs) nhs = nhs + 1;
end
initial begin
	#(60_000_000);   // several frames
	$display("lines %0d, de pixels %0d, vs %0d, hs %0d, slot words %0d, pixel mismatches %0d, text mismatches %0d (lit %0d)", line, nde, nvs, nhs, slots, bad, tbad, tlit);
	if (bad == 0 && tbad == 0 && tlit > 1000 && nvs >= 2 && nde > 640*224*2) $display("RESULT: PASS"); else $display("RESULT: FAIL");
	$finish;
end
endmodule
