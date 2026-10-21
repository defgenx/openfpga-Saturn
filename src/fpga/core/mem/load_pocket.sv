// load_pocket.sv - bridge_loader's ld_* bus (clk_74a) to the ddram_pocket loader port (clk_ram), the blank backup
// images, and the backup read-back for the host's save at exit.
//
// ld_sel (one-hot, as bridge_loader):  [0] BIOS 512 KB, [1] backup RAM 64 KB, [2] backup cart 1 MB.
// A 32 bit bridge word crosses in a 256 entry asynchronous FIFO (one M10K) and leaves as one 32 bit write to
// PSRAM0 (docs/memory.md section 7), the file bytes in order (word = {byte0, byte1}):
//   BIOS 0x000000 + offset, backup RAM 0x100000 + offset, backup cart 0x800000 + offset.
// LD_LITTLE=1: ld_data[7:0] is the first file byte (bridge_endian_little set); 0: ld_data[31:24] is.
//
// Both backup images are written blank first (MiSTer's save_blank), while the FIFO is empty. The first file word of a
// backup slot ends the blank of that image: no blank word is written after a file word, so a file loaded early wins.
// `loading` is high while words are in flight or the blank is unfinished, in the clk_ram domain; hold the Saturn
// in reset with it.

`default_nettype none

module load_pocket #(
	parameter bit LD_LITTLE = 1'b1
) (
	input  wire        clk_74a,
	input  wire        ld_wr,
	input  wire  [2:0] ld_sel,
	input  wire [23:0] ld_addr,
	input  wire [31:0] ld_data,

	input  wire        rd_t,               // read-back request (clk_74a toggle, bridge_loader); rd_cart / rd_off held
	input  wire        rd_cart,
	input  wire [19:2] rd_off,

	input  wire        clk,                // clk_ram
	input  wire        go,                 // mem_ready
	output reg  [23:2] o_addr,
	output reg  [31:0] o_data,
	output reg         o_wr,
	input  wire        o_busy,
	output wire [23:2] r_addr,             // read-back: one 32 bit read (ddram_pocket ld_rd), held until the next request
	output reg         r_rd = 1'b0,
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

// ---------------------------------------------------------------- writer
// the FIFO entry stays in the RAM output (registered read address) until it is done, then rbin moves on
reg [AW-1:0] rra;
wire [58:0] cur = mem[rra];
always @(posedge clk) rra <= rbin[AW-1:0];
reg   [1:0] st = 2'd0;       // 0 idle, 1 pop wait, 2 write
wire  [2:0] c_sel  = cur[58:56];
wire [23:0] c_off  = cur[55:32];
wire [31:0] c_d    = cur[31:0];
// file bytes in order
wire  [7:0] b0 = LD_LITTLE ? c_d[7:0]   : c_d[31:24];
wire  [7:0] b1 = LD_LITTLE ? c_d[15:8]  : c_d[23:16];
wire  [7:0] b2 = LD_LITTLE ? c_d[23:16] : c_d[15:8];
wire  [7:0] b3 = LD_LITTLE ? c_d[31:24] : c_d[7:0];

// blank images: phase 0 the internal 64 KB (16 K words), phase 1 the cart 1 MB. Image word n = {8'h00, data byte n}; the
// first 64 data bytes are "BackUpRam Format" four times, the rest zero (Main_MiSTer support/saturn/saturn.cpp save_blank).
reg  [5:0]  go_cnt = 6'd0;   // mem_ready held 64 clocks: it is seen by saturn_pocket's ever_ready before the blank starts
reg         icp = 1'b0, init_done = 1'b0, no_cart = 1'b0;
reg  [17:0] ic = '0;
wire        init_go = &go_cnt;
wire        ic_last = icp ? &ic : &ic[13:0];
function automatic [15:0] hdr_ch(input [2:0] n);   // the two characters of word n
	case (n)
	3'd0: hdr_ch = "Ba";  3'd1: hdr_ch = "ck";  3'd2: hdr_ch = "Up";  3'd3: hdr_ch = "Ra";
	3'd4: hdr_ch = "m ";  3'd5: hdr_ch = "Fo";  3'd6: hdr_ch = "rm";  default: hdr_ch = "at";
	endcase
endfunction
wire [15:0] ic_ch = hdr_ch(ic[2:0]);
wire        blank  = !init_done && !(icp && no_cart);
wire        free   = !o_busy && !o_wr;
wire        do_init = init_go && blank && free && st == 2'd0 && empty;

assign loading = !empty || st != 2'd0 || o_wr || o_busy || blank;   // until the last write has left ddram_pocket

always @(posedge clk) begin
	o_wr <= 1'b0;
	if (!go) go_cnt <= 6'd0; else if (!init_go) go_cnt <= go_cnt + 1'd1;
	case (st)
	2'd0: if (!empty) st <= 2'd1;
	2'd1: st <= 2'd2;
	2'd2: if (free) begin
		if (c_sel[1] && !icp) begin icp <= 1'b1; ic <= '0; end
		if (c_sel[2]) no_cart <= 1'b1;
		o_wr   <= 1'b1;
		o_addr <= c_sel[0] ? c_off[23:2] : c_sel[1] ? {8'h10, c_off[15:2]} : {4'h8, c_off[19:2]};
		o_data <= {b0, b1, b2, b3};
		st <= 2'd0; rbin <= rbin + 1'd1; rgray <= b2g(rbin + 1'd1);
	end
	default: st <= 2'd0;
	endcase
	if (do_init) begin
		o_wr   <= 1'b1;
		o_addr <= icp ? {4'h8, ic} : {8'h10, ic[13:0]};
		o_data <= |ic[17:5] ? 32'h0 : {8'h00, ic_ch[15:8], 8'h00, ic_ch[7:0]};
		ic <= ic_last ? '0 : ic + 1'd1;
		if (ic_last) begin if (icp) init_done <= 1'b1; icp <= 1'b1; end
	end
end

// ---------------------------------------------------------------- read-back
// A bridge read in 0x4/0x5 asks for one 32 bit word; ddram_pocket keeps it in ld_rdata, which drives bridge_rd_data.
// rd_off and rd_cart are stable for more than the sync delay (they change at the next bridge read).
(* altera_attribute = "-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS" *) reg [2:0] rq_s = 3'd0;
assign r_addr = rd_cart ? {4'h8, rd_off} : {8'h10, rd_off[15:2]};
always @(posedge clk) begin
	rq_s <= {rq_s[1:0], rd_t};
	r_rd <= rq_s[2] ^ rq_s[1];
end

endmodule

`default_nettype wire
