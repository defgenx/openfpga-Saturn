// tb_overlay: POCKET_DEBUG_OVERLAY pocket_video with no Saturn video: generated timing, 16 squares.
`timescale 1ns/1ps
module tb_overlay;
reg clk_sys = 0, clk_vid = 0; reg [1:0] c = 0;
always #5 clk_sys = ~clk_sys;
always @(posedge clk_sys) begin c <= c + 1; if (c == 3) clk_vid <= 1; if (c == 1) clk_vid <= 0; end
wire [23:0] rgb; wire de, hs, vs, skip;
reg [15:0] g = 16'b1010_0000_0000_0011, y = 16'b0000_0000_1100_0000;
pocket_video dut (.clk_sys(clk_sys), .clk_vid(clk_vid), .R(8'h0), .G(8'h0), .B(8'h0), .DCLK(1'b0), .HS_N(1'b1), .VS_N(1'b1),
	.HBL_N(1'b0), .VBL_N(1'b0), .HRES(2'b0), .VRES(2'b0), .video_rgb(rgb), .video_de(de), .video_hs(hs), .video_vs(vs), .video_skip(skip),
	.dbg_g(g), .dbg_y(y), .dbg_alive(1'b0));
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
		x = x + 1;
	end
	if (de_q & ~de) begin x = 0; line = line + 1; if (rgb[15:13] === 3'd0 && rgb[23:16] === 0) slots = slots + 1; end
	if (vs) begin nvs = nvs + 1; line = 0; end
	if (hs) nhs = nhs + 1;
end
initial begin
	#(60_000_000);   // several frames
	$display("lines %0d, de pixels %0d, vs %0d, hs %0d, slot words %0d, pixel mismatches %0d", line, nde, nvs, nhs, slots, bad);
	if (bad == 0 && nvs >= 2 && nde > 640*224*2) $display("RESULT: PASS"); else $display("RESULT: FAIL");
	$finish;
end
endmodule
