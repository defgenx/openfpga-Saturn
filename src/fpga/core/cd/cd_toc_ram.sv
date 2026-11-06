// 512 x 32 true dual-port RAM (one M10K pair): port a on the bridge clock (TOC push, host-written response structs,
// bridge reads of the openfile parameter struct), port b on clk_sys (TOC engine, firmware window).

`default_nettype none

module cd_toc_ram (
	input  wire        wclk,
	input  wire        we,
	input  wire [8:0]  wa,
	input  wire [31:0] wd,
	output reg  [31:0] wq,                   // word at wa, one clock later
	input  wire        rclk,
	input  wire        rwe,
	input  wire [8:0]  ra,
	input  wire [31:0] rwd,
	output reg  [31:0] rq                    // word at ra, one clock later
);

(* ramstyle = "M10K" *) reg [31:0] mem [0:511];

always @(posedge wclk) begin
	if (we) mem[wa] <= wd;
	wq <= mem[wa];
end
always @(posedge rclk) begin
	if (rwe) mem[ra] <= rwd;
	rq <= mem[ra];
end

endmodule

`default_nettype wire
