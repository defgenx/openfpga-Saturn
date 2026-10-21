// SCSP output (44.1 kHz, signed 16 bit stereo) to 48 kHz, linear interpolation.
//
// The 44.1 kHz strobe counts SCSP_CE (22.5792 MHz / 512). The 48 kHz strobe is a phase accumulator on
// in_clk, so both follow the PLL mode. `ph` is the output position inside [prev, cur] in 1/65536
// input samples; each output advances it by 44100/48000, each input sample shifts the window by one.
// Output = prev + (cur - prev) * ph, one multiplier shared by both channels.

`default_nettype none

module pocket_audio (
	input  wire               clk,
	input  wire               rst,
	input  wire               scsp_ce,
	input  wire        [31:0] in_clk,
	input  wire signed [15:0] in_l,
	input  wire signed [15:0] in_r,
	output reg  signed [15:0] out_l,
	output reg  signed [15:0] out_r
);

localparam [15:0] STEP = 16'd60211;        // 65536 * 44100 / 48000

reg [8:0]  scsp_cnt;
reg [31:0] acc;
reg signed [15:0] prev_l, prev_r, cur_l, cur_r;
reg [16:0] ph;
reg        in_ev, out_ev, out_pend;

always @(posedge clk) begin
	in_ev  <= 1'b0;
	out_ev <= 1'b0;

	if (scsp_ce) begin
		scsp_cnt <= scsp_cnt + 9'd1;
		if (&scsp_cnt) in_ev <= 1'b1;
	end

	acc <= acc + 32'd48000;
	if (acc + 32'd48000 >= in_clk) begin
		acc    <= acc + 32'd48000 - in_clk;
		out_ev <= 1'b1;
	end

	if (rst) begin
		scsp_cnt <= 9'd0;
		acc      <= 32'd0;
	end
end

// 3 clocks per output: left product, right product, then store
reg [1:0] st;
reg signed [16:0] dl, dr;
reg signed [34:0] prod;
reg [16:0] phn;

always @(posedge clk) begin
	if (in_ev) begin
		prev_l <= cur_l;  prev_r <= cur_r;
		cur_l  <= in_l;   cur_r  <= in_r;
		ph     <= (ph >= 17'd65536) ? ph - 17'd65536 : 17'd0;
	end

	case (st)
	2'd0: if (out_pend && !in_ev) begin
		out_pend <= 1'b0;
		phn <= (ph >= 17'd65535) ? 17'd65535 : ph;
		dl  <= $signed({cur_l[15], cur_l}) - $signed({prev_l[15], prev_l});
		dr  <= $signed({cur_r[15], cur_r}) - $signed({prev_r[15], prev_r});
		ph  <= (ph >= 17'd98304) ? ph : ph + {1'b0, STEP};
		st  <= 2'd1;
	end
	2'd1: begin
		prod <= dl * $signed({1'b0, phn});
		st   <= 2'd2;
	end
	2'd2: begin
		out_l <= prev_l + prod[31:16];
		prod  <= dr * $signed({1'b0, phn});
		st    <= 2'd3;
	end
	2'd3: begin
		out_r <= prev_r + prod[31:16];
		st    <= 2'd0;
	end
	endcase

	if (out_ev) out_pend <= 1'b1;
	if (rst) begin st <= 2'd0; out_pend <= 1'b0; ph <= 17'd0; end
end

endmodule

`default_nettype wire
