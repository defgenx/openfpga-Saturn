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
reg rst = 0;

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


// ---------------------------------------------------------------- bookkeeping
integer cyc = 0;
always @(posedge clk) cyc <= cyc + 1;
integer errs = 0;

// shadows
reg [7:0]  sh_ramh [0:(1<<20)-1];  reg sv_ramh [0:(1<<20)-1];
reg [15:0] sh_raml [0:(1<<22)-1];  reg sv_raml [0:(1<<22)-1];       // raml_addr[21:1] words
reg [15:0] sh_vram [0:(1<<18)-1];  reg sv_vram [0:(1<<18)-1];
reg [15:0] sh_cdr  [0:(1<<18)-1];  reg sv_cdr  [0:(1<<18)-1];
reg [15:0] sh_cdb  [0:(1<<13)-1];  reg sv_cdb  [0:(1<<13)-1];
reg [15:0] sh_cart [0:(1<<22)-1];  reg sv_cart [0:(1<<22)-1];
reg [15:0] sh_bsr  [0:(1<<16)-1];  reg sv_bsr  [0:(1<<16)-1];
integer ii;
initial begin
	for (ii = 0; ii < (1<<20); ii = ii + 1) sv_ramh[ii] = 0;
	for (ii = 0; ii < (1<<22); ii = ii + 1) begin sv_raml[ii] = 0; sv_cart[ii] = 0; end
	for (ii = 0; ii < (1<<18); ii = ii + 1) begin sv_vram[ii] = 0; sv_cdr[ii] = 0; end
	for (ii = 0; ii < (1<<13); ii = ii + 1) sv_cdb[ii] = 0;
	for (ii = 0; ii < (1<<16); ii = ii + 1) sv_bsr[ii] = 0;
end

// WRAM-H read latency statistics, clk_ram cycles
integer hl_n [0:1], hl_sum [0:1], hl_min [0:1], hl_max [0:1];
integer phase = 0;
initial begin for (ii = 0; ii < 2; ii = ii + 1) begin hl_n[ii] = 0; hl_sum[ii] = 0; hl_min[ii] = 99999; hl_max[ii] = 0; end end

