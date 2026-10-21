// Behavioural 128K x 16 asynchronous SRAM with access/pulse checks. Simulation only.
// T_AA is the address/OE# to data time; the part on the Pocket is not known (docs/memory.md).

`timescale 1ps/1ps

module sram_model #(
	parameter integer T_AA = 10000,
	parameter integer T_WP = 8000,      // minimum WE# low
	parameter integer T_AW = 8000,      // address valid to WE# rising
	parameter integer T_DW = 5000,      // data valid to WE# rising
	parameter integer T_WR = 0          // address/data hold after WE# rising
) (
	input  wire [16:0] a,
	inout  wire [15:0] dq,
	input  wire        oe_n, we_n, ub_n, lb_n,
	output reg  [31:0] errors,
	output reg  [31:0] n_rd, n_wr
);
reg [15:0] mem [0:131071];
reg [15:0] rd_val;
reg        drv;
assign dq = drv ? rd_val : 16'hzzzz;
longint t_a = 0, t_dq = 0, t_wfall = 0, t_wrise = 0;
initial begin errors = 0; n_rd = 0; n_wr = 0; rd_val = 16'hxxxx; drv = 0; end

// read: data follows address / OE# after T_AA, X before
wire [15:0] cur = mem[a];
always @(a or oe_n or we_n) begin
	if (!oe_n && we_n) begin
		drv = 1; rd_val <= #0 16'hxxxx; rd_val <= #(T_AA) mem[a];
		n_rd = n_rd + 1;
	end else begin
		drv <= #1000 1'b0;
	end
end
always @(a) t_a = $time;
always @(dq) t_dq = $time;
always @(negedge we_n) t_wfall = $time;
always @(posedge we_n) if ($time > 1000000) begin
	t_wrise = $time;
	if (!oe_n) begin errors = errors + 1; $display("%0t SRAM ERROR: OE# low during write", $time); end
	if ($time - t_wfall < T_WP) begin errors = errors + 1; $display("%0t SRAM ERROR: WE# pulse %0d ps", $time, $time - t_wfall); end
	if ($time - t_a < T_AW) begin errors = errors + 1; $display("%0t SRAM ERROR: address setup %0d ps", $time, $time - t_a); end
	if ($time - t_dq < T_DW) begin errors = errors + 1; $display("%0t SRAM ERROR: data setup %0d ps", $time, $time - t_dq); end
	if (^dq === 1'bx && (!ub_n || !lb_n)) begin errors = errors + 1; $display("%0t SRAM ERROR: write data X", $time); end
	if (!lb_n) mem[a][7:0]  = dq[7:0];
	if (!ub_n) mem[a][15:8] = dq[15:8];
	n_wr = n_wr + 1;
end
endmodule
