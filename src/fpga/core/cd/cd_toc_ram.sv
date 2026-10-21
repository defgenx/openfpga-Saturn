// 512 x 32 simple dual-port RAM, write on the bridge clock, read on clk_sys (one M10K pair).

`default_nettype none

module cd_toc_ram (
	input  wire        wclk,
	input  wire        we,
	input  wire [8:0]  wa,
	input  wire [31:0] wd,
	input  wire        rclk,
	input  wire [8:0]  ra,
	output reg  [31:0] rq = 32'd0
);

(* ramstyle = "M10K" *) reg [31:0] mem [0:511];

always @(posedge wclk) if (we) mem[wa] <= wd;
always @(posedge rclk) rq <= mem[ra];

endmodule

`default_nettype wire
