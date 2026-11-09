// CD sector streamer: turns one ring slot into the 1176-word stream the YGR019 expects.
//
// Data sectors are patched the way Main_MiSTer does: optional synthesised sync/header,
// EDC recomputed over bytes 0..2063 and the ECC area zeroed unless the sector is Mode 2.
// Ring sectors (lead-out security ring) are generated, no slot is read.
// Words leave on `ce` (176.4 kHz): every ce at 2x, every second ce at 1x.
//
// kind: 0 data, 1 audio, 2 security ring.

`default_nettype none

module cd_feed #(parameter SB = 3) (   // SB: slot bits of the ring
	input  wire        clk,
	input  wire        rst_n,
	input  wire        ce,

	input  wire        go,
	input  wire [SB-1:0] slot,
	input  wire [1:0]  kind,
	input  wire        synth,       // synthesise sync + header (data)
	input  wire        spd2,
	input  wire [23:0] hdr,         // BCD m,s,f of the sector's FAD; stable while busy

	output reg         busy = 1'b0,
	output reg         held = 1'b0, // a ring slot is in use
	output reg         done = 1'b0, // one-clock pulse

	output reg         sr_rq = 1'b0,
	output wire [SB+10:0] sr_a,
	input  wire        sr_rv,
	input  wire [15:0] sr_d,

	output reg  [17:0] cd_data = 18'd0,
	output reg         cd_ck = 1'b0,
	output reg         cd_audio = 1'b0
);

localparam [31:0] POLY = 32'hD8018001;
localparam [2:0] F_IDLE = 0, F_PREP = 1, F_RD = 2, F_HAVE = 3, F_STEP = 4, F_RDY = 5;

reg [2:0]  fs = F_IDLE;
reg [SB-1:0] r_slot;
reg [1:0]  r_kind;
reg        r_synth, r_spd2;
reg [10:0] w;
reg [15:0] wrd;
reg [31:0] crc;                 // data: the EDC; ring: bits 15:0 are the LFSR (the two never run in one sector)
wire [15:0] lf = crc[15:0];
reg [7:0]  la, lowb;
reg [3:0]  sc;
reg        edc_on;
reg        ce_div = 1'b0;

assign sr_a = {r_slot, w};

wire is_data = (r_kind == 2'd0);
wire is_ring = (r_kind == 2'd2);

// Words that never come from a ring slot. The eight header words are shared by the ring and the synthesised data header
// (they differ only in the mode byte of word 7).
reg        syn_v;
reg [15:0] syn_w;
wire       hdr_w = (is_ring || (is_data && r_synth)) && w < 11'd8;
always @* begin
	syn_v = 1'b0;
	syn_w = 16'h0000;
	if (hdr_w) begin
		syn_v = 1'b1;
		case (w[2:0])
			3'd0: syn_w = 16'hFF00;
			3'd1, 3'd2, 3'd3, 3'd4: syn_w = 16'hFFFF;
			3'd5: syn_w = 16'h00FF;
			3'd6: syn_w = {hdr[15:8], hdr[23:16]};
			default: syn_w = {is_ring ? 8'h02 : 8'h01, hdr[7:0]};
		endcase
	end else if (is_ring) begin
		syn_v = !(w >= 11'd12 && w < 11'd1174);          // LFSR output in between
		if (w == 11'd9 || w == 11'd11) syn_w = 16'h0028;
	end else if (is_data && w >= 11'd1032 && edc_on) begin
		syn_v = 1'b1;
		syn_w = (w == 11'd1032) ? crc[15:0] : (w == 11'd1033) ? crc[31:16] : 16'h0000;
	end
end

wire crc_run = is_data && w < 11'd1032;
wire lf_run  = is_ring && w >= 11'd6 && w < 11'd1174;

wire [7:0] a_cur = (sc[2:0] == 3'd0) ? (sc[3] ? 8'h59 : 8'hA8) : la;
wire [7:0] a_nx  = {a_cur[0] ^ lf[0], a_cur[7:1]};
wire       fb    = crc[0] ^ wrd[sc];

always @(posedge clk) begin
	done  <= 1'b0;
	sr_rq <= 1'b0;
	cd_ck <= 1'b0;
	if (ce) ce_div <= ~ce_div;

	if (!rst_n) begin
		fs <= F_IDLE;
		busy <= 1'b0;
		held <= 1'b0;
	end else begin
		case (fs)
		F_IDLE: if (go) begin
			r_slot <= slot; r_kind <= kind; r_synth <= synth; r_spd2 <= spd2;
			w <= 11'd0; crc <= {31'd0, kind == 2'd2}; edc_on <= 1'b1;
			busy <= 1'b1;
			held <= (kind != 2'd2);
			fs <= F_PREP;
		end

		F_PREP: begin
			if (syn_v) begin
				wrd <= syn_w;
				fs <= F_HAVE;
			end else if (lf_run) begin
				fs <= F_HAVE;       // value comes from the LFSR
			end else begin
				sr_rq <= 1'b1;
				fs <= F_RD;
			end
		end

		F_RD: if (sr_rv) begin
			wrd <= sr_d;
			fs <= F_HAVE;
		end

		F_HAVE: begin
			if (is_data && w == 11'd7) edc_on <= (wrd[15:8] != 8'h02);
			sc <= 4'd0;
			fs <= (crc_run || lf_run) ? F_STEP : F_RDY;
		end

		F_STEP: begin
			if (crc_run || lf_run) begin    // both shift right; the LFSR takes its new top bit from the taps
				crc <= {1'b0, crc[31:1]} ^ ((crc_run && fb) ? POLY : 32'd0);
				if (lf_run) crc[14] <= lf[1] ^ lf[0];
			end
			if (lf_run) begin
				la <= a_nx;
				if (sc == 4'd7) lowb <= a_nx;
				if (sc == 4'd15 && w >= 11'd12) wrd <= {a_nx, lowb};
			end
			sc <= sc + 4'd1;
			if (sc == 4'd15) fs <= F_RDY;
		end

		F_RDY: if (ce && (r_spd2 || ce_div)) begin
			cd_data  <= {2'b00, wrd};
			cd_audio <= (r_kind == 2'd1);
			cd_ck    <= 1'b1;
			if (w == 11'd1175) begin
				busy <= 1'b0;
				held <= 1'b0;
				done <= 1'b1;
				fs <= F_IDLE;
			end else begin
				w <= w + 11'd1;
				fs <= F_PREP;
			end
		end

		default: fs <= F_IDLE;
		endcase
	end
end

endmodule

`default_nettype wire
