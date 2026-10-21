//
// sdram_pocket.sv - VDP2 VRAM A/B + SCSP RAM on the Pocket's AS4C32M16MSA (16 bit, 4 banks).
//
// Client ports are those of Saturn_MiSTer rtl/sdram1.sv (Sorgelig/srg320, GPL): the VDP2 reads
// four 32 bit words per dot slot (A0 A1 B0 B1) with a fixed latency, CPU writes ride in the same
// slot, SCSP RAM is a no-ready port. The command schedule is new: one 16 clk_ram frame per dot,
// locked to `sync` (VDP2 DCE_R), spaced for the AS4C32M16MSA-6BIN at 114.5 MHz.
//
//   bank 0  VDP2 A0 (rows 0-63)          bank 1  VDP2 B0 (rows 0-63)
//   bank 2  VDP2 A1 (rows 0-63)          bank 3  VDP2 B1 (rows 0-63)
//           + SCSP RAM 0-256 KB (rows 64-191)    + SCSP RAM 256-512 KB (rows 64-191)
//
// Cycle numbers are pin-register edges after the frame start F (VDP2 DOT_CE_F):
//   1 latch the VDP2 addresses
//   2/4/6/8   ACT bank 0/1/2/3, then READ (BL2, auto-precharge) at ACT+3 (5/7/9/11)
//   write     replaces the read of its half: bank 0/2 ACT 2/6 WRITE 9, bank 1/3 ACT 4/8 WRITE 11
//   14 / 0    ACT bank 2 / bank 3 for SCSP, READ or WRITE at ACT+3 (cycle 1 / 3 of the next frame)
// Every bank is re-activated exactly 8 cycles after its previous ACT (tRC 60 ns = 7 cycles), ACTs
// are 2 cycles apart (tRRD 12 ns), all 16 command cycles are distinct, and the DQ bus has no
// read/write overlap in any frame-to-frame sequence (checked by sim/mem/tb_sdram and the tables
// in docs/memory.md). There is no AUTO REFRESH: a VDP2 group that does not read in a frame, or a
// SCSP slot with no request, issues a dummy read of the next row of its bank (row scrub), which
// restores that row. VDP2 stops fetching for several dots per line (REFRESH/NOACCESS windows).
//
// Read data: the SDRAM clock is the inverted clk (DDIO), so the SDRAM samples a command half a
// cycle after it is registered. With CL3 the first word reaches the FPGA register about
// 4.65 cycles after the command register edge (half cycle + clock-out delay + 3 cycles + tAC +
// input delay), so the default samples DQ on rising edges at READ+5 and +6 and the 32 bit result
// lands in doutXX at READ+6. CAP_NEG=1 samples on the falling edges at +4.5/+5.5 instead. The
// split depends on the pad delays of the device; tune on hardware (docs/memory.md).
//
// Partial-byte VDP2 writes drive DQM at the write cycle, which also masks word 1 of the read two
// cycles later in the neighbouring slot (docs/memory.md, known limits).
//

