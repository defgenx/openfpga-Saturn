// Behavioural AS1C8M16PL-70 CellularRAM chip (two 64 Mb AS1C4M16PL dies on CE0#/CE1#, A[21:16] + A/DQ[15:0]
// multiplexed by ADV#) for psram_sync. Simulation only; pin-level checks only.
//
// Rules from the AS1C4M16PL-70BIN datasheet (Alliance, Rev 1.0 Aug 2018; figures, tables and notes are cited where
// they are checked) and from the hardware findings of GuardianSoul/openfpga-PlayStation sim/pocket/psx_cram_model.sv
// (MIT, Copyright (c) 2026 PSX Pocket contributors). Edge 0 = the clock edge that sees ADV# low; fixed latency
// code N: the first read word is driven after edge N (fig. 5, 18), the first write word is taken at edge N+1 (fig. 6).
// Timing values: the 83 MHz column of table 14 (the slowest grade that runs 57.3 MHz). Not validated against a chip.
//
// START_BCR / START_RCR are the registers at time 0: power-on values, or what another core left.

`timescale 1ps/1ps

module psram_model #(
	parameter integer T_ACLK = 9000,
	parameter integer T_KOH  = 2000,
	parameter integer T_HZ   = 7000,
	parameter integer T_SU   = 3000,
	parameter integer T_HD   = 2000,
	parameter integer T_CSP  = 4000,      // CE# setup to the clock
	parameter integer T_KP   = 4000,      // clock high / low time
	parameter integer T_CBPH = 6000,      // CE# high between bursts (table 14)
	parameter integer T_REFR = 15000,     // CE# high longer than this, or one clocked CE# high, is a refresh opportunity
	parameter integer T_CEM  = 4000000,
	parameter integer T_AA   = 70000,     // tAA / tAADV / tCO, fixed latency (table 14)
	parameter integer T_BOE  = 20000,     // burst OE# low to output
	parameter integer T_LAT_MIN = 60000,  // unused (kept for the benches' overrides); table 6 is checked instead
	parameter longint T_POWER = 150000000,
	parameter integer ROW    = 128,       // halfwords per row
	parameter [15:0] START_BCR = 16'h9D1F,
	parameter [15:0] START_RCR = 16'h0010
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
// +MEMRAND: power-up contents are random, as on the Pocket's chips (the sim otherwise starts them at 0)
initial if ($test$plusargs("MEMRAND")) for (int mi = 0; mi < (1<<23); mi++) mem[mi] = 16'($urandom);
reg [15:0] bcr [0:1], rcr [0:1];
integer n_cfg_async = 0, n_cfg_sync = 0;
initial begin
	bcr[0] = START_BCR; bcr[1] = START_BCR; rcr[0] = START_RCR; rcr[1] = START_RCR;
	n_xrow = 0; errors = 0; n_rd = 0; n_wr = 0; n_bursts = 0; max_ce_low = 0;
end

task automatic fail(input [8*56-1:0] what);
	begin
		errors = errors + 1;
		$display("%0t PSRAM ERROR: %0s", $time, what);
	end
endtask

// table 6: fixed latency code -> minimum tCLK (ps); 0 = reserved
function automatic integer tclk_min(input [2:0] code);
	case (code)
		3'b010: tclk_min = 30000; 3'b011: tclk_min = 19200; 3'b100: tclk_min = 15000;
		3'b101: tclk_min = 13300; 3'b110: tclk_min = 12000; 3'b000: tclk_min = 7500;
		default: tclk_min = 0;
	endcase
endfunction
function automatic integer lc_of(input [2:0] code);
	lc_of = code == 3'b000 ? 8 : code;
endfunction

wire ce_n = ce0_n & ce1_n;
reg  die = 0, cfg = 0, asy = 0, sync_cfg = 0, active = 0, wr = 0, committed = 0, latched = 0, first_data = 0;
reg [21:0] base = 0;
reg [15:0] cfg_val = 0;
reg  [1:0] cfg_sel = 0;
integer edge_n = 0, lat = 0, cfg_edges = 0, cfg_need = 0, words = 0;
longint t_ce_fall = 0, t_ce_rise = 0, t_rise = 0, t_fall = 0, t_prev = 0, t_adv_ch = 0, t_we_ch = 0, t_a_ch = 0, t_dq_ch = 0, t_bm_ch = 0;
longint t_adv_fall = 0, t_adv_rise = 0, t_we_fall = 0, t_oe_fall = 0, t_cem0 = 0;
reg     clk_hi_ce = 0;                            // a rising clock edge seen with CE# high since the last CE# rise
integer period = 0;

// ---- output driver (each byte only with its enable low, note 3 of table 2)
reg [15:0] dq_out = 16'hxxxx;
reg        rd_active = 0;
wire       drive = rd_active && !oe_n && !ce_n;
assign dq[7:0]  = drive && !lb_n ? dq_out[7:0]  : 8'hzz;
assign dq[15:8] = drive && !ub_n ? dq_out[15:8] : 8'hzz;
always @(drive or host_oe) if (drive && host_oe === 1'b1) fail("bus contention");
always @(negedge oe_n) t_oe_fall = $time;

// ---- hold checks (inputs sampled at a rising edge with CE# low)
wire sampled = !ce_n && !asy && !(cfg && !sync_cfg) && $time > 0;
always @(a)       begin t_a_ch = $time;  if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("address hold"); end
always @(dq)      if (host_oe === 1'b1) begin t_dq_ch = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("data hold"); end
always @(adv_n)   begin t_adv_ch = $time; if (!adv_n) t_adv_fall = $time; else t_adv_rise = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("ADV# hold"); end
always @(we_n)    begin t_we_ch = $time;  if (!we_n) t_we_fall = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("WE# hold"); end
always @(ub_n or lb_n) begin t_bm_ch = $time; if (sampled && $time - t_rise < T_HD && t_rise != 0) fail("UB#/LB# hold"); end

// ---- chip enable
always @(negedge ce0_n or negedge ce1_n) if (!ce0_n || !ce1_n) begin
	if (!ce0_n && !ce1_n) fail("both dies selected");
	if ($time < T_POWER) fail("access before power-up time");
	if (t_ce_rise != 0 && $time - t_ce_rise < T_CBPH) fail("CE# high time (tCBPH)");
	// note 1 of table 14: a refresh opportunity is a clocked CE# high or CE# high longer than 15 ns
	if (t_ce_rise == 0 || clk_hi_ce || $time - t_ce_rise > T_REFR) t_cem0 = $time;
	t_ce_fall = $time;
	die = ce0_n;
	cfg = cre;
	asy = !cre && bcr[ce0_n][15];
	sync_cfg = cre && !bcr[ce0_n][15];
	active = 0; committed = 0; latched = 0; edge_n = 0; rd_active = 0; cfg_edges = 0; first_data = 0; words = 0;
	if (asy) fail("asynchronous access (controller must use bursts)");
end

always @(posedge ce0_n or posedge ce1_n) if (ce0_n && ce1_n && t_ce_fall != 0) begin
	if ($time - t_ce_fall > max_ce_low) max_ce_low = $time - t_ce_fall;
	if ($time - t_cem0 > T_CEM) fail("CE# low longer than tCEM (no refresh opportunity)");
	if (t_rise != 0 && $time - t_rise < T_HD && !asy && !(cfg && !sync_cfg)) fail("CE# hold after clock");
	if (sync_cfg && latched && !committed) begin
		// fig. 10 note 3: CE# stays low for a burst-of-one WRITE (the write latency of the BCR in force)
		if (cfg_edges < cfg_need) fail("sync config CE# high before the write completed");
		else begin set_reg(); n_cfg_sync = n_cfg_sync + 1; end
	end
	if (cfg && !sync_cfg && !committed) fail("async config access without a write");
	if (active && !wr && !first_data) fail("burst terminated before first data");
	if (active && wr && words == 0) fail("write burst without data");
	active = 0;
	rd_active = 0;
	t_ce_rise = $time;
	clk_hi_ce = 0;
end

task automatic set_reg;
	begin
		case (cfg_sel)
			2'b10: begin
				if (cfg_val[9] || cfg_val[7:6] != 2'b00) fail("BCR reserved bits set");
				if (cfg_val[2:0] != 3'b111 && cfg_val[2:0] != 3'b001 && cfg_val[2:0] != 3'b010 && cfg_val[2:0] != 3'b011 && cfg_val[2:0] != 3'b100)
					fail("BCR burst length reserved");
				if (cfg_val[5:4] == 2'b11) fail("BCR drive strength reserved");
				if (!cfg_val[15] && tclk_min(cfg_val[13:11]) == 0) fail("BCR latency code reserved");
				bcr[die] = cfg_val;
			end
			2'b00: begin
				if (cfg_val[15:5] != 0 || cfg_val[3] != 0) fail("RCR reserved bits set");
				rcr[die] = cfg_val;
			end
			default: fail("unsupported config register");
		endcase
		committed = 1;
	end
endtask

// asynchronous register write (fig. 9, table 15): ADV# rising latches the value from A/DQ, WE# rising writes it
always @(posedge adv_n) if (!ce_n && cfg && !sync_cfg) begin
	if ($time - t_adv_fall < 5000) fail("config ADV# pulse (tVP)");
	if ($time - t_ce_fall < 7000) fail("config CE# low to ADV# high (tCVS)");
	if ($time - t_a_ch < 5000 || $time - t_dq_ch < 5000) fail("config address setup (tAVS)");
	if (^{a, dq} === 1'bx) fail("config value undriven");
	cfg_val = dq; cfg_sel = a[19:18]; latched = 1;
	if (a[21:20] != 0 || a[17:16] != 0) fail("config reserved address bits set");
end
always @(posedge we_n) if (!ce_n && cfg && !sync_cfg && latched && !committed) begin
	if ($time - t_we_fall < 45000) fail("config WE# pulse (tWP)");
	if ($time - t_ce_fall < 70000) fail("config tCW");
	if ($time - t_adv_fall < 70000) fail("config tAW / tVS");
	if (!oe_n) fail("config write with OE# low");
	set_reg();
	n_cfg_async = n_cfg_async + 1;
end

// ---- clock edges
integer k;
reg [21:0] wa;
longint tv, tnow;
always @(negedge clk) begin
	if (t_rise != 0 && $time - t_rise < T_KP) fail("clock high time");
	t_fall = $time;
end
always @(posedge clk) begin
	t_prev = t_rise;
	t_rise = $time;
	if (t_prev != 0) period = t_rise - t_prev;
	if (t_fall != 0 && $time - t_fall < T_KP) fail("clock low time");
	if (ce_n) clk_hi_ce = 1;
	if (!ce_n) begin
		if (t_ce_fall > t_prev && $time - t_ce_fall < T_CSP) fail("CE# setup");
		if (cfg && !sync_cfg) fail("clock edge during asynchronous register write");
		if (asy) fail("clock edge during an asynchronous access");
		if (!adv_n && $time - t_adv_ch < T_SU) fail("ADV# setup");
		if (sync_cfg) begin
			// fig. 10: CRE, ADV#, WE# and the value sampled at the first edge
			if (!latched) begin
				if (adv_n || we_n) fail("sync config without ADV#/WE# at its first edge");
				if ($time - t_a_ch < T_SU || $time - t_dq_ch < T_SU || $time - t_we_ch < T_SU) fail("sync config setup");
				if (^{a[19:18], dq} === 1'bx) fail("sync config value undriven");
				cfg_val = dq; cfg_sel = a[19:18]; latched = 1; cfg_edges = 0;
				cfg_need = lc_of(bcr[die][13:11]) * (bcr[die][14] ? 1 : 2) + 1;
			end else begin
				if (!adv_n) fail("ADV# low twice in a config write");
				cfg_edges = cfg_edges + 1;
			end
		end else if (!cfg && !bcr[die][15]) begin
			if (!active) begin
				if (adv_n) fail("burst without ADV# at its first edge");
				else begin
					if (!bcr[die][14]) fail("variable latency not modelled");
					if (rcr[die] !== 16'h0010) fail("partial refresh / DPD configured");
					if (period < tclk_min(bcr[die][13:11])) fail("clock faster than the latency code allows (table 6)");
					if (bcr[die][2:0] != 3'b111) fail("fixed burst length not modelled");
					active = 1; wr = !we_n; edge_n = 0; lat = lc_of(bcr[die][13:11]);
					base = {a, dq};
					n_bursts = n_bursts + 1;
					if ($time - t_a_ch < T_SU || $time - t_dq_ch < T_SU) fail("address setup");
					if ($time - t_we_ch < T_SU) fail("WE# setup");
					if (^{a, dq} === 1'bx) fail("address undriven");
				end
			end else begin
				if (!adv_n) fail("ADV# low inside a burst");
				edge_n = edge_n + 1;
			end
			if (active) begin
				if (!wr) begin
					// read: word k driven tACLK after edge lat+k, but not before tAA/tAADV/tCO or tBOE (fig. 18, table 14)
					if (edge_n >= lat) begin
						if (ub_n || lb_n) fail("read burst with a byte disabled");
						k = edge_n - lat;
						wa = base + k;
						tv = T_ACLK;
						tnow = $time;
						if (k == 0) begin
							if (t_adv_fall + T_AA - tnow > tv) tv = t_adv_fall + T_AA - tnow;
							if (t_ce_fall + T_AA - tnow > tv) tv = t_ce_fall + T_AA - tnow;
							if (oe_n) tv = 1000000;
							else if (t_oe_fall + T_BOE - tnow > tv) tv = t_oe_fall + T_BOE - tnow;
						end
						dq_out <= #(T_KOH) 16'hxxxx;
						if (wa[21:7] != base[21:7]) begin
							n_xrow = n_xrow + 1;            // crossing a row needs WAIT: nothing useful is returned
						end else begin
							dq_out <= #(tv) mem[{die, wa}];
						end
						first_data = 1;
						rd_active = 1;
						n_rd = n_rd + 1;
					end
				end else if (edge_n >= lat + 1) begin
					k = edge_n - lat - 1;
					wa = base + k;
					if (!oe_n) fail("write burst with OE# low");
					if (wa[21:7] != base[21:7]) fail("write burst crossed a row");
					if ($time - t_dq_ch < T_SU || $time - t_bm_ch < T_SU) fail("write data/mask setup");
					if (host_oe !== 1'b1 && (!lb_n || !ub_n)) fail("write data not driven");
					if (!lb_n) mem[{die, wa}][7:0]  = dq[7:0];
					if (!ub_n) mem[{die, wa}][15:8] = dq[15:8];
					if (!lb_n || !ub_n) n_wr = n_wr + 1;
					words = words + 1;
				end
			end
		end
	end
end

endmodule
