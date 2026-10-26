// ram_reset.sv - reset of the RAM controllers (rst_ram) and the loader hold (download), clk_sys.
//
// rst_ram pulses 256 clocks when `reset` rises (power-up init of SDRAM and PSRAM, before any load) and
// again when reset, loading and download have all fallen (caches and controller state after a load).
// It is not held while `reset` stays high: the BIOS arrives during reset (bios_loaded low) and the PSRAM
// must accept the loader writes then.

`default_nettype none

module ram_reset (
	input  wire clk,
	input  wire reset,
	input  wire loading,
	output reg  rst_ram = 1'b0,
	output reg  download = 1'b0
);

reg       reset_q = 1'b0, busy_q = 1'b0;
reg [7:0] delay_cnt = 8'd0;
wire      busy = reset | download | loading;

always @(posedge clk) begin
	download <= loading;
	reset_q  <= reset;
	busy_q   <= busy;
	if (delay_cnt != 8'd0) delay_cnt <= delay_cnt - 8'd1;
	else rst_ram <= 1'b0;

	if ((reset & ~reset_q) | (~busy & busy_q)) begin
		rst_ram   <= 1'b1;
		delay_cnt <= 8'hFF;
	end
end

endmodule

`default_nettype wire
