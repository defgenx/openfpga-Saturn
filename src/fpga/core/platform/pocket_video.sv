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

endmodule

`default_nettype wire
