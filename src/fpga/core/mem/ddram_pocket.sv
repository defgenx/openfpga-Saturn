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
//     rvalid/rlast, busy low in the rlast cycle).
//   * channel to chip:   PSRAM0  ramh raml cart bsram bios + the loader port
//                        PSRAM1  vdp1vram cdram cdbuf (+ the cdbuf write port)
//     The VDP1 framebuffer is not here: vdp1_fb_pocket.sv holds it (vdp1fb_* are kept, inert).
//   * ST-V channels (eeprom, rax) are removed; the loader port (32 bit, for the bridge load path) and
//     the cdbuf write port (sector data from the APF side) are added. The bios channel is not
//     implemented (bios_* are inert: the BIOS arrives through the loader port).
//   * the PSRAM backend is word (16 bit) oriented: halfword address, word count, 32 bit write data with
//     byte enables; the read caches take the words as they arrive (M10K, no output muxes).
//
// PSRAM0 map (byte offsets; the MiSTer DDR3 offsets of the same regions, cartridge moved to die 1):
//   0x000000 BIOS 512 KB       0x100000 backup RAM image 64 KB     0x200000 WRAM-L 1 MB
//   0x300000 WRAM-H 1 MB       0x800000-0xFFFFFF cartridge window 8 MB (ROM, RAM carts, backup cart)
// PSRAM1 map:
//   0x000000 VDP1 VRAM 512 KB  0x080000 CD block DRAM 512 KB      0x100000 CD sector buffer 16 KB
//

