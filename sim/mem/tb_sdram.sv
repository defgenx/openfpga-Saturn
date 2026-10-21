// tb_sdram: sdram_pocket against a timing-checking AS4C32M16MSA model.
//
//  - VDP2 side is driven the way VDP2.sv does it: addresses/strobes change on DOT_CE_F, the four
//    32 bit results are sampled on DOT_CE_R of the dot after next (24 clk_ram after the request).
//  - SCSP side is driven the way SCSP.sv does it: a request on CYCLE1_CE, RAM_Q sampled on the
//    second CYCLE0_CE after it (265.7 ns), requests as dense as every CYCLE1_CE.
//  - Checks: read data, VDP2/SCSP write results, every SDRAM datasheet timing in the model, DQ bus
//    contention, row retention, SCSP request collisions.
//
//   +PROFILE=0 busy (both VDP2 groups read every dot)
//   +PROFILE=1 line pattern with idle windows (REFRESH/NOACCESS), 80% busy otherwise
//   +PROFILE=2 busy plus VDP2 writes (10% per group)
//   +RUN_US=n   simulated time (default 200)
//   +TREF_US=n  retention limit used by the model (default 64000)
//   +NOSCSP     disable the SCSP traffic
//   +CAPPS=n    extra delay (ps) on the SDRAM clock path, to probe the data eye
//   -DCAPNEG    capture on falling edges (CAP_NEG=1)

`timescale 1ps/1ps

module tb_sdram;

localparam integer T_RAM = 8730;               // 114.55 MHz
localparam integer TCO   = 3500;               // FPGA clock/pin output delay
localparam integer TIN   = 1000;               // pin to register input delay
`ifdef CAPNEG
localparam bit CAP_NEG = 1'b1;
`else
localparam bit CAP_NEG = 1'b0;
`endif

reg clk_ram = 0, clk_sys = 0;
always #(T_RAM/2) clk_ram = ~clk_ram;
always #(T_RAM)   clk_sys = ~clk_sys;

integer profile = 0, run_us = 200, tref_us = 64000, scsp_en = 1, clk_skew = 0;
integer seed = 1;
initial begin
	if (!$value$plusargs("PROFILE=%d", profile)) profile = 0;
	if (!$value$plusargs("RUN_US=%d", run_us)) run_us = 200;
	if (!$value$plusargs("TREF_US=%d", tref_us)) tref_us = 64000;
	if (!$value$plusargs("CAPPS=%d", clk_skew)) clk_skew = 0;
	if ($test$plusargs("NOSCSP")) scsp_en = 0;
	if (!$value$plusargs("SEED=%d", seed)) seed = 1;
end

// ---------------------------------------------------------------- DUT
wire [12:0] dram_a;  wire [1:0] dram_ba, dram_dqm;
wire [15:0] dram_dq_o; wire dram_dq_oe; wire dram_cke, dram_ras_n, dram_cas_n, dram_we_n, dram_clk;
wire [15:0] dram_dq_i;
reg  [17:1] addr_a0 = 0, addr_b0 = 0;  reg [16:1] addr_a1 = 0, addr_b1 = 0;
reg  [63:0] din_a = 0, din_b = 0;      reg [7:0] wr_a = 0, wr_b = 0;  reg rd_a = 0, rd_b = 0;
wire [31:0] dout_a0, dout_a1, dout_b0, dout_b1;
reg  [19:1] ch2addr = 0; reg [15:0] ch2din = 0; reg [1:0] ch2wr = 0; reg ch2rd = 0;
wire [15:0] ch2dout; wire ch2rdy, init_done;
wire [7:0] dbg_scrub_wrap, dbg_scsp_drop;
reg init = 1;

// DOT_CE_R / DOT_CE_F as VDP2.sv makes them
reg [1:0] dot_div = 0; reg ce_ph = 0;
always @(posedge clk_sys) begin
	ce_ph <= ~ce_ph;
	if (ce_ph) dot_div <= dot_div + 1'd1;
