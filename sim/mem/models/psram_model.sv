// Behavioural AS1C8M16PL-70 CellularRAM chip (two 8 MB dies on CE0#/CE1#, A[21:16] + A/DQ[15:0]
// multiplexed by ADV#) for psram_sync. Simulation only; pin-level checks only.
//
// Rules follow the model in GuardianSoul/openfpga-PlayStation sim/pocket/psx_cram_model.sv (MIT,
// Copyright (c) 2026 PSX Pocket contributors), which was written from the Alliance datasheet figures
// (tACLK 9 ns, tKOH 2 ns, tHZ 7 ns, tSP 3 ns, tHD 2 ns, tCEM 4 us, 150 us power-up) and checked on
// hardware: fixed latency, first read data driven after edge LC, first write data taken at edge
// LC+1, edge 0 = the clock edge that sees ADV# low. This is an independent, smaller implementation
// of those rules; it was not validated against a chip.

`timescale 1ps/1ps

module psram_model #(
	parameter integer T_ACLK = 9000,
	parameter integer T_KOH  = 2000,
	parameter integer T_HZ   = 7000,
	parameter integer T_SU   = 3000,
	parameter integer T_HD   = 2000,
	parameter integer T_CEM  = 4000000,
	parameter integer T_LAT_MIN = 60000,
	parameter longint T_POWER = 150000000,
	parameter integer ROW    = 128        // halfwords per row
) (
	input  wire         clk,
	input  wire         host_oe,
	input  wire  [21:16] a,
	inout  wire  [15:0] dq,
	input  wire         ce0_n, ce1_n, adv_n, oe_n, we_n, ub_n, lb_n, cre,
	output reg   [31:0] errors,
	output reg   [31:0] n_rd, n_wr, n_bursts,
	output reg   [31:0] max_ce_low,
	output reg   [31:0] n_xrow
);

reg [15:0] mem [0:(1<<23)-1];                 // {die, halfword[21:0]}
reg [15:0] bcr [0:1], rcr [0:1];
initial begin
	bcr[0] = 16'h9D1F; bcr[1] = 16'h9D1F; rcr[0] = 16'h0010; rcr[1] = 16'h0010;
	n_xrow = 0; errors = 0; n_rd = 0; n_wr = 0; n_bursts = 0; max_ce_low = 0;
end

task automatic fail(input [8*48-1:0] what);
	begin
		errors = errors + 1;
		$display("%0t PSRAM ERROR: %0s", $time, what);
	end
endtask

wire ce_n = ce0_n & ce1_n;
reg  die = 0, cfg = 0, asy = 0, sync_cfg = 0, active = 0, wr = 0, committed = 0, latched = 0;
reg [21:0] base = 0;
reg [15:0] cfg_val = 0;
reg  [1:0] cfg_sel = 0;
integer edge_n = 0, lat = 0;
longint t_ce_fall = 0, t_ce_rise = 0, t_rise = 0, t_prev = 0, t_adv_ch = 0, t_we_ch = 0, t_a_ch = 0, t_dq_ch = 0, t_bm_ch = 0;
longint t_adv_fall = 0, t_adv_rise = 0, t_we_fall = 0;
integer period = 0;

// ---- output driver
reg [15:0] dq_out = 16'hxxxx;
reg        rd_active = 0;
wire       drive = rd_active && !oe_n && !ce_n;
assign dq = drive ? dq_out : 16'hzzzz;
always @(drive or host_oe) if (drive && host_oe === 1'b1) fail("bus contention");

// ---- hold checks (inputs sampled at a rising edge with CE# low)
wire sampled = !ce_n && !asy && $time > 0;
always @(a)       begin t_a_ch = $time;  if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("address hold"); end
always @(dq)      if (host_oe === 1'b1) begin t_dq_ch = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("data hold"); end
always @(adv_n)   begin t_adv_ch = $time; if (!adv_n) t_adv_fall = $time; else t_adv_rise = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("ADV# hold"); end
always @(we_n)    begin t_we_ch = $time;  if (!we_n) t_we_fall = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("WE# hold"); end
always @(ub_n or lb_n) begin t_bm_ch = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("UB#/LB# hold"); end

// ---- chip enable
always @(negedge ce0_n or negedge ce1_n) if (!ce0_n || !ce1_n) begin
	if (!ce0_n && !ce1_n) fail("both dies selected");
	if ($time < T_POWER) fail("access before power-up time");
	t_ce_fall = $time;
	die = ce0_n;
	cfg = cre;
	asy = !cre && bcr[ce0_n][15];            // asynchronous single access (not used by the controller)
	sync_cfg = cre && !bcr[ce0_n][15];
	active = 0; committed = 0; latched = 0; edge_n = 0; rd_active = 0;
	if (asy) fail("asynchronous access (controller must use bursts)");
end

always @(posedge ce0_n or posedge ce1_n) if (ce0_n && ce1_n && t_ce_fall != 0) begin
	if ($time - t_ce_fall > max_ce_low) max_ce_low = $time - t_ce_fall;
	if ($time - t_ce_fall > T_CEM) fail("CE# low longer than tCEM");
	if (sync_cfg && latched && !committed) begin set_reg(); end
	active = 0;
	rd_active = 0;
	t_ce_rise = $time;
end

task automatic set_reg;
	begin
		case (cfg_sel)
			2'b10: bcr[die] = cfg_val;
			2'b00: rcr[die] = cfg_val;
			default: fail("unsupported config register");
		endcase
		committed = 1;
	end
endtask

// asynchronous register write (die in power-on mode): ADV# rising latches, WE# rising commits
always @(posedge adv_n) if (!ce_n && cfg && !sync_cfg) begin
	cfg_val = dq; cfg_sel = a[19:18]; latched = 1;
end
always @(posedge we_n) if (!ce_n && cfg && !sync_cfg && latched && !committed) begin
	if ($time - t_we_fall < 45000) fail("config WE# pulse");
	if (dq !== cfg_val) fail("config data differs from address");
	set_reg();
end

// ---- clock edges
integer k;
reg [21:0] wa;
always @(posedge clk) begin
	t_prev = t_rise;
	t_rise = $time;
	if (t_prev != 0) period = t_rise - t_prev;
	if (!ce_n) begin
		if (cfg && !sync_cfg) fail("clock edge during asynchronous register write");
		// setup checks of the sampled controls
		if (!adv_n && $time - t_adv_ch < T_SU && !active) fail("ADV# setup");
		if (sync_cfg) begin
			if (!adv_n && !we_n && !latched) begin
				cfg_val = dq; cfg_sel = a[19:18]; latched = 1;
				if (^dq === 1'bx) fail("config value undriven");
			end
		end else if (!cfg && !bcr[die][15]) begin
			if (!active) begin
				if (!adv_n) begin
					if (period * (bcr[die][13:11]) < T_LAT_MIN) fail("latency code * tCLK < 60 ns");
					if (!bcr[die][14]) fail("variable latency not modelled");
					active = 1; wr = !we_n; edge_n = 0; lat = bcr[die][13:11];
					base = {a, dq};
					n_bursts = n_bursts + 1;
					if ($time - t_a_ch < T_SU || $time - t_dq_ch < T_SU) fail("address setup");
					if ($time - t_we_ch < T_SU) fail("WE# setup");
					if (^{a, dq} === 1'bx) fail("address undriven");
				end
			end else begin
				edge_n = edge_n + 1;
			end
			if (active) begin
				if (!wr) begin
					// read: first data driven after edge `lat`, one word per edge
					if (edge_n >= lat) begin
						k = edge_n - lat;
						wa = base + k;
						if (wa[21:7] != base[21:7]) begin
							dq_out <= #(T_ACLK) 16'hxxxx;   // crossing a row needs WAIT: nothing useful is returned
							n_xrow = n_xrow + 1;            // the controller's last captured word is one edge earlier
						end else begin
							dq_out <= #(T_ACLK) mem[{die, wa}];
						end
						dq_out <= #(period + T_KOH) 16'hxxxx;
						rd_active = 1;
						n_rd = n_rd + 1;
					end
				end else if (edge_n >= lat + 1) begin
					k = edge_n - lat - 1;
					wa = base + k;
					if (wa[21:7] != base[21:7]) fail("write burst crossed a row");
					if ($time - t_dq_ch < T_SU || $time - t_bm_ch < T_SU) fail("write data/mask setup");
					if (host_oe !== 1'b1) fail("write data not driven");
					if (!lb_n) mem[{die, wa}][7:0]  = dq[7:0];
					if (!ub_n) mem[{die, wa}][15:8] = dq[15:8];
					n_wr = n_wr + 1;
				end
			end
		end
	end
end

endmodule
