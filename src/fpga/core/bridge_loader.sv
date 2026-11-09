// Splits APF bridge writes into per-slot streams.
//
// Slots with an "address" in data.json are pushed by the host as 32-bit bridge writes; the host reads the
// nonvolatile slots back through the same windows at exit. Everything here runs on clk_74a: the consumer
// crosses into its own clock domain.
//
//   0x2xxxxxxx  BIOS            512 KB
//   0x4xxxxxxx  Backup RAM       64 KB (internal; MiSTer's image, file byte 2n+1 = backup byte n)
//   0x5xxxxxxx  Backup cart       1 MB (same layout)
//   0x7xxxxxxx  Cartridge ROM     2 MB (MiSTer's "Load cartridge"): the same cart window as the backup cart, never read back
//
// The same map is in dist/Cores/defgenx.Saturn/data.json.

`default_nettype none

module bridge_loader (
	input  wire        clk,

	input  wire [31:0] bridge_addr,
	input  wire        bridge_wr,
	input  wire [31:0] bridge_wr_data,

	output reg         ld_wr,       // one-cycle pulse per word, one clock after bridge_wr
	output reg  [2:0]  ld_sel,      // one-hot: [0] BIOS, [1] backup RAM, [2] backup cart
	output wire [23:0] ld_addr,     // byte offset of the word inside its slot (the bridge address: held until the next transfer)
	output wire [31:0] ld_data,     // the bridge data, held likewise
	output wire        ld_active,   // a slot is being written (idles out after 4096 clocks)

	// read-back: each bridge_rd in 0x4/0x5 toggles rd_t; rd_cart / rd_off hold the word until the next read
	input  wire        bridge_rd,
	output reg         rd_t = 1'b0,
	output reg         rd_cart = 1'b0,
	output reg  [19:2] rd_off = '0
);

assign ld_addr = bridge_addr[23:0];
assign ld_data = bridge_wr_data;

reg [12:0] idle = 13'h1FFF;
assign ld_active = ~&idle;

always @(posedge clk) begin
	ld_wr <= 1'b0;
	if (!(&idle)) idle <= idle + 1'b1;

	if (bridge_rd && (bridge_addr[31:28] == 4'h4 || bridge_addr[31:28] == 4'h5)) begin
		rd_t    <= ~rd_t;
		rd_cart <= bridge_addr[28];
		rd_off  <= bridge_addr[19:2] & {bridge_addr[28] ? 4'hF : 4'h0, 14'h3FFF};
	end

	if (bridge_wr) begin
		case (bridge_addr[31:28])
			4'h2: ld_sel <= 3'b001;
			4'h4: ld_sel <= 3'b010;
			4'h5, 4'h7: ld_sel <= 3'b100;
			default: ld_sel <= 3'b000;
		endcase
		if (bridge_addr[31:28] == 4'h2 || bridge_addr[31:28] == 4'h4 || bridge_addr[31:28] == 4'h5 || bridge_addr[31:28] == 4'h7) begin
			ld_wr   <= 1'b1;
			idle    <= 13'd0;
		end
	end
end

endmodule

`default_nettype wire
