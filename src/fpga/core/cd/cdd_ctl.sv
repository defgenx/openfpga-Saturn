// CDD command/status machine: the behaviour of Main_MiSTer's support/saturn/saturncdd.cpp on top of
// cd_stream. Talks to the link through a 12-byte packet interface only.
//
// One iteration per tick (13.33 ms at 1x, 6.67 ms at 2x, counted in CDD_CE pulses):
//   execute the command received in the previous exchange, build the 12-byte status, send it,
//   then advance the drive position and start the sector for that position.
// Positions are FADs (LBA + 150). One 25-bit ALU does all arithmetic.
//
// Deviations from the ARM (docs/cd.md): INDEX 01 only; no sector is sent on the tick of a seek
// issued while reading; stall-pause (a late sector turns a read tick into a seek tick); the
// lead-out security ring sync bytes are the standard sync pattern.

`default_nettype none

module cdd_ctl (
	input  wire        clk,
	input  wire        ce,

	// packet layer
	output reg  [3:0]  pk_ha = 4'd0,
	input  wire [7:0]  pk_hq,
	input  wire        pk_cmd_new,
	output reg         pk_cmd_ack = 1'b0,
	output reg         pk_we = 1'b0,
	output reg  [3:0]  pk_wa = 4'd0,
	output reg  [7:0]  pk_wd = 8'd0,
	output reg         pk_send = 1'b0,

	// cd_stream
	input  wire [6:0]  ntracks,
	input  wire [7:0]  ntbcd,
	input  wire [23:0] toc_end,
	input  wire        hack_wwf,
	input  wire        hack_rr,
	input  wire        disc_new,
	output reg         lk_go = 1'b0,
	output reg         lk_byidx = 1'b0,
	output reg  [23:0] lk_x = 24'd0,
	output reg  [6:0]  lk_idx = 7'd0,
	output reg         lk_hold = 1'b0,
	input  wire        lk_busy,
	input  wire        eng_idle,
	input  wire [6:0]  lk_track,
	input  wire [7:0]  lk_tbcd,
	input  wire [23:0] lk_start,
	input  wire [7:0]  lk_idx1,
	input  wire        lk_data,
	input  wire        lk_s2048,
	output reg         pf_flush = 1'b0,
	output reg  [23:0] pf_fad = 24'd0,
	output reg         pf_en = 1'b0,
	input  wire        pf_ready,
	output reg         sd_go = 1'b0,
	output reg  [1:0]  sd_kind = 2'd0,
	output reg         sd_synth = 1'b0,
	output reg         sd_spd2 = 1'b0,
	output wire [23:0] sd_hdr,
	input  wire        fd_busy,

	output wire [15:0] dbg,
	output reg         stall_tick = 1'b0    // the last read tick was a stall
);

localparam [5:0]
	S_IDLE = 0, S_LD = 1, S_LK0 = 2, S_LK1 = 3, S_LK2 = 4,
	S_TK = 5, S_CR0 = 6, S_CR1 = 7, S_CR2 = 8, S_CX0 = 9, S_CX1 = 10, S_CX2 = 11, S_CX3 = 12,
	S_CA = 13, S_CA2 = 14, S_CB = 15, S_CC = 16, S_CD = 17, S_CE = 18, S_CF = 19, S_CG = 20, S_CK = 21,
	S_CH = 22, S_CI = 23,
	S_P0 = 24, S_P1 = 25, S_PA = 26, S_PB = 27, S_PC = 28, S_PD = 29, S_PE = 30, S_PF = 31,
	S_PT0 = 32, S_PT = 33, S_PT2 = 34, S_PG = 35,
	S_PH0 = 36, S_PH1 = 37, S_PH2 = 38, S_PH3 = 39, S_PH4 = 40, S_PW = 41, S_FIN = 42,
	S_CV0 = 43, S_CVM = 44, S_CVS = 45, S_CVF = 46,
	S_U0 = 47, S_U1 = 48, S_UL = 49, S_U2 = 50, S_END = 51;

localparam [2:0] ST_IDLE = 0, ST_OPEN = 1, ST_TOC = 2, ST_READ = 3, ST_STOP = 5, ST_SEEK = 6, ST_RING = 7;
localparam [2:0] B_READ = 0, B_SEEK = 1, B_IDLE = 2, B_STOP = 3, B_OPEN = 4, B_TOC = 5, B_RING1 = 6, B_RING2 = 7;

reg [5:0] state = S_IDLE, ret = S_IDLE;

// drive state
reg        lid_open = 1'b1, stop_pend = 1'b0, seek_pend = 1'b0, read_pend = 1'b0, final_read = 1'b0;
reg        seek_ring = 1'b0, seek_ring2 = 1'b0, pause_pend = 1'b0, read_toc = 1'b0, ring_t = 1'b1;
reg        spd2 = 1'b1;
reg [2:0]  st = ST_OPEN;
reg [23:0] fad = 24'd150, seek_fad = 24'd150;
reg [2:0]  ioff = 3'd0;
reg [6:0]  track = 7'd0;
reg [7:0]  tbcd = 8'd1;
reg [5:0]  seek_delay = 6'd0;
reg [6:0]  tpos = 7'd0;
reg [1:0]  tph = 2'd0;
reg [7:0]  tpb = 8'd1;
reg        tmode2 = 1'b0;
reg        go_read = 1'b0;

// tick: el counts CE since the last tick
reg [11:0] el = 12'd0;
reg        tick_pend = 1'b0;
reg        new_pend = 1'b0;
wire [11:0] per = tmode2 ? 12'd1175 : 12'd2351;

// command
reg [2:0]  cn = 3'd0;
reg [7:0]  c_cmd, c_tno;
reg        c_idx, c_spd1;
reg [23:0] ta = 24'd0;
reg [6:0]  t_old = 7'd0, t_new = 7'd0;
reg [3:0]  dq = 4'd0;
reg        dneg = 1'b0, dgt = 1'b0;
reg        is_seek_cmd = 1'b0;

// status
reg [2:0]  br = 3'd0;
reg [3:0]  bi = 4'd0, bhi = 4'd0;
reg [7:0]  sum = 8'd0;
reg        usecv = 1'b0;
reg        conv1 = 1'b0, conv2 = 1'b0, rd_br = 1'b0;
reg        tq = 1'b0;
reg [7:0]  tix = 8'd0;
reg        fl_ge = 1'b0, fl_tr = 1'b0, fl_lo = 1'b0;
reg [24:0] rem = 25'd0;
reg [7:0]  cm = 8'd0, cs = 8'd0, cf = 8'd0;
reg [3:0]  ft = 4'd0;
reg        cvdst = 1'b0;
reg [7:0]  stall_cnt = 8'd0;
assign sd_hdr = {cm, cs, cf};

function [7:0] bcd_inc(input [7:0] v);
	bcd_inc = (v[3:0] == 4'd9) ? {v[7:4] + 4'd1, 4'd0} : {v[7:4], v[3:0] + 4'd1};
endfunction

// ------------------------------------------------------------------ ALU
reg  [24:0] ya, yb;
reg         ysub;
wire [24:0] alu_y = ysub ? (ya - yb) : (ya + yb);
wire        alu_neg = alu_y[24];

always @* begin
	ya = 25'd0; yb = 25'd0; ysub = 1'b0;
	case (state)
	S_CX1: begin ya = {1'b0, ta}; yb = c_idx ? {17'd0, lk_idx1} : 25'd0; end
	S_CA:  begin ya = {1'b0, fad}; yb = 25'd4; ysub = 1'b1; end
	S_CD:  begin ya = {1'b0, ta}; yb = {1'b0, fad}; ysub = 1'b1; end
	S_CE:  begin ya = rem; yb = 25'd4; end
	S_CG:  begin ya = rem; yb = 25'd2000; ysub = 1'b1; end
	S_CH:  begin ya = {1'b0, ta}; yb = is_seek_cmd ? 25'd0 : 25'd4; ysub = 1'b1; end
	S_PA:  begin ya = {1'b0, fad}; yb = {1'b0, toc_end}; ysub = 1'b1; end
	S_PB:  begin ya = {1'b0, fad}; yb = 25'd150; ysub = 1'b1; end
	S_PC:  begin ya = rem; yb = {1'b0, toc_end}; ysub = 1'b1; end
	S_PD:  begin ya = {1'b0, fad}; yb = {1'b0, lk_start}; ysub = 1'b1; end
	S_PE:  begin ya = {1'b0, lk_start}; yb = {1'b0, fad}; ysub = 1'b1; end
	S_PF:  begin ya = rem; yb = 25'd150; end
	S_PT:  begin ya = {1'b0, lk_start}; yb = hack_wwf ? {17'd0, lk_idx1} : 25'd0; end
	S_PT2: begin ya = {1'b0, toc_end}; end
	S_PG:  begin ya = {1'b0, fad}; end
	S_CVM: begin ya = rem; yb = 25'd4500; ysub = 1'b1; end
	S_CVS: begin ya = rem; yb = 25'd75; ysub = 1'b1; end
	S_CVF: begin ya = rem; yb = 25'd10; ysub = 1'b1; end
	S_U0, S_U1: begin ya = {1'b0, fad}; yb = (st == ST_IDLE && ioff == 3'd4) ? 25'h1FFFFFD : 25'd1; end
	default: ;
	endcase
end

// byte value for status index bi
wire q_now = !fl_ge && lk_data;
reg [7:0] bv;
always @* begin
	bv = 8'h00;
	case (bi)
	4'd0: case (br)
		B_READ: bv = 8'h36; B_SEEK: bv = 8'h22; B_IDLE: bv = 8'h46; B_STOP: bv = 8'h12;
		B_OPEN: bv = 8'h80; B_TOC: bv = 8'h06; B_RING1: bv = 8'hB2; default: bv = 8'hB6;
	endcase
	4'd1: case (br)
		B_OPEN, B_STOP: bv = 8'h41; B_RING1: bv = 8'h00; B_RING2: bv = 8'h48;
		B_TOC: bv = tq ? 8'h41 : 8'h01;
		default: bv = q_now ? 8'h41 : 8'h01;
	endcase
	4'd2: case (br)
		B_OPEN, B_STOP: bv = 8'h01; B_RING2: bv = 8'h5A;
		B_READ, B_SEEK, B_IDLE: bv = fl_tr ? tbcd : 8'hAA;
		default: bv = 8'h00;
	endcase
	4'd3: case (br)
		B_OPEN, B_STOP: bv = 8'h01; B_TOC: bv = tix; B_RING1, B_RING2: bv = fad[23:16];
		B_READ, B_SEEK, B_IDLE: bv = fl_lo ? 8'h00 : 8'h01;
		default: bv = 8'h00;
	endcase
	4'd4: if (br == B_RING1 || br == B_RING2) bv = fad[15:8]; else if (usecv) bv = cm;
	4'd5: if (br == B_RING1 || br == B_RING2) bv = fad[7:0];  else if (usecv) bv = cs;
	4'd6: if (br == B_RING2) bv = 8'h0A; else if (usecv) bv = cf;
	4'd7: if (br == B_RING2) bv = 8'h0A;
	4'd8: if (br == B_RING2) bv = 8'h09;
	      else if (usecv) bv = cm;
	      else if (br == B_TOC) bv = (tix == 8'hA0) ? 8'h01 : (tix == 8'hA1) ? ntbcd : 8'h00;
	4'd9: if (br == B_RING2) bv = 8'h09; else if (usecv) bv = cs;
	4'd10: if (usecv) bv = cf;
	default: bv = ~sum;
	endcase
end

always @(posedge clk) begin
	pk_we <= 1'b0; pk_send <= 1'b0; pk_cmd_ack <= 1'b0;
	lk_go <= 1'b0; pf_flush <= 1'b0; sd_go <= 1'b0;
	if (disc_new) new_pend <= 1'b1;
	if (ce) begin
		if (el >= per) begin el <= 12'd0; tick_pend <= 1'b1; end
		else el <= el + 12'd1;
	end

	case (state)
	S_IDLE: begin
		if (new_pend) begin new_pend <= 1'b0; state <= S_LD; end
		else if (tick_pend) begin
			tick_pend <= 1'b0; lk_hold <= 1'b1; stall_tick <= 1'b0;
			state <= S_TK;
		end
	end

	S_LD: begin   // Unload + Reset + Load
		lid_open <= 1'b0; stop_pend <= 1'b1; seek_pend <= 1'b0; read_pend <= 1'b0; final_read <= 1'b0;
		seek_ring <= 1'b0; seek_ring2 <= 1'b0; pause_pend <= 1'b0; read_toc <= 1'b0; ring_t <= 1'b1;
		fad <= 24'd150; seek_fad <= 24'd150; ioff <= 3'd0; track <= 7'd0; tbcd <= 8'd1;
		spd2 <= 1'b1; tmode2 <= 1'b0;
		pf_flush <= 1'b1; pf_en <= 1'b0; pf_fad <= 24'd150; st <= ST_STOP;
		state <= S_IDLE;
	end

	// lookup sub-routine: lk_x / lk_byidx / lk_idx set by the caller
	S_LK0: begin lk_go <= 1'b1; state <= S_LK1; end
	S_LK1: state <= S_LK2;
	S_LK2: if (!lk_busy) state <= ret;

	// ---------------------------------------------------------------- command
	S_TK: if (eng_idle) state <= pk_cmd_new ? S_CR0 : S_P0;

	S_CR0: begin
		case (cn)
		3'd0: pk_ha <= 4'd0; 3'd1: pk_ha <= 4'd1; 3'd2: pk_ha <= 4'd2; 3'd3: pk_ha <= 4'd3;
		3'd4: pk_ha <= 4'd4; 3'd5: pk_ha <= 4'd8; default: pk_ha <= 4'd10;
		endcase
		state <= S_CR1;
	end
	S_CR1: state <= S_CR2;
	S_CR2: begin
		case (cn)
		3'd0: c_cmd <= pk_hq;
		3'd1, 3'd2, 3'd3: ta <= {ta[15:0], pk_hq};
		3'd4: c_idx <= (pk_hq != 8'd0);
		3'd5: c_tno <= pk_hq;
		default: c_spd1 <= (pk_hq == 8'd1);
		endcase
		if (cn == 3'd6) begin cn <= 3'd0; pk_cmd_ack <= 1'b1; state <= S_CX0; end
		else begin cn <= cn + 3'd1; state <= S_CR0; end
	end

	// index offset record of the addressed track
	S_CX0: begin
		lk_byidx <= 1'b1;
		lk_idx <= (c_tno == 8'd0) ? 7'd0 : ({1'b0, c_tno[6:0]} - 8'd1 > {1'b0, ntracks}) ? ntracks : (c_tno[6:0] - 7'd1);
		ret <= S_CX1; state <= S_LK0;
	end
	S_CX1: begin ta <= alu_y[23:0]; state <= S_CX2; end    // ta = commanded FAD incl. index offset
	S_CX2: begin
		case (c_cmd)
		8'h02: begin   // seek ring
			spd2 <= ~c_spd1; seek_fad <= ta; seek_ring <= 1'b1; read_pend <= 1'b0; pause_pend <= 1'b0;
			lk_x <= ta; lk_byidx <= 1'b0; ret <= S_CX3; state <= S_LK0;
		end
		8'h03: begin spd2 <= ~c_spd1; tpos <= 7'd0; tph <= 2'd0; tpb <= 8'd1; read_toc <= 1'b1; state <= S_P0; end
		8'h04: begin stop_pend <= 1'b1; read_pend <= 1'b0; state <= S_P0; end
		8'h06, 8'h09: begin spd2 <= ~c_spd1; is_seek_cmd <= (c_cmd == 8'h09); state <= S_CA; end
		8'h08: begin pause_pend <= 1'b1; seek_pend <= 1'b0; read_pend <= 1'b0; state <= S_P0; end
		8'h00: state <= S_P0;
		default: begin seek_pend <= 1'b0; read_pend <= 1'b0; pause_pend <= 1'b0; state <= S_P0; end
		endcase
	end
	S_CX3: begin track <= lk_track; tbcd <= lk_tbcd; state <= S_P0; end

	// CalcSeekDelay for read / seek: tracks of (old FAD - 4) and the commanded FAD, then the distance
	S_CA: begin rem <= alu_y; state <= S_CA2; end
	S_CA2: begin lk_x <= rem[23:0]; lk_byidx <= 1'b0; ret <= S_CB; state <= S_LK0; end
	S_CB: begin t_old <= lk_track; lk_x <= ta; ret <= S_CC; state <= S_LK0; end
	S_CC: begin t_new <= lk_track; state <= S_CD; end
	S_CD: begin rem <= alu_y; state <= S_CE; end          // ta - fad
	S_CE: begin rem <= alu_y; dq <= 4'd0; state <= S_CF; end   // + 4
	S_CF: begin
		dneg <= ($signed(rem) < -25'sd4);
		dgt  <= ($signed(rem) > 25'sd10000) || ($signed(rem) < -25'sd10000);
		if ($signed(rem) >= -25'sd4 && $signed(rem) <= 25'sd4) begin seek_delay <= 6'd2; state <= S_CK; end
		else if ($signed(rem) < 25'sd12000) begin seek_delay <= 6'd4; state <= S_CK; end
		else state <= S_CG;
	end
	S_CG: begin
		if (!alu_neg && dq != 4'd13) begin rem <= alu_y; dq <= dq + 4'd1; end
		else begin seek_delay <= {2'd0, dq}; state <= S_CK; end
	end
	S_CK: begin
		seek_delay <= seek_delay + ((t_old != t_new) ? 6'd27 : dgt ? 6'd20 : 6'd0) + (dneg ? 6'd2 : 6'd0);
		state <= S_CH;
	end
	S_CH: begin
		fad <= alu_y[23:0]; seek_fad <= alu_y[23:0]; pf_fad <= alu_y[23:0]; ioff <= 3'd0;
		seek_pend <= is_seek_cmd ? 1'b1 : !hack_rr;
		pause_pend <= 1'b0;
		if (is_seek_cmd) begin final_read <= read_pend; read_pend <= 1'b0; end
		else read_pend <= 1'b1;
		pf_flush <= 1'b1; pf_en <= !is_seek_cmd;
		state <= S_CI;
	end
	S_CI: begin lk_x <= fad; lk_byidx <= 1'b0; ret <= S_CX3; state <= S_LK0; end

	// ---------------------------------------------------------------- status
	S_P0: begin
		if (lid_open) begin
			br <= B_OPEN; st <= ST_OPEN; conv1 <= 1'b0; conv2 <= 1'b0; tmode2 <= 1'b0; go_read <= 1'b0;
			state <= S_PH0;
		end else begin
			lk_byidx <= 1'b1; lk_idx <= track; ret <= S_P1; state <= S_LK0;
		end
	end

	S_P1: begin
		go_read <= 1'b0; conv1 <= 1'b1; conv2 <= 1'b1; rd_br <= 1'b0;
		state <= S_PA;      // flags + position arithmetic for the read-type branches
		if (read_toc) begin
			st <= ST_TOC; br <= B_TOC; tmode2 <= 1'b0; conv1 <= 1'b0; conv2 <= 1'b0;
			lk_byidx <= 1'b1;
			lk_idx <= (tph == 2'd0) ? tpos : (tph == 2'd1) ? 7'd0 : (ntracks - 7'd1);
			ret <= S_PT0;
			state <= (tph == 2'd3) ? S_PT0 : S_LK0;
		end else if (seek_pend) begin
			st <= final_read ? ST_READ : ST_SEEK; br <= B_SEEK; tmode2 <= 1'b0; final_read <= 1'b0;
			if (seek_delay <= 6'd1) begin seek_delay <= 6'd0; seek_pend <= 1'b0; end
			else seek_delay <= seek_delay - 6'd1;
		end else if (seek_ring) begin
			st <= ST_RING; br <= B_RING1; tmode2 <= 1'b0; conv1 <= 1'b0; conv2 <= 1'b0;
			if (ring_t) ring_t <= 1'b0; else begin seek_ring <= 1'b0; seek_ring2 <= 1'b1; ring_t <= 1'b1; end
			state <= S_PH0;
		end else if (seek_ring2) begin
			st <= ST_RING; br <= B_RING2; tmode2 <= 1'b0; conv1 <= 1'b0; conv2 <= 1'b0;
			if (ring_t) ring_t <= 1'b0; else begin seek_ring2 <= 1'b0; ring_t <= 1'b1; end
			state <= S_PH0;
		end else if (read_pend) begin
			rd_br <= 1'b1; tmode2 <= spd2;
		end else if (pause_pend) begin
			st <= ST_IDLE; br <= B_IDLE; tmode2 <= 1'b0; pause_pend <= 1'b0;
		end else if (stop_pend) begin
			st <= ST_STOP; br <= B_STOP; tmode2 <= 1'b0; stop_pend <= 1'b0; conv1 <= 1'b0; conv2 <= 1'b0;
			state <= S_PH0;
		end else begin
			st <= ST_IDLE; br <= B_IDLE; tmode2 <= 1'b0;
		end
	end

	S_PA: begin fl_ge <= !alu_neg; state <= S_PB; end                  // fad >= lead-out
	S_PB: begin
		rem <= alu_y; state <= S_PC;                                   // fad - 150
		if (rd_br) begin
			if (fl_ge || pf_ready) begin st <= ST_READ; br <= B_READ; go_read <= 1'b1; end
			else begin st <= ST_SEEK; br <= B_SEEK; stall_tick <= 1'b1; stall_cnt <= stall_cnt + 8'd1; end
		end
	end
	S_PC: begin fl_tr <= alu_neg; state <= S_PD; end                   // fad - 150 < lead-out
	S_PD: begin
		fl_lo <= alu_neg;
		if (!alu_neg) begin rem <= alu_y; state <= (br == B_IDLE) ? S_PF : S_PH0; end
		else state <= S_PE;
	end
	S_PE: begin rem <= alu_y; state <= (br == B_IDLE) ? S_PF : S_PH0; end
	S_PF: begin rem <= alu_y; state <= S_PH0; end

	// TOC entry (lookup done unless phase 3)
	S_PT0: begin
		case (tph)
		2'd0: begin
			tq <= lk_data; tix <= tpb; tpb <= bcd_inc(tpb); tpos <= tpos + 7'd1;
			if (tpos + 7'd1 >= ntracks) tph <= 2'd1;
			conv2 <= 1'b1; state <= S_PT;
		end
		2'd1: begin tq <= lk_data; tix <= 8'hA0; tph <= 2'd2; state <= S_PH0; end
		2'd2: begin tq <= lk_data; tix <= 8'hA1; tph <= 2'd3; state <= S_PH0; end
		default: begin tq <= 1'b0; tix <= 8'hA2; read_toc <= 1'b0; conv2 <= 1'b1; state <= S_PT2; end
		endcase
	end
	S_PT: begin rem <= alu_y; state <= S_PH0; end
	S_PT2: begin rem <= alu_y; state <= S_PH0; end

	S_PH0: begin bi <= 4'd0; bhi <= 4'd3; usecv <= 1'b0; sum <= 8'd0; ret <= S_PH1; state <= S_PW; end
	S_PH1: begin
		if (conv1) begin cvdst <= 1'b0; ret <= S_PH2; state <= S_CV0; end
		else begin bi <= 4'd4; bhi <= 4'd6; usecv <= 1'b0; ret <= S_PH2; state <= S_PW; end
	end
	S_PH2: begin bi <= 4'd7; bhi <= 4'd7; usecv <= 1'b0; ret <= S_PH3; state <= S_PW; end
	S_PH3: begin
		if (conv2) begin cvdst <= 1'b1; ret <= S_PH4; state <= (br == B_TOC) ? S_CV0 : S_PG; end
		else begin bi <= 4'd8; bhi <= 4'd10; usecv <= 1'b0; ret <= S_PH4; state <= S_PW; end
	end
	S_PG: begin rem <= alu_y; state <= S_CV0; end                      // amsf = fad
	S_PH4: begin bi <= 4'd11; bhi <= 4'd11; ret <= S_FIN; state <= S_PW; end
	S_FIN: begin pk_send <= 1'b1; state <= S_U0; end

	S_PW: begin
		pk_we <= 1'b1; pk_wa <= bi; pk_wd <= bv;
		if (bi != 4'd11) sum <= sum + bv;
		bi <= bi + 4'd1;
		if (bi == bhi) state <= ret;
	end

	// m:s:f conversion of rem (BCD out)
	S_CV0: begin cm <= 8'd0; cs <= 8'd0; ft <= 4'd0; state <= S_CVM; end
	S_CVM: if (!alu_neg) begin rem <= alu_y; cm <= bcd_inc(cm); end else state <= S_CVS;
	S_CVS: if (!alu_neg) begin rem <= alu_y; cs <= bcd_inc(cs); end else state <= S_CVF;
	S_CVF: if (!alu_neg) begin rem <= alu_y; ft <= ft + 4'd1; end
	       else begin
			cf <= {ft, rem[3:0]};
			bi <= cvdst ? 4'd8 : 4'd4; bhi <= cvdst ? 4'd10 : 4'd6; usecv <= 1'b1;
			state <= S_PW;
		end

	// ---------------------------------------------------------------- advance
	S_U0: begin
		case (st)
		ST_IDLE: begin
			fad <= alu_y[23:0]; ioff <= (ioff == 3'd4) ? 3'd1 : ioff + 3'd1; state <= S_UL;
		end
		ST_READ: state <= go_read ? S_U1 : S_END;
		ST_RING: begin fad <= seek_fad; ioff <= 3'd0; state <= S_UL; end
		default: state <= S_END;
		endcase
	end
	S_U1: if (!fd_busy) begin
		sd_go <= 1'b1;
		if (fl_ge) begin sd_kind <= 2'd2; sd_synth <= 1'b0; sd_spd2 <= spd2; end
		else if (lk_data) begin sd_kind <= 2'd0; sd_synth <= lk_s2048 || fl_lo; sd_spd2 <= spd2; end
		else begin sd_kind <= 2'd1; sd_synth <= 1'b0; sd_spd2 <= 1'b0; end
		fad <= alu_y[23:0]; seek_fad <= alu_y[23:0]; ioff <= 3'd0;
		state <= S_UL;
	end
	S_UL: begin lk_x <= fad; lk_byidx <= 1'b0; ret <= S_U2; state <= S_LK0; end
	S_U2: begin track <= lk_track; tbcd <= lk_tbcd; state <= S_END; end

	S_END: begin
		lk_hold <= 1'b0;
		state <= S_IDLE;
	end
	default: state <= S_IDLE;
	endcase
end

assign dbg = {stall_cnt[1:0], 7'd0, stall_tick, st, br};

endmodule

`default_nettype wire