`default_nettype none

module ddram_pocket
(
	input  wire        clk,
	input  wire        rst,

	// PSRAM0 backend (psram_sync client port: halfword address, word count)
	input  wire        p0_busy,
	output wire [22:0] p0_addr,
	output wire  [9:0] p0_cnt,
	output wire        p0_rd,
	output wire        p0_we,
	output wire [31:0] p0_din,
	output wire  [3:0] p0_be,
	input  wire [15:0] p0_rdata,
	input  wire        p0_rvalid,
	input  wire        p0_rlast,

	// PSRAM1 backend
	input  wire        p1_busy,
	output wire [22:0] p1_addr,
	output wire  [9:0] p1_cnt,
	output wire        p1_rd,
	output wire        p1_we,
	output wire [31:0] p1_din,
	output wire  [3:0] p1_be,
	input  wire [15:0] p1_rdata,
	input  wire        p1_rvalid,
	input  wire        p1_rlast,

	input  wire [19: 2] ramh_addr,
	output wire [31: 0] ramh_dout,
	input  wire [31: 0] ramh_din,
	input  wire         ramh_rd,
	input  wire [ 3: 0] ramh_wr,
	output wire         ramh_busy,

	input  wire [18: 1] cdram_addr,
	output wire [15: 0] cdram_dout,
	input  wire [15: 0] cdram_din,
	input  wire         cdram_rd,
	input  wire [ 1: 0] cdram_wr,
	output wire         cdram_busy,

	input  wire [21: 1] raml_addr,
	output wire [15: 0] raml_dout,
	input  wire [15: 0] raml_din,
	input  wire         raml_rd,
	input  wire [ 1: 0] raml_wr,
	output wire         raml_busy,

	input  wire [18: 1] vdp1vram_addr,
	output wire [15: 0] vdp1vram_dout,
	input  wire [15: 0] vdp1vram_din,
	input  wire         vdp1vram_rd,
	input  wire [ 1: 0] vdp1vram_wr,
	input  wire [ 8: 0] vdp1vram_blen,
	output wire         vdp1vram_busy,

	// kept for the port list; the framebuffer is vdp1_fb_pocket
	input  wire [18: 1] vdp1fb_addr,
	output wire [15: 0] vdp1fb_dout,
	input  wire [15: 0] vdp1fb_din,
	input  wire         vdp1fb_rd,
	input  wire [ 1: 0] vdp1fb_wr,
	output wire         vdp1fb_busy,

	input  wire [13: 1] cdbuf_addr,
	output wire [15: 0] cdbuf_dout,
	input  wire         cdbuf_rd,
	output wire         cdbuf_busy,

	input  wire [25: 1] cart_addr,
	output wire [15: 0] cart_dout,
	input  wire [15: 0] cart_din,
	input  wire         cart_rd,
	input  wire [ 1: 0] cart_wr,
	output wire         cart_busy,

	input  wire [26: 1] bios_addr,
	input  wire [15: 0] bios_din,
	input  wire [ 1: 0] bios_wr,
	output wire         bios_busy,

	input  wire [20: 1] bsram_addr,
	output wire [15: 0] bsram_dout,
	input  wire [15: 0] bsram_din,
	input  wire         bsram_rd,
	input  wire [ 1: 0] bsram_wr,
	output wire         bsram_busy,

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

assign vdp1fb_dout = 16'h0000;
assign vdp1fb_busy = 1'b0;
assign bios_busy = 1'b0;

// ---- chip A (PSRAM0) and chip B (PSRAM1) masters; addresses are halfword (16 bit word) addresses
// region bases (word address): BACKUP 0x80000, CART 0x400000 (die 1), RAMH 0x180000, CDRAM 0x40000, CDBUF 0x80000
reg  [22: 0] a_addr, b_addr;
reg  [31: 0] a_wd, b_wd;                    // word 0 in [31:16]
reg  [ 3: 0] a_be, b_be;                    // byte enables of word 0 {hi, lo}, word 1 {hi, lo}
reg  [ 4: 0] a_cnt;                         // words of the request: 1, 2, 8 or 16
reg  [ 9: 0] b_cnt;
reg          a_read = 0, a_write = 0, b_read = 0, b_write = 0;
reg  [ 2: 0] a_chan;                        // 0 ramh 1 raml 2 cart 3 bsram 4 loader
reg  [ 1: 0] b_chan;                        // 0 cdram 1 vdp1vram 2 cdbuf 3 cdbuf write
reg  [ 1: 0] a_state = 0, b_state = 0;      // 0 idle, 1 write issued, 2 read words
reg  [ 3: 0] a_cw;                          // cache word index of the next read word
reg  [ 8: 0] b_cw;
assign p0_addr = a_addr;  assign p0_cnt = {5'd0, a_cnt};  assign p0_rd = a_read;  assign p0_we = a_write;
assign p0_din  = a_wd;    assign p0_be = a_be;
assign p1_addr = b_addr;  assign p1_cnt = b_cnt;          assign p1_rd = b_read;  assign p1_we = b_write;
assign p1_din  = b_wd;    assign p1_be = b_be;

// ---- per-channel state
reg  [ 19:  5] ramh_tag[4];
reg            ramh_dirty[4];
reg  [  1:  0] ramh_curr;
reg            ramh_read_busy;
reg  [  2:  0] ramh_plru;

reg  [ 21:  1] raml_rcache_addr;
reg  [ 21:  1] raml_write_addr;
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

reg  [ 22:  1] cart_rcache_addr,cart_write_addr;
reg            cart_rcache_dirty;
reg            cart_rcache_busy;
reg  [ 15:  0] cart_write_data;
reg  [  1:  0] cart_be;
reg            cart_read_busy,cart_write_busy;

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
reg            bsram_rd_old,bsram_wr_old;
reg            ld_wr_old;
always @(posedge clk) begin
	{ramh_rd_old,ramh_wr_old} <= {ramh_rd,|ramh_wr};
	{cdram_rd_old,cdram_wr_old} <= {cdram_rd,|cdram_wr};
	{cdbuf_rd_old,cdbuf_wwr_old} <= {cdbuf_rd,cdbuf_wwr};
	{raml_rd_old,raml_wr_old} <= {raml_rd,|raml_wr};
	{vdp1vram_rd_old,vdp1vram_wr_old} <= {vdp1vram_rd,|vdp1vram_wr};
	{cart_rd_old,cart_wr_old} <= {cart_rd,|cart_wr};
	{bsram_rd_old,bsram_wr_old} <= {bsram_rd,|bsram_wr};
	ld_wr_old <= ld_wr;
	old_rst <= rst;
end
wire           rst_pulse = (rst && !old_rst);

// ---- posted write FIFOs
wire           ramh_fifo_wrreq,ramh_fifo_rdreq;
wire           vdp1vram_fifo_wrreq,vdp1vram_fifo_rdreq;
assign ramh_fifo_wrreq = (|ramh_wr && !ramh_wr_old);
assign ramh_fifo_rdreq = (a_state == 2'd1 && !p0_busy && a_chan == 3'd0);
assign vdp1vram_fifo_wrreq = (|vdp1vram_wr && !vdp1vram_wr_old);
assign vdp1vram_fifo_rdreq = (b_state == 2'd1 && !p1_busy && b_chan == 2'd1);

wire [ 53:  0] ramh_fifo_dout;
wire           ramh_fifo_empty,ramh_fifo_full;
wire [ 35:  0] vdp1vram_fifo_dout;
wire           vdp1vram_fifo_empty,vdp1vram_fifo_full;

ddp_infifo #(3, 54) ramh_fifo (clk, rst_pulse, {ramh_addr,ramh_wr,ramh_din}, ramh_fifo_wrreq, ramh_fifo_rdreq, ramh_fifo_dout, ramh_fifo_empty, ramh_fifo_full);
ddp_infifo #(3, 36) vdp1vram_fifo (clk, rst_pulse, {vdp1vram_addr,vdp1vram_wr,vdp1vram_din}, vdp1vram_fifo_wrreq, vdp1vram_fifo_rdreq, vdp1vram_fifo_dout, vdp1vram_fifo_empty, vdp1vram_fifo_full);

wire [ 19:  2] ramh_write_addr;
wire [ 31:  0] ramh_write_data;
wire [  3:  0] ramh_write_be;
wire [ 18:  1] vdp1vram_write_addr;
wire [ 15:  0] vdp1vram_write_data;
wire [  1:  0] vdp1vram_write_be;

assign {ramh_write_addr,ramh_write_be,ramh_write_data} = ramh_fifo_dout;
assign {vdp1vram_write_addr,vdp1vram_write_be,vdp1vram_write_data} = vdp1vram_fifo_dout;

wire           ramh_ram_sel = !ramh_addr[19:12];
wire [ 31:  0] ramh_ram_q;
ddp_ram #(10) ramh_ram (clk, ramh_addr[11:2], ramh_din, ramh_wr & {4{ramh_ram_sel}}, ramh_addr[11:2], ramh_ram_q);

// WRAM-H line lookup (shared by the read hit test and the write invalidation)
wire [3:0]     ramh_match = {ramh_addr[19:5] == ramh_tag[3], ramh_addr[19:5] == ramh_tag[2], ramh_addr[19:5] == ramh_tag[1], ramh_addr[19:5] == ramh_tag[0]};
wire [3:0]     ramh_hit   = ramh_match & ~{ramh_dirty[3], ramh_dirty[2], ramh_dirty[1], ramh_dirty[0]};
wire [1:0]     ramh_victim = {ramh_plru[0], ramh_plru[0] ? ramh_plru[2] : ramh_plru[1]};
wire [1:0]     ramh_hway  = ramh_hit[0] ? 2'd0 : ramh_hit[1] ? 2'd1 : ramh_hit[2] ? 2'd2 : 2'd3;
wire [1:0]     ramh_way   = |ramh_hit ? ramh_hway : ramh_victim;
integer        wi;

// ================================================================ chip A: ramh raml cart bsram loader
always @(posedge clk) begin
	{raml_rcache_busy,cart_rcache_busy,bsram_rcache_busy} <= '0;
	if (rst_pulse) begin
		for (wi = 0; wi < 4; wi = wi + 1) ramh_dirty[wi] <= 1'b1;
		{raml_rcache_dirty,cart_rcache_dirty,bsram_rcache_dirty} <= '1;
		{ramh_read_busy,raml_read_busy,cart_read_busy,bsram_read_busy} <= '0;
		ramh_curr <= 2'd0;
		ramh_plru <= 3'd0;
	end
	else begin
		if (ramh_rd && !ramh_rd_old && !ramh_ram_sel) begin
			ramh_curr <= ramh_way;
			ramh_plru[0] <= !ramh_way[1];
			if (ramh_way[1]) ramh_plru[2] <= !ramh_way[0]; else ramh_plru[1] <= !ramh_way[0];
			if (!(|ramh_hit)) begin
				ramh_tag[ramh_victim] <= ramh_addr[19:5];
				ramh_dirty[ramh_victim] <= 0;
				ramh_read_busy <= 1;
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
			if (cart_addr[22:5] != cart_rcache_addr[22:5] || cart_rcache_dirty) begin
				cart_read_busy <= 1;
			end
			cart_rcache_addr <= cart_addr[22:1];
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
		{raml_write_busy,cart_write_busy,bsram_write_busy,ld_write_busy} <= 0;
	end
	else begin
		if (|ramh_wr && !ramh_wr_old) begin
			for (wi = 0; wi < 4; wi = wi + 1) if (ramh_match[wi]) ramh_dirty[wi] <= 1;
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
			if (cart_addr[22:5] == cart_rcache_addr[22:5]) begin
				cart_rcache_dirty <= 1;
			end
			cart_write_addr <= cart_addr[22:1];
			cart_write_data <= cart_din;
			cart_be <= cart_wr;
			cart_write_busy <= 1;
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
	else begin
		if (!p0_busy) begin
			a_write <= 0;
			a_read  <= 0;

			case (a_state)
			0: begin
				a_cnt <= 5'd1;
				a_cw  <= '0;
				if (!ramh_fifo_empty) begin
					a_addr  <= {4'b0011, ramh_write_addr[19:2], 1'b0};
					a_wd    <= ramh_write_data;
					a_be    <= ramh_write_be;
					a_cnt   <= 5'd2;
					a_write <= 1;
					a_chan  <= 3'd0;
					a_state <= 2'd1;
				end
				else if (ramh_read_busy) begin
					a_addr  <= {4'b0011, ramh_tag[ramh_curr], 4'b0000};
					a_read  <= 1;
					a_cnt   <= 5'd16;
					a_chan  <= 3'd0;
					a_state <= 2'd2;
				end
				else if (raml_write_busy) begin
					raml_write_busy <= 0;
					a_addr  <= {2'b00, raml_write_addr};
					a_wd    <= {raml_write_data, 16'h0000};
					a_be    <= {raml_be, 2'b00};
					a_write <= 1;
					a_chan  <= 3'd1;
					a_state <= 2'd1;
				end
				else if (raml_read_busy) begin
					a_addr  <= {2'b00, raml_rcache_addr[21:5], 4'b0000};
					a_read  <= 1;
					a_cnt   <= 5'd16;
					a_chan  <= 3'd1;
					a_state <= 2'd2;
				end
				else if (cart_write_busy) begin
					cart_write_busy <= 0;
					a_addr  <= {1'b1, cart_write_addr};
					a_wd    <= {cart_write_data, 16'h0000};
					a_be    <= {cart_be, 2'b00};
					a_write <= 1;
					a_chan  <= 3'd2;
					a_state <= 2'd1;
				end
				else if (cart_read_busy) begin
					a_addr  <= {1'b1, cart_rcache_addr[22:5], 4'b0000};
					a_read  <= 1;
					a_cnt   <= 5'd16;
					a_chan  <= 3'd2;
					a_state <= 2'd2;
				end
				else if (bsram_write_busy) begin
					bsram_write_busy <= 0;
					a_addr  <= bsram_write_addr[20] ? {1'b1, 3'b000, bsram_write_addr[19:1]} : {4'b0001, 4'b0000, bsram_write_addr[15:1]};
					a_wd    <= {bsram_write_data, 16'h0000};
					a_be    <= {bsram_be, 2'b00};
					a_write <= 1;
					a_chan  <= 3'd3;
					a_state <= 2'd1;
				end
				else if (bsram_read_busy) begin
					a_addr  <= bsram_rcache_addr[20] ? {1'b1, 3'b000, bsram_rcache_addr[19:4], 3'b000} : {4'b0001, 4'b0000, bsram_rcache_addr[15:4], 3'b000};
					a_read  <= 1;
					a_cnt   <= 5'd8;
					a_chan  <= 3'd3;
					a_state <= 2'd2;
				end
				else if (ld_write_busy) begin
					ld_write_busy <= 0;
					a_addr  <= {ld_waddr, 1'b0};
					a_wd    <= ld_wdata;
					a_be    <= 4'hF;
					a_cnt   <= 5'd2;
					a_write <= 1;
					a_chan  <= 3'd4;
					a_state <= 2'd1;
				end
			end

			2'd1: begin
				a_state <= 0;
			end

			default: ;
			endcase
		end

		if (a_state == 2'd2) begin
			if (p0_rvalid) a_cw <= a_cw + 4'd1;
			if (p0_rlast) begin
				if (a_chan == 3'd0) ramh_read_busy <= 0;
				if (a_chan == 3'd1) begin raml_read_busy <= 0; raml_rcache_busy <= 1; end
				if (a_chan == 3'd2) begin cart_read_busy <= 0; cart_rcache_busy <= 1; end
				if (a_chan == 3'd3) begin bsram_read_busy <= 0; bsram_rcache_busy <= 1; end
				a_state <= 0;
			end
		end
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
			if (!vdp1vram_rcache_blen) begin
				if (vdp1vram_rcache_addr[18:5] == vdp1vram_addr[18:5]) begin
					vdp1vram_rcache_dirty <= 1;
				end
			end else begin
				if (vdp1vram_addr >= vdp1vram_rcache_addr && vdp1vram_addr <= vdp1vram_rcache_addr_end) begin
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
	else begin
		if (!p1_busy) begin
			b_write <= 0;
			b_read  <= 0;

			case (b_state)
			0: begin
				b_cnt <= 10'd1;
				b_cw  <= '0;
				if (cdram_write_busy) begin
					cdram_write_busy <= 0;
					b_addr  <= {4'b0000, 1'b1, cdram_write_addr};
					b_wd    <= {cdram_write_data, 16'h0000};
					b_be    <= {cdram_be, 2'b00};
					b_write <= 1;
					b_chan  <= 2'd0;
					b_state <= 2'd1;
				end
				else if (cdram_read_busy) begin
					b_addr  <= {4'b0000, 1'b1, cdram_rcache_addr[18:5], 4'b0000};
					b_read  <= 1;
					b_cnt   <= 10'd16;
					b_chan  <= 2'd0;
					b_state <= 2'd2;
				end
				else if (!vdp1vram_fifo_empty) begin
					b_addr  <= {5'b00000, vdp1vram_write_addr};
					b_wd    <= {vdp1vram_write_data, 16'h0000};
					b_be    <= {vdp1vram_write_be, 2'b00};
					b_write <= 1;
					b_chan  <= 2'd1;
					b_state <= 2'd1;
				end
				else if (vdp1vram_read_busy) begin
					b_addr  <= vdp1vram_rcache_blen ? {5'b00000, vdp1vram_rcache_addr} : {5'b00000, vdp1vram_rcache_addr[18:5], 4'b0000};
					b_read  <= 1;
					b_cnt   <= vdp1vram_rcache_blen ? {1'b0, vdp1vram_rcache_blen} : 10'd16;
					b_chan  <= 2'd1;
					b_cw    <= vdp1vram_rcache_blen ? vdp1vram_rcache_addr[9:1] : {vdp1vram_rcache_addr[9:5], 4'b0000};
					b_state <= 2'd2;
				end
				else if (cdbuf_read_busy) begin
					b_addr  <= {4'b0001, 6'b000000, cdbuf_rcache_addr[13:5], 4'b0000};
					b_read  <= 1;
					b_cnt   <= 10'd16;
					b_chan  <= 2'd2;
					b_state <= 2'd2;
				end
				else if (cdbuf_wwrite_busy) begin
					cdbuf_wwrite_busy <= 0;
					b_addr  <= {4'b0001, 6'b000000, cdbuf_wwrite_addr};
					b_wd    <= {cdbuf_wwrite_data, 16'h0000};
					b_be    <= 4'b1100;
					b_write <= 1;
					b_chan  <= 2'd3;
					b_state <= 2'd1;
				end
			end

			2'd1: begin
				b_state <= 0;
			end

			default: ;
			endcase
		end

		if (b_state == 2'd2) begin
			if (p1_rvalid) b_cw <= b_cw + 9'd1;
			if (p1_rlast) begin
				if (b_chan == 2'd0) begin cdram_read_busy <= 0; cdram_rcache_busy <= 1; end
				if (b_chan == 2'd1) begin vdp1vram_read_busy <= 0; vdp1vram_rcache_busy <= 1; end
				if (b_chan == 2'd2) begin cdbuf_read_busy <= 0; cdbuf_rcache_busy <= 1; end
				b_state <= 0;
			end
		end
	end
end

// ================================================================ read caches
wire           a_cache_wren = (a_state == 2'd2) && p0_rvalid;
wire           b_cache_wren = (b_state == 2'd2) && p1_rvalid;
wire [ 31:  0] ramh_cache_q;
wire [ 15:  0] cdram_cache_q,raml_cache_q,vdp1vram_cache_q,cdbuf_cache_q,cart_cache_q,bsram_cache_q;

// 16 bit words are written as they arrive (address = word index inside the line); read as 16 bit words (32 bit for WRAM-H)
ddp_cache_ram #(6, 32) cache0 (clk, {ramh_curr,a_cw}, p0_rdata, a_cache_wren & a_chan == 3'd0, {ramh_curr,ramh_addr[4:2]}, ramh_cache_q);
ddp_cache_ram #(4, 16) cache1 (clk, b_cw[3:0], p1_rdata, b_cache_wren & b_chan == 2'd0, cdram_rcache_addr[4:1], cdram_cache_q);
ddp_cache_ram #(4, 16) cache2 (clk, a_cw, p0_rdata, a_cache_wren & a_chan == 3'd1, raml_rcache_addr[4:1], raml_cache_q);
ddp_cache_ram #(9, 16) cache3 (clk, b_cw, p1_rdata, b_cache_wren & b_chan == 2'd1, {vdp1vram_addr[9:3],vdp1vram_rcache_addr_lsb}, vdp1vram_cache_q);
ddp_cache_ram #(4, 16) cache5 (clk, b_cw[3:0], p1_rdata, b_cache_wren & b_chan == 2'd2, cdbuf_rcache_addr[4:1], cdbuf_cache_q);
ddp_cache_ram #(4, 16) cache6 (clk, a_cw, p0_rdata, a_cache_wren & a_chan == 3'd2, cart_rcache_addr[4:1], cart_cache_q);
ddp_cache_ram #(3, 16) cache7 (clk, a_cw[2:0], p0_rdata, a_cache_wren & a_chan == 3'd3, bsram_rcache_addr[3:1], bsram_cache_q);

assign ramh_dout = ramh_ram_sel ? ramh_ram_q : {ramh_cache_q[15:0], ramh_cache_q[31:16]};
assign ramh_busy = ramh_fifo_full | ramh_read_busy;
assign cdram_dout = cdram_cache_q;
assign cdram_busy = cdram_write_busy | cdram_read_busy | cdram_rcache_busy;
assign raml_dout = raml_cache_q;
assign raml_busy = raml_write_busy | raml_read_busy | raml_rcache_busy;
assign vdp1vram_dout = vdp1vram_cache_q;
assign vdp1vram_busy = vdp1vram_fifo_full | vdp1vram_read_busy | vdp1vram_rcache_busy;
assign cdbuf_dout = cdbuf_cache_q;
assign cdbuf_busy = cdbuf_read_busy | cdbuf_rcache_busy;
assign cart_dout = cart_cache_q;
assign cart_busy = cart_write_busy | cart_read_busy | cart_rcache_busy;
assign bsram_dout = bsram_cache_q;
assign bsram_busy = bsram_write_busy | bsram_read_busy | bsram_rcache_busy;

endmodule

// ---- memories

// read cache: 2**AW words of 16 bit, written one word at a time and read as RB bit words (M10K, registered read
// address, unregistered output). RB = 32 returns {word 2k+1, word 2k}.
module ddp_cache_ram #(parameter AW = 4, parameter RB = 16) (
	input  wire                               clock,
	input  wire [AW-1:0]                      wraddress,
	input  wire [15:0]                        data,
	input  wire                               wren,
	input  wire [AW-$clog2(RB/16)-1:0]        rdaddress,
	output wire [RB-1:0]                      q
);
	localparam RA = AW - $clog2(RB/16);
`ifdef ALTERA_RESERVED_QIS
	altsyncram #(
		.operation_mode("DUAL_PORT"), .intended_device_family("Cyclone V"), .ram_block_type("M10K"),
		.width_a(16), .widthad_a(AW), .numwords_a(1 << AW),
		.width_b(RB), .widthad_b(RA), .numwords_b(1 << RA),
		.address_reg_b("CLOCK0"), .outdata_reg_b("UNREGISTERED"), .rdcontrol_reg_b("CLOCK0"),
		.read_during_write_mode_mixed_ports("DONT_CARE"), .power_up_uninitialized("TRUE"), .lpm_type("altsyncram")
	) ram (
		.clock0(clock), .address_a(wraddress), .data_a(data), .wren_a(wren),
		.address_b(rdaddress), .q_b(q), .rden_b(1'b1),
		.aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0), .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
		.clock1(1'b1), .clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1), .clocken3(1'b1),
		.data_b({RB{1'b1}}), .eccstatus(), .q_a(), .rden_a(1'b1), .wren_b(1'b0)
	);
`else
	reg [15:0] mem [0:(1<<AW)-1];
	reg [RA-1:0] rad;
	always @(posedge clock) begin
		if (wren) mem[wraddress] <= data;
		rad <= rdaddress;
	end
	generate if (RB == 16) begin : g16
		assign q = mem[rad];
	end else begin : g32
		assign q = {mem[{rad, 1'b1}], mem[{rad, 1'b0}]};
	end endgenerate
`endif
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

// posted write FIFO, 2**l entries of W bits
module ddp_infifo #(parameter l = 3, parameter W = 54) (
	input  wire          CLK,
	input  wire          RST,
	input  wire [W-1: 0] DATA,
	input  wire          WRREQ,
	input  wire          RDREQ,
	output wire [W-1: 0] Q,
	output wire          EMPTY,
	output wire          FULL
);
	reg [W-1:0] mem [0:(1<<l)-1];
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
