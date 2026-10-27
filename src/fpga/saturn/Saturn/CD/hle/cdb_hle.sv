// High-level CD block: replaces SH-1 + firmware + YGR019 + cdd_ctl/cdd_link.
//
//   SCU A-bus side   HIRQ, HIRQ mask, CR1-4, RR1-4 and the data port with the YGR019's register timing
//   soft CPU (SERV)  runs the CD block command set from firmware/cdb (ROM image cdb_fw.hex)
//   datapath         sector sink (cd_stream -> DRAM), transfer engine (DRAM <-> data port, copy, fill),
//                    CD-DA output; bulk sector data never passes through the CPU
//   cd_stream client TOC lookup, prefetch and sector issue are MMIO registers
//
// Register map: docs/cdb-hle.md. The A-bus register offsets and wait states follow YGR019.sv
// (GPL-3.0, Saturn_MiSTer by srg320).
module cdb_hle #(
	parameter FW_FILE = "cdb_fw.hex",
	parameter ROM_WORDS = 4096,         // 16 KB of firmware (RV32I)
	parameter ROM_AW  = 12,             // ROM address bits
	parameter RAM_AW  = 10              // RAM words (2^10 = 4 KB)
) (
	input  wire        CLK,
	input  wire        RST_N,
	input  wire        RES_N,

	input  wire        CE_R,
	input  wire        CE_F,
	input  wire        CD_CE,           // SH-1 clock enable, only used to time the A-bus wait states
	input  wire        CDD_CE,          // 176.4 kHz word clock (time base and stream pacing)
	input  wire [14:1] AA,
	input  wire [15:0] ADI,
	output reg  [15:0] ADO,
	input  wire        ACS2_N,
	input  wire        ARD_N,
	input  wire        AWRL_N,
	input  wire        AWRU_N,
	output wire        AWAIT_N,
	output wire        ARQT_N,

	// CD block DRAM (same port as the SH-1 build)
	output wire [18:1] RAM_A,
	output wire [15:0] RAM_D,
	output wire [1:0]  RAM_WE,
	output wire        RAM_RD,
	output wire        RAM_CS,
	input  wire [15:0] RAM_Q,
	input  wire        RAM_RDY,

	// CD-DA to the SCSP
	output wire [15:0] CD_SL,
	output wire [15:0] CD_SR,

	input  wire        FAST,

	// cd_stream client
	input  wire        disc_ok,
	input  wire        disc_new,
	input  wire [6:0]  ntracks,
	input  wire [7:0]  ntbcd,
	input  wire [23:0] toc_end,
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
	output reg  [23:0] sd_hdr = 24'd0,
	input  wire        fd_busy,
	input  wire [17:0] cd_data,
	input  wire        cd_ck
);

assign ARQT_N = 1'b1;

// ------------------------------------------------------------------ CPU, ROM, RAM
wire [31:0] ia, da, dd, ird, drd_rom;
wire        ic, dc, dwe;
wire [3:0]  dsel;
reg  [31:0] drd;
reg         iack = 1'b0, dack = 1'b0;

serv_rf_top #(.COMPRESSED(0), .WITH_CSR(0), .RESET_STRATEGY("MINI")) cpu (
	.clk(CLK), .i_rst(!RST_N || !RES_N), .i_timer_irq(1'b0),
	.o_ibus_adr(ia), .o_ibus_cyc(ic), .i_ibus_rdt(ird), .i_ibus_ack(iack),
	.o_dbus_adr(da), .o_dbus_dat(dd), .o_dbus_sel(dsel), .o_dbus_we(dwe), .o_dbus_cyc(dc),
	.i_dbus_rdt(drd), .i_dbus_ack(dack),
	.o_ext_rs1(), .o_ext_rs2(), .o_ext_funct3(), .i_ext_rd(32'd0), .i_ext_ready(1'b0), .o_mdu_valid());