end
wire ce_r = ce_ph;
wire dot_ce_r = (dot_div == 2'd3) & ce_r;
wire dot_ce_f = (dot_div == 2'd1) & ce_r;

sdram_pocket #(.INIT_CLKS(2000), .CAP_NEG(CAP_NEG)) dut (
	.clk(clk_ram), .init(init), .sync(dot_ce_r),
	.dram_a(dram_a), .dram_ba(dram_ba), .dram_dq_o(dram_dq_o), .dram_dq_oe(dram_dq_oe), .dram_dq_i(dram_dq_i),
	.dram_dqm(dram_dqm), .dram_cke(dram_cke), .dram_ras_n(dram_ras_n), .dram_cas_n(dram_cas_n), .dram_we_n(dram_we_n),
	.dram_clk(dram_clk),
	.addr_a0(addr_a0), .addr_a1(addr_a1), .din_a(din_a), .wr_a(wr_a), .rd_a(rd_a), .dout_a0(dout_a0), .dout_a1(dout_a1),
	.addr_b0(addr_b0), .addr_b1(addr_b1), .din_b(din_b), .wr_b(wr_b), .rd_b(rd_b), .dout_b0(dout_b0), .dout_b1(dout_b1),
	.ch2addr(ch2addr), .ch2din(ch2din), .ch2wr(ch2wr), .ch2rd(ch2rd), .ch2dout(ch2dout), .ch2rdy(ch2rdy),
	.init_done(init_done), .dbg_scrub_wrap(dbg_scrub_wrap), .dbg_scsp_drop(dbg_scsp_drop)
);

// ---------------------------------------------------------------- pins and model
// transport delays (inertial `assign #` would swallow the clock pulses once the delay exceeds half a period)
reg  [12:0] a_d;  reg [1:0] ba_d, dqm_d;  reg ras_d, cas_d, we_d, sdr_clk, oe_d;  reg [15:0] o_d;
wire [15:0] dq;
reg  [15:0] dq_in_r;
always @(dram_a)      a_d     <= #(TCO) dram_a;
always @(dram_ba)     ba_d    <= #(TCO) dram_ba;
always @(dram_dqm)    dqm_d   <= #(TCO) dram_dqm;
always @(dram_ras_n)  ras_d   <= #(TCO) dram_ras_n;
always @(dram_cas_n)  cas_d   <= #(TCO) dram_cas_n;
always @(dram_we_n)   we_d    <= #(TCO) dram_we_n;
always @(dram_dq_oe)  oe_d    <= #(TCO) dram_dq_oe;
always @(dram_dq_o)   o_d     <= #(TCO) dram_dq_o;
always @(dram_clk)    sdr_clk <= #(TCO + clk_skew) dram_clk;      // clk inverted by the DDIO
assign dq = oe_d ? o_d : 16'hzzzz;
always @(dq)          dq_in_r <= #(TIN) dq;
assign dram_dq_i = dq_in_r;
initial begin a_d = 0; ba_d = 0; dqm_d = 0; ras_d = 1; cas_d = 1; we_d = 1; sdr_clk = 1; oe_d = 0; o_d = 0; dq_in_r = 16'hzzzz; end

wire [31:0] m_err, m_act, m_rd, m_wr; wire m_drive;
reg  [63:0] t_ref;
initial t_ref = tref_us * 64'd1000000;
always @* t_ref = tref_us * 64'd1000000;

sdram_model model (
	.t_ref(t_ref), .clk(sdr_clk), .cke(dram_cke), .ras_n(ras_d), .cas_n(cas_d), .we_n(we_d),
	.ba(ba_d), .a(a_d), .dqm(dqm_d), .dq(dq), .errors(m_err), .dq_drive(m_drive),
	.n_act(m_act), .n_rd(m_rd), .n_wr(m_wr)
);

// bus contention: the FPGA must not drive while the SDRAM does. The overlap is measured against the
// worst-case tHZ of the model; `overlap_max` is reported and anything above OVERLAP_LIMIT fails.
integer contention = 0, overlap_max = 0, overlap_n = 0;
longint ov_t0 = 0;
localparam integer OVERLAP_LIMIT = 1100;
wire both = oe_d & m_drive;
always @(posedge both) ov_t0 = $time;
always @(negedge both) if (ov_t0 != 0) begin
	overlap_n = overlap_n + 1;
	if ($time - ov_t0 > overlap_max) overlap_max = $time - ov_t0;
	if ($time - ov_t0 > OVERLAP_LIMIT) contention = contention + 1;
	ov_t0 = 0;
end

// ---------------------------------------------------------------- golden memory
function automatic [15:0] hash16(input [19:0] i);
	reg [31:0] t;
	begin t = {12'd0, i} * 32'h9E3779B1; hash16 = t[31:16] ^ t[15:0] ^ 16'h5A5A; end
endfunction

reg [15:0] shadow [0:(1<<20)-1];
integer pi;
initial begin
	for (pi = 0; pi < (1<<20); pi = pi + 1) begin
		shadow[pi] = hash16(pi[19:0]);
		model.mem[pi] = hash16(pi[19:0]);
	end
end

function automatic [19:0] idx(input [1:0] bank, input [7:0] row, input [9:0] col);
	idx = {bank, row, col};
endfunction

// ---------------------------------------------------------------- VDP2 emulation
integer errs = 0, checks_v = 0, checks_s = 0, writes_v = 0, writes_s = 0;
integer dotn = 0;
reg issuing = 0;

// expectations: stage 0 set at DOT_CE_F, stage 1 sampled at the following DOT_CE_R
reg        e0_v [0:3], e1_v [0:3];
reg [31:0] e0_d [0:3], e1_d [0:3];
integer    gi;

function automatic [31:0] rd_exp(input [1:0] bank, input [15:0] off);
	reg [19:0] i0, i1;
	begin
		i0 = idx(bank, {2'b00, off[15:10]}, off[9:0]);
		i1 = idx(bank, {2'b00, off[15:10]}, {off[9:1], ~off[0]});
		rd_exp = {shadow[i0], shadow[i1]};
	end
endfunction

function automatic integer rnd(input integer n);
	rnd = $urandom % n;
endfunction

reg busy_a, busy_b, wrt_a, wrt_b;
reg [15:0] off;
reg  [1:0] lane;
reg [15:0] wdata, w16;
reg        half;
integer linepos;
reg sample_pending;   // PIPE[0]
reg pipe1;
integer wr_bank;

always @(posedge clk_sys) begin
	if (dot_ce_r) begin
		// VRAMxx_Q <= RAx_Q when VRAM_READ_PIPE[1]
		if (pipe1) begin
			if (e1_v[0] && dout_a0 !== e1_d[0]) begin errs = errs + 1; $display("%0t VDP2 A0 mismatch got %h exp %h", $time, dout_a0, e1_d[0]); end
			if (e1_v[1] && dout_b0 !== e1_d[1]) begin errs = errs + 1; $display("%0t VDP2 B0 mismatch got %h exp %h", $time, dout_b0, e1_d[1]); end
			if (e1_v[2] && dout_a1 !== e1_d[2]) begin errs = errs + 1; $display("%0t VDP2 A1 mismatch got %h exp %h", $time, dout_a1, e1_d[2]); end
			if (e1_v[3] && dout_b1 !== e1_d[3]) begin errs = errs + 1; $display("%0t VDP2 B1 mismatch got %h exp %h", $time, dout_b1, e1_d[3]); end
			checks_v = checks_v + e1_v[0] + e1_v[1] + e1_v[2] + e1_v[3];
			pipe1 <= 1'b0;
		end
	end
	if (dot_ce_f) begin
		for (gi = 0; gi < 4; gi = gi + 1) begin e1_v[gi] <= e0_v[gi]; e1_d[gi] <= e0_d[gi]; e0_v[gi] <= 1'b0; end
		pipe1 <= sample_pending;
		sample_pending <= 1'b0;

		dotn = dotn + 1;
		linepos = dotn % 454;
		wr_a <= 8'd0; wr_b <= 8'd0; rd_a <= 1'b0; rd_b <= 1'b0;
		busy_a = 0; busy_b = 0; wrt_a = 0; wrt_b = 0;
		if (issuing) begin
			case (profile)
				0: begin busy_a = 1; busy_b = 1; end
				1: if (!((linepos >= 150 && linepos < 155) || (linepos >= 400 && linepos < 409) || linepos >= 352)) begin
					busy_a = (rnd(100) < 80); busy_b = (rnd(100) < 80);
				end
				2: begin
					busy_a = 1; busy_b = 1;
					if (rnd(100) < 10) begin wrt_a = 1; busy_a = 0; end
					if (rnd(100) < 10) begin wrt_b = 1; busy_b = 0; end
				end
				default: ;
			endcase
		end
		if (busy_a) begin
			rd_a <= 1'b1;
			off = {rnd(56), rnd(1024)};              // rows 0-55 only (rows 56-63 take the writes)
			addr_a0 <= {1'b0, off};
			e0_v[0] <= 1'b1; e0_d[0] <= rd_exp(2'd0, off);
			off = {rnd(56), rnd(1024)};
			addr_a1 <= off;
			e0_v[2] <= 1'b1; e0_d[2] <= rd_exp(2'd2, off);
			sample_pending <= 1'b1;
		end
		if (busy_b) begin
			rd_b <= 1'b1;
			off = {rnd(56), rnd(1024)};
			addr_b0 <= {1'b0, off};
			e0_v[1] <= 1'b1; e0_d[1] <= rd_exp(2'd1, off);
			off = {rnd(56), rnd(1024)};
			addr_b1 <= off;
			e0_v[3] <= 1'b1; e0_d[3] <= rd_exp(2'd3, off);
			sample_pending <= 1'b1;
		end
		if (wrt_a) begin
			lane = rnd(4);  half = rnd(2);
			w16 = {6'd56 + rnd(8), rnd(256), lane};
			wdata = $urandom;
			addr_a0 <= {half, w16};
			din_a <= {4{wdata}};
			wr_a <= 8'b11 << (6 - 2*lane);
			wr_bank = half ? 2 : 0;
			shadow[idx(wr_bank[1:0], {2'b00, w16[15:10]}, w16[9:0])] = wdata;
			writes_v = writes_v + 1;
		end
		if (wrt_b) begin
			lane = rnd(4);  half = rnd(2);
			w16 = {6'd56 + rnd(8), rnd(256), lane};
			wdata = $urandom;
			addr_b0 <= {half, w16};
			din_b <= {4{wdata}};
			wr_b <= 8'b11 << (6 - 2*lane);
			wr_bank = half ? 3 : 1;
			shadow[idx(wr_bank[1:0], {2'b00, w16[15:10]}, w16[9:0])] = wdata;
			writes_v = writes_v + 1;
		end
	end
end

// ---------------------------------------------------------------- SCSP emulation (SCSP.sv timing)
integer scsp_acc = 0;
reg        scsp_ce = 0, clk_div = 0;
reg  [2:0] cyc_num = 0;
wire cycle1_ce = cyc_num[0] & clk_div & scsp_ce;
wire cycle0_ce = ~cyc_num[0] & clk_div & scsp_ce;

reg        rq0_v = 0, rq1_v = 0;
reg        rq0_rd = 0, rq1_rd = 0;
reg [15:0] rq0_d = 0, rq1_d = 0;
reg [17:0] sca;
reg  [1:0] sc_be;
reg [15:0] sc_d;
reg [19:0] sc_i;
reg        sc_isrd;
integer    hot;

always @(posedge clk_sys) begin
	scsp_ce <= 1'b0;
	scsp_acc = scsp_acc + 22579200;
	if (scsp_acc >= 57272800) begin scsp_acc = scsp_acc - 57272800; scsp_ce <= 1'b1; end
	if (scsp_ce) clk_div <= ~clk_div;
	if (clk_div && scsp_ce) cyc_num <= cyc_num + 1'd1;

	if (cycle0_ce) begin
		ch2rd <= 1'b0; ch2wr <= 2'b00;
		if (rq1_v && rq1_rd) begin
			checks_s = checks_s + 1;
			if (ch2dout !== rq1_d) begin errs = errs + 1; $display("%0t SCSP read mismatch got %h exp %h (next req v=%b rd=%b d=%h) drop=%0d", $time, ch2dout, rq1_d, rq0_v, rq0_rd, rq0_d, dbg_scsp_drop); end
		end
		rq1_v <= rq0_v; rq1_rd <= rq0_rd; rq1_d <= rq0_d;
		rq0_v <= 1'b0;
	end
	if (cycle1_ce && issuing && scsp_en && rnd(100) < 90) begin
		hot = rnd(100);
		if (hot < 70) sca = {rnd(2) == 1, 17'd0} + rnd(24);
		else          sca = {rnd(2) == 1, 17'd0} | rnd(131072);
		sc_i = idx(sca[17] ? 2'd3 : 2'd2, 8'd64 + {1'b0, sca[16:10]}, sca[9:0]);
		ch2addr <= {1'b0, sca};
		if (rnd(100) < 65) begin
			ch2rd <= 1'b1;
			rq0_v <= 1'b1; rq0_rd <= 1'b1; rq0_d <= shadow[sc_i];
		end else begin
			sc_d = $urandom;
			sc_be = (rnd(4) == 0) ? (rnd(2) ? 2'b01 : 2'b10) : 2'b11;
			ch2din <= sc_d; ch2wr <= sc_be;
			if (sc_be[0]) shadow[sc_i][7:0]  = sc_d[7:0];
			if (sc_be[1]) shadow[sc_i][15:8] = sc_d[15:8];
			rq0_v <= 1'b1; rq0_rd <= 1'b0;
			writes_s = writes_s + 1;
		end
	end
end

// SCSP read latency statistics: first ch2dout change after each read request, in clk_ram cycles
reg ch2rd_q = 0, rq_pend = 0;
reg [15:0] dout_q = 0;
longint t_rq [0:1];
integer lat_min = 999, lat_max = 0, lat_n = 0;
reg [1:0] rq_cnt = 0;
always @(posedge clk_ram) begin
	if (ch2rd && !ch2rd_q) begin t_rq[0] <= t_rq[1]; t_rq[1] = $time; rq_pend <= 1'b1; end
	ch2rd_q <= ch2rd;
end
always @(posedge clk_ram) begin
	dout_q <= ch2dout;
	if (rq_pend && ch2dout !== dout_q) begin
		lat_n = lat_n + 1;
		if (($time - t_rq[1]) / T_RAM < lat_min) lat_min = ($time - t_rq[1]) / T_RAM;
		if (($time - t_rq[1]) / T_RAM > lat_max) lat_max = ($time - t_rq[1]) / T_RAM;
		rq_pend <= 1'b0;
	end
end

// ---------------------------------------------------------------- control
integer bad, ai;
initial begin
	repeat (8) @(posedge clk_ram);
	init <= 1'b0;
	wait (init_done);
	repeat (64) @(posedge clk_ram);
	issuing = 1;
	#(run_us * 64'd1000000);
	issuing = 0;
	#(3000000);
	model.final_check;
	bad = 0;
	for (ai = 0; ai < (1<<20); ai = ai + 1)
		if (model.mem[ai] !== shadow[ai]) begin
			bad = bad + 1;
			if (bad < 10) $display("memory mismatch idx %h: mem %h exp %h", ai[19:0], model.mem[ai], shadow[ai]);
		end
	$display("tb_sdram: profile %0d, %0d us: VDP2 checks %0d, VDP2 writes %0d, SCSP checks %0d, SCSP writes %0d",
	         profile, run_us, checks_v, writes_v, checks_s, writes_s);
	$display("tb_sdram: ACT %0d READ %0d WRITE %0d, scrub wraps %0d, SCSP collisions %0d, DQ contention %0d",
	         m_act, m_rd, m_wr, dbg_scrub_wrap, dbg_scsp_drop, contention);
	$display("tb_sdram: DQ overlap with worst-case tHZ: %0d events, max %0d ps", overlap_n, overlap_max);
	$display("tb_sdram: SCSP read latency %0d..%0d clk_ram cycles (%0d changes)", lat_min, lat_max, lat_n);
	$display("tb_sdram: data errors %0d, final memory mismatches %0d, SDRAM model errors %0d", errs, bad, m_err);
	if (errs == 0 && bad == 0 && m_err == 0 && contention == 0 && dbg_scsp_drop == 0 && checks_v > 0)
		$display("tb_sdram: PASS");
	else
		$display("tb_sdram: FAIL");
	$finish;
end

endmodule
