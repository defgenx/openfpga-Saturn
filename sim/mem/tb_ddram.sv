// tb_ddram: ddram_pocket + two psram_sync + two CellularRAM models.
//
// Four clients run at the same time and are checked against byte accurate shadows:
//   CPU     WRAM-H (ramh) random 32 bit writes with byte masks and reads, the way the SH-2 bus drives
//           it: level request, then wait for busy to be low (RAMH_SLOW=1 handshake); WRAM-L/BIOS/backup
//           through raml; line hits, misses and write-after-read invalidation
//   VDP1    vdp1vram writes (posted FIFO) and 16 bit / burst reads (blen)
//   CD      cdram random read/write, cdbuf writes through the write port and reads
//   LOAD    32 bit loader writes into the BIOS and cartridge window while the core runs, read back
// The WRAM-H read latency (request to busy low) is measured alone and with the other three clients
// loading PSRAM1 and the loader loading PSRAM0.
//
//   +N=count   operations per client (default 400)
//   +QUIET     measure WRAM-H alone first (default), +LOADED skips that phase

`timescale 1ps/1ps

module tb_ddram;

localparam integer T_RAM = 8730;
localparam integer TCO   = 3500;
localparam integer TIN   = 1000;
localparam integer INIT_US = 20;

reg clk = 0;
always #(T_RAM/2) clk = ~clk;
reg rst = 1;

// ---------------------------------------------------------------- clients
reg  [19:2] ramh_addr = 0;  wire [31:0] ramh_dout;  reg [31:0] ramh_din = 0;  reg ramh_rd = 0;  reg [3:0] ramh_wr = 0;  wire ramh_busy;
reg  [18:1] cdram_addr = 0; wire [15:0] cdram_dout; reg [15:0] cdram_din = 0; reg cdram_rd = 0; reg [1:0] cdram_wr = 0; wire cdram_busy;
reg  [21:1] raml_addr = 0;  wire [15:0] raml_dout;  reg [15:0] raml_din = 0;  reg raml_rd = 0;  reg [1:0] raml_wr = 0;  wire raml_busy;
reg  [18:1] vram_addr = 0;  wire [15:0] vram_dout;  reg [15:0] vram_din = 0;  reg vram_rd = 0;  reg [1:0] vram_wr = 0;  reg [8:0] vram_blen = 0; wire vram_busy;
reg  [13:1] cdbuf_addr = 0; wire [15:0] cdbuf_dout; reg cdbuf_rd = 0; wire cdbuf_busy;
reg  [25:1] cart_addr = 0;  wire [15:0] cart_dout;  reg [15:0] cart_din = 0;  reg cart_rd = 0;  reg [1:0] cart_wr = 0;  wire cart_busy;
reg  [26:1] bios_addr = 0;  reg [15:0] bios_din = 0; reg [1:0] bios_wr = 0; wire bios_busy;
reg  [20:1] bsram_addr = 0; wire [15:0] bsram_dout; reg [15:0] bsram_din = 0; reg bsram_rd = 0; reg [1:0] bsram_wr = 0; wire bsram_busy;
reg  [23:2] ld_addr = 0;    reg [31:0] ld_data = 0; reg ld_wr = 0; wire ld_busy;
reg  [13:1] cdbuf_waddr = 0; reg [15:0] cdbuf_wdata = 0; reg cdbuf_wwr = 0; wire cdbuf_wbusy;

wire p0_busy, p0_rd, p0_we, p0_dout_ready, p1_busy, p1_rd, p1_we, p1_dout_ready;
wire [20:0] p0_addr, p1_addr;  wire [7:0] p0_burst, p1_burst, p0_be, p1_be;  wire [63:0] p0_din, p1_din, p0_dout, p1_dout;

ddram_pocket dut (
	.clk(clk), .rst(rst),
	.p0_busy(p0_busy), .p0_addr(p0_addr), .p0_burst(p0_burst), .p0_rd(p0_rd), .p0_we(p0_we), .p0_din(p0_din), .p0_be(p0_be), .p0_dout(p0_dout), .p0_dout_ready(p0_dout_ready),
	.p1_busy(p1_busy), .p1_addr(p1_addr), .p1_burst(p1_burst), .p1_rd(p1_rd), .p1_we(p1_we), .p1_din(p1_din), .p1_be(p1_be), .p1_dout(p1_dout), .p1_dout_ready(p1_dout_ready),
	.ramh_addr(ramh_addr), .ramh_dout(ramh_dout), .ramh_din(ramh_din), .ramh_rd(ramh_rd), .ramh_wr(ramh_wr), .ramh_busy(ramh_busy),
	.cdram_addr(cdram_addr), .cdram_dout(cdram_dout), .cdram_din(cdram_din), .cdram_rd(cdram_rd), .cdram_wr(cdram_wr), .cdram_busy(cdram_busy),
	.raml_addr(raml_addr), .raml_dout(raml_dout), .raml_din(raml_din), .raml_rd(raml_rd), .raml_wr(raml_wr), .raml_busy(raml_busy),
	.vdp1vram_addr(vram_addr), .vdp1vram_dout(vram_dout), .vdp1vram_din(vram_din), .vdp1vram_rd(vram_rd), .vdp1vram_wr(vram_wr), .vdp1vram_blen(vram_blen), .vdp1vram_busy(vram_busy),
	.vdp1fb_addr(18'd0), .vdp1fb_dout(), .vdp1fb_din(16'd0), .vdp1fb_rd(1'b0), .vdp1fb_wr(2'b00), .vdp1fb_busy(),
	.cdbuf_addr(cdbuf_addr), .cdbuf_dout(cdbuf_dout), .cdbuf_rd(cdbuf_rd), .cdbuf_busy(cdbuf_busy),
	.cart_addr(cart_addr), .cart_dout(cart_dout), .cart_din(cart_din), .cart_rd(cart_rd), .cart_wr(cart_wr), .cart_busy(cart_busy),
	.bios_addr(bios_addr), .bios_din(bios_din), .bios_wr(bios_wr), .bios_busy(bios_busy),
	.bsram_addr(bsram_addr), .bsram_dout(bsram_dout), .bsram_din(bsram_din), .bsram_rd(bsram_rd), .bsram_wr(bsram_wr), .bsram_busy(bsram_busy),
	.ld_addr(ld_addr), .ld_data(ld_data), .ld_wr(ld_wr), .ld_busy(ld_busy),
	.cdbuf_waddr(cdbuf_waddr), .cdbuf_wdata(cdbuf_wdata), .cdbuf_wwr(cdbuf_wwr), .cdbuf_wbusy(cdbuf_wbusy)
);

// ---------------------------------------------------------------- two PSRAM chips
wire [31:0] m0_err, m0_rd, m0_wr, m0_bursts, m0_cel, m0_xrow, m1_err, m1_rd, m1_wr, m1_bursts, m1_cel, m1_xrow;
wire i0, i1;
psram_bench #(.INIT_US(INIT_US)) ps0 (
	.clk(clk), .reset(rst), .busy(p0_busy), .addr(p0_addr), .burstcnt(p0_burst), .rd(p0_rd), .we(p0_we), .din(p0_din), .be(p0_be),
	.dout(p0_dout), .dout_ready(p0_dout_ready), .idle(i0),
	.m_err(m0_err), .m_rd(m0_rd), .m_wr(m0_wr), .m_bursts(m0_bursts), .m_cel(m0_cel), .m_xrow(m0_xrow));
psram_bench #(.INIT_US(INIT_US)) ps1 (
	.clk(clk), .reset(rst), .busy(p1_busy), .addr(p1_addr), .burstcnt(p1_burst), .rd(p1_rd), .we(p1_we), .din(p1_din), .be(p1_be),
	.dout(p1_dout), .dout_ready(p1_dout_ready), .idle(i1),
	.m_err(m1_err), .m_rd(m1_rd), .m_wr(m1_wr), .m_bursts(m1_bursts), .m_cel(m1_cel), .m_xrow(m1_xrow));

