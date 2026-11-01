// SCSP output (44.1 kHz, signed 16 bit stereo) to 48 kHz, linear interpolation.
//
// The 44.1 kHz strobe counts SCSP_CE (22.5792 MHz / 512). The 48 kHz strobe is a phase accumulator on
// in_clk (clk Hz), given as out_thr = in_clk - 48000 and out_nstep = 48000 - in_clk, so both follow the PLL mode. `ph` is the output position inside [prev, cur] in 1/65536
// input samples; each output advances it by 44100/48000, each input sample shifts the window by one.
// Output = prev + (cur - prev) * ph, one multiply-add (DSP block) per channel.

`default_nettype none

module pocket_audio (
	input  wire               clk,
	input  wire               rst,
	input  wire               scsp_ce,
	input  wire        [26:0] out_thr,
	input  wire        [26:0] out_nstep,
	input  wire signed [15:0] in_l,
	input  wire signed [15:0] in_r,
	output reg  signed [15:0] out_l,
	output reg  signed [15:0] out_r,
	output reg                out_stb       // one clk after out_r is written: a new 48 kHz sample is on out_l/out_r
);

localparam [15:0] STEP = 16'd60211;        // 65536 * 44100 / 48000

reg [8:0]  scsp_cnt;
reg [26:0] acc;                            // acc < in_clk < 2^26
reg signed [15:0] prev_l, prev_r, cur_l, cur_r;
reg [16:0] ph;
reg        in_ev, out_ev, out_pend;

wire        acc_ge = acc >= out_thr;                      // acc + 48000 >= in_clk

always @(posedge clk) begin
	in_ev  <= 1'b0;
	out_ev <= 1'b0;

	if (scsp_ce) begin
		scsp_cnt <= scsp_cnt + 9'd1;
		if (&scsp_cnt) in_ev <= 1'b1;
	end

	acc <= acc + (acc_ge ? out_nstep : 27'd48000);
	if (acc_ge) out_ev <= 1'b1;

	if (rst) begin
		scsp_cnt <= 9'd0;
		acc      <= 27'd0;
	end
end

// 3 clocks per output: left written at st 2, right at st 3 (prev_* as they are in that clock)
reg [1:0] st;
reg signed [16:0] dl, dr;
reg [15:0] phn;
wire [15:0] mac_l, mac_r;

pocket_audio_mac mac_lane_l (.clk(clk), .d(dl), .ph(phn), .base(prev_l), .q(mac_l));
pocket_audio_mac mac_lane_r (.clk(clk), .d(dr), .ph(phn), .base(prev_r), .q(mac_r));

always @(posedge clk) begin
	if (in_ev) begin
		prev_l <= cur_l;  prev_r <= cur_r;
		cur_l  <= in_l;   cur_r  <= in_r;
		ph     <= (ph >= 17'd65536) ? ph - 17'd65536 : 17'd0;
	end

	out_stb <= 1'b0;
	case (st)
	2'd0: if (out_pend && !in_ev) begin
		out_pend <= 1'b0;
		phn <= (ph >= 17'd65535) ? 16'd65535 : ph[15:0];
		dl  <= $signed({cur_l[15], cur_l}) - $signed({prev_l[15], prev_l});
		dr  <= $signed({cur_r[15], cur_r}) - $signed({prev_r[15], prev_r});
		ph  <= (ph >= 17'd98304) ? ph : ph + {1'b0, STEP};
		st  <= 2'd1;
	end
	2'd1: st <= 2'd2;
	2'd2: begin
		out_l <= mac_l;
		st    <= 2'd3;
	end
	2'd3: begin
		out_r   <= mac_r;
		out_stb <= 1'b1;
		st      <= 2'd0;
	end
	endcase

	if (out_ev) out_pend <= 1'b1;
	if (rst) begin st <= 2'd0; out_pend <= 1'b0; ph <= 17'd0; end
end

endmodule

// q = bits 31:16 of base * 65536 + d * ph: one "sum of two 18x18" DSP block, no adder in the fabric.
// The 65536 operand is a register (K) so that synthesis keeps the second multiplier.
module pocket_audio_mac (
	input  wire               clk,
	input  wire signed [16:0] d,
	input  wire        [15:0] ph,
	input  wire signed [15:0] base,
	output wire        [15:0] q
);
`ifdef ALTERA_RESERVED_QIS
	reg K = 1'b0;
	always @(posedge clk) K <= 1'b1;
	wire [36:0] r;
	altmult_add #(
		.number_of_multipliers(2), .width_a(18), .width_b(18), .width_result(37),
		.representation_a("SIGNED"), .representation_b("SIGNED"),
		.multiplier1_direction("ADD"),
		.input_register_a0("UNREGISTERED"), .input_register_b0("UNREGISTERED"),
		.input_register_a1("UNREGISTERED"), .input_register_b1("UNREGISTERED"),
		.multiplier_register0("UNREGISTERED"), .multiplier_register1("UNREGISTERED"),
		.output_register("UNREGISTERED"),
		.dedicated_multiplier_circuitry("YES"), .extra_latency(0),
		.intended_device_family("Cyclone V"), .lpm_type("altmult_add")
	) mac (.dataa({{2{base[15]}}, base, d[16], d}), .datab({1'b0, K, 16'd0, 2'b00, ph}), .result(r));
	assign q = r[31:16];
`else
	wire signed [35:0] r = d * $signed({1'b0, ph}) + $signed({base, 16'd0});
	assign q = r[31:16];
`endif
endmodule

`default_nettype wire
