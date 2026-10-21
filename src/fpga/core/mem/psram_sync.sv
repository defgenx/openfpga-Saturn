// SPDX-License-Identifier: GPL-3.0-or-later
//
// psram_sync.sv - one Pocket PSRAM chip (AS1C8M16PL-70, two 8 MB dies on CE0#/CE1#) in
// synchronous fixed-latency burst mode, behind a 64 bit "DDRAM-style" client port.
//
// The pin protocol, the register writes (both asynchronous and clocked form, so a chip another core
// left synchronous still configures), the half-rate slot structure (chip clock = clk/2, pins change
// on F edges, read data is taken on the R edge) and the segment splitting at the 128 halfword row
// are those of psx_vram_psram.sv from GuardianSoul/openfpga-PlayStation (MIT, Copyright (c) 2026
// PSX Pocket contributors), which runs on hardware at 33.9 MHz. This module re-targets that
// protocol to one chip (16 bit data path), a 114.5 MHz clk (chip clock 57.3 MHz, LATENCY 4) and
// the Saturn ddram.sv backend semantics. Not implemented: parking the chips back in asynchronous
// mode when the core stops (the PSX core does; see docs/memory.md, risks).
//
// Client port (same as the 64 bit DDRAM backend that rtl/ddram.sv drives):
//   busy low: a request given on rd/we is taken at the next clk edge. busy is also low in the clk
//   cycle in which dout_ready is high so that ddram.sv can store the beat.
//   addr   64 bit word index in the chip (halfword address = {addr, 2'b00} + word)
//   rd     burst of `burstcnt` beats, beat n word k = halfword 4n+k; word 0 is bits 63:48
//   we     one beat, be[7:6] = word 0 bytes (be[7] = high byte), ... be[1:0] = word 3; only the
//          words from the first to the last enabled lane are written, masked per byte
//
// Timing (clk cycles): single word read 2*(LATENCY+2)+1 = 13, 16 words (one 32 byte line) 13+30,
// write of 1-2 words 2*(LATENCY+1)+2*words+2. A row (128 halfwords) is never crossed inside a
// segment; a burst that crosses one is split into two segments.
//

