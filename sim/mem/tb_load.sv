// tb_load: bridge_loader-style words on clk_74a -> load_pocket -> a stand-in for the ddram_pocket
// loader port (busy for 26 clk_ram per write, as a PSRAM write takes). Checks the byte image in PSRAM0.

`timescale 1ps/1ps

module tb_load;

reg clk_74a = 0, clk = 0;
always #6734 clk_74a = ~clk_74a;          // 74.25 MHz
always #4365 clk = ~clk;                  // 114.55 MHz

reg         ld_wr = 0;
reg   [2:0] ld_sel = 0;
reg  [23:0] ld_addr = 0;
reg  [31:0] ld_data = 0;
wire [23:2] o_addr; wire [31:0] o_data; wire o_wr, loading; wire [7:0] ovf;
reg         o_busy = 0;

load_pocket #(.LD_LITTLE(1)) dut (
	.clk_74a(clk_74a), .ld_wr(ld_wr), .ld_sel(ld_sel), .ld_addr(ld_addr), .ld_data(ld_data),
	.clk(clk), .o_addr(o_addr), .o_data(o_data), .o_wr(o_wr), .o_busy(o_busy), .loading(loading), .dbg_overflow(ovf)
);

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
reg [7:0] f_bios [0:4095], f_bk [0:1023], f_bc [0:1023];
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

initial begin
	for (i = 0; i < 4096; i = i + 1) f_bios[i] = $urandom;
	for (i = 0; i < 1024; i = i + 1) begin f_bk[i] = $urandom; f_bc[i] = $urandom; end
	repeat (10) @(posedge clk_74a);
	for (i = 0; i < 4096; i = i + 4) bridge_word(3'b001, i, {f_bios[i+3], f_bios[i+2], f_bios[i+1], f_bios[i]});
	for (i = 0; i < 1024; i = i + 4) bridge_word(3'b010, i, {f_bk[i+3], f_bk[i+2], f_bk[i+1], f_bk[i]});
	for (i = 0; i < 1024; i = i + 4) bridge_word(3'b100, i, {f_bc[i+3], f_bc[i+2], f_bc[i+1], f_bc[i]});
	repeat (200) @(posedge clk_74a);
	while (loading) @(posedge clk);
	repeat (50) @(posedge clk);
	for (i = 0; i < 4096; i = i + 1) if (img[i] !== f_bios[i]) begin bad = bad + 1; if (bad < 8) $display("BIOS byte %0d: %h exp %h", i, img[i], f_bios[i]); end
	for (i = 0; i < 1024; i = i + 1) begin
		if (img[24'h100000 + 2*i] !== 8'hFF || img[24'h100000 + 2*i + 1] !== f_bk[i]) begin bad = bad + 1; if (bad < 8) $display("backup byte %0d: %h%h exp FF%h", i, img[24'h100000 + 2*i], img[24'h100000 + 2*i + 1], f_bk[i]); end
		if (img[24'h400000 + 2*i] !== 8'hFF || img[24'h400000 + 2*i + 1] !== f_bc[i]) begin bad = bad + 1; if (bad < 8) $display("backup cart byte %0d bad", i); end
	end
	$display("tb_load: %0d loader writes, FIFO overflows %0d, mismatches %0d", nwr, ovf, bad);
	if (bad == 0 && ovf == 0 && nwr == 1024 + 512 + 512) $display("tb_load: PASS"); else $display("tb_load: FAIL");
	$finish;
end

endmodule
