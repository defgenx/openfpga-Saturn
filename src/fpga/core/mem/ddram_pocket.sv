//
// ddram_pocket.sv - the Saturn_MiSTer rtl/ddram.sv client side on the Pocket's two PSRAM chips.
//
// The client ports (ramh, raml, cdram, cdbuf, vdp1vram, cart, bios, bsram), their per-channel read
// caches, the 8-deep posted write FIFOs, the 4-entry WRAM-H line cache with its 4 KB mirror and the
// busy handshakes are those of ddram.sv (Copyright (c) 2020 Sorgelig; GPL-3.0-or-later). What changed:
//
//   * the single 64 bit DDR3 master is two 64 bit masters, one per PSRAM chip, so a WRAM-H line fill
//     on PSRAM0 and a VDP1 texture burst on PSRAM1 run at the same time. Their request/ready
//     semantics are those of a DDRAM port (see psram_sync.sv: request taken when busy is low, beats
//     flagged by dout_ready, busy low in that cycle).
//   * channel to chip:   PSRAM0  ramh raml cart bsram bios + the loader port
//                        PSRAM1  vdp1vram cdram cdbuf (+ the cdbuf write port)
//     The VDP1 framebuffer is not here: vdp1_fb_pocket.sv holds it (vdp1fb_* are kept, inert).
//   * ST-V channels (eeprom, rax) are removed; the loader port (32 bit, for the bridge load path) and
//     the cdbuf write port (sector data from the APF side) are added.
//   * the cache RAMs are inferred memories instead of altsyncram/altdpram instances.
//
// PSRAM0 map (byte offsets; the MiSTer DDR3 offsets of the same regions, cartridge moved down):
//   0x000000 BIOS 512 KB       0x100000 backup RAM image 64 KB     0x200000 WRAM-L 1 MB
//   0x300000 WRAM-H 1 MB       0x400000-0xBFFFFF cartridge window 8 MB (ROM, RAM carts, backup cart)
// PSRAM1 map:
//   0x000000 VDP1 VRAM 512 KB  0x080000 CD block DRAM 512 KB      0x100000 CD sector buffer 16 KB
//

