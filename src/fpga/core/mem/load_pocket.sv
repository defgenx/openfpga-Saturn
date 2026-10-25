// load_pocket.sv - bridge_loader's ld_* bus (clk_74a) to the ddram_pocket loader port (clk_ram).
//
// ld_sel (one-hot, as bridge_loader):  [0] BIOS 512 KB, [1] backup RAM 32 KB, [2] backup cart 512 KB.
// A 32 bit bridge word crosses in a 256 entry asynchronous FIFO (one M10K) and leaves as 32 bit
// writes to PSRAM0 byte addresses (docs/memory.md):
//   BIOS         0x000000 + offset            two image words per write, as the file reads (big endian words)
//   backup RAM   0x100000 + 2 * offset        one byte -> one image word {8'hFF, byte}: 4 bytes = 2 writes
//   backup cart  0x800000 + 2 * offset        same expansion (the cartridge window base)
// LD_LITTLE=1: ld_data[7:0] is the first file byte (bridge_endian_little set); 0: ld_data[31:24] is.
//
// `loading` is high while words are in flight, in the clk_ram domain; hold the Saturn in reset with it.

`default_nettype none

module load_pocket #(
	parameter bit LD_LITTLE = 1'b1
) (
	input  wire        clk_74a,
	input  wire        ld_wr,
	input  wire  [2:0] ld_sel,
	input  wire [23:0] ld_addr,
	input  wire [31:0] ld_data,

	input  wire        clk,                // clk_ram
	output reg  [23:2] o_addr,
	output reg  [31:0] o_data,
	output reg         o_wr,
	input  wire        o_busy,
	output wire        loading,
	output wire  [7:0] dbg_overflow
);

// ---------------------------------------------------------------- async FIFO, gray pointers
localparam int AW = 8;
reg [58:0] mem [0:(1<<AW)-1];
reg [AW:0] wbin = '0, wgray = '0;
reg [AW:0] rbin = '0, rgray = '0;
(* altera_attribute = "-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS" *) reg [AW:0] rg_w1 = '0, rg_w2 = '0;  // rgray into clk_74a
(* altera_attribute = "-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS" *) reg [AW:0] wg_r1 = '0, wg_r2 = '0;  // wgray into clk
reg [7:0]  ovf = '0;
assign dbg_overflow = ovf;

function automatic [AW:0] b2g(input [AW:0] b); b2g = b ^ (b >> 1); endfunction

wire [AW:0] wnext = wbin + 1'd1;
wire        full  = (b2g(wnext) == {~rg_w2[AW:AW-1], rg_w2[AW-2:0]});
always @(posedge clk_74a) begin
	rg_w1 <= rgray; rg_w2 <= rg_w1;
	if (ld_wr) begin
		if (!full) begin
			mem[wbin[AW-1:0]] <= {ld_sel, ld_addr, ld_data};
			wbin <= wnext; wgray <= b2g(wnext);
		end else if (ovf != 8'hFF) ovf <= ovf + 1'd1;
	end
end

wire empty = (rgray == wg_r2);
always @(posedge clk) begin
	wg_r1 <= wgray; wg_r2 <= wg_r1;
end

// ---------------------------------------------------------------- expander
reg  [58:0] cur;
reg   [1:0] st = 2'd0;       // 0 idle, 1 pop wait, 2 write 0, 3 write 1
reg         second = 1'b0;
wire  [2:0] c_sel  = cur[58:56];
wire [23:0] c_off  = cur[55:32];
wire [31:0] c_d    = cur[31:0];
// file bytes in order
wire  [7:0] b0 = LD_LITTLE ? c_d[7:0]   : c_d[31:24];
wire  [7:0] b1 = LD_LITTLE ? c_d[15:8]  : c_d[23:16];
wire  [7:0] b2 = LD_LITTLE ? c_d[23:16] : c_d[15:8];
wire  [7:0] b3 = LD_LITTLE ? c_d[31:24] : c_d[7:0];
reg   [1:0] busy_q = 2'd0;
assign loading = !empty || st != 2'd0;

always @(posedge clk) begin
	o_wr <= 1'b0;
	case (st)
	2'd0: if (!empty) begin
		cur <= mem[rbin[AW-1:0]];
		rbin <= rbin + 1'd1; rgray <= b2g(rbin + 1'd1);
		st <= 2'd1; second <= 1'b0;
	end
	2'd1: st <= 2'd2;
	2'd2: if (!o_busy && !o_wr) begin
		o_wr <= 1'b1;
		if (c_sel[0]) begin
			o_addr <= {c_off[23:2]};
			o_data <= LD_LITTLE ? {b0, b1, b2, b3} : {b0, b1, b2, b3};
			st <= 2'd0;
		end else begin
			// byte -> {FF, byte}; two bytes per 32 bit write
			o_addr <= (c_sel[1] ? 24'h100000 : 24'h800000) + {c_off[22:0], 1'b0} + (second ? 24'd4 : 24'd0) >> 2;
			o_data <= second ? {8'hFF, b2, 8'hFF, b3} : {8'hFF, b0, 8'hFF, b1};
			if (second) st <= 2'd0; else begin second <= 1'b1; st <= 2'd3; end
		end
	end
	2'd3: st <= 2'd2;          // let o_busy rise before the second write
	endcase
end

endmodule

`default_nettype wire
