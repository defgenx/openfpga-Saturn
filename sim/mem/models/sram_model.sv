// Behavioural 128K x 16 asynchronous SRAM with access/pulse checks. Simulation only.
// T_AA is the address/OE#/byte-enable to data time; the part on the Pocket is not known (docs/memory.md).
// As on every x16 asynchronous SRAM, a byte is driven on a read only while its enable (LB# for DQ[7:0], UB# for
// DQ[15:8]) is low; with the enable high that byte stays high impedance.

`timescale 1ps/1ps

module sram_model #(
	parameter integer T_AA = 10000,
	parameter integer T_WP = 8000,      // minimum WE# low
	parameter integer T_AW = 8000,      // address valid to WE# rising
	parameter integer T_BW = 8000,      // LB#/UB# low to WE# rising
	parameter integer T_DW = 5000,      // data valid to WE# rising
	parameter integer T_WR = 0          // address hold after WE# rising
) (
	input  wire [16:0] a,
	inout  wire [15:0] dq,
	input  wire        oe_n, we_n, ub_n, lb_n,
	output reg  [31:0] errors,
	output reg  [31:0] n_rd, n_wr
);
reg [15:0] mem [0:131071];
// +MEMRAND: power-up contents are random, as on the Pocket's chips (the sim otherwise starts them at 0)
initial if ($test$plusargs("MEMRAND")) for (int mi = 0; mi < 131072; mi++) mem[mi] = 16'($urandom);
reg [15:0] rd_val;
reg        drv_lo, drv_hi;
assign dq[7:0]  = drv_lo ? rd_val[7:0]  : 8'hzz;
assign dq[15:8] = drv_hi ? rd_val[15:8] : 8'hzz;
longint t_a = 0, t_dq = 0, t_wfall = 0, t_wrise = 0, t_bm = 0;
initial begin errors = 0; n_rd = 0; n_wr = 0; rd_val = 16'hxxxx; drv_lo = 0; drv_hi = 0; end

task automatic fail(input [8*40-1:0] what);
	begin errors = errors + 1; $display("%0t SRAM ERROR: %0s", $time, what); end
endtask

// read: data follows address / OE# / byte enables after T_AA, X before
always @(a or oe_n or we_n or ub_n or lb_n) begin
	if (!oe_n && we_n) begin
		drv_lo <= !lb_n; drv_hi <= !ub_n;
		rd_val <= #0 16'hxxxx; rd_val <= #(T_AA) mem[a];
		n_rd = n_rd + 1;
	end else begin
		drv_lo <= #1000 1'b0; drv_hi <= #1000 1'b0;
	end
end
always @(a) begin
	if (!we_n && $time > 1000000) fail("address changed with WE# low");
	if (we_n && $time - t_wrise < T_WR && $time > 1000000) fail("address hold after WE#");
	t_a = $time;
end
always @(dq) t_dq = $time;
always @(ub_n or lb_n) t_bm = $time;
always @(negedge we_n) t_wfall = $time;
always @(posedge we_n) if ($time > 1000000) begin
	t_wrise = $time;
	if (!oe_n) fail("OE# low during write");
	if ($time - t_wfall < T_WP) fail("WE# pulse");
	if ($time - t_a < T_AW) fail("address setup");
	if ($time - t_dq < T_DW) fail("data setup");
	if ((!ub_n || !lb_n) && $time - t_bm < T_BW) fail("byte enable setup");
	if (^dq === 1'bx && (!ub_n || !lb_n)) fail("write data X");
	if (!lb_n) mem[a][7:0]  = dq[7:0];
	if (!ub_n) mem[a][15:8] = dq[15:8];
	n_wr = n_wr + 1;
end
endmodule