(* ramstyle = "M10K" *) reg [31:0] rom [0:ROM_WORDS-1];
initial $readmemh(FW_FILE, rom);
reg [31:0] ird_r = 32'd0, rom_d = 32'd0;
assign ird = ird_r;
always @(posedge CLK) begin
	ird_r <= rom[ia[ROM_AW+1:2]];
	rom_d <= rom[da[ROM_AW+1:2]];
	iack  <= ic && !iack;
end

(* ramstyle = "M10K" *) reg [7:0] ram0 [0:(1<<RAM_AW)-1];
(* ramstyle = "M10K" *) reg [7:0] ram1 [0:(1<<RAM_AW)-1];
(* ramstyle = "M10K" *) reg [7:0] ram2 [0:(1<<RAM_AW)-1];
(* ramstyle = "M10K" *) reg [7:0] ram3 [0:(1<<RAM_AW)-1];
reg [31:0] ram_d = 32'd0;
wire       sel_ram = (da[31:30] == 2'b10);
wire       sel_mm  = (da[31:30] == 2'b01);
wire       sel_rom = (da[31:30] == 2'b00);
wire       ram_we  = dc && dwe && sel_ram && !dack;
wire [RAM_AW-1:0] ra = da[RAM_AW+1:2];
always @(posedge CLK) begin
	if (ram_we && dsel[0]) ram0[ra] <= dd[7:0];
	if (ram_we && dsel[1]) ram1[ra] <= dd[15:8];
	if (ram_we && dsel[2]) ram2[ra] <= dd[23:16];
	if (ram_we && dsel[3]) ram3[ra] <= dd[31:24];
	ram_d <= {ram3[ra], ram2[ra], ram1[ra], ram0[ra]};
end

// ------------------------------------------------------------------ host registers
reg [15:0] HIRQ = 16'd0, HMASK = 16'd0;
reg        ev_cmd = 1'b0, ev_rrd = 1'b1;
reg        ev_sec = 1'b0, ev_dchg = 1'b0, ev_to = 1'b0;

wire        scu_sel = (AA[14:12] == 3'b000) && !ACS2_N;
reg         awr_old = 1'b1, ard_old = 1'b1;
reg         abus_wait = 1'b0, data_port = 1'b0, dp_wr = 1'b0;
reg  [2:0]  wait_cnt = 3'd0;
reg  [11:0] to_cnt = 12'd0;
reg         shclk = 1'b0;
wire        shce_r = shclk & CD_CE;

wire [15:0] f_q, hs_wd;
wire        f_empty, f_full, seg1_free, xf_idle;
wire [2:0]  xf_mode;
wire [31:0] hostcnt;
reg         f_pop = 1'b0, f_push = 1'b0;
reg  [15:0] f_wd = 16'd0;

// CPU MMIO strobes
reg  [31:0] cpu_wd = 32'd0;
reg  [7:0]  mm_a = 8'd0;
reg         mm_wr = 1'b0;
wire        hirq_set = mm_wr && mm_a == 8'h00;

// CR / RR: four words each (SH-2 word 0x18, 0x1C, 0x20, 0x24 and MMIO 0x02..0x05 / 0x06..0x09 map to index 0..3 as x + 2).
// Not cleared by reset: the firmware reads CR only after a command (ev_cmd) and writes RR before the host reads it.
// CR is written from the SH-2 side and read by the firmware; RR the other way round.
wire [3:0] bus_w   = AA[5:2];
wire       cr_we   = RST_N && RES_N && scu_sel && (!AWRL_N || !AWRU_N) && awr_old && CE_F && bus_w >= 4'd6 && bus_w <= 4'd9;
wire       rr_we   = mm_wr && mm_a >= 8'h06 && mm_a <= 8'h09;
// RR: M10K, read address (the SCU's A-bus address: a register) taken on the falling edge
wire [15:0] rr_q;
CDB_FERAM #(2,16) rr_ram(CLK, rr_we, mm_a[1:0] + 2'd2, cpu_wd[15:0], bus_w[1:0] + 2'd2, rr_q);

always @(posedge CLK) begin
	f_pop <= 1'b0; f_push <= 1'b0;
	if (CD_CE) shclk <= ~shclk;
	if (!RST_N || !RES_N) begin
		HIRQ <= 16'd0; HMASK <= 16'd0; abus_wait <= 1'b0; wait_cnt <= 3'd0; ev_cmd <= 1'b0; ev_rrd <= 1'b1;
		ADO <= 16'd0;
	end else begin
		if (CE_R) begin awr_old <= AWRL_N & AWRU_N; ard_old <= ARD_N; end
		if (shce_r && wait_cnt != 3'd0) wait_cnt <= wait_cnt - 3'd1;

		if (scu_sel) begin
			if ((!AWRL_N || !AWRU_N) && awr_old && CE_F) begin
				case ({AA[5:2], 2'b00})
				6'h08: HIRQ <= HIRQ & ADI;
				6'h0C: HMASK <= ADI;
				6'h24: ev_cmd <= 1'b1;
				default: ;
				endcase
				if ({AA[5:2], 2'b00} == 6'h00) begin abus_wait <= 1'b1; data_port <= 1'b1; dp_wr <= 1'b1; wait_cnt <= FAST ? 3'd0 : 3'd3; to_cnt <= 12'd0; end
				else begin abus_wait <= 1'b0; data_port <= 1'b0; wait_cnt <= FAST ? 3'd0 : 3'd3; end
			end else if (!ARD_N && ard_old && CE_F) begin
				case ({AA[5:2], 2'b00})
				6'h08: ADO <= HIRQ;
				6'h0C: ADO <= HMASK;
				6'h18, 6'h1C, 6'h20: ADO <= rr_q;
				6'h24: begin ADO <= rr_q; ev_rrd <= 1'b1; end
				default: ADO <= 16'd0;
				endcase
				if ({AA[5:2], 2'b00} == 6'h00) begin abus_wait <= 1'b1; data_port <= 1'b1; dp_wr <= 1'b0; wait_cnt <= FAST ? 3'd2 : 3'd5; to_cnt <= 12'd0; end
				else begin abus_wait <= 1'b1; data_port <= 1'b0; wait_cnt <= FAST ? 3'd1 : 3'd4; end
			end
		end

		if (CE_F && abus_wait && wait_cnt == 3'd0) begin
			if (!data_port) abus_wait <= 1'b0;
			else begin
				to_cnt <= to_cnt + 12'd1;
				if (!dp_wr && xf_mode == 3'd1) begin
					if (!f_empty) begin ADO <= f_q; f_pop <= 1'b1; abus_wait <= 1'b0; end
					else if (xf_idle || to_cnt == 12'hFFF) begin ADO <= 16'd0; abus_wait <= 1'b0; if (!xf_idle) ev_to <= 1'b1; end
				end else if (dp_wr && xf_mode == 3'd2) begin
					if (!f_full) begin f_wd <= ADI; f_push <= 1'b1; abus_wait <= 1'b0; end
					else if (xf_idle || to_cnt == 12'hFFF) begin abus_wait <= 1'b0; if (!xf_idle) ev_to <= 1'b1; end
				end else begin
					ADO <= 16'd0; abus_wait <= 1'b0;
				end
			end
		end

		// CPU side
		if (mm_wr) begin
			case (mm_a)
			8'h00: HIRQ <= HIRQ | cpu_wd[15:0];
			8'h09: ev_rrd <= 1'b0;
			8'h0B: begin
				if (cpu_wd[0]) ev_cmd <= 1'b0;
				if (cpu_wd[1]) ev_sec <= 1'b0;
				if (cpu_wd[2]) ev_dchg <= 1'b0;
				if (cpu_wd[3]) ev_to <= 1'b0;
			end
			default: ;
			endcase
		end
		if (disc_new) ev_dchg <= 1'b1;
		if (sk_done) ev_sec <= 1'b1;
	end
end

assign AWAIT_N = ~(abus_wait & scu_sel);

// ------------------------------------------------------------------ datapath
wire        sk_done, sk_overrun, sk_rq, xf_rq, xf_rq_we, dr_rq;
wire [31:0] hdr_a, hdr_b;
wire [17:0] sk_a, xf_a;
wire [15:0] sk_d, xf_d, dram_q;
wire [2:0]  dram_done;
reg  [17:0] dr_a = 18'd0;
reg         dr_we = 1'b0;
reg  [15:0] dr_d = 16'd0;
reg         armed = 1'b0;
reg  [1:0]  a_kind = 2'd0;
reg         a_synth = 1'b0, a_spd2 = 1'b0;
reg  [23:0] a_hdr = 24'd0;
reg  [17:0] a_base = 18'd0;
reg         sk_start = 1'b0;
reg         xf_mode_we = 1'b0, xf_a_we = 1'b0, xf_b_we = 1'b0, xf_cnt_we = 1'b0;
reg  [11:0] xf_cnt = 12'd0;

cdb_sink sink (
	.clk(CLK), .rst_n(RST_N && RES_N), .start(sk_start), .kind_audio(sd_kind == 2'd1), .base_d(a_base),
	.cd_data(cd_data), .cd_ck(cd_ck), .done(sk_done), .overrun(sk_overrun), .hdr_a(hdr_a), .hdr_b(hdr_b),
	.rq(sk_rq), .rq_a(sk_a), .rq_d(sk_d), .dn(dram_done[0]), .cd_sl(CD_SL), .cd_sr(CD_SR));

cdb_xfer xfer (
	.clk(CLK), .rst_n(RST_N && RES_N), .mode_we(xf_mode_we), .mode_d(cpu_wd[2:0]),
	.a_we(xf_a_we), .b_we(xf_b_we), .cnt_we(xf_cnt_we), .wd(cpu_wd[17:0]), .cnt_d(cpu_wd[11:0]),
	.seg1_free(seg1_free), .idle(xf_idle), .mode(xf_mode), .hostcnt(hostcnt),
	.f_q(f_q), .f_empty(f_empty), .f_full(f_full), .f_pop(f_pop), .f_push(f_push), .f_wd(f_wd),
	.rq(xf_rq), .rq_we(xf_rq_we), .rq_a(xf_a), .rq_d(xf_d), .dn(dram_done[1]), .dq(dram_q));

cdb_dram dram (
	.clk(CLK), .rst_n(RST_N && RES_N),
	.rq({dr_rq, xf_rq, sk_rq}), .rq_we({dr_we, xf_rq_we, 1'b1}),
	.rq_a0(sk_a), .rq_a1(xf_a), .rq_a2(dr_a), .rq_d0(sk_d), .rq_d1(xf_d), .rq_d2(dr_d),
	.done(dram_done), .q(dram_q),
	.RAM_A(RAM_A), .RAM_D(RAM_D), .RAM_WE(RAM_WE), .RAM_RD(RAM_RD), .RAM_CS(RAM_CS), .RAM_Q(RAM_Q), .RAM_RDY(RAM_RDY));

// ------------------------------------------------------------------ MMIO
reg [31:0] ticks = 32'd0;
reg        dr_pend = 1'b0, lk_done_w = 1'b0;
assign dr_rq = dr_pend;
wire [7:0] mi = da[9:2];
// CR: M10K, read address (the firmware's data address: a register) taken on the falling edge
wire [15:0] cr_q;
CDB_FERAM #(2,16) cr_ram(CLK, cr_we, bus_w[1:0] + 2'd2, ADI, mi[1:0] + 2'd2, cr_q);

reg sk_overrun_r = 1'b0;
wire [31:0] ev_word = {17'd0, armed, ev_to, sk_overrun_r, !eng_idle, fd_busy, pf_ready, disc_ok, lk_busy, xf_idle, seg1_free, f_empty,
                       ev_dchg, ev_sec, ev_rrd, ev_cmd};

reg [31:0] mm_q;
always @* begin
	case (mi)
	8'h00: mm_q = {16'd0, HIRQ};
	8'h01: mm_q = {16'd0, HMASK};
	8'h02, 8'h03, 8'h04, 8'h05: mm_q = {16'd0, cr_q};
	8'h0A: mm_q = ev_word;
	8'h0C: mm_q = ticks;
	8'h14: mm_q = hostcnt;
	8'h19: mm_q = {16'd0, dram_q};
	8'h1D: mm_q = hdr_a;
	8'h1E: mm_q = hdr_b;
	8'h23: mm_q = {7'd0, lk_data, lk_s2048, lk_track[6:0], lk_tbcd, lk_idx1} ;
	8'h24: mm_q = {8'd0, lk_start};
	8'h25: mm_q = {16'd0, ntbcd, 1'b0, ntracks};
	8'h26: mm_q = {8'd0, toc_end};
	default: mm_q = 32'd0;
	endcase
end

reg  mm_busy = 1'b0;
reg  dst = 1'b0;                      // second cycle of a bus access
always @(posedge CLK) begin
	dack <= 1'b0;
	mm_wr <= 1'b0; lk_go <= 1'b0; pf_flush <= 1'b0; sd_go <= 1'b0; sk_start <= 1'b0;
	xf_mode_we <= 1'b0; xf_a_we <= 1'b0; xf_b_we <= 1'b0; xf_cnt_we <= 1'b0;
	if (CDD_CE) ticks <= ticks + 32'd1;
	// fire the armed sector as soon as the feed is idle and the ring has one
	if (armed && !fd_busy && !sd_go && !sk_start && pf_ready) begin
		armed <= 1'b0; sd_go <= 1'b1; sk_start <= 1'b1;
		sd_kind <= a_kind; sd_synth <= a_synth; sd_spd2 <= a_spd2; sd_hdr <= a_hdr;
	end
	if (sk_overrun) sk_overrun_r <= 1'b1;
	if (!RST_N || !RES_N) begin
		dr_pend <= 1'b0; mm_busy <= 1'b0; dst <= 1'b0;
	end else begin
		if (dr_pend && dram_done[2]) begin
			dr_pend <= 1'b0; dr_a <= dr_a + 18'd1;
			dack <= 1'b1; mm_busy <= 1'b0;
			drd <= {16'd0, dram_q};
		end else if (dc && !dack && !mm_busy) begin
			if (!dst) begin
				// first cycle: address is stable from now on; MMIO writes are executed here
				dst <= 1'b1;
				if (sel_mm && dwe) begin
					cpu_wd <= dd; mm_a <= mi; mm_wr <= 1'b1;
					case (mi)
					8'h10: xf_mode_we <= 1'b1;
					8'h11: xf_a_we <= 1'b1;
					8'h12: xf_b_we <= 1'b1;
					8'h13: xf_cnt_we <= 1'b1;
					8'h18: dr_a <= dd[17:0];
					8'h19: begin dr_d <= dd[15:0]; dr_we <= 1'b1; dr_pend <= 1'b1; mm_busy <= 1'b1; dst <= 1'b0; end
					8'h1C: a_base <= dd[17:0];
					8'h20: lk_x <= dd[23:0];
					8'h21: lk_idx <= dd[6:0];
					8'h22: begin lk_byidx <= dd[0]; lk_hold <= dd[1]; lk_go <= dd[2]; end
					8'h28: pf_fad <= dd[23:0];
					8'h29: begin pf_en <= dd[0]; pf_flush <= 1'b1; end
					8'h2A: begin a_kind <= dd[2:1]; a_synth <= dd[3]; a_spd2 <= dd[4]; armed <= !dd[5]; end
					8'h2B: a_hdr <= dd[23:0];
					8'h2C: sk_overrun_r <= 1'b0;
					default: ;
					endcase
				end else if (sel_mm && mi == 8'h19) begin
					dr_we <= 1'b0; dr_pend <= 1'b1; mm_busy <= 1'b1; dst <= 1'b0;
				end
			end else begin
				dst <= 1'b0;
				dack <= 1'b1;
				if (sel_rom) drd <= rom_d;
				else if (sel_ram) drd <= ram_d;
				else drd <= mm_q;
			end
		end
	end
end

endmodule