`default_nettype none

module psram_sync #(
	parameter int LATENCY   = 4,       // BCR[13:11]; code * tCLK must be >= 60 ns
	parameter int READ_ADJ  = 0,       // extra chip cycles before the first read sample (bring-up)
	parameter int WRITE_ADJ = 0,       // extra chip cycles before the first write word (bring-up)
	parameter int CLK_KHZ   = 114546,  // clk, for the power-up wait
	parameter int INIT_US   = 150,
	parameter int ROW_LOG2  = 7        // halfwords per segment, log2 (row = 128)
) (
	input  wire        clk,
	input  wire        reset,

	output wire        busy,
	input  wire [20:0] addr,
	input  wire  [7:0] burstcnt,
	input  wire        rd,
	input  wire        we,
	input  wire [63:0] din,
	input  wire  [7:0] be,
	output reg  [63:0] dout,
	output reg         dout_ready,
	output wire        idle,           // no segment running (for tests)

	output wire [21:16] cram_a,
	output wire [15:0] cram_dq_out,
	output wire        cram_dq_oe,
	input  wire [15:0] cram_dq_in,
	output wire        cram_clk,
	output wire        cram_adv_n,
	output wire        cram_cre,
	output wire        cram_ce0_n,
	output wire        cram_ce1_n,
	output wire        cram_oe_n,
	output wire        cram_we_n,
	output wire        cram_ub_n,
	output wire        cram_lb_n
);

localparam int RD_FIRST   = LATENCY + 1 + READ_ADJ;   // first read sample slot
localparam int WR_FIRST   = LATENCY + 1 + WRITE_ADJ;  // first write word slot
localparam int OE_SLOT    = LATENCY > 2 ? 2 : 1;
localparam int INIT_SLOTS = INIT_US * CLK_KHZ / 2000 + 16;
localparam logic [15:0] BCR_SYNC  = {1'b0, 1'b1, 3'(LATENCY), 1'b1, 1'b0, 1'b1, 2'b00, 2'b01, 1'b1, 3'b111};
localparam logic [15:0] RCR_ALL   = 16'h0010;         // power-on value: full array refresh

localparam logic [2:0] ST_INIT = 3'd0, ST_CFG = 3'd1, ST_IDLE = 3'd2,
                       ST_LAT  = 3'd3, ST_DATA = 3'd4, ST_SCFG = 3'd7;

// ---- pin registers
reg  [5:0]  p_a = 6'd0;
reg  [15:0] p_dq = 16'd0;
reg         p_oe = 1'b0, p_adv_n = 1'b1, p_cre = 1'b0, p_oe_n = 1'b1, p_we_n = 1'b1;
reg  [1:0]  p_ce_n = 2'b11;                           // {die 1, die 0}
reg  [1:0]  p_bm_n = 2'b11;                           // {ub, lb}
reg         p_clk = 1'b0;

assign cram_a = p_a;           assign cram_dq_out = p_dq;   assign cram_dq_oe = p_oe;
assign cram_clk = p_clk;       assign cram_adv_n = p_adv_n; assign cram_cre = p_cre;
assign cram_ce0_n = p_ce_n[0]; assign cram_ce1_n = p_ce_n[1];
assign cram_oe_n = p_oe_n;     assign cram_we_n = p_we_n;
assign {cram_ub_n, cram_lb_n} = p_bm_n;

// ---- control
reg         ph = 1'b0;            // 1: the coming edge is an F edge
reg  [2:0]  st = ST_INIT;
reg  [12:0] tmr = 13'd0;          // power-up wait / slot within a segment or config write
reg  [1:0]  cop = 2'd0;           // config write: {die, BCR(1)/RCR(0)}
reg         cpass = 1'b0;         // 0 asynchronous form (ST_CFG), 1 clocked form (ST_SCFG)
reg         clk_run = 1'b0;
reg         rst_pend = 1'b1;
reg         last = 1'b0, smp = 1'b0, cur_we = 1'b0, cur_we_req = 1'b0;

// the request on the pins (and the rest of a split read)
reg         act_busy = 1'b0;
reg  [22:0] act_adr = 23'd0;      // halfword address of the next word
reg  [10:0] act_cnt = 11'd0;      // read words still to fetch
reg  [63:0] act_din = 64'd0;
reg  [7:0]  act_be = 8'd0;
reg  [2:0]  w_cur = 3'd0;         // write: next word lane
reg  [2:0]  w_rem = 3'd0;         // write: words left

reg  [63:0] shift = 64'd0;
reg  [1:0]  wcap = 2'd0;

wire        row_end = &act_adr[ROW_LOG2-1:0];
wire        busy_i  = rst_pend || !(st == ST_IDLE && ph && !act_busy);
assign busy = busy_i && !dout_ready;
assign idle = (st == ST_IDLE) && !act_busy;
wire        take_bus = !busy_i && (rd || we);

wire [15:0] cfg_val = cop[0] ? BCR_SYNC : RCR_ALL;

// byte-lane helpers for a write beat
function automatic [2:0] first_lane(input [7:0] b);
	first_lane = |b[7:6] ? 3'd0 : |b[5:4] ? 3'd1 : |b[3:2] ? 3'd2 : 3'd3;
endfunction
function automatic [2:0] last_lane(input [7:0] b);
	last_lane = |b[1:0] ? 3'd3 : |b[3:2] ? 3'd2 : |b[5:4] ? 3'd1 : 3'd0;
endfunction
function automatic [15:0] lane_word(input [63:0] d, input [2:0] l);
	lane_word = d >> (16 * (3 - l));
endfunction
function automatic [1:0] lane_mask(input [7:0] b, input [2:0] l);
	lane_mask = b >> (2 * (3 - l));
endfunction

task automatic pins_idle;
	begin
		p_ce_n <= 2'b11; p_adv_n <= 1'b1; p_we_n <= 1'b1; p_oe_n <= 1'b1;
		p_oe <= 1'b0; p_bm_n <= 2'b11;
	end
endtask

// slot 0: CE#, ADV#, address (WE# low for a write)
task automatic launch;
	reg [22:0] adr;
	reg        w;
	begin
		if (act_busy) begin adr = act_adr; w = cur_we_req; end
		else begin
			// new request from the port
			w = we;
			adr = {addr, 2'b00} + (we ? {20'd0, first_lane(be)} : 23'd0);
			act_adr <= adr; act_busy <= 1'b1; cur_we_req <= we;
			act_din <= din; act_be <= be;
			act_cnt <= {1'b0, burstcnt, 2'b00};
			w_cur <= first_lane(be); w_rem <= last_lane(be) - first_lane(be) + 3'd1;
		end
		cur_we <= w;
		st <= ST_LAT; tmr <= 13'd1; last <= 1'b0;
		p_ce_n <= adr[22] ? 2'b01 : 2'b10;
		p_adv_n <= 1'b0; p_we_n <= !w; p_oe_n <= 1'b1; p_oe <= 1'b1;
		p_a <= adr[21:16]; p_dq <= adr[15:0];
		p_bm_n <= w ? 2'b11 : 2'b00;
	end
endtask
// after a configuration-register write (F edge)
task automatic cfg_next;
	begin
		tmr <= 13'd0;
		cop <= cop + 2'd1;
		if (rst_pend) begin st <= ST_INIT; clk_run <= 1'b0; end
		else if (cop == 2'd3) begin
			cop <= 2'd0;
			cpass <= !cpass;
			if (!cpass) begin st <= ST_SCFG; clk_run <= 1'b1; end
			else st <= ST_IDLE;
		end
	end
endtask

always @(posedge clk) begin
	ph <= !ph;
	rst_pend <= rst_pend || reset;
	dout_ready <= 1'b0;

	if (!ph) begin
		// ---- R edge: the chip clock rises; read capture
		p_clk <= clk_run;
		smp <= 1'b0;
		if (smp) begin
			shift <= {shift[47:0], cram_dq_in};
			wcap <= wcap + 2'd1;
			if (wcap == 2'd3) begin
				dout <= {shift[47:0], cram_dq_in};
				if (!rst_pend && !reset) dout_ready <= 1'b1;
			end
		end
	end else begin
		// ---- F edge: the chip clock falls; every other pin changes here
		p_clk <= 1'b0;

		case (st)
		ST_INIT: begin
			clk_run <= 1'b0; act_busy <= 1'b0; p_cre <= 1'b0; wcap <= 2'd0;
			pins_idle();
			tmr <= reset ? 13'd0 : tmr + 13'd1;
			if (!reset && tmr == 13'(INIT_SLOTS)) begin
				st <= ST_CFG; tmr <= 13'd0; cop <= 2'd0; cpass <= 1'b0; rst_pend <= 1'b0;
			end
		end

		// asynchronous configuration-register write, clock stopped: slot 0 CRE high, 1 CE#/ADV# low
		// with the value on A and DQ, 2-5 WE# low (4 slots = 70 ns at 114.5 MHz), 7 CE# high, 8 CRE low
		ST_CFG: begin
			tmr <= tmr + 13'd1;
			case (tmr[3:0])
			4'd0: p_cre <= 1'b1;
			4'd1: begin
				p_ce_n <= cop[1] ? 2'b01 : 2'b10; p_adv_n <= 1'b0;
				p_a <= cop[0] ? 6'b001000 : 6'b000000;       // A[19:18]: 10 BCR, 00 RCR
				p_dq <= cfg_val; p_oe <= 1'b1;
			end
			4'd2: begin p_adv_n <= 1'b1; p_we_n <= 1'b0; end
			4'd6: p_we_n <= 1'b1;
			4'd7: p_ce_n <= 2'b11;
			4'd8: begin p_cre <= 1'b0; p_oe <= 1'b0; cfg_next(); end
			default: ;
			endcase
		end

		// clocked configuration-register write: slot 0 CRE high, 1 CE#/ADV#/WE# low with the value
		// on A and DQ (sampled at the next chip edge), 2 ADV#/WE# high, 10 CE# high, 11 CRE low
		ST_SCFG: begin
			tmr <= tmr + 13'd1;
			case (tmr[3:0])
			4'd0: p_cre <= 1'b1;
			4'd1: begin
				p_ce_n <= cop[1] ? 2'b01 : 2'b10; p_adv_n <= 1'b0; p_we_n <= 1'b0;
				p_a <= cop[0] ? 6'b001000 : 6'b000000;
				p_dq <= cfg_val; p_oe <= 1'b1;
			end
			4'd2: begin p_adv_n <= 1'b1; p_we_n <= 1'b1; end
			4'd10: p_ce_n <= 2'b11;
			4'd11: begin p_cre <= 1'b0; p_oe <= 1'b0; cfg_next(); end
			default: ;
			endcase
		end

		ST_IDLE: begin
			if (act_busy && rst_pend && !cur_we_req) act_busy <= 1'b0;   // drop reads under reset
			else if (act_busy || take_bus) launch();
			else if (rst_pend) begin st <= ST_INIT; tmr <= 13'd0; clk_run <= 1'b0; end
		end

		ST_LAT: begin
			p_adv_n <= 1'b1; p_we_n <= 1'b1;
			if (!cur_we) begin p_oe <= 1'b0; if (tmr >= 13'(OE_SLOT)) p_oe_n <= 1'b0; end
			tmr <= tmr + 13'd1;
			if (tmr == 13'((cur_we ? WR_FIRST : RD_FIRST) - 1)) st <= ST_DATA;
		end

		ST_DATA: begin
			if (!cur_we) begin
				if (last) begin pins_idle(); st <= ST_IDLE; end
				else begin
					smp <= 1'b1;
					act_adr <= act_adr + 23'd1; act_cnt <= act_cnt - 11'd1;
					if (act_cnt == 11'd1) act_busy <= 1'b0;
					if (act_cnt == 11'd1 || row_end || rst_pend) last <= 1'b1;
				end
			end else begin
				if (w_rem == 3'd0) begin
					pins_idle(); act_busy <= 1'b0; st <= ST_IDLE;
				end else begin
					p_dq <= lane_word(act_din, w_cur);
					p_bm_n <= ~lane_mask(act_be, w_cur);
					w_cur <= w_cur + 3'd1; w_rem <= w_rem - 3'd1;
				end
			end
		end

		default: st <= ST_INIT;
		endcase
	end
end

endmodule

`default_nettype wire
