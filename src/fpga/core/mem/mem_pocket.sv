// mem_pocket.sv - the whole Saturn memory subsystem on the Pocket's chips.
//
//   SDRAM  64 MB  VDP2 VRAM A/B + SCSP RAM           sdram_pocket
//   PSRAM0 16 MB  BIOS, backup RAM, WRAM-L, WRAM-H, cartridge   psram_sync + ddram_pocket (chip A)
//   PSRAM1 16 MB  VDP1 VRAM, CD block DRAM, CD sector buffer, CD sector ring   psram_sync + ddram_pocket (chip B)
//   SRAM   256 KB VDP1 framebuffer 0 + the tail of framebuffer 1  sram_pocket + vdp1_fb_pocket
//   M10K          VDP1 framebuffer 1, columns 0-191               vdp1_fb_pocket
//
// Client ports are those the Saturn emu wrapper uses for sdram1 / ddram (names as in the submodules).
// All clk_ram logic assumes clk_ram = 2 x clk_sys, phase aligned. Tri-states for the pins belong in
// core_top: sdram_dq / sram_dq / cram*_dq = *_oe ? *_o : 16'bz.

`default_nettype none

module mem_pocket #(
	parameter int  INIT_US = 150,
	parameter int  CLK_KHZ = 114546,
	parameter bit  LD_LITTLE = 1'b1
) (
	input  wire        clk_ram,
	input  wire        clk_sys,
	input  wire        rst_ram,             // pulse after load / reset, as the Saturn rst_ram
	input  wire  [2:0] cap_sel,             // sdram_pocket read capture, latched while rst_ram (docs/memory.md section 3)

	// ---- SDRAM pins
	output wire [12:0] dram_a,
	output wire  [1:0] dram_ba,
	output wire [15:0] dram_dq_o,
	output wire        dram_dq_oe,
	input  wire [15:0] dram_dq_i,
	output wire  [1:0] dram_dqm,
	output wire        dram_clk,
	output wire        dram_cke,
	output wire        dram_ras_n,
	output wire        dram_cas_n,
	output wire        dram_we_n,

	// ---- PSRAM pins (chip 0 and 1)
	output wire [21:16] cram0_a,  output wire [15:0] cram0_dq_o,  output wire cram0_dq_oe,  input wire [15:0] cram0_dq_i,
	output wire cram0_clk, cram0_adv_n, cram0_cre, cram0_ce0_n, cram0_ce1_n, cram0_oe_n, cram0_we_n, cram0_ub_n, cram0_lb_n,
	output wire [21:16] cram1_a,  output wire [15:0] cram1_dq_o,  output wire cram1_dq_oe,  input wire [15:0] cram1_dq_i,
	output wire cram1_clk, cram1_adv_n, cram1_cre, cram1_ce0_n, cram1_ce1_n, cram1_oe_n, cram1_we_n, cram1_ub_n, cram1_lb_n,

	// ---- SRAM pins
	output wire [16:0] sram_a,
	output wire [15:0] sram_dq_o,
	output wire        sram_dq_oe,
	input  wire [15:0] sram_dq_i,
	output wire        sram_oe_n,
	output wire        sram_we_n,
	output wire        sram_ub_n,
	output wire        sram_lb_n,

	// ---- VDP2 VRAM and SCSP RAM (sdram1 ports)
	input  wire        sync,                // VDP2 DCE_R
	input  wire [17:1] addr_a0, input wire [16:1] addr_a1, input wire [63:0] din_a, input wire [7:0] wr_a, input wire rd_a,
	output wire [31:0] dout_a0, output wire [31:0] dout_a1,
	input  wire [17:1] addr_b0, input wire [16:1] addr_b1, input wire [63:0] din_b, input wire [7:0] wr_b, input wire rd_b,
	output wire [31:0] dout_b0, output wire [31:0] dout_b1,
	input  wire [19:1] ch2addr, input wire [15:0] ch2din, input wire [1:0] ch2wr, input wire ch2rd,
	output wire [15:0] ch2dout, output wire ch2rdy,

	// ---- CPU-side and VDP1/CD memories (ddram ports)
	input  wire [19:2] ramh_addr, output wire [31:0] ramh_dout, input wire [31:0] ramh_din, input wire ramh_rd, input wire [3:0] ramh_wr, output wire ramh_busy,
	input  wire [21:1] raml_addr, output wire [15:0] raml_dout, input wire [15:0] raml_din, input wire raml_rd, input wire [1:0] raml_wr, output wire raml_busy,
	input  wire [18:1] cdram_addr, output wire [15:0] cdram_dout, input wire [15:0] cdram_din, input wire cdram_rd, input wire [1:0] cdram_wr, output wire cdram_busy,
	input  wire [18:1] vdp1vram_addr, output wire [15:0] vdp1vram_dout, input wire [15:0] vdp1vram_din, input wire vdp1vram_rd, input wire [1:0] vdp1vram_wr, input wire [8:0] vdp1vram_blen, output wire vdp1vram_busy,
	input  wire [13:1] cdbuf_addr, output wire [15:0] cdbuf_dout, input wire cdbuf_rd, output wire cdbuf_busy,
	input  wire [25:1] cart_addr, output wire [15:0] cart_dout, input wire [15:0] cart_din, input wire cart_rd, input wire [1:0] cart_wr, output wire cart_busy,
	input  wire [20:1] bsram_addr, output wire [15:0] bsram_dout, input wire [15:0] bsram_din, input wire bsram_rd, input wire [1:0] bsram_wr, output wire bsram_busy,
	input  wire [13:1] cdbuf_waddr, input wire [15:0] cdbuf_wdata, input wire cdbuf_wwr, output wire cdbuf_wbusy,

	// ---- VDP1 framebuffers (VDP1.sv ports)
	input  wire        FB_MODE3,
	input  wire [17:1] FB0_A, input wire [15:0] FB0_D, input wire [1:0] FB0_WE, input wire FB0_RD, output wire [15:0] FB0_Q,
	input  wire [17:1] FB1_A, input wire [15:0] FB1_D, input wire [1:0] FB1_WE, input wire FB1_RD, output wire [15:0] FB1_Q,
	output wire        FB_RDY,

	// ---- CD sector ring in PSRAM1 (cd_stream, clk_sys domain; ddram_pocket handshakes)
	input  wire [12:0] ringw_addr, input wire [31:0] ringw_data, input wire ringw_wr, output wire ringw_busy,
	input  wire [13:0] ring_addr, output wire [15:0] ring_dout, input wire ring_rd, output wire ring_busy,

	// ---- bridge loader (clk_74a)
	input  wire        clk_74a,
	input  wire        ld_wr, input wire [2:0] ld_sel, input wire [23:0] ld_addr, input wire [31:0] ld_data,
	output wire        loading,

	output wire        mem_ready,           // SDRAM initialised and both PSRAM controllers idle (clk_ram)
	output wire        dbg_sdram_ready,
	output wire        dbg_psram_ready,
	output wire        dbg_ld_ovf,          // a loader word was dropped (FIFO full)
	output wire        dbg_chk_done,        // SDRAM self-check (POCKET_DEBUG_OVERLAY)
	output wire        dbg_chk_ok
);

// ---------------------------------------------------------------- SDRAM
wire [7:0] sd_scrub, sd_drop;
wire       sdram_ready, p0_idle, p1_idle;
assign dbg_sdram_ready = sdram_ready;
assign dbg_psram_ready = p0_idle & p1_idle;
assign mem_ready = sdram_ready & p0_idle & p1_idle & ~rst_ram;
sdram_pocket sdram (
	.clk(clk_ram), .init(rst_ram), .sync(sync), .cap_sel(cap_sel),
	.dram_a(dram_a), .dram_ba(dram_ba), .dram_dq_o(dram_dq_o), .dram_dq_oe(dram_dq_oe), .dram_dq_i(dram_dq_i), .dram_dqm(dram_dqm),
	.dram_cke(dram_cke), .dram_ras_n(dram_ras_n), .dram_cas_n(dram_cas_n), .dram_we_n(dram_we_n), .dram_clk(dram_clk),
	.addr_a0(addr_a0), .addr_a1(addr_a1), .din_a(din_a), .wr_a(wr_a), .rd_a(rd_a), .dout_a0(dout_a0), .dout_a1(dout_a1),
	.addr_b0(addr_b0), .addr_b1(addr_b1), .din_b(din_b), .wr_b(wr_b), .rd_b(rd_b), .dout_b0(dout_b0), .dout_b1(dout_b1),
	.ch2addr(ch2addr), .ch2din(ch2din), .ch2wr(ch2wr), .ch2rd(ch2rd), .ch2dout(ch2dout), .ch2rdy(ch2rdy),
	.init_done(sdram_ready), .chk_done(dbg_chk_done), .chk_ok(dbg_chk_ok), .dbg_scrub_wrap(sd_scrub), .dbg_scsp_drop(sd_drop)
);

// ---------------------------------------------------------------- PSRAM chips
wire        p0_busy, p0_rd, p0_we, p1_busy, p1_rd, p1_we;
wire [22:0] p0_addr, p1_addr;  wire [9:0] p0_cnt, p1_cnt;  wire [3:0] p0_be, p1_be;  wire [31:0] p0_din, p1_din;
wire [15:0] p0_rdata, p1_rdata;  wire p0_rvalid, p1_rvalid, p0_rlast, p1_rlast;

psram_sync #(.LATENCY(4), .CLK_KHZ(CLK_KHZ), .INIT_US(0), .CNT_W(5), .ALIGNED(1'b1)) psram0 (
	.clk(clk_ram), .reset(rst_ram), .init_go(sdram_ready), .busy(p0_busy), .addr(p0_addr), .cnt(p0_cnt), .rd(p0_rd), .we(p0_we), .din(p0_din), .be(p0_be),
	.rdata(p0_rdata), .rvalid(p0_rvalid), .rlast(p0_rlast), .idle(p0_idle),
	.cram_a(cram0_a), .cram_dq_out(cram0_dq_o), .cram_dq_oe(cram0_dq_oe), .cram_dq_in(cram0_dq_i), .cram_clk(cram0_clk),
	.cram_adv_n(cram0_adv_n), .cram_cre(cram0_cre), .cram_ce0_n(cram0_ce0_n), .cram_ce1_n(cram0_ce1_n),
	.cram_oe_n(cram0_oe_n), .cram_we_n(cram0_we_n), .cram_ub_n(cram0_ub_n), .cram_lb_n(cram0_lb_n));
psram_sync #(.LATENCY(4), .CLK_KHZ(CLK_KHZ), .INIT_US(0)) psram1 (
	.clk(clk_ram), .reset(rst_ram), .init_go(sdram_ready), .busy(p1_busy), .addr(p1_addr), .cnt(p1_cnt), .rd(p1_rd), .we(p1_we), .din(p1_din), .be(p1_be),
	.rdata(p1_rdata), .rvalid(p1_rvalid), .rlast(p1_rlast), .idle(p1_idle),
	.cram_a(cram1_a), .cram_dq_out(cram1_dq_o), .cram_dq_oe(cram1_dq_oe), .cram_dq_in(cram1_dq_i), .cram_clk(cram1_clk),
	.cram_adv_n(cram1_adv_n), .cram_cre(cram1_cre), .cram_ce0_n(cram1_ce0_n), .cram_ce1_n(cram1_ce1_n),
	.cram_oe_n(cram1_oe_n), .cram_we_n(cram1_we_n), .cram_ub_n(cram1_ub_n), .cram_lb_n(cram1_lb_n));

// ---------------------------------------------------------------- loader and client side
wire [23:2] l_addr; wire [31:0] l_data; wire l_wr, l_busy; wire [7:0] l_ovf;
assign dbg_ld_ovf = |l_ovf;
load_pocket #(.LD_LITTLE(LD_LITTLE)) loader (
	.clk_74a(clk_74a), .ld_wr(ld_wr), .ld_sel(ld_sel), .ld_addr(ld_addr), .ld_data(ld_data),
	.clk(clk_ram), .o_addr(l_addr), .o_data(l_data), .o_wr(l_wr), .o_busy(l_busy), .loading(loading), .dbg_overflow(l_ovf));

ddram_pocket ddram (
	.clk(clk_ram), .rst(rst_ram),
	.p0_busy(p0_busy), .p0_addr(p0_addr), .p0_cnt(p0_cnt), .p0_rd(p0_rd), .p0_we(p0_we), .p0_din(p0_din), .p0_be(p0_be), .p0_rdata(p0_rdata), .p0_rvalid(p0_rvalid), .p0_rlast(p0_rlast),
	.p1_busy(p1_busy), .p1_addr(p1_addr), .p1_cnt(p1_cnt), .p1_rd(p1_rd), .p1_we(p1_we), .p1_din(p1_din), .p1_be(p1_be), .p1_rdata(p1_rdata), .p1_rvalid(p1_rvalid), .p1_rlast(p1_rlast),
	.ramh_addr(ramh_addr), .ramh_dout(ramh_dout), .ramh_din(ramh_din), .ramh_rd(ramh_rd), .ramh_wr(ramh_wr), .ramh_busy(ramh_busy),
	.cdram_addr(cdram_addr), .cdram_dout(cdram_dout), .cdram_din(cdram_din), .cdram_rd(cdram_rd), .cdram_wr(cdram_wr), .cdram_busy(cdram_busy),
	.raml_addr(raml_addr), .raml_dout(raml_dout), .raml_din(raml_din), .raml_rd(raml_rd), .raml_wr(raml_wr), .raml_busy(raml_busy),
	.vdp1vram_addr(vdp1vram_addr), .vdp1vram_dout(vdp1vram_dout), .vdp1vram_din(vdp1vram_din), .vdp1vram_rd(vdp1vram_rd), .vdp1vram_wr(vdp1vram_wr), .vdp1vram_blen(vdp1vram_blen), .vdp1vram_busy(vdp1vram_busy),
	.vdp1fb_addr(18'd0), .vdp1fb_dout(), .vdp1fb_din(16'd0), .vdp1fb_rd(1'b0), .vdp1fb_wr(2'b00), .vdp1fb_busy(),
	.cdbuf_addr(cdbuf_addr), .cdbuf_dout(cdbuf_dout), .cdbuf_rd(cdbuf_rd), .cdbuf_busy(cdbuf_busy),
	.cart_addr(cart_addr), .cart_dout(cart_dout), .cart_din(cart_din), .cart_rd(cart_rd), .cart_wr(cart_wr), .cart_busy(cart_busy),
	.bios_addr(26'd0), .bios_din(16'd0), .bios_wr(2'b00), .bios_busy(),
	.bsram_addr(bsram_addr), .bsram_dout(bsram_dout), .bsram_din(bsram_din), .bsram_rd(bsram_rd), .bsram_wr(bsram_wr), .bsram_busy(bsram_busy),
	.ld_addr(l_addr), .ld_data(l_data), .ld_wr(l_wr), .ld_busy(l_busy),
	.cdbuf_waddr(cdbuf_waddr), .cdbuf_wdata(cdbuf_wdata), .cdbuf_wwr(cdbuf_wwr), .cdbuf_wbusy(cdbuf_wbusy),
	.ringw_addr(ringw_addr), .ringw_data(ringw_data), .ringw_wr(ringw_wr), .ringw_busy(ringw_busy),
	.ring_addr(ring_addr), .ring_dout(ring_dout), .ring_rd(ring_rd), .ring_busy(ring_busy));

// ---------------------------------------------------------------- SRAM, framebuffers
wire        fb_req, fb_we, fb_ready, fb_done;
wire [16:0] fb_a;  wire [15:0] fb_d, fb_q;  wire [1:0] fb_be;
wire  [7:0] fb_drop;

sram_pocket sram (
	.clk(clk_ram),
	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),
	.fb_req(fb_req), .fb_we(fb_we), .fb_a(fb_a), .fb_d(fb_d), .fb_be(fb_be), .fb_ready(fb_ready), .fb_q(fb_q), .fb_done(fb_done));

vdp1_fb_pocket fb (
	.clk_sys(clk_sys), .clk_ram(clk_ram), .rst(rst_ram), .FB_MODE3(FB_MODE3),
	.FB0_A(FB0_A), .FB0_D(FB0_D), .FB0_WE(FB0_WE), .FB0_RD(FB0_RD), .FB0_Q(FB0_Q),
	.FB1_A(FB1_A), .FB1_D(FB1_D), .FB1_WE(FB1_WE), .FB1_RD(FB1_RD), .FB1_Q(FB1_Q),
	.FB_RDY(FB_RDY), .dbg_drop(fb_drop),
	.sr_req(fb_req), .sr_we(fb_we), .sr_a(fb_a), .sr_d(fb_d), .sr_be(fb_be), .sr_ready(fb_ready), .sr_q(fb_q), .sr_done(fb_done));

endmodule

`default_nettype wire
