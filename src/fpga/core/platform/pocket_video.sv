// Saturn pixel stream to the APF scaler.
//
// Output clock clk_vid = clk_sys / 4, phase aligned (same PLL). Hi-res modes are one Saturn pixel
// per clk_vid; low-res pixels are held two clk_vid, so the picture is 640 or 704 wide in every mode.
// Scaler slot = {height 224/240/256, width 640/704}, see dist/Cores/defgenx.Saturn/video.json.
// Interlaced fields go out as separate progressive frames of the field height (no weave, no buffer).
//
// clk_sys side registers a pixel and the syncs at DCLK and latches the mode at VBlank start; the
// clk_vid side samples them every cycle. A Saturn pixel lasts 4 (hi-res) or 8 clk_sys, so it is
// sampled once or twice.

`default_nettype none

module pocket_video (
	input  wire        clk_sys,
	input  wire        clk_vid,

	input  wire  [7:0] R,
	input  wire  [7:0] G,
	input  wire  [7:0] B,
	input  wire        DCLK,
	input  wire        HS_N,
	input  wire        VS_N,
	input  wire        HBL_N,
	input  wire        VBL_N,
	input  wire  [1:0] HRES,        // [0] 0 = 320, 1 = 352 wide
	input  wire  [1:0] VRES,        // 0 = 224, 1 = 240, 2/3 = 256 lines

	output reg  [23:0] video_rgb,
	output reg         video_de,
	output reg         video_hs,
	output reg         video_vs,
	output wire        video_skip
`ifdef POCKET_DEBUG_OVERLAY
	,
	input  wire [15:0] dbg_g,       // square green
	input  wire [15:0] dbg_y,       // square yellow (when not green), else red
	input  wire        dbg_alive,   // the Saturn produces sync and DE; else a 640x224 test timing is generated
	input  wire [15:0] dbg_wd,      // text row (clk_sys): word 0 = digits 0..3, word 1 = digits 4..7 (digit 0 in the top nibble)
	input  wire        dbg_wa,
	input  wire        dbg_we
`endif
);

assign video_skip = 1'b0;

// ---- clk_sys: capture
reg [23:0] pix;
reg        de, hs, vs;
reg  [2:0] slot;
reg        vbl_old;

always @(posedge clk_sys) begin
	if (DCLK) begin
		pix <= {R, G, B};
		de  <= HBL_N & VBL_N;
		hs  <= ~HS_N;
		vs  <= ~VS_N;
	end

	// mode is locked for the whole frame, as in MiSTer's top
	vbl_old <= VBL_N;
	if (vbl_old & ~VBL_N)
		slot <= {(VRES == 2'd0) ? 2'd0 : (VRES == 2'd1) ? 2'd1 : 2'd2, HRES[0]};
end

`ifdef POCKET_DEBUG_OVERLAY
// ---- clk_vid: debug build. Timing is the Saturn's, or a generated 858 x 262 frame when it has none; a
// row of 16 status squares (24 x 12 px, pitch 32) is drawn over the picture (docs/debug-overlay.md).
reg  [9:0] x = 10'd0;
reg  [8:0] y = 9'd0;
reg        de_d, hs_d, vs_d;
reg  [3:0] hs_dly;
wire       gen  = ~dbg_alive;
wire       s_de = gen ? (x < 10'd640 && y < 9'd224) : de;
wire       s_hs = gen ? (x >= 10'd700 && x < 10'd732) : hs;
wire       s_vs = gen ? (y >= 9'd232 && y < 9'd235) : vs;
wire       in_sq = x[9:5] < 5'd16 && y < 9'd12 && x[4:0] < 5'd24;
wire [3:0] sq = x[8:5];
wire [23:0] sq_c = dbg_g[sq] ? 24'h00FF00 : dbg_y[sq] ? 24'hFFFF00 : 24'hFF0000;


