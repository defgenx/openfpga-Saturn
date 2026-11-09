// tb_load: bridge_loader-style words on clk_74a -> load_pocket -> a stand-in for the ddram_pocket
// loader port (busy for 26 clk_ram per write, as a PSRAM write takes). Checks the byte image in PSRAM0: the BIOS, the
// blank backup images (MiSTer's save_blank), the backup files over them, and the read-back requests.

`timescale 1ps/1ps

module tb_load;

reg clk_74a = 0, clk = 0;
always #6734 clk_74a = ~clk_74a;          // 74.25 MHz
always #4365 clk = ~clk;                  // 114.55 MHz

reg         ld_wr = 0;
reg   [2:0] ld_sel = 0;
reg  [23:0] ld_addr = 0;
reg  [31:0] ld_data = 0;
wire [23:2] o_addr, r_addr; wire [31:0] o_data; wire o_wr, r_rd, loading; wire [7:0] ovf;
reg         o_busy = 0;
reg         rd_t = 0, rd_cart = 0;
reg  [19:2] rd_off = 0;

load_pocket #(.LD_LITTLE(1)) dut (
	.clk_74a(clk_74a), .ld_wr(ld_wr), .ld_sel(ld_sel), .ld_addr(ld_addr), .ld_data(ld_data),
	.rd_t(rd_t), .rd_cart(rd_cart), .rd_off(rd_off),
	.clk(clk), .go(1'b1), .o_addr(o_addr), .o_data(o_data), .o_wr(o_wr), .o_busy(o_busy),
	.r_addr(r_addr), .r_rd(r_rd), .loading(loading), .dbg_overflow(ovf)
);
integer nrd = 0, rd_bad = 0;
reg [23:2] rd_exp;
reg [19:2] ro;
always @(posedge clk) if (r_rd) begin nrd = nrd + 1; if (r_addr !== rd_exp) rd_bad = rd_bad + 1; end

// the loader port of ddram_pocket: edge detect, busy until the write is done
reg [7:0] img [0:(1<<24)-1];
reg       wr_old = 0;
integer   bcnt = 0, nwr = 0;
reg [23:2] la; reg [31:0] ldat;
always @(posedge clk) begin
	wr_old <= o_wr;
	if (o_wr && !wr_old) begin la = o_addr; ldat = o_data; o_busy <= 1; bcnt = 26; nwr = nwr + 1;
		{img[{la, 2'b00}], img[{la, 2'b00} + 1], img[{la, 2'b00} + 2], img[{la, 2'b00} + 3]} <= ldat; end
	else if (bcnt > 0) begin bcnt = bcnt - 1; if (bcnt == 0) o_busy <= 0; end
end

// file contents
reg [7:0] f_bios [0:4095], f_bk [0:1023], f_bc [0:1023], f_rom [0:1023];
integer i, bad = 0, w;

task automatic bridge_word(input [2:0] sel, input [23:0] a, input [31:0] d);
	begin
		@(posedge clk_74a);
		ld_wr <= 1; ld_sel <= sel; ld_addr <= a; ld_data <= d;
		@(posedge clk_74a);
		ld_wr <= 0;
		repeat (31) @(posedge clk_74a);            // one 32 bit bridge word is at least 32 clk_74a
	end
endtask

function automatic [7:0] blank_byte(input integer k);      // MiSTer's save_blank, k < 64 KB
	string h;
	h = "BackUpRam Format";
	blank_byte = (k < 128 && (k & 1)) ? h[(k >> 1) & 15] : 8'h00;
endfunction

initial begin
	for (i = 0; i < 4096; i = i + 1) f_bios[i] = $urandom;
	for (i = 0; i < 1024; i = i + 1) begin f_bk[i] = $urandom; f_bc[i] = $urandom; f_rom[i] = $urandom; end
	repeat (10) @(posedge clk_74a);
	for (i = 0; i < 4096; i = i + 4) bridge_word(3'b001, i, {f_bios[i+3], f_bios[i+2], f_bios[i+1], f_bios[i]});
	// the blank (16 K + 256 K writes) runs while the FIFO is empty; the host pushes the backup files after the BIOS
	while (loading) @(posedge clk);
	for (i = 0; i < 65536; i = i + 1) if (img[24'h100000 + i] !== blank_byte(i)) begin bad = bad + 1; if (bad < 8) $display("blank backup byte %0d: %h", i, img[24'h100000 + i]); end
	for (i = 0; i < 1048576; i = i + 1) if (img[24'h800000 + i] !== (i < 65536 ? blank_byte(i) : 8'h00)) begin bad = bad + 1; if (bad < 8) $display("blank cart byte %0d: %h", i, img[24'h800000 + i]); end
	for (i = 0; i < 1024; i = i + 4) bridge_word(3'b010, i, {f_bk[i+3], f_bk[i+2], f_bk[i+1], f_bk[i]});
	for (i = 0; i < 1024; i = i + 4) bridge_word(3'b100, i, {f_bc[i+3], f_bc[i+2], f_bc[i+1], f_bc[i]});
	// ROM cart (bridge 0x7xxxxxxx, same cart window): the last 1 KB of the 2 MB window, above the backup cart's 1 MB
	for (i = 0; i < 1024; i = i + 4) bridge_word(3'b100, 24'h1FF000 + i, {f_rom[i+3], f_rom[i+2], f_rom[i+1], f_rom[i]});
	repeat (200) @(posedge clk_74a);
	while (loading) @(posedge clk);
	repeat (50) @(posedge clk);
	for (i = 0; i < 4096; i = i + 1) if (img[i] !== f_bios[i]) begin bad = bad + 1; if (bad < 8) $display("BIOS byte %0d: %h exp %h", i, img[i], f_bios[i]); end
	for (i = 0; i < 2048; i = i + 1) begin
		if (img[24'h100000 + i] !== (i < 1024 ? f_bk[i] : blank_byte(i))) begin bad = bad + 1; if (bad < 8) $display("backup byte %0d: %h", i, img[24'h100000 + i]); end
		if (img[24'h800000 + i] !== (i < 1024 ? f_bc[i] : blank_byte(i))) begin bad = bad + 1; if (bad < 8) $display("backup cart byte %0d: %h", i, img[24'h800000 + i]); end
	end
	for (i = 0; i < 1024; i = i + 1) if (img[24'h9FF000 + i] !== f_rom[i]) begin bad = bad + 1; if (bad < 8) $display("ROM cart byte %0d: %h exp %h", i, img[24'h9FF000 + i], f_rom[i]); end
	// read-back: one ddram read request per bridge read, at the slot's PSRAM0 address
	for (i = 0; i < 8; i = i + 1) begin
		@(posedge clk_74a);
		ro = i[0] ? 18'h3FFFF - i : 18'h00FFF + i;
		rd_cart <= i[0]; rd_off <= ro;
		rd_exp  = i[0] ? {4'h8, ro} : {8'h10, ro[15:2]};
		rd_t <= ~rd_t;
		repeat (60) @(posedge clk_74a);
	end
	$display("tb_load: %0d loader writes, FIFO overflows %0d, mismatches %0d, read requests %0d (%0d bad)", nwr, ovf, bad, nrd, rd_bad);
	if (bad == 0 && ovf == 0 && nwr == 1024 + 256 + 256 + 256 + 16384 + 262144 && nrd == 8 && rd_bad == 0) $display("tb_load: PASS"); else $display("tb_load: FAIL");
	$finish;
end

endmodule
