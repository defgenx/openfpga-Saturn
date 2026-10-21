// Sector sink: takes the cd_stream word stream (cd_data/cd_ck/cd_audio, 1176 words per sector).
// Data sectors are stored in CD block DRAM at `base` (byte-swapped like the YGR019 delivers them to the
// SH-1, so a DRAM word is the host-order halfword) and their header words are latched for the CPU.
// Audio sectors go to the CD-DA output (left on even words, right on odd words, as the YGR019 does).
module cdb_sink (
	input  wire        clk,
	input  wire        rst_n,

	input  wire        start,          // sd_go: resets the word counter, latches kind and base
	input  wire        kind_audio,
	input  wire [17:0] base_d,

	input  wire [17:0] cd_data,
	input  wire        cd_ck,

	output reg         done = 1'b0,    // pulses once the last word is in DRAM (data) or output (audio)
	output reg         overrun = 1'b0,
	output reg  [31:0] hdr_a = 32'd0,  // {m, s, f, mode}
	output reg  [31:0] hdr_b = 32'd0,  // {file, chan, submode, cinfo}

	output reg         rq = 1'b0,
	output reg  [17:0] rq_a = 18'd0,
	output reg  [15:0] rq_d = 16'd0,
	input  wire        dn,

	output reg  [15:0] cd_sl = 16'd0,
	output reg  [15:0] cd_sr = 16'd0
);

reg        audio = 1'b0;
reg [17:0] base = 18'd0;
reg [10:0] w = 11'd0;
reg        last = 1'b0;
reg        chan = 1'b0;

wire [15:0] sw = {cd_data[7:0], cd_data[15:8]};

always @(posedge clk) begin
	done <= 1'b0;
	if (!rst_n) begin
		rq <= 1'b0; w <= 11'd0; last <= 1'b0;
	end else begin
		if (start) begin w <= 11'd0; audio <= kind_audio; base <= base_d; chan <= 1'b0; end
		if (cd_ck) begin
			w <= w + 11'd1;
			if (audio) begin
				chan <= ~chan;
				if (!chan) cd_sl <= cd_data[15:0]; else cd_sr <= cd_data[15:0];
				if (w == 11'd1175) done <= 1'b1;
			end else begin
				cd_sl <= 16'd0; cd_sr <= 16'd0;
				if (rq) overrun <= 1'b1;
				rq <= 1'b1; rq_a <= base + {7'd0, w}; rq_d <= sw;
				if (w == 11'd6) hdr_a[31:16] <= sw;
				if (w == 11'd7) hdr_a[15:0]  <= sw;
				if (w == 11'd8) hdr_b[31:16] <= sw;
				if (w == 11'd9) hdr_b[15:0]  <= sw;
				if (w == 11'd1175) last <= 1'b1;
			end
		end
		if (rq && dn && !cd_ck) begin
			rq <= 1'b0;
			if (last) begin last <= 1'b0; done <= 1'b1; end
		end
	end
end

endmodule