// ---- hex text block: 2 rows x 8 digits at x 32..159, y 16..47, cell 16 x 16, glyph 3 x 5 scaled 4 x 2.
// Digits come from a 32 x 4 M10K buffer written in clk_sys; the font is a 128 x 3 M10K ROM.
(* ramstyle = "M10K" *) reg [15:0] tbuf [0:1];
(* ramstyle = "M10K", romstyle = "M10K" *) reg [2:0] font [0:127];
initial begin
	font[0] = 3'b111;
	font[1] = 3'b101;
	font[2] = 3'b101;
	font[3] = 3'b101;
	font[4] = 3'b111;
	font[8] = 3'b010;
	font[9] = 3'b110;
	font[10] = 3'b010;
	font[11] = 3'b010;
	font[12] = 3'b111;
	font[16] = 3'b111;
	font[17] = 3'b001;
	font[18] = 3'b111;
	font[19] = 3'b100;
	font[20] = 3'b111;
	font[24] = 3'b111;
	font[25] = 3'b001;
	font[26] = 3'b111;
	font[27] = 3'b001;
	font[28] = 3'b111;
	font[32] = 3'b101;
	font[33] = 3'b101;
	font[34] = 3'b111;
	font[35] = 3'b001;
	font[36] = 3'b001;
	font[40] = 3'b111;
	font[41] = 3'b100;
	font[42] = 3'b111;
	font[43] = 3'b001;
	font[44] = 3'b111;
	font[48] = 3'b111;
	font[49] = 3'b100;
	font[50] = 3'b111;
	font[51] = 3'b101;
	font[52] = 3'b111;
	font[56] = 3'b111;
	font[57] = 3'b001;
	font[58] = 3'b010;
	font[59] = 3'b010;
	font[60] = 3'b010;
	font[64] = 3'b111;
	font[65] = 3'b101;
	font[66] = 3'b111;
	font[67] = 3'b101;
	font[68] = 3'b111;
	font[72] = 3'b111;
	font[73] = 3'b101;
	font[74] = 3'b111;
	font[75] = 3'b001;
	font[76] = 3'b111;
	font[80] = 3'b010;
	font[81] = 3'b101;
	font[82] = 3'b111;
	font[83] = 3'b101;
	font[84] = 3'b101;
	font[88] = 3'b110;
	font[89] = 3'b101;
	font[90] = 3'b110;
	font[91] = 3'b101;
	font[92] = 3'b110;
	font[96] = 3'b011;
	font[97] = 3'b100;
	font[98] = 3'b100;
	font[99] = 3'b100;
	font[100] = 3'b011;
	font[104] = 3'b110;
	font[105] = 3'b101;
	font[106] = 3'b101;
	font[107] = 3'b101;
	font[108] = 3'b110;
	font[112] = 3'b111;
	font[113] = 3'b100;
	font[114] = 3'b110;
	font[115] = 3'b100;
	font[116] = 3'b111;
	font[120] = 3'b111;
	font[121] = 3'b100;
	font[122] = 3'b110;
	font[123] = 3'b100;
	font[124] = 3'b100;
end
always @(posedge clk_sys) if (dbg_we) tbuf[dbg_wa] <= dbg_wd;

localparam TXT_LAT = 4;                    // clk_vid cycles from x to the pixel decision
wire       t_in  = !y[8] && y[7:4] >= 4'd1 && y[7:4] <= 4'd1 && x[9:4] >= 6'd2 && x[9:4] <= 6'd9;
wire [1:0] t_row = y[5:4] - 2'd1;
wire [2:0] t_col = x[6:4] - 3'd2;
reg  [2:0] t_c0;
reg [15:0] t_word;
reg  [3:0] t_nib;
reg  [2:0] t_bits;
reg  [6:0] t_p0, t_p1, t_p2;               // {in, gy < 5, gx[1:0], gy[2:0]}
reg        t_on = 1'b0, t_bg = 1'b0;
always @(posedge clk_vid) begin
	t_c0   <= t_col;
	t_word <= tbuf[t_col[2]];
	t_p0   <= {t_in, y[3:1] < 3'd5, x[3:2], y[3:1]};
	t_nib  <= t_word[(2'd3 - t_c0[1:0]) * 4 +: 4];
	t_p1   <= t_p0;
	t_bits <= font[{t_nib, t_p1[2:0]}];
	t_p2   <= t_p1;
	t_bg   <= t_p2[6];
	t_on   <= t_p2[6] & t_p2[5] & (t_p2[4:3] != 2'd3) & t_bits[2 - t_p2[4:3]];
end

always @(posedge clk_vid) begin
	de_d <= s_de;
	hs_d <= s_hs;
	vs_d <= s_vs;

	if (gen) begin
		x <= (x == 10'd857) ? 10'd0 : x + 10'd1;
		if (x == 10'd857) y <= (y == 9'd261) ? 9'd0 : y + 9'd1;
	end else begin
		x <= de ? x + 10'd1 : 10'd0;
		if (de_d & ~de) y <= y + 9'd1;
		if (vs & ~vs_d) y <= 9'd0;
	end

	video_de  <= s_de;
	video_rgb <= !s_de ? 24'h0 : t_on ? 24'hFFFFFF : t_bg ? 24'h000000 : (in_sq & x[9:5] < 5'd16) ? sq_c : gen ? 24'h202020 : pix;
	video_vs  <= s_vs & ~vs_d;
	hs_dly    <= {hs_dly[2:0], s_hs & ~hs_d};
	video_hs  <= hs_dly[3];

	if (de_d & ~s_de)
		video_rgb <= {8'h00, gen ? 3'd0 : slot, 13'h0};
end
`else
// ---- clk_vid: sync pulses and slot word
reg        de_d, hs_d, vs_d;
reg  [3:0] hs_dly;

always @(posedge clk_vid) begin
	de_d <= de;
	hs_d <= hs;
	vs_d <= vs;

	video_de  <= de;
	video_rgb <= de ? pix : 24'h0;
	video_vs  <= vs & ~vs_d;

	// HS at least 3 clocks after VS
	hs_dly   <= {hs_dly[2:0], hs & ~hs_d};
	video_hs <= hs_dly[3];

	// first clock after the last pixel of a line selects the scaler slot
	if (de_d & ~de)
		video_rgb <= {8'h00, slot, 13'h0};
end

`endif

endmodule

`default_nettype wire
