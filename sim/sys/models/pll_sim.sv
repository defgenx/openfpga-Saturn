// Simulation stand-ins for the PLL pair: pll_sys (Altera fractional PLL, outputs clk_sys / clk_ram / clk_vid /
// clk_vid_90) and pll_lite (DPRIO writer). The real pll_lite is checked against the Altera reconfiguration
// core in sim/pll, so here pll_lite only forwards {pal, dotsel} through reconfig_to_pll[2:1] and pll_sys picks the
// output frequency from them (NTSC 320 / 352, PAL 320 / 352, saturn_pocket.sv comment). Same phase relations as
// the PLL: clk_ram = 2 x clk_sys, clk_vid = clk_sys / 4, clk_vid_90 = clk_vid + 90 degrees.

`timescale 1ps/1ps

module pll_lite (
	input  wire        clk,
	input  wire        pal,
	input  wire        dotsel,
	output wire [63:0] reconfig_to_pll,
	input  wire [63:0] reconfig_from_pll
);
	assign reconfig_to_pll = {61'd0, dotsel, pal, 1'b0};
endmodule

module pll_sys (
	input  wire        refclk,
	input  wire        rst,
	output reg         outclk_0 = 1'b0,
	output reg         outclk_1 = 1'b0,
	output reg         outclk_2 = 1'b0,
	output wire        outclk_3,
	output wire        outclk_4,
	output reg         locked = 1'b0,
	input  wire [63:0] reconfig_to_pll,
	output wire [63:0] reconfig_from_pll
);
	wire pal = reconfig_to_pll[1], dotsel = reconfig_to_pll[2];
	// clk_sys period in ps (multiple of 4 so that the clk_ram half period is an integer)
	integer per;
	always @* per = !pal ? (!dotsel ? 18604 : 17460) : (!dotsel ? 18736 : 17584);

	assign reconfig_from_pll = {47'd0, locked, 16'd0};

	integer n = 0;
	reg [1:0] vdiv = 2'd0;
	initial begin
		#200000 locked = 1'b1;                       // PLL lock time
	end
	// quarter-period tick: clk_ram toggles every tick, clk_sys every 2nd, clk_vid every 8th tick (period 16 ticks = 4 clk_sys)
	reg [3:0] q = 4'd0;
	always begin
		#(per/4);
		q <= q + 4'd1;
		outclk_1 <= ~outclk_1;
		if (q[0]) outclk_0 <= ~outclk_0;
		if (q[2:0] == 3'd7) outclk_2 <= ~outclk_2;
	end
	// 90 degrees of clk_vid = one clk_sys period
	assign #(17460) outclk_3 = outclk_2;
	// clk_ram + 90 degrees (read capture clock of sdram_pocket)
	assign #(2182) outclk_4 = outclk_1;
endmodule
