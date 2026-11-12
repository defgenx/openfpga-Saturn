// Sector sink: takes the cd_stream word stream (cd_data/cd_ck/cd_audio, 1176 words per sector).
// Data sectors are stored in CD block DRAM at `base` (byte-swapped like the YGR019 delivers them to the
// SH-1, so a DRAM word is the host-order halfword); the CPU reads their header from DRAM.
// Audio sectors go to the CD-DA output (left on even words, right on odd words, as the YGR019 does).
// DRAM writes go through an 8 entry FIFO {last, address, word}: a DRAM write can take longer than one stream word
// (docs/cdb-hle.md, "Data path"). overrun = a word dropped on a full FIFO.
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

	output reg         rq,
	output reg  [17:0] rq_a,
	output reg  [15:0] rq_d,
	input  wire        dn,

	output reg  [15:0] cd_sl = 16'd0,
	output reg  [15:0] cd_sr = 16'd0
);

reg        audio = 1'b0;
reg [17:0] base = 18'd0;
reg [10:0] w = 11'd0;
reg        chan = 1'b0;

wire [15:0] sw = {cd_data[7:0], cd_data[15:8]};

// write FIFO (CDB_FERAM: read address taken on the falling edge). The head entry written at the last edge is hidden
// for one clock: its first read coincides with the M10K write (docs/cdb-hle.md, "Data path")
reg  [2:0] wp = 3'd0, rp = 3'd0;
reg  [3:0] n = 4'd0;
reg        pushed = 1'b0;
wire       push = cd_ck && !audio && n != 4'd8;
wire       pop  = rq && dn;
wire [34:0] fq;
CDB_FERAM #(3,35) fifo(clk, push && rst_n, wp, {w == 11'd1175, base + {7'd0, w}, sw}, rp, fq);
always @* begin rq = n != 4'd0 && !(n == 4'd1 && pushed); rq_a = fq[33:16]; rq_d = fq[15:0]; end

always @(posedge clk) begin
	done <= 1'b0;
	if (!rst_n) begin
		w <= 11'd0; wp <= 3'd0; rp <= 3'd0; n <= 4'd0; pushed <= 1'b0;
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
				if (n == 4'd8) overrun <= 1'b1;
			end
		end
		if (push) wp <= wp + 3'd1;
		if (pop) begin rp <= rp + 3'd1; if (fq[34]) done <= 1'b1; end
		n <= n + {3'd0, push} - {3'd0, pop};
		pushed <= push;
	end
end

endmodule
