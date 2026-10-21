// CD sector streamer: turns one ring slot into the 1176-word stream the YGR019 expects.
//
// Data sectors are patched the way Main_MiSTer does: optional synthesised sync/header,
// EDC recomputed over bytes 0..2063 and the ECC area zeroed unless the sector is Mode 2.
// Ring sectors (lead-out security ring) are generated, no slot is read.
// Words leave on `ce` (176.4 kHz): every ce at 2x, every second ce at 1x.
//
// kind: 0 data, 1 audio, 2 security ring.

`default_nettype none

module cd_feed (
	input  wire        clk,
	input  wire        rst_n,
	input  wire        ce,

	input  wire        go,
	input  wire [2:0]  slot,
	input  wire [1:0]  kind,
	input  wire        synth,       // synthesise sync + header (data)
	input  wire        spd2,
	input  wire [23:0] hdr,         // BCD m,s,f of the sector's FAD; stable while busy

	output reg         busy = 1'b0,
	output reg         held = 1'b0, // a ring slot is in use
	output reg         done = 1'b0, // one-clock pulse

	output reg         sr_rq = 1'b0,
	output wire [13:0] sr_a,
	input  wire        sr_rv,
	input  wire [15:0] sr_d,

	output reg  [17:0] cd_data = 18'd0,
	output reg         cd_ck = 1'b0,
	output reg         cd_audio = 1'b0
);

localparam [31:0] POLY = 32'hD8018001;
localparam [2:0] F_IDLE = 0, F_PREP = 1, F_RD = 2, F_HAVE = 3, F_STEP = 4, F_RDY = 5;

reg [2:0]  fs = F_IDLE;
reg [2:0]  r_slot;
reg [1:0]  r_kind;
reg        r_synth, r_spd2;
reg [10:0] w;
reg [15:0] wrd;
reg [31:0] crc;
reg [15:0] lf;
reg [7:0]  la, lowb;
reg [3:0]  sc;
reg        edc_on;
reg        ce_div = 1'b0;

assign sr_a = {r_slot, w};

wire is_data = (r_kind == 2'd0);
wire is_ring = (r_kind == 2'd2);

// Words that never come from a ring slot.
reg        syn_v;
reg [15:0] syn_w;
always @* begin
	syn_v = 1'b0;
	syn_w = 16'h0000;
	if (is_ring) begin
		syn_v = 1'b1;
		case (w)
			11'd0: syn_w = 16'hFF00;
			11'd1, 11'd2, 11'd3, 11'd4: syn_w = 16'hFFFF;
			11'd5: syn_w = 16'h00FF;
			11'd6: syn_w = {hdr[15:8], hdr[23:16]};
			11'd7: syn_w = {8'h02, hdr[7:0]};
			11'd9, 11'd11: syn_w = 16'h0028;
			default: syn_w = 16'h0000;
		endcase
		if (w >= 11'd12 && w < 11'd1174) syn_v = 1'b0; // LFSR output
	end else if (is_data) begin
		if (r_synth && w < 11'd8) begin
			syn_v = 1'b1;
			case (w)
				11'd0: syn_w = 16'hFF00;
				11'd1, 11'd2, 11'd3, 11'd4: syn_w = 16'hFFFF;
				11'd5: syn_w = 16'h00FF;
				11'd6: syn_w = {hdr[15:8], hdr[23:16]};
				default: syn_w = {8'h01, hdr[7:0]};
			endcase
		end else if (w >= 11'd1032 && edc_on) begin
			syn_v = 1'b1;
			syn_w = (w == 11'd1032) ? crc[15:0] : (w == 11'd1033) ? crc[31:16] : 16'h0000;
		end
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
			w <= 11'd0; crc <= 32'd0; lf <= 16'd1; edc_on <= 1'b1;
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
			if (crc_run) crc <= {1'b0, crc[31:1]} ^ (fb ? POLY : 32'd0);
			if (lf_run) begin
				la <= a_nx;
				lf <= {1'b0, lf[1] ^ lf[0], lf[14:1]};
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