`default_nettype none

module sdram_pocket #(
	parameter int INIT_CLKS    = 24000, // power-up wait, 200 us at 114.5 MHz
	parameter bit CAP_NEG      = 1'b0,  // 1: sample DQ on the falling edge (+4.5/+5.5), 0: rising edge (+5/+6)
	parameter int SCSP_MIN_AGE = 14     // earliest SCSP read delivery, clk_ram cycles after the request
) (
	input  wire        clk,             // clk_ram (2x clk_sys, phase aligned)
	input  wire        init,            // hold the init sequence while high
	input  wire        sync,            // VDP2 DCE_R: one clk_sys wide pulse per dot

	// SDRAM pins (the top level wraps dq in a tri-state)
	output reg  [12:0] dram_a,
	output reg   [1:0] dram_ba,
	output reg  [15:0] dram_dq_o,
	output reg         dram_dq_oe,
	input  wire [15:0] dram_dq_i,
	output reg   [1:0] dram_dqm,
	output wire        dram_cke,
	output reg         dram_ras_n,
	output reg         dram_cas_n,
	output reg         dram_we_n,
	output wire        dram_clk,

	// VDP2 (as sdram1)
	input  wire [17:1] addr_a0,
	input  wire [16:1] addr_a1,
	input  wire [63:0] din_a,
	input  wire  [7:0] wr_a,
	input  wire        rd_a,
	output reg  [31:0] dout_a0,
	output reg  [31:0] dout_a1,

	input  wire [17:1] addr_b0,
	input  wire [16:1] addr_b1,
	input  wire [63:0] din_b,
	input  wire  [7:0] wr_b,
	input  wire        rd_b,
	output reg  [31:0] dout_b0,
	output reg  [31:0] dout_b1,

	// SCSP RAM
	input  wire [19:1] ch2addr,
	input  wire [15:0] ch2din,
	input  wire  [1:0] ch2wr,
	input  wire        ch2rd,
	output reg  [15:0] ch2dout,
	output wire        ch2rdy,

	output reg         init_done,
	output reg   [7:0] dbg_scrub_wrap,  // wraps of the row-scrub counters, saturating
	output reg   [7:0] dbg_scsp_drop    // SCSP requests that arrived while one was still pending
);

localparam bit [2:0] CMD_NOP = 3'b111, CMD_ACT = 3'b011, CMD_RD = 3'b101, CMD_WR = 3'b100,
                     CMD_PRE = 3'b010, CMD_REF = 3'b001, CMD_MRS = 3'b000;
// BL2, sequential, CL3, single-word writes
localparam [12:0] MODE_REG = 13'b000_1_00_011_0_001;

assign dram_cke = 1'b1;

sdram_clk_out u_clk (.clk(clk), .dram_clk(dram_clk));

// ------------------------------------------------------------------ DQ capture
reg [15:0] cap_n, w0_q;
always @(negedge clk) cap_n <= dram_dq_i;
wire [15:0] dq_cap = CAP_NEG ? cap_n : dram_dq_i;

// ------------------------------------------------------------------ frame counter
reg [3:0] fc = '0;           // cycle index after the last edge
reg       sync_old = 1'b0;
wire [3:0] slot = fc + 4'd1; // pin cycle generated at this edge

always @(posedge clk) begin
	sync_old <= sync;
	fc <= (sync && !sync_old) ? 4'd7 : fc + 4'd1;   // sync is high from F+6, first sampled at edge F+7
end

// ------------------------------------------------------------------ init
localparam int INIT_W = $clog2(INIT_CLKS + 64);
reg [INIT_W-1:0] icnt;
reg  [2:0] i_cmd;
reg [12:0] i_a;
reg  [3:0] i_step;
reg  [4:0] i_wait;

always @(posedge clk) begin
	i_cmd <= CMD_NOP;
	i_a   <= '0;
	if (init) begin
		icnt <= '0; i_step <= '0; i_wait <= '0; init_done <= 1'b0;
	end else if (!init_done) begin
		if (icnt < INIT_CLKS) icnt <= icnt + 1'd1;
		else if (i_wait != 0) i_wait <= i_wait - 1'd1;
		else case (i_step)
			4'd0: begin i_cmd <= CMD_PRE; i_a <= 13'h0400; i_wait <= 5'd3;  i_step <= 4'd1; end
			4'd1: begin i_cmd <= CMD_REF;                  i_wait <= 5'd11; i_step <= 4'd2; end
			4'd2: begin i_cmd <= CMD_REF;                  i_wait <= 5'd11; i_step <= 4'd3; end
			4'd3: begin i_cmd <= CMD_MRS; i_a <= MODE_REG; i_wait <= 5'd3;  i_step <= 4'd4; end
			default: init_done <= 1'b1;
		endcase
	end
end

// ------------------------------------------------------------------ VDP2 plan (latched at cycle 1)
// per slot j (bank j): mode 0 dummy scrub read, 1 read, 2 write, 3 none
reg  [1:0] v_mode [0:3];
reg  [7:0] v_row  [0:3];
reg  [9:0] v_col  [0:3];
reg [15:0] v_wd   [0:1];     // [0] group A, [1] group B
reg  [1:0] v_wbe  [0:1];
reg        v_wsel [0:1];     // write is to bank (group + 2*half) : half
reg  [9:0] v_wcol [0:1];
reg  [7:0] v_wrow [0:1];

// scrub counters: banks 0/1 cover 64 rows, banks 2/3 cover 192
reg  [7:0] scr [0:3];
reg  [3:0] v_act;            // ACT issued for the slot, CAS due

function automatic [1:0] lane_idx(input [7:0] be);
	lane_idx = |be[7:6] ? 2'd0 : |be[5:4] ? 2'd1 : |be[3:2] ? 2'd2 : 2'd3;
endfunction
function automatic [15:0] lane_data(input [63:0] d, input [7:0] be);
	lane_data = |be[7:6] ? d[63:48] : |be[5:4] ? d[47:32] : |be[3:2] ? d[31:16] : d[15:0];
endfunction
function automatic [1:0] lane_be(input [7:0] be);
	lane_be = |be[7:6] ? be[7:6] : |be[5:4] ? be[5:4] : |be[3:2] ? be[3:2] : be[1:0];
endfunction
function automatic [7:0] scr_next(input [7:0] s, input big);
	scr_next = big ? (s == 8'd191 ? 8'd0 : s + 8'd1) : (s == 8'd63 ? 8'd0 : s + 8'd1);
endfunction

wire [15:0] w_a = {addr_a0[16:3], lane_idx(wr_a)};   // word offset inside the half, write
wire [15:0] w_b = {addr_b0[16:3], lane_idx(wr_b)};

// ------------------------------------------------------------------ SCSP state
reg [17:0] sc_addr;          // word address {bank, 17 bit offset}
reg [15:0] sc_din;
reg  [1:0] sc_be;
reg        sc_wr_p, sc_rd_p;
reg  [5:0] sc_t0;                // cycle counter at the request
reg  [5:0] cyc;
reg        old_rd, old_wr;
assign ch2rdy = ~(sc_wr_p | sc_rd_p);

reg        s_act  [2:3];     // ACT issued, CAS due
reg        s_wr   [2:3];
reg        s_dum  [2:3];
reg  [9:0] s_col  [2:3];
reg [15:0] s_d    [2:3];
reg  [1:0] s_be   [2:3];
reg  [5:0] s_t0   [2:3];

// delivery of SCSP reads (two in flight at most)
reg        dl_v [0:1];
reg  [5:0] dl_t0[0:1];
reg [15:0] dl_d [0:1];
reg        dl_ld[0:1];
reg        dl_wi;            // next entry to allocate

// ------------------------------------------------------------------ read tag pipeline
reg        t_v [0:6];
reg  [2:0] t_k [0:6];        // 0 A0, 1 B0, 2 A1, 3 B1, 4 SCSP, 7 dummy
reg        t_i [0:6];        // SCSP delivery entry

reg  [2:0] c_cmd;
reg [12:0] c_a;
reg  [1:0] c_ba, c_dqm;
reg [15:0] c_dq;
reg        c_oe;
reg        c_tv;
reg  [2:0] c_tk;
reg        c_ti;

integer k;
reg [7:0] scr_q [0:3];

function automatic [12:0] row_a(input [7:0] r);
	row_a = {5'd0, r};
endfunction
function automatic [12:0] col_a(input [9:0] c);
	col_a = {2'b00, 1'b1, c[9:0]};      // A10 = auto precharge
endfunction

always @(posedge clk) begin
	// ---- SCSP request capture
	old_rd <= ch2rd;
	old_wr <= |ch2wr;
	if (ch2rd && !old_rd) begin
		if (sc_rd_p | sc_wr_p) begin if (dbg_scsp_drop != 8'hFF) dbg_scsp_drop <= dbg_scsp_drop + 1'd1; end
		sc_addr <= ch2addr[18:1]; sc_rd_p <= 1'b1; sc_wr_p <= 1'b0; sc_t0 <= cyc;
	end
	if ((|ch2wr) && !old_wr) begin
		if (sc_rd_p | sc_wr_p) begin if (dbg_scsp_drop != 8'hFF) dbg_scsp_drop <= dbg_scsp_drop + 1'd1; end
		sc_addr <= ch2addr[18:1]; sc_din <= ch2din; sc_be <= ch2wr; sc_wr_p <= 1'b1; sc_rd_p <= 1'b0; sc_t0 <= cyc;
	end
	cyc <= cyc + 1'd1;

	// ---- VDP2 plan latch
	if (fc == 4'd0) begin
		// group A -> banks 0 (A0) and 2 (A1); group B -> banks 1 (B0) and 3 (B1)
		if (|wr_a) begin
			v_mode[0] <= addr_a0[17] ? 2'd3 : 2'd2;
			v_mode[2] <= addr_a0[17] ? 2'd2 : 2'd3;
			v_wd[0] <= lane_data(din_a, wr_a); v_wbe[0] <= lane_be(wr_a);
			v_wrow[0] <= {2'd0, w_a[15:10]}; v_wcol[0] <= w_a[9:0]; v_wsel[0] <= addr_a0[17];
		end else if (rd_a) begin
			v_mode[0] <= 2'd1; v_mode[2] <= 2'd1;
			v_row[0] <= {2'd0, addr_a0[16:11]}; v_col[0] <= addr_a0[10:1] ;
			v_row[2] <= {2'd0, addr_a1[16:11]}; v_col[2] <= addr_a1[10:1] ;
		end else begin
			v_mode[0] <= 2'd0; v_mode[2] <= 2'd0;
			v_row[0] <= scr[0]; v_row[2] <= scr[2]; v_col[0] <= '0; v_col[2] <= '0;
			scr[0] <= scr_next(scr[0], 1'b0);
			scr[2] <= scr_next(scr[2], 1'b1);
		end
		if (|wr_b) begin
			v_mode[1] <= addr_b0[17] ? 2'd3 : 2'd2;
			v_mode[3] <= addr_b0[17] ? 2'd2 : 2'd3;
			v_wd[1] <= lane_data(din_b, wr_b); v_wbe[1] <= lane_be(wr_b);
			v_wrow[1] <= {2'd0, w_b[15:10]}; v_wcol[1] <= w_b[9:0]; v_wsel[1] <= addr_b0[17];
		end else if (rd_b) begin
			v_mode[1] <= 2'd1; v_mode[3] <= 2'd1;
			v_row[1] <= {2'd0, addr_b0[16:11]}; v_col[1] <= addr_b0[10:1];
			v_row[3] <= {2'd0, addr_b1[16:11]}; v_col[3] <= addr_b1[10:1];
		end else begin
			v_mode[1] <= 2'd0; v_mode[3] <= 2'd0;
			v_row[1] <= scr[1]; v_row[3] <= scr[3]; v_col[1] <= '0; v_col[3] <= '0;
			scr[1] <= scr_next(scr[1], 1'b0);
			scr[3] <= scr_next(scr[3], 1'b1);
		end
	end

	// ---- command generation for pin cycle `slot`
	c_cmd = CMD_NOP; c_a = '0; c_ba = 2'd0; c_dqm = 2'b00; c_dq = '0; c_oe = 1'b0;
	c_tv = 1'b0; c_tk = 3'd7; c_ti = 1'b0;
	if (init_done) begin
		case (slot)
		4'd2: if (v_mode[0] != 2'd3) begin v_act[0] <= 1'b1; c_cmd = CMD_ACT; c_ba = 2'd0; c_a = row_a(v_mode[0] == 2'd2 ? v_wrow[0] : v_row[0]); end
		4'd4: if (v_mode[1] != 2'd3) begin v_act[1] <= 1'b1; c_cmd = CMD_ACT; c_ba = 2'd1; c_a = row_a(v_mode[1] == 2'd2 ? v_wrow[1] : v_row[1]); end
		4'd6: if (v_mode[2] != 2'd3) begin v_act[2] <= 1'b1; c_cmd = CMD_ACT; c_ba = 2'd2; c_a = row_a(v_mode[2] == 2'd2 ? v_wrow[0] : v_row[2]); end
		4'd8: if (v_mode[3] != 2'd3) begin v_act[3] <= 1'b1; c_cmd = CMD_ACT; c_ba = 2'd3; c_a = row_a(v_mode[3] == 2'd2 ? v_wrow[1] : v_row[3]); end

		4'd5: if (v_mode[0] <= 2'd1 && v_act[0]) begin v_act[0] <= 1'b0;
			c_cmd = CMD_RD; c_ba = 2'd0; c_a = col_a(v_col[0]); c_tv = 1'b1; c_tk = (v_mode[0] == 2'd1) ? 3'd0 : 3'd7;
		end
		4'd7: if (v_mode[1] <= 2'd1 && v_act[1]) begin v_act[1] <= 1'b0;
			c_cmd = CMD_RD; c_ba = 2'd1; c_a = col_a(v_col[1]); c_tv = 1'b1; c_tk = (v_mode[1] == 2'd1) ? 3'd1 : 3'd7;
		end
		4'd9: begin
			if (v_mode[2] <= 2'd1 && v_act[2]) begin v_act[2] <= 1'b0;
				c_cmd = CMD_RD; c_ba = 2'd2; c_a = col_a(v_col[2]); c_tv = 1'b1; c_tk = (v_mode[2] == 2'd1) ? 3'd2 : 3'd7;
			end else if ((v_mode[0] == 2'd2 && v_act[0]) || (v_mode[2] == 2'd2 && v_act[2])) begin
				v_act[0] <= 1'b0; v_act[2] <= 1'b0;
				c_cmd = CMD_WR; c_ba = v_wsel[0] ? 2'd2 : 2'd0; c_a = col_a(v_wcol[0]);
				c_dq = v_wd[0]; c_oe = 1'b1; c_dqm = ~v_wbe[0];
			end
		end
		4'd11: begin
			if (v_mode[3] <= 2'd1 && v_act[3]) begin v_act[3] <= 1'b0;
				c_cmd = CMD_RD; c_ba = 2'd3; c_a = col_a(v_col[3]); c_tv = 1'b1; c_tk = (v_mode[3] == 2'd1) ? 3'd3 : 3'd7;
			end else if ((v_mode[1] == 2'd2 && v_act[1]) || (v_mode[3] == 2'd2 && v_act[3])) begin
				v_act[1] <= 1'b0; v_act[3] <= 1'b0;
				c_cmd = CMD_WR; c_ba = v_wsel[1] ? 2'd3 : 2'd1; c_a = col_a(v_wcol[1]);
				c_dq = v_wd[1]; c_oe = 1'b1; c_dqm = ~v_wbe[1];
			end
		end

		// ---- SCSP bank 2: ACT at 14, CAS at 1
		4'd14: begin
			c_cmd = CMD_ACT; c_ba = 2'd2;
			if ((sc_rd_p | sc_wr_p) && !sc_addr[17]) begin
				c_a = row_a(8'd64 + {1'b0, sc_addr[16:10]});
				s_act[2] <= 1'b1; s_wr[2] <= sc_wr_p; s_dum[2] <= 1'b0; s_col[2] <= sc_addr[9:0];
				s_d[2] <= sc_din; s_be[2] <= sc_be; s_t0[2] <= sc_t0;
				sc_rd_p <= 1'b0; sc_wr_p <= 1'b0;
			end else begin
				c_a = row_a(scr[2]); scr[2] <= scr_next(scr[2], 1'b1);
				s_act[2] <= 1'b1; s_wr[2] <= 1'b0; s_dum[2] <= 1'b1; s_col[2] <= '0; s_t0[2] <= cyc;
			end
		end
		4'd1: if (s_act[2]) begin
			s_act[2] <= 1'b0;
			c_ba = 2'd2; c_a = col_a(s_col[2]);
			if (s_wr[2]) begin c_cmd = CMD_WR; c_dq = s_d[2]; c_oe = 1'b1; c_dqm = ~s_be[2]; end
			else begin
				c_cmd = CMD_RD; c_tv = 1'b1;
				if (s_dum[2]) c_tk = 3'd7;
				else begin
					c_tk = 3'd4; c_ti = dl_wi;
					dl_v[dl_wi] <= 1'b1; dl_ld[dl_wi] <= 1'b0;
					dl_t0[dl_wi] <= s_t0[2];
					dl_wi <= ~dl_wi;
				end
			end
		end

		// ---- SCSP bank 3: ACT at 0 (16), CAS at 3
		4'd0: begin
			c_cmd = CMD_ACT; c_ba = 2'd3;
			if ((sc_rd_p | sc_wr_p) && sc_addr[17]) begin
				c_a = row_a(8'd64 + {1'b0, sc_addr[16:10]});
				s_act[3] <= 1'b1; s_wr[3] <= sc_wr_p; s_dum[3] <= 1'b0; s_col[3] <= sc_addr[9:0];
				s_d[3] <= sc_din; s_be[3] <= sc_be; s_t0[3] <= sc_t0;
				sc_rd_p <= 1'b0; sc_wr_p <= 1'b0;
			end else begin
				c_a = row_a(scr[3]); scr[3] <= scr_next(scr[3], 1'b1);
				s_act[3] <= 1'b1; s_wr[3] <= 1'b0; s_dum[3] <= 1'b1; s_col[3] <= '0; s_t0[3] <= cyc;
			end
		end
		4'd3: if (s_act[3]) begin
			s_act[3] <= 1'b0;
			c_ba = 2'd3; c_a = col_a(s_col[3]);
			if (s_wr[3]) begin c_cmd = CMD_WR; c_dq = s_d[3]; c_oe = 1'b1; c_dqm = ~s_be[3]; end
			else begin
				c_cmd = CMD_RD; c_tv = 1'b1;
				if (s_dum[3]) c_tk = 3'd7;
				else begin
					c_tk = 3'd4; c_ti = dl_wi;
					dl_v[dl_wi] <= 1'b1; dl_ld[dl_wi] <= 1'b0;
					dl_t0[dl_wi] <= s_t0[3];
					dl_wi <= ~dl_wi;
				end
			end
		end
		default: ;
		endcase
	end

	// ---- pin registers
	if (!init_done) begin
		{dram_ras_n, dram_cas_n, dram_we_n} <= i_cmd;
		dram_a <= i_a; dram_ba <= 2'b00; dram_dqm <= 2'b00; dram_dq_oe <= 1'b0; dram_dq_o <= '0;
	end else begin
		{dram_ras_n, dram_cas_n, dram_we_n} <= c_cmd;
		dram_a <= c_a; dram_ba <= c_ba; dram_dqm <= c_dqm; dram_dq_o <= c_dq; dram_dq_oe <= c_oe;
	end

	// ---- tag pipeline
	t_v[0] <= c_tv; t_k[0] <= c_tk; t_i[0] <= c_ti;
	for (k = 1; k <= 6; k = k + 1) begin t_v[k] <= t_v[k-1]; t_k[k] <= t_k[k-1]; t_i[k] <= t_i[k-1]; end

	// ---- read data landing
	if (t_v[4]) begin
		w0_q <= dq_cap;
		if (t_k[4] == 3'd4) begin dl_d[t_i[4]] <= dq_cap; dl_ld[t_i[4]] <= 1'b1; end
	end
	if (t_v[5]) begin
		case (t_k[5])
			3'd0: dout_a0 <= {w0_q, dq_cap};
			3'd1: dout_b0 <= {w0_q, dq_cap};
			3'd2: dout_a1 <= {w0_q, dq_cap};
			3'd3: dout_b1 <= {w0_q, dq_cap};
			default: ;
		endcase
	end

	// ---- SCSP delivery
	for (k = 0; k <= 1; k = k + 1) begin
		if (dl_v[k] && dl_ld[k] && (cyc - dl_t0[k]) >= SCSP_MIN_AGE[5:0]) begin
			ch2dout <= dl_d[k]; dl_v[k] <= 1'b0;
		end
	end

	// ---- scrub wrap indicator
	for (k = 0; k < 4; k = k + 1) begin
		scr_q[k] <= scr[k];
		if (scr[k] < scr_q[k] && dbg_scrub_wrap != 8'hFF) dbg_scrub_wrap <= dbg_scrub_wrap + 1'd1;
	end

	if (init) begin
		cyc <= '0;
		for (k = 0; k < 4; k = k + 1) begin v_mode[k] <= 2'd3; scr[k] <= 8'd0; end
		s_act[2] <= 1'b0; s_act[3] <= 1'b0; v_act <= 4'd0;
		sc_rd_p <= 1'b0; sc_wr_p <= 1'b0;
		dl_v[0] <= 1'b0; dl_v[1] <= 1'b0; dl_wi <= 1'b0;
		dbg_scrub_wrap <= '0; dbg_scsp_drop <= '0;
		for (k = 0; k <= 6; k = k + 1) t_v[k] <= 1'b0;
	end
end

endmodule

`default_nettype wire