`default_nettype none

module ddram_pocket
(
	input  wire        clk,
	input  wire        rst,

	// PSRAM0 backend (psram_sync client port)
	input  wire        p0_busy,
	output wire [20:0] p0_addr,
	output wire  [7:0] p0_burst,
	output wire        p0_rd,
	output wire        p0_we,
	output wire [63:0] p0_din,
	output wire  [7:0] p0_be,
	input  wire [63:0] p0_dout,
	input  wire        p0_dout_ready,

	// PSRAM1 backend
	input  wire        p1_busy,
	output wire [20:0] p1_addr,
	output wire  [7:0] p1_burst,
	output wire        p1_rd,
	output wire        p1_we,
	output wire [63:0] p1_din,
	output wire  [7:0] p1_be,
	input  wire [63:0] p1_dout,
	input  wire        p1_dout_ready,

	input  wire [19: 2] ramh_addr,
	output reg  [31: 0] ramh_dout,
	input  wire [31: 0] ramh_din,
	input  wire         ramh_rd,
	input  wire [ 3: 0] ramh_wr,
	output reg          ramh_busy,

	input  wire [18: 1] cdram_addr,
	output reg  [15: 0] cdram_dout,
	input  wire [15: 0] cdram_din,
	input  wire         cdram_rd,
	input  wire [ 1: 0] cdram_wr,
	output reg          cdram_busy,

	input  wire [21: 1] raml_addr,
	output reg  [15: 0] raml_dout,
	input  wire [15: 0] raml_din,
	input  wire         raml_rd,
	input  wire [ 1: 0] raml_wr,
	output reg          raml_busy,

	input  wire [18: 1] vdp1vram_addr,
	output reg  [15: 0] vdp1vram_dout,
	input  wire [15: 0] vdp1vram_din,
	input  wire         vdp1vram_rd,
	input  wire [ 1: 0] vdp1vram_wr,
	input  wire [ 8: 0] vdp1vram_blen,
	output reg          vdp1vram_busy,

	// kept for the port list; the framebuffer is vdp1_fb_pocket
	input  wire [18: 1] vdp1fb_addr,
	output wire [15: 0] vdp1fb_dout,
	input  wire [15: 0] vdp1fb_din,
	input  wire         vdp1fb_rd,
	input  wire [ 1: 0] vdp1fb_wr,
	output wire         vdp1fb_busy,

	input  wire [13: 1] cdbuf_addr,
	output reg  [15: 0] cdbuf_dout,
	input  wire         cdbuf_rd,
	output reg          cdbuf_busy,

	input  wire [25: 1] cart_addr,
	output reg  [15: 0] cart_dout,
	input  wire [15: 0] cart_din,
	input  wire         cart_rd,
	input  wire [ 1: 0] cart_wr,
	output reg          cart_busy,

	input  wire [26: 1] bios_addr,
	input  wire [15: 0] bios_din,
	input  wire [ 1: 0] bios_wr,
	output reg          bios_busy,

	input  wire [20: 1] bsram_addr,
	output reg  [15: 0] bsram_dout,
	input  wire [15: 0] bsram_din,
	input  wire         bsram_rd,
	input  wire [ 1: 0] bsram_wr,
	output reg          bsram_busy,

	// loader: one 32 bit write to a PSRAM0 byte address (bits 23:2), data = two image words, first word in [31:16]
	input  wire [23: 2] ld_addr,
	input  wire [31: 0] ld_data,
	input  wire         ld_wr,
	output wire         ld_busy,

	// CD sector buffer write (16 bit, word address like cdbuf_addr)
	input  wire [13: 1] cdbuf_waddr,
	input  wire [15: 0] cdbuf_wdata,
	input  wire         cdbuf_wwr,
	output wire         cdbuf_wbusy
);

// 64 bit word indexes of the regions
localparam [20:0] RAMH_W64   = 21'h060000;   // 0x300000
localparam [20:0] BACKUP_W64 = 21'h020000;   // 0x100000
localparam [20:0] CART_W64   = 21'h080000;   // 0x400000
localparam [20:0] CDRAM_W64  = 21'h010000;   // PSRAM1 0x080000
localparam [20:0] CDBUF_W64  = 21'h020000;   // PSRAM1 0x100000

assign vdp1fb_dout = 16'h0000;
assign vdp1fb_busy = 1'b0;

// busy as seen by the masters (psram_sync drops busy in the cycle that carries dout_ready)
wire           p0_busy_m = p0_busy;
wire           p1_busy_m = p1_busy;

// ---- chip A (PSRAM0) and chip B (PSRAM1) masters
reg  [20: 0] a_addr, b_addr;
reg  [63: 0] a_din, b_din;
reg  [ 7: 0] a_be, b_be, a_burst, b_burst;
reg          a_read = 0, a_write = 0, b_read = 0, b_write = 0;
reg  [ 3: 0] a_chan, b_chan;
reg  [ 2: 0] a_state = 0, b_state = 0;
reg  [ 6: 0] a_cwr, b_cwr, a_wcnt, b_wcnt;
assign p0_addr = a_addr;  assign p0_burst = a_burst;  assign p0_rd = a_read;  assign p0_we = a_write;
assign p0_din  = a_din;   assign p0_be = a_be;
assign p1_addr = b_addr;  assign p1_burst = b_burst;  assign p1_rd = b_read;  assign p1_we = b_write;
assign p1_din  = b_din;   assign p1_be = b_be;

// ---- per-channel state
reg  [ 19:  2] ramh_rcache_addr[4];
reg            ramh_rcache_dirty[4];
reg            ramh_rcache_busy;
reg            ramh_read_busy[4];
reg  [  1:  0] ramh_rcache_curr;
reg  [  1:  0] ramh_rcache_lru[4];

reg  [ 21:  1] raml_rcache_addr,raml_write_addr;
reg            raml_rcache_dirty;
reg            raml_rcache_busy;
reg  [ 15:  0] raml_write_data;
reg  [  1:  0] raml_be;
reg            raml_read_busy,raml_write_busy;

reg  [ 18:  1] vdp1vram_rcache_addr,vdp1vram_rcache_addr_end;
reg  [  2:  1] vdp1vram_rcache_addr_lsb;
reg  [  8:  0] vdp1vram_rcache_blen;
reg            vdp1vram_rcache_dirty;
reg            vdp1vram_rcache_busy;
reg            vdp1vram_read_busy;

reg  [ 18:  1] cdram_rcache_addr,cdram_write_addr;
reg            cdram_rcache_dirty;
reg            cdram_rcache_busy;
reg  [ 15:  0] cdram_write_data;
reg  [  1:  0] cdram_be;
reg            cdram_read_busy,cdram_write_busy;

reg  [ 13:  1] cdbuf_rcache_addr;
reg            cdbuf_rcache_dirty;
reg            cdbuf_rcache_busy;
reg            cdbuf_read_busy;
reg  [ 13:  1] cdbuf_wwrite_addr;
reg  [ 15:  0] cdbuf_wwrite_data;
reg            cdbuf_wwrite_busy;

reg  [ 25:  1] cart_rcache_addr,cart_write_addr;
reg            cart_rcache_dirty;
reg            cart_rcache_busy;
reg  [ 15:  0] cart_write_data;
reg  [  1:  0] cart_be;
reg            cart_read_busy,cart_write_busy;

reg  [ 26:  1] bios_write_addr;
reg  [ 15:  0] bios_write_data;
reg  [  1:  0] bios_be;
reg            bios_write_busy;

reg  [ 20:  1] bsram_rcache_addr,bsram_write_addr;
reg            bsram_rcache_dirty;
reg            bsram_rcache_busy;
reg  [ 15:  0] bsram_write_data;
reg  [  1:  0] bsram_be;
reg            bsram_read_busy,bsram_write_busy;

reg  [ 23:  2] ld_waddr;
reg  [ 31:  0] ld_wdata;
reg            ld_write_busy;
assign ld_busy = ld_write_busy;
assign cdbuf_wbusy = cdbuf_wwrite_busy;

reg            old_rst;
reg            ramh_rd_old,ramh_wr_old;
reg            cdram_rd_old,cdram_wr_old;
reg            cdbuf_rd_old,cdbuf_wwr_old;
reg            raml_rd_old,raml_wr_old;
reg            vdp1vram_rd_old,vdp1vram_wr_old;
reg            cart_rd_old,cart_wr_old;
reg            bios_wr_old;
reg            bsram_rd_old,bsram_wr_old;
reg            ld_wr_old;
always @(posedge clk) begin
	{ramh_rd_old,ramh_wr_old} <= {ramh_rd,|ramh_wr};
	{cdram_rd_old,cdram_wr_old} <= {cdram_rd,|cdram_wr};
	{cdbuf_rd_old,cdbuf_wwr_old} <= {cdbuf_rd,cdbuf_wwr};
	{raml_rd_old,raml_wr_old} <= {raml_rd,|raml_wr};
	{vdp1vram_rd_old,vdp1vram_wr_old} <= {vdp1vram_rd,|vdp1vram_wr};
	{cart_rd_old,cart_wr_old} <= {cart_rd,|cart_wr};
	bios_wr_old <= |bios_wr;
	{bsram_rd_old,bsram_wr_old} <= {bsram_rd,|bsram_wr};
	ld_wr_old <= ld_wr;
	old_rst <= rst;
end
wire           rst_pulse = (rst && !old_rst);

// ---- posted write FIFOs
wire           ramh_fifo_wrreq,ramh_fifo_rdreq;
wire           vdp1vram_fifo_wrreq,vdp1vram_fifo_rdreq;
assign ramh_fifo_wrreq = (|ramh_wr && !ramh_wr_old);
assign ramh_fifo_rdreq = (a_state == 3'h1 && !p0_busy_m && a_chan == 4'd0);
assign vdp1vram_fifo_wrreq = (|vdp1vram_wr && !vdp1vram_wr_old);
assign vdp1vram_fifo_rdreq = (b_state == 3'h1 && !p1_busy_m && b_chan == 4'd3);

wire [ 53:  0] ramh_fifo_dout;
wire           ramh_fifo_empty,ramh_fifo_full;
wire [ 53:  0] vdp1vram_fifo_dout;
wire           vdp1vram_fifo_empty,vdp1vram_fifo_full;

ddp_infifo #(3) ramh_fifo (clk, rst_pulse, {ramh_addr,ramh_wr,ramh_din}, ramh_fifo_wrreq, ramh_fifo_rdreq, ramh_fifo_dout, ramh_fifo_empty, ramh_fifo_full);
ddp_infifo #(3) vdp1vram_fifo (clk, rst_pulse, {vdp1vram_addr,2'b00,vdp1vram_wr,16'h0000,vdp1vram_din}, vdp1vram_fifo_wrreq, vdp1vram_fifo_rdreq, vdp1vram_fifo_dout, vdp1vram_fifo_empty, vdp1vram_fifo_full);

wire [ 19:  2] ramh_write_addr;
wire [ 31:  0] ramh_write_data;
wire [  3:  0] ramh_write_be;
wire [ 18:  1] vdp1vram_write_addr;
wire [ 15:  0] vdp1vram_write_data;
wire [  1:  0] vdp1vram_write_be;

assign {ramh_write_addr,ramh_write_be,ramh_write_data} = ramh_fifo_dout;
assign {vdp1vram_write_addr,vdp1vram_write_be,vdp1vram_write_data} = {vdp1vram_fifo_dout[53:36],vdp1vram_fifo_dout[33:32],vdp1vram_fifo_dout[15:0]};

wire           ramh_ram_sel = !ramh_addr[19:12];
wire [ 31:  0] ramh_ram_q;
ddp_ram #(10) ramh_ram (clk, ramh_addr[11:2], ramh_din, ramh_wr & {4{ramh_ram_sel}}, ramh_addr[11:2], ramh_ram_q);

// ================================================================ chip A: ramh raml cart bsram bios loader
always @(posedge clk) begin
	bit write,read;
	bit [3:0] chan;

	{ramh_rcache_busy,raml_rcache_busy,cart_rcache_busy,bsram_rcache_busy} <= '0;
	if (rst_pulse) begin
		{ramh_rcache_dirty[0],ramh_rcache_dirty[1],ramh_rcache_dirty[2],ramh_rcache_dirty[3],raml_rcache_dirty,cart_rcache_dirty,bsram_rcache_dirty} <= '1;
		{ramh_read_busy[0],ramh_read_busy[1],ramh_read_busy[2],ramh_read_busy[3],raml_read_busy,cart_read_busy,bsram_read_busy} <= '0;
		ramh_rcache_curr <= 2'd0;
		ramh_rcache_lru[0] <= 2'd3;
		ramh_rcache_lru[1] <= 2'd2;
		ramh_rcache_lru[2] <= 2'd1;
		ramh_rcache_lru[3] <= 2'd0;
	end
	else begin
		if (ramh_rd && !ramh_rd_old && !ramh_ram_sel) begin
			if (ramh_addr[19:5] == ramh_rcache_addr[0][19:5] && !ramh_rcache_dirty[0]) begin
				ramh_rcache_addr[0] <= ramh_addr[19:2];
				ramh_rcache_curr <= 2'd0;
				if (ramh_rcache_lru[0] == 2'd0) begin ramh_rcache_lru[0] <= ramh_rcache_lru[1]; ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd0; end
				if (ramh_rcache_lru[1] == 2'd0) begin                                           ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd0; end
				if (ramh_rcache_lru[2] == 2'd0) begin                                                                                     ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd0; end
			end
			else if (ramh_addr[19:5] == ramh_rcache_addr[1][19:5] && !ramh_rcache_dirty[1]) begin
				ramh_rcache_addr[1] <= ramh_addr[19:2];
				ramh_rcache_curr <= 2'd1;
				if (ramh_rcache_lru[0] == 2'd1) begin ramh_rcache_lru[0] <= ramh_rcache_lru[1]; ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd1; end
				if (ramh_rcache_lru[1] == 2'd1) begin                                           ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd1; end
				if (ramh_rcache_lru[2] == 2'd1) begin                                                                                     ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd1; end
			end
			else if (ramh_addr[19:5] == ramh_rcache_addr[2][19:5] && !ramh_rcache_dirty[2]) begin
				ramh_rcache_addr[2] <= ramh_addr[19:2];
				ramh_rcache_curr <= 2'd2;
				if (ramh_rcache_lru[0] == 2'd2) begin ramh_rcache_lru[0] <= ramh_rcache_lru[1]; ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd2; end
				if (ramh_rcache_lru[1] == 2'd2) begin                                           ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd2; end
				if (ramh_rcache_lru[2] == 2'd2) begin                                                                                     ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd2; end
			end
			else if (ramh_addr[19:5] == ramh_rcache_addr[3][19:5] && !ramh_rcache_dirty[3]) begin
				ramh_rcache_addr[3] <= ramh_addr[19:2];
				ramh_rcache_curr <= 2'd3;
				if (ramh_rcache_lru[0] == 2'd3) begin ramh_rcache_lru[0] <= ramh_rcache_lru[1]; ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd3; end
				if (ramh_rcache_lru[1] == 2'd3) begin                                           ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd3; end
				if (ramh_rcache_lru[2] == 2'd3) begin                                                                                     ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= 2'd3; end
			end
			else begin
				ramh_rcache_addr[ramh_rcache_lru[0]] <= ramh_addr[19:2];
				ramh_read_busy[ramh_rcache_lru[0]] <= 1;
				ramh_rcache_dirty[ramh_rcache_lru[0]] <= 0;
				ramh_rcache_curr <= ramh_rcache_lru[0];
				ramh_rcache_lru[0] <= ramh_rcache_lru[1]; ramh_rcache_lru[1] <= ramh_rcache_lru[2]; ramh_rcache_lru[2] <= ramh_rcache_lru[3];  ramh_rcache_lru[3] <= ramh_rcache_lru[0];
			end
				
		end
		if (raml_rd && !raml_rd_old) begin
			if (raml_addr[21:5] != raml_rcache_addr[21:5] || raml_rcache_dirty) begin
				raml_read_busy <= 1;
			end
			raml_rcache_addr <= raml_addr;
			raml_rcache_busy <= 1;
			raml_rcache_dirty <= 0;
		end
		if (cart_rd && !cart_rd_old) begin
			if (cart_addr[25:5] != cart_rcache_addr[25:5] || cart_rcache_dirty) begin
				cart_read_busy <= 1;
			end
			cart_rcache_addr <= cart_addr;
			cart_rcache_busy <= 1;
			cart_rcache_dirty <= 0;
		end
		if (bsram_rd && !bsram_rd_old) begin
			if (bsram_addr[20:4] != bsram_rcache_addr[20:4] || bsram_rcache_dirty) begin
				bsram_read_busy <= 1;
			end
			bsram_rcache_addr <= bsram_addr;
			bsram_rcache_busy <= 1;
			bsram_rcache_dirty <= 0;
		end
	end

	if (rst_pulse) begin
		{raml_write_busy,cart_write_busy,bios_write_busy,bsram_write_busy,ld_write_busy} <= 0;
	end
	else begin
		if (|ramh_wr && !ramh_wr_old) begin
		if (|ramh_wr && !ramh_wr_old) begin
			if (ramh_addr[19:5] == ramh_rcache_addr[0][19:5]) begin
				ramh_rcache_addr[0] <= '1;
				ramh_rcache_dirty[0] <= 1;
			end	
			if (ramh_addr[19:5] == ramh_rcache_addr[1][19:5]) begin
				ramh_rcache_addr[1] <= '1;
				ramh_rcache_dirty[1] <= 1;
			end
			if (ramh_addr[19:5] == ramh_rcache_addr[2][19:5]) begin
				ramh_rcache_addr[2] <= '1;
				ramh_rcache_dirty[2] <= 1;
			end
			if (ramh_addr[19:5] == ramh_rcache_addr[3][19:5]) begin
				ramh_rcache_addr[3] <= '1;
				ramh_rcache_dirty[3] <= 1;
			end
		end
		end
		if (|raml_wr && !raml_wr_old) begin
			if (raml_addr[21:5] == raml_rcache_addr[21:5]) begin
				raml_rcache_dirty <= 1;
			end
			raml_write_addr <= raml_addr;
			raml_write_data <= raml_din;
			raml_be <= raml_wr;
			raml_write_busy <= 1;
		end
		if (|cart_wr && !cart_wr_old) begin
			if (cart_addr[25:5] == cart_rcache_addr[25:5]) begin
				cart_rcache_dirty <= 1;
			end
			cart_write_addr <= cart_addr;
			cart_write_data <= cart_din;
			cart_be <= cart_wr;
			cart_write_busy <= 1;
		end
		if (|bios_wr && !bios_wr_old) begin
			bios_write_addr <= bios_addr;
			bios_write_data <= bios_din;
			bios_be <= bios_wr;
			bios_write_busy <= 1;
		end
		if (|bsram_wr && !bsram_wr_old) begin
			if (bsram_addr[20:4] == bsram_rcache_addr[20:4]) begin
				bsram_rcache_dirty <= 1;
			end
			bsram_write_addr <= bsram_addr;
			bsram_write_data <= bsram_din;
			bsram_be <= bsram_wr;
			bsram_write_busy <= 1;
		end
		if (ld_wr && !ld_wr_old) begin
			ld_waddr <= ld_addr;
			ld_wdata <= ld_data;
			ld_write_busy <= 1;
		end
	end

	if (rst_pulse) begin
		a_state <= '0;
		a_write <= 0;
		a_read  <= 0;
	end
	else if(!p0_busy_m) begin
		a_write <= 0;
		a_read  <= 0;

		case (a_state)
			0: begin
				if (!ramh_fifo_empty) begin
					a_addr  <= RAMH_W64 + {4'b0000,ramh_write_addr[19:3]};
					a_din   <= {2{ramh_write_data}};
					case (ramh_write_addr[2])
						1'b0: a_be <= {ramh_write_be,4'b0000};
						1'b1: a_be <= {4'b0000,ramh_write_be};
					endcase
					a_write <= 1;
					a_burst <= 1;
					a_chan  <= 4'd0;
					a_state <= 3'h1;
				end
				else if (ramh_read_busy[0]) begin
					a_addr  <= RAMH_W64 + {ramh_rcache_addr[0][19:5],2'b00};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 4;
					a_chan  <= 4'd0;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (ramh_read_busy[1]) begin
					a_addr  <= RAMH_W64 + {ramh_rcache_addr[1][19:5],2'b00};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 4;
					a_chan  <= 4'd0;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (ramh_read_busy[2]) begin
					a_addr  <= RAMH_W64 + {ramh_rcache_addr[2][19:5],2'b00};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 4;
					a_chan  <= 4'd0;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (ramh_read_busy[3]) begin
					a_addr  <= RAMH_W64 + {ramh_rcache_addr[3][19:5],2'b00};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 4;
					a_chan  <= 4'd0;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (raml_write_busy) begin
					raml_write_busy <= 0;
					a_addr  <= {2'b00,raml_write_addr[21:3]};
					a_din   <= {4{raml_write_data}};
					case (raml_write_addr[2:1])
						2'b00: a_be <= {raml_be,6'b000000};
						2'b01: a_be <= {2'b00,raml_be,4'b0000};
						2'b10: a_be <= {4'b0000,raml_be,2'b00};
						2'b11: a_be <= {6'b000000,raml_be};
					endcase
					a_write <= 1;
					a_burst <= 1;
					a_chan  <= 4'd2;
					a_state <= 3'h1;
				end
				else if (raml_read_busy) begin
					a_addr  <= {2'b00,raml_rcache_addr[21:5],2'b00};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 4;
					a_chan  <= 4'd2;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (cart_write_busy) begin
					cart_write_busy <= 0;
					a_addr  <= CART_W64 + {1'b0,cart_write_addr[22:3]};
					a_din   <= {4{cart_write_data}};
					case (cart_write_addr[2:1])
						2'b00: a_be <= {cart_be,6'b000000};
						2'b01: a_be <= {2'b00,cart_be,4'b0000};
						2'b10: a_be <= {4'b0000,cart_be,2'b00};
						2'b11: a_be <= {6'b000000,cart_be};
					endcase
					a_write <= 1;
					a_burst <= 1;
					a_chan  <= 4'd6;
					a_state <= 3'h1;
				end
				else if (cart_read_busy) begin
					a_addr  <= CART_W64 + {1'b0,cart_rcache_addr[22:5],2'b00};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 4;
					a_chan  <= 4'd6;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (bsram_write_busy) begin
					bsram_write_busy <= 0;
					a_addr  <= bsram_write_addr[20] ? CART_W64 + {2'b00,bsram_write_addr[19:3]} : BACKUP_W64 + {5'b00000,bsram_write_addr[15:3]};
					a_din   <= {4{bsram_write_data}};
					case (bsram_write_addr[2:1])
						2'b00: a_be <= {bsram_be,6'b000000};
						2'b01: a_be <= {2'b00,bsram_be,4'b0000};
						2'b10: a_be <= {4'b0000,bsram_be,2'b00};
						2'b11: a_be <= {6'b000000,bsram_be};
					endcase
					a_write <= 1;
					a_burst <= 1;
					a_chan  <= 4'd7;
					a_state <= 3'h1;
				end
				else if (bsram_read_busy) begin
					a_addr  <= bsram_rcache_addr[20] ? CART_W64 + {2'b00,bsram_rcache_addr[19:4],1'b0} : BACKUP_W64 + {5'b00000,bsram_rcache_addr[15:4],1'b0};
					a_be    <= 8'hFF;
					a_read  <= 1;
					a_burst <= 2;
					a_chan  <= 4'd7;
					a_cwr   <= '0;
					a_wcnt  <= '0;
					a_state <= 3'h2;
				end
				else if (bios_write_busy) begin
					bios_write_busy <= 0;
					a_addr  <= bios_write_addr[26] ? CART_W64 + {1'b0,bios_write_addr[22:3]} : {5'b00000,bios_write_addr[18:3]};
					a_din   <= {4{bios_write_data}};
					case (bios_write_addr[2:1])
						2'b00: a_be <= {bios_be,6'b000000};
						2'b01: a_be <= {2'b00,bios_be,4'b0000};
						2'b10: a_be <= {4'b0000,bios_be,2'b00};
						2'b11: a_be <= {6'b000000,bios_be};
					endcase
					a_write <= 1;
					a_burst <= 1;
					a_chan  <= 4'd10;
					a_state <= 3'h1;
				end
				else if (ld_write_busy) begin
					ld_write_busy <= 0;
					a_addr  <= ld_waddr[23:3];
					a_din   <= {2{ld_wdata}};
					a_be    <= ld_waddr[2] ? 8'h0F : 8'hF0;
					a_write <= 1;
					a_burst <= 1;
					a_chan  <= 4'd11;
					a_state <= 3'h1;
				end
			end

			3'h1: begin
				a_state <= 0;
			end

			3'h2: if (p0_dout_ready) begin
				a_cwr <= a_cwr + 7'd1;
				a_wcnt <= a_wcnt + 7'd1;
				if (a_wcnt == a_burst[6:0] - 7'd1) begin
					if (a_chan == 4'd0 ) begin ramh_read_busy[ramh_rcache_curr] <= 0; ramh_rcache_busy <= 1; end
					if (a_chan == 4'd2 ) begin raml_read_busy <= 0; raml_rcache_busy <= 1; end
					if (a_chan == 4'd6 ) begin cart_read_busy <= 0; cart_rcache_busy <= 1; end
					if (a_chan == 4'd7 ) begin bsram_read_busy <= 0; bsram_rcache_busy <= 1; end
					a_state <= 0;
				end
			end
		endcase
	end
end

// ================================================================ chip B: cdram vdp1vram cdbuf (+ write)
always @(posedge clk) begin
	{cdram_rcache_busy,vdp1vram_rcache_busy,cdbuf_rcache_busy} <= '0;
	if (rst_pulse) begin
		{cdram_rcache_dirty,vdp1vram_rcache_dirty,cdbuf_rcache_dirty} <= '1;
		{cdram_read_busy,vdp1vram_read_busy,cdbuf_read_busy} <= '0;
		vdp1vram_rcache_blen <= '0;
	end
	else begin
		if (cdram_rd && !cdram_rd_old) begin
			if (cdram_addr[18:5] != cdram_rcache_addr[18:5] || cdram_rcache_dirty) begin
				cdram_read_busy <= 1;
			end
			cdram_rcache_addr <= cdram_addr;
			cdram_rcache_busy <= 1;
			cdram_rcache_dirty <= 0;
		end
		if (vdp1vram_rd && !vdp1vram_rd_old) begin
			if (vdp1vram_blen) begin
				if (vdp1vram_addr != vdp1vram_rcache_addr || vdp1vram_rcache_dirty) begin
					vdp1vram_read_busy <= 1;
					vdp1vram_rcache_addr <= vdp1vram_addr;
					vdp1vram_rcache_addr_end <= vdp1vram_addr + vdp1vram_blen - 18'd1;
					vdp1vram_rcache_blen <= vdp1vram_blen;
				end
			end else if (vdp1vram_rcache_blen) begin
				if (vdp1vram_addr < vdp1vram_rcache_addr || vdp1vram_addr > vdp1vram_rcache_addr_end || vdp1vram_rcache_dirty) begin
					vdp1vram_read_busy <= 1;
					vdp1vram_rcache_addr <= vdp1vram_addr;
					vdp1vram_rcache_blen <= '0;
				end
			end else begin
				if (vdp1vram_addr[18:5] != vdp1vram_rcache_addr[18:5] || vdp1vram_rcache_dirty) begin
					vdp1vram_read_busy <= 1;
					vdp1vram_rcache_addr <= vdp1vram_addr;
				end
			end
			vdp1vram_rcache_addr_lsb <= vdp1vram_addr[2:1];
			vdp1vram_rcache_dirty <= 0;
		end
		if (cdbuf_rd && !cdbuf_rd_old) begin
			if (cdbuf_addr[13:5] != cdbuf_rcache_addr[13:5] || cdbuf_rcache_dirty) begin
				cdbuf_read_busy <= 1;
			end
			cdbuf_rcache_addr <= cdbuf_addr;
			cdbuf_rcache_busy <= 1;
			cdbuf_rcache_dirty <= 0;
		end
	end

	if (rst_pulse) begin
		{cdram_write_busy,cdbuf_wwrite_busy} <= 0;
	end
	else begin
		if (|cdram_wr && !cdram_wr_old) begin
			if (cdram_addr[18:5] == cdram_rcache_addr[18:5]) begin
				cdram_rcache_dirty <= 1;
			end
			cdram_write_addr <= cdram_addr;
			cdram_write_data <= cdram_din;
			cdram_be <= cdram_wr;
			cdram_write_busy <= 1;
		end
		if (|vdp1vram_wr && !vdp1vram_wr_old) begin
//			if (vdp1vram_addr[18:5] == vdp1vram_rcache_addr[18:5]) begin
//				vdp1vram_rcache_dirty <= 1;
//			end
			if (!vdp1vram_rcache_blen) begin
				if (vdp1vram_rcache_addr[18:5] == vdp1vram_addr[18:5]) begin
					vdp1vram_rcache_dirty <= 1;
				end
			end else begin
				if (vdp1vram_addr >= vdp1vram_rcache_addr && vdp1vram_addr <= (vdp1vram_rcache_addr + vdp1vram_rcache_blen - 1)) begin
					vdp1vram_rcache_dirty <= 1;
				end
			end
		end
		if (cdbuf_wwr && !cdbuf_wwr_old) begin
			if (cdbuf_waddr[13:5] == cdbuf_rcache_addr[13:5]) begin
				cdbuf_rcache_dirty <= 1;
			end
			cdbuf_wwrite_addr <= cdbuf_waddr;
			cdbuf_wwrite_data <= cdbuf_wdata;
			cdbuf_wwrite_busy <= 1;
		end
	end

	if (rst_pulse) begin
		b_state <= '0;
		b_write <= 0;
		b_read  <= 0;
	end
	else if(!p1_busy_m) begin
		b_write <= 0;
		b_read  <= 0;

		case (b_state)
			0: begin
				if (cdram_write_busy) begin
					cdram_write_busy <= 0;
					b_addr  <= CDRAM_W64 + {5'b00000,cdram_write_addr[18:3]};
					b_din   <= {4{cdram_write_data}};
					case (cdram_write_addr[2:1])
						2'b00: b_be <= {cdram_be,6'b000000};
						2'b01: b_be <= {2'b00,cdram_be,4'b0000};
						2'b10: b_be <= {4'b0000,cdram_be,2'b00};
						2'b11: b_be <= {6'b000000,cdram_be};
					endcase
					b_write <= 1;
					b_burst <= 1;
					b_chan  <= 4'd1;
					b_state <= 3'h1;
				end
				else if (cdram_read_busy) begin
					b_addr  <= CDRAM_W64 + {cdram_rcache_addr[18:5],2'b00};
					b_be    <= 8'hFF;
					b_read  <= 1;
					b_burst <= 4;
					b_chan  <= 4'd1;
					b_cwr   <= '0;
					b_wcnt  <= '0;
					b_state <= 3'h2;
				end
				else if (!vdp1vram_fifo_empty) begin
					b_addr  <= {5'b00000,vdp1vram_write_addr[18:3]};
					b_din   <= {4{vdp1vram_write_data}};
					case (vdp1vram_write_addr[2:1])
						2'b00: b_be <= {vdp1vram_write_be,6'b000000};
						2'b01: b_be <= {2'b00,vdp1vram_write_be,4'b0000};
						2'b10: b_be <= {4'b0000,vdp1vram_write_be,2'b00};
						2'b11: b_be <= {6'b000000,vdp1vram_write_be};
					endcase
					b_write <= 1;
					b_burst <= 1;
					b_chan  <= 4'd3;
					b_state <= 3'h1;
				end
				else if (vdp1vram_read_busy) begin
					b_addr  <= vdp1vram_rcache_blen ? {5'b00000,vdp1vram_rcache_addr[18:3]} : {5'b00000,vdp1vram_rcache_addr[18:5],2'b00};
					b_be    <= 8'hFF;
					b_read  <= 1;
					b_burst <= vdp1vram_rcache_blen ? {1'b0,vdp1vram_rcache_blen[8:2]} + {7'b0000000,|vdp1vram_rcache_blen[1:0]} : 8'd4;
					b_chan  <= 4'd3;
					b_cwr   <= vdp1vram_rcache_blen ? {vdp1vram_rcache_addr[9:3]} : {vdp1vram_rcache_addr[9:5],2'b00};
					b_wcnt  <= '0;
					b_state <= 3'h2;
				end
				else if (cdbuf_read_busy) begin
					b_addr  <= CDBUF_W64 + {cdbuf_rcache_addr[13:5],2'b00};
					b_be    <= 8'hFF;
					b_read  <= 1;
					b_burst <= 4;
					b_chan  <= 4'd5;
					b_cwr   <= '0;
					b_wcnt  <= '0;
					b_state <= 3'h2;
				end
				else if (cdbuf_wwrite_busy) begin
					cdbuf_wwrite_busy <= 0;
					b_addr  <= CDBUF_W64 + {8'd0,cdbuf_wwrite_addr[13:3]};
					b_din   <= {4{cdbuf_wwrite_data}};
					case (cdbuf_wwrite_addr[2:1])
						2'b00: b_be <= 8'hC0;
						2'b01: b_be <= 8'h30;
						2'b10: b_be <= 8'h0C;
						2'b11: b_be <= 8'h03;
					endcase
					b_write <= 1;
					b_burst <= 1;
					b_chan  <= 4'd12;
					b_state <= 3'h1;
				end
			end

			3'h1: begin
				b_state <= 0;
			end

			3'h2: if (p1_dout_ready) begin
				b_cwr <= b_cwr + 7'd1;
				b_wcnt <= b_wcnt + 7'd1;
				if (b_wcnt == b_burst[6:0] - 7'd1) begin
					if (b_chan == 4'd1 ) begin cdram_read_busy <= 0; cdram_rcache_busy <= 1; end
					if (b_chan == 4'd3 ) begin vdp1vram_read_busy <= 0; vdp1vram_rcache_busy <= 1; end
					if (b_chan == 4'd5 ) begin cdbuf_read_busy <= 0; cdbuf_rcache_busy <= 1; end
					b_state <= 0;
				end
			end
		endcase
	end
end

// ================================================================ read caches
wire           a_cache_wren = (a_state == 3'h2) && p0_dout_ready && !p0_busy_m;
wire           b_cache_wren = (b_state == 3'h2) && p1_dout_ready && !p1_busy_m;
wire [ 63:  0] ramh_cache_q,cdram_cache_q,raml_cache_q,vdp1vram_cache_q,cdbuf_cache_q,cart_cache_q,bsram_cache_q;

ddp_cache_ram #(4) cache0 (clk, {ramh_rcache_curr,a_cwr[1:0]}, p0_dout, a_cache_wren & a_chan == 0, {ramh_rcache_curr,ramh_addr[4:3]}, ramh_cache_q);
ddp_cache_ram #(2) cache1 (clk, b_cwr[1:0], p1_dout, b_cache_wren & b_chan == 1, cdram_rcache_addr[4:3], cdram_cache_q);
ddp_cache_ram #(2) cache2 (clk, a_cwr[1:0], p0_dout, a_cache_wren & a_chan == 2, raml_rcache_addr[4:3], raml_cache_q);
ddp_cache_ram #(7) cache3 (clk, b_cwr[6:0], p1_dout, b_cache_wren & b_chan == 3, vdp1vram_addr[9:3], vdp1vram_cache_q);
ddp_cache_ram #(2) cache5 (clk, b_cwr[1:0], p1_dout, b_cache_wren & b_chan == 5, cdbuf_rcache_addr[4:3], cdbuf_cache_q);
ddp_cache_ram #(2) cache6 (clk, a_cwr[1:0], p0_dout, a_cache_wren & a_chan == 6, cart_rcache_addr[4:3], cart_cache_q);
ddp_cache_ram #(1) cache7 (clk, a_cwr[0:0], p0_dout, a_cache_wren & a_chan == 7, bsram_rcache_addr[3:3], bsram_cache_q);

always @* begin
	if (ramh_ram_sel)
		ramh_dout = ramh_ram_q;
	else
		case (ramh_rcache_addr[ramh_rcache_curr][2])
			1'b0: ramh_dout = ramh_cache_q[63:32];
			1'b1: ramh_dout = ramh_cache_q[31:00];
		endcase
	ramh_busy = ramh_fifo_full | ramh_read_busy[0] | ramh_read_busy[1] | ramh_read_busy[2] | ramh_read_busy[3];

	case (cdram_rcache_addr[2:1])
		2'b00: cdram_dout = cdram_cache_q[63:48];
		2'b01: cdram_dout = cdram_cache_q[47:32];
		2'b10: cdram_dout = cdram_cache_q[31:16];
		2'b11: cdram_dout = cdram_cache_q[15:00];
	endcase
	cdram_busy = cdram_write_busy | cdram_read_busy | cdram_rcache_busy;

	case (raml_rcache_addr[2:1])
		2'b00: raml_dout = raml_cache_q[63:48];
		2'b01: raml_dout = raml_cache_q[47:32];
		2'b10: raml_dout = raml_cache_q[31:16];
		2'b11: raml_dout = raml_cache_q[15:00];
	endcase
	raml_busy = raml_write_busy | raml_read_busy | raml_rcache_busy;

	case (vdp1vram_rcache_addr_lsb[2:1])
		2'b00: vdp1vram_dout = vdp1vram_cache_q[63:48];
		2'b01: vdp1vram_dout = vdp1vram_cache_q[47:32];
		2'b10: vdp1vram_dout = vdp1vram_cache_q[31:16];
		2'b11: vdp1vram_dout = vdp1vram_cache_q[15:00];
	endcase
	vdp1vram_busy = vdp1vram_fifo_full | vdp1vram_read_busy | vdp1vram_rcache_busy;

	case (cdbuf_rcache_addr[2:1])
		2'b00: cdbuf_dout = cdbuf_cache_q[63:48];
		2'b01: cdbuf_dout = cdbuf_cache_q[47:32];
		2'b10: cdbuf_dout = cdbuf_cache_q[31:16];
		2'b11: cdbuf_dout = cdbuf_cache_q[15:00];
	endcase
	cdbuf_busy = cdbuf_read_busy | cdbuf_rcache_busy;

	case (cart_rcache_addr[2:1])
		2'b00: cart_dout = cart_cache_q[63:48];
		2'b01: cart_dout = cart_cache_q[47:32];
		2'b10: cart_dout = cart_cache_q[31:16];
		2'b11: cart_dout = cart_cache_q[15:00];
	endcase
	cart_busy = cart_write_busy | cart_read_busy | cart_rcache_busy;

	bios_busy = bios_write_busy;

	case (bsram_rcache_addr[2:1])
		2'b00: bsram_dout = bsram_cache_q[63:48];
		2'b01: bsram_dout = bsram_cache_q[47:32];
		2'b10: bsram_dout = bsram_cache_q[31:16];
		2'b11: bsram_dout = bsram_cache_q[15:00];
	endcase
	bsram_busy = bsram_write_busy | bsram_read_busy | bsram_rcache_busy;
end

endmodule

// ---- inferred memories (M10K / MLAB)

// read caches: written 64 bit beats, registered read address and an unregistered output (the altsyncram
// configuration of ddram.sv: data written at an edge is visible right after it)
module ddp_cache_ram #(parameter wa = 2) (
	input  wire          clock,
	input  wire [wa-1:0] wraddress,
	input  wire [63:0]   data,
	input  wire          wren,
	input  wire [wa-1:0] rdaddress,
	output wire [63:0]   q
);
	reg [63:0] mem [0:(1<<wa)-1];
	reg [wa-1:0] ra;
	always @(posedge clock) begin
		if (wren) mem[wraddress] <= data;
		ra <= rdaddress;
	end
	assign q = mem[ra];
endmodule

// WRAM-H low 4 KB mirror, byte enables
module ddp_ram #(parameter wa = 10) (
	input  wire          clock,
	input  wire [wa-1:0] wraddress,
	input  wire [31:0]   data,
	input  wire [ 3:0]   wren,
	input  wire [wa-1:0] rdaddress,
	output wire [31:0]   q
);
	reg [31:0] mem [0:(1<<wa)-1];
	reg [wa-1:0] ra;
	always @(posedge clock) begin
		if (wren[0]) mem[wraddress][ 7: 0] <= data[ 7: 0];
		if (wren[1]) mem[wraddress][15: 8] <= data[15: 8];
		if (wren[2]) mem[wraddress][23:16] <= data[23:16];
		if (wren[3]) mem[wraddress][31:24] <= data[31:24];
		ra <= rdaddress;
	end
	assign q = mem[ra];
endmodule

// posted write FIFO, 2**l entries
module ddp_infifo #(parameter l = 3) (
	input  wire          CLK,
	input  wire          RST,
	input  wire [53: 0]  DATA,
	input  wire          WRREQ,
	input  wire          RDREQ,
	output wire [53: 0]  Q,
	output wire          EMPTY,
	output wire          FULL
);
	reg [53:0]  mem [0:(1<<l)-1];
	reg [l-1:0] RADDR = '0, WADDR = '0;
	reg [l:0]   AMOUNT = '0;
	always @(posedge CLK) begin
		if (RST) begin
			AMOUNT <= '0; RADDR <= '0; WADDR <= '0;
		end else begin
			if (WRREQ && !AMOUNT[l]) begin WADDR <= WADDR + 1'd1; mem[WADDR] <= DATA; end
			if (RDREQ && AMOUNT) RADDR <= RADDR + 1'd1;
			if (WRREQ && !RDREQ && !AMOUNT[l]) AMOUNT <= AMOUNT + 1'd1;
			else if (!WRREQ && RDREQ && AMOUNT) AMOUNT <= AMOUNT - 1'd1;
		end
	end
	assign EMPTY = ~|AMOUNT;
	assign FULL = AMOUNT[l];
	assign Q = mem[RADDR];
endmodule

`default_nettype wire
