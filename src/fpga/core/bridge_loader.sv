// Splits APF bridge writes into per-slot streams.
//
// Slots with an "address" in data.json are pushed by the host as 32-bit bridge writes; reads of the
// nonvolatile slots come back through the same windows. Everything here runs on clk_74a: the consumer
// crosses into its own clock domain.
//
//   0x2xxxxxxx  BIOS            512 KB
//   0x4xxxxxxx  Backup RAM       32 KB (internal)
//   0x5xxxxxxx  Backup cart     512 KB
//
// The same map is in dist/Cores/defgenx.Saturn/data.json.

`default_nettype none

module bridge_loader (
	input  wire        clk,

	input  wire [31:0] bridge_addr,
	input  wire        bridge_wr,
	input  wire [31:0] bridge_wr_data,

	output reg         ld_wr,       // one-cycle pulse per word
	output reg  [2:0]  ld_sel,      // one-hot: [0] BIOS, [1] backup RAM, [2] backup cart
	output reg  [23:0] ld_addr,     // byte offset of the word inside its slot
	output reg  [31:0] ld_data,
	output wire        ld_active    // a slot is being written (idles out after 4096 clocks)
);

reg [12:0] idle = 13'h1FFF;
assign ld_active = ~&idle;

always @(posedge clk) begin
	ld_wr <= 1'b0;
	if (!(&idle)) idle <= idle + 1'b1;

	if (bridge_wr) begin
		case (bridge_addr[31:28])
			4'h2: ld_sel <= 3'b001;
			4'h4: ld_sel <= 3'b010;
			4'h5: ld_sel <= 3'b100;
			default: ld_sel <= 3'b000;
		endcase
		if (bridge_addr[31:28] == 4'h2 || bridge_addr[31:28] == 4'h4 || bridge_addr[31:28] == 4'h5) begin
			ld_wr   <= 1'b1;
			ld_addr <= bridge_addr[23:0];
			ld_data <= bridge_wr_data;
			idle    <= 13'd0;
		end
	end
end

endmodule

`default_nettype wire
