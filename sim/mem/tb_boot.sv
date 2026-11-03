// tb_boot: the BIOS load as the Pocket does it. `reset` is high (power-up, then BIOS not loaded) for
// the whole load; ram_reset -> load_pocket -> ddram_pocket -> psram -> model, then the SH-2 side reads
// the image back through raml (big endian words, LD_LITTLE = 0 as core_top). +OLD uses the previous
// rst_ram (held while reset is high), which must lose the BIOS.
//
//   BIOS word 0x00 reads {file[0], file[1]}: the reset vector at address 0 comes out as written.

`timescale 1ps/1ps

module tb_boot;

localparam integer T_RAM = 8730;
localparam integer NBYTES = 4096;           // 1024 bridge words, four times the 256 entry FIFO

reg clk = 0, clk_sys = 0, clk_74a = 0;
always #(T_RAM/2) clk = ~clk;
always #(T_RAM)   clk_sys = ~clk_sys;      // clk_ram = 2 x clk_sys
always #6734      clk_74a = ~clk_74a;

reg  reset = 0;                              // power-up: low until clk_sys runs, then high until BIOS loaded
wire loading, rst_new, download;
reg  old_mode = 0;
reg  rst_old = 0;
always @(posedge clk_sys) rst_old <= reset;
wire rst_ram = old_mode ? rst_old : rst_new;

ram_reset rr (.clk(clk_sys), .reset(reset), .loading(loading), .rst_ram(rst_new), .download(download));

reg         ld_wr = 0;
reg   [2:0] ld_sel = 0;
reg  [23:0] ld_addr = 0;
reg  [31:0] ld_data = 0;
wire [23:2] l_addr; wire [31:0] l_data; wire l_wr, l_busy; wire [7:0] ovf;
load_pocket #(.LD_LITTLE(1'b0)) ldr (
	.clk_74a(clk_74a), .ld_wr(ld_wr), .ld_sel(ld_sel), .ld_addr(ld_addr), .ld_data(ld_data),
	.clk(clk), .o_addr(l_addr), .o_data(l_data), .o_wr(l_wr), .o_busy(l_busy), .loading(loading), .dbg_overflow(ovf));

reg  [21:1] raml_addr = 0;  wire [15:0] raml_dout;  reg raml_rd = 0;  wire raml_busy;
wire p0_busy, p0_rd, p0_we, p0_rlast, p0_rvalid, p1_busy, p1_rd, p1_we, p1_rlast, p1_rvalid;
wire [22:0] p0_addr, p1_addr;  wire [9:0] p0_cnt, p1_cnt;  wire [3:0] p0_be, p1_be;  wire [31:0] p0_din, p1_din;
wire [15:0] p0_rdata, p1_rdata;
wire [31:0] m0_err, m0_rd, m0_wr, m0_bursts, m0_cel, m0_xrow, m1_err, m1_rd, m1_wr, m1_bursts, m1_cel, m1_xrow;
wire i0, i1;

ddram_pocket dut (
	.clk(clk), .rst(rst_ram),
	.p0_busy(p0_busy), .p0_addr(p0_addr), .p0_cnt(p0_cnt), .p0_rd(p0_rd), .p0_we(p0_we), .p0_din(p0_din), .p0_be(p0_be), .p0_rdata(p0_rdata), .p0_rvalid(p0_rvalid), .p0_rlast(p0_rlast),
	.p1_busy(p1_busy), .p1_addr(p1_addr), .p1_cnt(p1_cnt), .p1_rd(p1_rd), .p1_we(p1_we), .p1_din(p1_din), .p1_be(p1_be), .p1_rdata(p1_rdata), .p1_rvalid(p1_rvalid), .p1_rlast(p1_rlast),
	.ramh_addr(18'd0), .ramh_dout(), .ramh_din(32'd0), .ramh_rd(1'b0), .ramh_wr(4'b0), .ramh_busy(),
	.cdram_addr(18'd0), .cdram_dout(), .cdram_din(16'd0), .cdram_rd(1'b0), .cdram_wr(2'b0), .cdram_busy(),
	.raml_addr(raml_addr), .raml_dout(raml_dout), .raml_din(16'd0), .raml_rd(raml_rd), .raml_wr(2'b0), .raml_busy(raml_busy),
	.vdp1vram_addr(18'd0), .vdp1vram_dout(), .vdp1vram_din(16'd0), .vdp1vram_rd(1'b0), .vdp1vram_wr(2'b0), .vdp1vram_blen(9'd0), .vdp1vram_busy(),
	.vdp1fb_addr(18'd0), .vdp1fb_dout(), .vdp1fb_din(16'd0), .vdp1fb_rd(1'b0), .vdp1fb_wr(2'b00), .vdp1fb_busy(),
	.cdbuf_addr(13'd0), .cdbuf_dout(), .cdbuf_rd(1'b0), .cdbuf_busy(),
	.cart_addr(25'd0), .cart_dout(), .cart_din(16'd0), .cart_rd(1'b0), .cart_wr(2'b0), .cart_busy(),
	.bios_addr(26'd0), .bios_din(16'd0), .bios_wr(2'b00), .bios_busy(),
	.bsram_addr(20'd0), .bsram_dout(), .bsram_din(16'd0), .bsram_rd(1'b0), .bsram_wr(2'b0), .bsram_busy(),
	.ld_addr(l_addr), .ld_data(l_data), .ld_wr(l_wr), .ld_busy(l_busy),
	.cdbuf_waddr(13'd0), .cdbuf_wdata(16'd0), .cdbuf_wwr(1'b0), .cdbuf_wbusy(),
	.ringw_addr(13'd0), .ringw_data(32'd0), .ringw_wr(1'b0), .ringw_busy(),
	.ring_addr(14'd0), .ring_dout(), .ring_rd(1'b0), .ring_busy()
);

psram_bench #(.INIT_US(20), .CNT_W(5), .ALIGNED(1'b1)) ps0 (
	.clk(clk), .reset(rst_ram), .busy(p0_busy), .addr(p0_addr), .cnt(p0_cnt), .rd(p0_rd), .we(p0_we), .din(p0_din), .be(p0_be),
	.rdata(p0_rdata), .rvalid(p0_rvalid), .rlast(p0_rlast), .idle(i0),
	.m_err(m0_err), .m_rd(m0_rd), .m_wr(m0_wr), .m_bursts(m0_bursts), .m_cel(m0_cel), .m_xrow(m0_xrow));
psram_bench #(.INIT_US(20)) ps1 (
	.clk(clk), .reset(rst_ram), .busy(p1_busy), .addr(p1_addr), .cnt(p1_cnt), .rd(p1_rd), .we(p1_we), .din(p1_din), .be(p1_be),
	.rdata(p1_rdata), .rvalid(p1_rvalid), .rlast(p1_rlast), .idle(i1),
	.m_err(m1_err), .m_rd(m1_rd), .m_wr(m1_wr), .m_bursts(m1_bursts), .m_cel(m1_cel), .m_xrow(m1_xrow));

reg [7:0] f_bios [0:NBYTES-1];
integer i, bad = 0, rst_cycles = 0, rst_max = 0;

// longest run of rst_ram high
always @(posedge clk_sys) begin
	if (rst_ram) begin rst_cycles = rst_cycles + 1; if (rst_cycles > rst_max) rst_max = rst_cycles; end
	else rst_cycles = 0;
end

task automatic bridge_word(input [23:0] a, input [31:0] d);
	begin
		@(posedge clk_74a);
		ld_wr <= 1; ld_sel <= 3'b001; ld_addr <= a; ld_data <= d;
		@(posedge clk_74a);
		ld_wr <= 0;
		repeat (31) @(posedge clk_74a);       // one 32 bit bridge word is at least 32 clk_74a
	end
endtask

task automatic raml_read(input [21:1] a);
	begin
		@(posedge clk);
		raml_addr <= a; raml_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (raml_busy) @(posedge clk);
		raml_rd <= 1'b0;
		@(posedge clk);
	end
endtask

initial begin
	if ($test$plusargs("OLD")) old_mode = 1;
	for (i = 0; i < NBYTES; i = i + 1) f_bios[i] = $urandom;
	repeat (4) @(posedge clk_sys);
	reset = 1;                                 // host reset / BIOS not loaded
	#(40_000_000);                             // 40 us: the RAM init finished (setup is reported after it)
	for (i = 0; i < NBYTES; i = i + 4) bridge_word(i, {f_bios[i], f_bios[i+1], f_bios[i+2], f_bios[i+3]});
	repeat (200) @(posedge clk_74a);
	reset = 0;                                 // all slots complete
	#(60_000_000);
	for (i = 0; i < NBYTES / 2; i = i + 1) begin
		raml_read(i);
		if (raml_dout !== {f_bios[2*i], f_bios[2*i+1]}) begin
			bad = bad + 1;
			if (bad < 6) $display("word %0d: got %h exp %h", i, raml_dout, {f_bios[2*i], f_bios[2*i+1]});
		end
	end
	$display("tb_boot%s: FIFO overflows %0d, rst_ram longest run %0d clk_sys, BIOS word mismatches %0d of %0d",
	         old_mode ? " (OLD)" : "", ovf, rst_max, bad, NBYTES / 2);
	if (old_mode) begin if (bad != 0) $display("tb_boot OLD: BIOS lost as expected"); else $display("tb_boot OLD: UNEXPECTED PASS"); end
	else begin if (bad == 0 && ovf == 0 && rst_max < 300) $display("tb_boot: PASS"); else $display("tb_boot: FAIL"); end
	$finish;
end

initial begin #(2_000_000_000); $display("tb_boot: TIMEOUT"); $finish; end

endmodule
