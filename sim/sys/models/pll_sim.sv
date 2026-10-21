// Simulation stand-ins for the PLL pair: pll_sys (Altera fractional PLL, outputs clk_sys / clk_ram / clk_vid /
// clk_vid_90) and pll_lite (DPRIO writer). The real pll_lite is checked against the Altera reconfiguration
// core in sim/pll, so here pll_lite only forwards {pal, dotsel} through reconfig_to_pll[2:1] with bit 39 set, and pll_sys
// picks the output frequency from them (NTSC 320 / 352, PAL 320 / 352, saturn_pocket.sv comment). With NO_RECONFIG
// (POCKET_PLL_NO_RECONFIG) pll_lite drives its IDLE value, bit 39 is 0 and pll_sys runs at the compiled mode from the
// start, without relock: NTSC 352, or NTSC 320 under POCKET_PLL_COMPILE_320. Same phase relations as
// the PLL: clk_ram = 2 x clk_sys, clk_vid = clk_sys / 4, clk_vid_90 = clk_vid + 90 degrees. The clocks run before lock
// (as the PLL outputs do while it acquires).

`timescale 1ps/1ps

module pll_lite #(
	parameter NO_RECONFIG = 0
) (
	input  wire        clk,
	input  wire        pal,
	input  wire        dotsel,
	input  wire        reapply,
	output wire [63:0] reconfig_to_pll,
	input  wire [63:0] reconfig_from_pll
);
	assign reconfig_to_pll = NO_RECONFIG ? 64'h0000_0000_3000_0002 : {24'd0, 1'b1, 35'd0, reapply, dotsel, pal, 1'b0};
endmodule

module pll_sys (
	input  wire        refclk,
	input  wire        rst,
	output reg         outclk_0 = 1'b0,
	output reg         outclk_1 = 1'b0,
	output reg         outclk_2 = 1'b0,
	output wire        outclk_3,
	output wire        outclk_4,
	output wire        locked,
	input  wire [63:0] reconfig_to_pll,
	output wire [63:0] reconfig_from_pll
);
	wire rcfg = reconfig_to_pll[39];
`ifdef POCKET_PLL_COMPILE_320
	localparam COMP_DOT = 1'b0;
`else
	localparam COMP_DOT = 1'b1;
`endif
	wire pal = rcfg ? reconfig_to_pll[1] : 1'b0, dotsel = rcfg ? reconfig_to_pll[2] : COMP_DOT;
	wire reap = rcfg & reconfig_to_pll[3];
	// app = {dotsel, pal} the PLL runs at: the compiled mode until the first write after the first lock, then each
	// mode pll_lite asks for. clk_sys period in ps (multiple of 4 so that the clk_ram half period is an integer);
	// while slewing to a new mode the PLL runs at the M_new + K_old intermediate, 48 MHz (docs/integration.md).
	reg  [1:0] app = {COMP_DOT, 1'b0};
	reg        slew = 1'b0;
	integer per;
	always @* per = slew ? 20832 : !app[0] ? (!app[1] ? 18604 : 17460) : (!app[1] ? 18736 : 17584);
	// +PLL_LOCK_US: lock time after power-up and after every reconfiguration (default 1000, the Cyclone V tLOCK
	// maximum); +PLL_SLEW_NS: time at the intermediate rate after a mode change (default 2000)
	integer lock_us = 1000, slew_ns = 2000;
	initial begin
		void'($value$plusargs("PLL_LOCK_US=%d", lock_us));
		void'($value$plusargs("PLL_SLEW_NS=%d", slew_ns));
		#1 $display("pll_sim: %0s, clk_sys period %0d ps at 1 ps, lock %0d us, slew %0d ns", rcfg ? "pll_lite reconfigures" :
		            "no reconfiguration (compiled mode)", per, lock_us, slew_ns);
	end

	assign reconfig_from_pll = {47'd0, locked, 16'd0};

	integer n = 0;
	reg [1:0] vdiv = 2'd0;
	// first lock lock_us after start; then every new mode or reapply (pll_lite rewrites M and K on a host reset too)
	// drops the lock for lock_us, with slew_ns at the intermediate rate first. The clocks keep running throughout.
	reg lk = 1'b0, reap_pend = 1'b0;
	always @(posedge reap) reap_pend = 1'b1;
	initial begin : ctl
		#1;
		#(64'd1000000 * lock_us) lk = 1'b1;
		forever begin
			if ({dotsel, pal} === app && !reap_pend) @(dotsel or pal or reap_pend);
			#1;
			if ({dotsel, pal} !== app || reap_pend) begin
				lk = 1'b0;
				if ({dotsel, pal} !== app) begin slew = 1'b1; #(64'd1000 * slew_ns); slew = 1'b0; end
				$display("pll_sim: %0t relock to dotsel %b pal %b%0s", $time, dotsel, pal, reap_pend ? " (reapply)" : "");
				app = {dotsel, pal}; reap_pend = 1'b0;
				#(64'd1000000 * lock_us) lk = 1'b1;
			end
		end
	end
	// +FLICKER_US=<period> +FLICKER_LOW_US=<low> [+FLICKER_END_US=<t>]: the lock flag also drops for <low> us every
	// <period> us after the first lock, until <t> us (0 or absent: forever); the clocks keep running
	reg flick = 1'b0;
	integer fl_per = 0, fl_low = 0, fl_end = 0;
	initial begin
		if ($value$plusargs("FLICKER_US=%d", fl_per) && fl_per > 0) begin
			if (!$value$plusargs("FLICKER_LOW_US=%d", fl_low)) fl_low = 3;
			if (!$value$plusargs("FLICKER_END_US=%d", fl_end)) fl_end = 0;
			$display("pll_sim: lock drops %0d us every %0d us until %0d us (0: forever)", fl_low, fl_per, fl_end);
			#200000;
			forever begin
				#(64'd1000000 * (fl_per - fl_low));
				if (fl_end != 0 && $time > 64'd1000000 * fl_end) break;
				flick = 1'b1;
				#(64'd1000000 * fl_low);
				flick = 1'b0;
			end
		end
	end
	// +RELOCK_US=<t>: one 20 us lock drop at t us, as a pll_lite relock for a mode change the BIOS run does not make
	reg relk = 1'b0;
	initial begin : relock
		longint t;
		if ($value$plusargs("RELOCK_US=%d", t)) begin
			$display("pll_sim: one relock at %0d us", t);
			#(64'd1000000 * t) relk = 1'b1;
			#20000000 relk = 1'b0;
		end
	end
	assign locked = lk & ~flick & ~relk;
	// quarter-period tick: clk_ram toggles every tick, clk_sys every 2nd, clk_vid every 8th tick (period 16 ticks = 4 clk_sys).
	// All three rise on the same tick, as the PLL's phase-0 counters do (clk_ram rises at even q).
	reg [3:0] q = 4'd0;
	always begin
		#(per/4);
		q <= q + 4'd1;
		outclk_1 <= ~outclk_1;
		if (!q[0]) outclk_0 <= ~outclk_0;
		if (q[2:0] == 3'd0) outclk_2 <= ~outclk_2;
	end
	// 90 degrees of clk_vid = one clk_sys period; clk_ram + 90 degrees (read capture clock of sdram_pocket). Both are
	// counter phases on the PLL, so they scale with the period.
	reg c3 = 1'b0, c4 = 1'b0;
	always @(outclk_2) c3 <= #(per) outclk_2;
	always @(outclk_1) c4 <= #(per / 8) outclk_1;
	assign outclk_3 = c3;
	assign outclk_4 = c4;
endmodule