// ---------------------------------------------------------------- CPU side tasks (SH-2 bus: level request, wait for busy low)
task automatic ramh_read(input [19:2] a);
	reg [31:0] d, e; integer t0, b;
	begin
		@(posedge clk);
		ramh_addr <= a; ramh_rd <= 1'b1; t0 = cyc;
		repeat (2) @(posedge clk);
		while (ramh_busy) @(posedge clk);
		while (cyc - t0 < 4) @(posedge clk);          // one bus cycle at 28.6 MHz: the hit path has no busy
		d = ramh_dout;
		ramh_rd <= 1'b0;
		for (b = 0; b < 4; b = b + 1)
			if (sv_ramh[{a, 2'b00} + b] && d[8*b +: 8] !== sh_ramh[{a, 2'b00} + b]) begin
				errs = errs + 1; if (errs < 10) $display("%0t ramh read %h: got %h byte %0d exp %h", $time, a, d, b, sh_ramh[{a, 2'b00} + b]);
			end
		if (a[19:12] != 0 && cyc - t0 > 12) begin      // a line fill (a hit answers within one bus cycle)
			hl_n[phase] = hl_n[phase] + 1; hl_sum[phase] = hl_sum[phase] + (cyc - t0);
			if (cyc - t0 < hl_min[phase]) hl_min[phase] = cyc - t0;
			if (cyc - t0 > hl_max[phase]) hl_max[phase] = cyc - t0;
		end
		@(posedge clk);
	end
endtask

task automatic ramh_write(input [19:2] a, input [31:0] d, input [3:0] be);
	integer b;
	begin
		@(posedge clk);
		while (ramh_busy) @(posedge clk);
		ramh_addr <= a; ramh_din <= d; ramh_wr <= be;
		@(posedge clk);
		ramh_wr <= 4'b0000;
		for (b = 0; b < 4; b = b + 1) if (be[b]) begin sh_ramh[{a, 2'b00} + b] = d[8*b +: 8]; sv_ramh[{a, 2'b00} + b] = 1; end
		@(posedge clk);
	end
endtask

task automatic raml_read(input [21:1] a);
	begin
		@(posedge clk);
		raml_addr <= a; raml_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (raml_busy) @(posedge clk);
		raml_rd <= 1'b0;
		if (sv_raml[a] && raml_dout !== sh_raml[a]) begin errs = errs + 1; if (errs < 10) $display("%0t raml read %h: got %h exp %h", $time, a, raml_dout, sh_raml[a]); end
		@(posedge clk);
	end
endtask
task automatic raml_write(input [21:1] a, input [15:0] d, input [1:0] be);
	begin
		@(posedge clk);
		while (raml_busy) @(posedge clk);
		raml_addr <= a; raml_din <= d; raml_wr <= be;
		@(posedge clk);
		raml_wr <= 2'b00;
		if (be[0]) sh_raml[a][7:0] = d[7:0]; if (be[1]) sh_raml[a][15:8] = d[15:8];
		if (sv_raml[a] || be == 2'b11) sv_raml[a] = 1;
		@(posedge clk);
	end
endtask
task automatic bios_load(input [18:1] a, input [15:0] d);
	begin
		@(posedge clk);
		while (bios_busy) @(posedge clk);
		bios_addr <= {8'b0, a}; bios_din <= d; bios_wr <= 2'b11;
		@(posedge clk); bios_wr <= 2'b00;
		sh_raml[{3'b000, a}] = d; sv_raml[{3'b000, a}] = 1;
		@(posedge clk);
	end
endtask
task automatic bsram_write(input [20:1] a, input [15:0] d);
	begin
		@(posedge clk); while (bsram_busy) @(posedge clk);
		bsram_addr <= a; bsram_din <= d; bsram_wr <= 2'b11;
		@(posedge clk); bsram_wr <= 2'b00; sh_bsr[a[16:1]] = d; sv_bsr[a[16:1]] = 1;
		@(posedge clk);
	end
endtask
task automatic bsram_read(input [20:1] a);
	begin
		@(posedge clk); bsram_addr <= a; bsram_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (bsram_busy) @(posedge clk);
		bsram_rd <= 1'b0;
		if (sv_bsr[a[16:1]] && bsram_dout !== sh_bsr[a[16:1]]) begin errs = errs + 1; if (errs < 10) $display("%0t bsram read %h got %h exp %h", $time, a, bsram_dout, sh_bsr[a[16:1]]); end
		@(posedge clk);
	end
endtask
task automatic cart_write(input [22:1] a, input [15:0] d);
	begin
		@(posedge clk); while (cart_busy) @(posedge clk);
		cart_addr <= {3'b000, a}; cart_din <= d; cart_wr <= 2'b11;
		@(posedge clk); cart_wr <= 2'b00; sh_cart[a] = d; sv_cart[a] = 1;
		@(posedge clk);
	end
endtask
task automatic cart_read(input [22:1] a);
	begin
		@(posedge clk); cart_addr <= {3'b000, a}; cart_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (cart_busy) @(posedge clk);
		cart_rd <= 1'b0;
		if (sv_cart[a] && cart_dout !== sh_cart[a]) begin errs = errs + 1; if (errs < 10) $display("%0t cart read %h got %h exp %h", $time, a, cart_dout, sh_cart[a]); end
		@(posedge clk);
	end
endtask

// ---------------------------------------------------------------- VDP1 / CD side tasks
task automatic vram_write(input [18:1] a, input [15:0] d);
	begin
		@(posedge clk); while (vram_busy) @(posedge clk);
		vram_addr <= a; vram_din <= d; vram_wr <= 2'b11;
		@(posedge clk); vram_wr <= 2'b00; sh_vram[a] = d; sv_vram[a] = 1;
		@(posedge clk);
	end
endtask
task automatic vram_read(input [18:1] a);
	begin
		@(posedge clk); vram_addr <= a; vram_blen <= 9'd0; vram_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (vram_busy) @(posedge clk);
		vram_rd <= 1'b0;
		if (sv_vram[a] && vram_dout !== sh_vram[a]) begin errs = errs + 1; if (errs < 10) $display("%0t vram read %h got %h exp %h", $time, a, vram_dout, sh_vram[a]); end
		@(posedge clk);
	end
endtask
// a texture burst: one request with blen words, then single cycle reads inside the burst
task automatic vram_burst(input [18:1] a, input [8:0] n);
	integer k;
	begin
		@(posedge clk); vram_addr <= a; vram_blen <= n; vram_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (vram_busy) @(posedge clk);
		vram_rd <= 1'b0;
		for (k = 0; k < n; k = k + 1) begin
			@(posedge clk); vram_addr <= a + k; vram_blen <= 9'd0; vram_rd <= 1'b1;
			@(posedge clk); vram_rd <= 1'b0;
			repeat (2) @(posedge clk);
			while (vram_busy) @(posedge clk);
			if (sv_vram[a + k] && vram_dout !== sh_vram[a + k]) begin errs = errs + 1; if (errs < 10) $display("%0t vram burst %h+%0d got %h exp %h", $time, a, k, vram_dout, sh_vram[a + k]); end
		end
		@(posedge clk);
	end
endtask
task automatic cdr_write(input [18:1] a, input [15:0] d);
	begin
		@(posedge clk); while (cdram_busy) @(posedge clk);
		cdram_addr <= a; cdram_din <= d; cdram_wr <= 2'b11;
		@(posedge clk); cdram_wr <= 2'b00; sh_cdr[a] = d; sv_cdr[a] = 1;
		@(posedge clk);
	end
endtask
task automatic cdr_read(input [18:1] a);
	begin
		@(posedge clk); cdram_addr <= a; cdram_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (cdram_busy) @(posedge clk);
		cdram_rd <= 1'b0;
		if (sv_cdr[a] && cdram_dout !== sh_cdr[a]) begin errs = errs + 1; if (errs < 10) $display("%0t cdram read %h got %h exp %h", $time, a, cdram_dout, sh_cdr[a]); end
		@(posedge clk);
	end
endtask
task automatic cdb_write(input [13:1] a, input [15:0] d);
	begin
		@(posedge clk); while (cdbuf_wbusy) @(posedge clk);
		cdbuf_waddr <= a; cdbuf_wdata <= d; cdbuf_wwr <= 1'b1;
		@(posedge clk); cdbuf_wwr <= 1'b0; sh_cdb[a] = d; sv_cdb[a] = 1;
		@(posedge clk);
	end
endtask
task automatic cdb_read(input [13:1] a);
	begin
		@(posedge clk); cdbuf_addr <= a; cdbuf_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (cdbuf_busy) @(posedge clk);
		cdbuf_rd <= 1'b0;
		if (sv_cdb[a] && cdbuf_dout !== sh_cdb[a]) begin errs = errs + 1; if (errs < 10) $display("%0t cdbuf read %h got %h exp %h", $time, a, cdbuf_dout, sh_cdb[a]); end
		@(posedge clk);
	end
endtask

// loader: 32 bit writes into the cartridge window (PSRAM0 byte 0x500000 +), the bridge's bursty word stream

// ---------------------------------------------------------------- stimulus
integer n_ops = 400, nq = 200, k, r;
integer kc, kv, kd, kl, rc, rv, rd, rl;
reg [19:2] ra, rac;
initial if (!$value$plusargs("N=%d", n_ops)) n_ops = 400;
integer done_cpu = 0, done_vdp = 0, done_cd = 0, done_ld = 0;
integer ldbase;

initial begin
	repeat (3) @(posedge clk);
	rst <= 1'b1;                                  // a pulse, as rst_ram is in the Saturn
	repeat (8) @(posedge clk);
	rst <= 1'b0;
	repeat (INIT_US * 115 + 3000) @(posedge clk);

	// BIOS load, then quiet-phase WRAM-H measurement
	for (k = 0; k < 2048; k = k + 1) bios_load(k, $urandom);
	for (k = 0; k < 4096; k = k + 1) ramh_write(k, $urandom, 4'hF);
	repeat (4000) @(posedge clk);                       // let the posted writes drain
	phase = 0;
	for (k = 0; k < nq; k = k + 1) begin
		ra = 18'h400 + ($urandom % 380) * 8;                // a cold line (4 lines of cache): miss, then the other word: hit
		ramh_read(ra);
		ramh_read({ra[19:3], ~ra[2]});
	end
	phase = 1;
	fork
		// CPU: WRAM-H mix, WRAM-L/BIOS/backup/cart
		begin
			for (kc = 0; kc < n_ops; kc = kc + 1) begin
				rc = $urandom % 10;
				rac = 18'h400 + ($urandom % 4000);
				case (rc)
					0, 1, 2: ramh_write(rac, $urandom, $urandom % 15 + 1);
					3, 4, 5, 6: ramh_read(rac);
					7: begin raml_write(21'h100000 | ($urandom % 4096) , $urandom, 2'b11); raml_read(21'h100000 | ($urandom % 4096)); end
					8: begin raml_read(($urandom % 2048)); bsram_write($urandom % 4096, $urandom); bsram_read($urandom % 4096); end
					default: begin cart_write($urandom % 8192, $urandom); cart_read($urandom % 8192); end
				endcase
			end
			done_cpu = 1;
		end
		// VDP1: VRAM
		begin
			for (kv = 0; kv < n_ops; kv = kv + 1) begin
				rv = $urandom % 8;
				if (rv < 3) vram_write($urandom % 65536, $urandom);
				else if (rv < 6) vram_read($urandom % 65536);
				else vram_burst(($urandom % 1024) * 8, 8 + ($urandom % 24));
			end
			done_vdp = 1;
		end
		// CD: CD RAM and sector buffer
		begin
			for (kd = 0; kd < n_ops; kd = kd + 1) begin
				rd = $urandom % 6;
				if (rd == 0) cdr_write($urandom % 65536, $urandom);
				else if (rd == 1) cdr_read($urandom % 65536);
				else if (rd == 2) cdb_write($urandom % 8192, $urandom);
				else if (rd == 3) cdb_read($urandom % 8192);
				else cdr_read($urandom % 65536);
			end
			done_cd = 1;
		end
		// loader: 32 bit writes into the cartridge window upper half at the bridge pace
		begin
			ldbase = 22'h100000;                                // PSRAM0 byte 0x500000 = cart window + 0x100000
			for (kl = 0; kl < n_ops * 4; kl = kl + 1) begin
				@(posedge clk); while (ld_busy) @(posedge clk);
				ld_addr <= (24'h500000 >> 2) + kl; ld_data <= {16'hA000 + kl[15:0], 16'h5000 + kl[15:0]}; ld_wr <= 1'b1;
				@(posedge clk); ld_wr <= 1'b0;
				repeat (30) @(posedge clk);                    // a bridge word every ~430 ns
			end
			done_ld = 1;
		end
	join
	// loader readback through the cart channel
	for (k = 0; k < n_ops * 4; k = k + 7) begin
		@(posedge clk); cart_addr <= {3'b000, 22'h080000 + 22'(2 * k) + 22'h0}; cart_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (cart_busy) @(posedge clk);
		cart_rd <= 1'b0;
		if (cart_dout !== 16'hA000 + k[15:0]) begin errs = errs + 1; if (errs < 10) $display("loader readback %0d: got %h exp %h", k, cart_dout, 16'hA000 + k[15:0]); end
		@(posedge clk);
		cart_addr <= {3'b000, 22'h080000 + 22'(2 * k) + 22'h1}; cart_rd <= 1'b1;
		repeat (2) @(posedge clk);
		while (cart_busy) @(posedge clk);
		cart_rd <= 1'b0;
		if (cart_dout !== 16'h5000 + k[15:0]) begin errs = errs + 1; if (errs < 10) $display("loader readback %0d lo: got %h exp %h", k, cart_dout, 16'h5000 + k[15:0]); end
		@(posedge clk);
	end
	repeat (200) @(posedge clk);
	$display("tb_ddram: WRAM-H line fill latency, PSRAM0 otherwise idle: %0d fills, %0d..%0d clk_ram cycles, mean %0d (%0d..%0d ns, mean %0d ns)",
	         hl_n[0], hl_min[0], hl_max[0], hl_sum[0] / hl_n[0], hl_min[0] * 8730 / 1000, hl_max[0] * 8730 / 1000, hl_sum[0] / hl_n[0] * 8730 / 1000);
	$display("tb_ddram: WRAM-H read line fill latency with the CPU mix, VDP1, CD and loader running: %0d fills, %0d..%0d cycles, mean %0d (%0d..%0d ns, mean %0d ns)",
	         hl_n[1], hl_min[1], hl_max[1], hl_sum[1] / hl_n[1], hl_min[1] * 8730 / 1000, hl_max[1] * 8730 / 1000, hl_sum[1] / hl_n[1] * 8730 / 1000);
	$display("tb_ddram: PSRAM0 %0d bursts %0d words read %0d written, CE# low max %0d ns; PSRAM1 %0d bursts %0d read %0d written",
	         m0_bursts, m0_rd, m0_wr, m0_cel / 1000, m1_bursts, m1_rd, m1_wr);
	$display("tb_ddram: data errors %0d, PSRAM model errors %0d / %0d", errs, m0_err, m1_err);
	if (errs == 0 && m0_err == 0 && m1_err == 0) $display("tb_ddram: PASS"); else $display("tb_ddram: FAIL");
	$finish;
end

endmodule
