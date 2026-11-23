// save_size against a model of mf_datatable (port A: address and output registered, q 2 clocks behind) and a host
// that fills, rereads and reorders the table on port B.   make -C sim platform
`timescale 1ns/1ps
module tb_save_size;

reg clk = 0;
always #6.7 clk = ~clk;

reg  [31:0] mem [0:255];
reg  [7:0]  a_addr_r;  reg [31:0] a_q_r, a_q;
wire [9:0]  a_addr;    wire a_wren;  wire [31:0] a_data;
always @(posedge clk) begin
	a_addr_r <= a_addr[7:0];
	a_q_r    <= mem[a_addr_r];
	a_q      <= a_q_r;
	if (a_wren) mem[a_addr[7:0]] <= a_data;
end

reg start = 0, cart = 0;
wire busy;
save_size dut (
	.clk(clk), .start(start), .cart_backup(cart),
	.datatable_addr(a_addr), .datatable_wren(a_wren), .datatable_data(a_data), .datatable_q(a_q), .busy(busy)
);

integer errs = 0, writes = 0, i;
always @(posedge clk) if (a_wren) begin
	writes = writes + 1;
	if (!busy) begin errs = errs + 1; $display("write outside a pass at %h", a_addr); end
end

// table in data.json order: IDs 0 1 16 2 3 4 5 17..39 (32 entries)
task fill(input [31:0] s3, input [31:0] s4, input [15:0] hi3);
	integer k; reg [15:0] id;
	begin
		for (k = 0; k < 128; k = k + 1) mem[k] = 32'd0;
		for (k = 0; k < 32; k = k + 1) begin
			id = k == 0 ? 0 : k == 1 ? 1 : k == 2 ? 16 : k == 3 ? 2 : k == 4 ? 3 : k == 5 ? 4 : k == 6 ? 5 : 11 + k;
			mem[2*k]   = {id == 3 ? hi3 : 16'd0, id};
			mem[2*k+1] = id == 3 ? s3 : id == 4 ? s4 : id == 16 ? 32'h2A000000 : 32'h1000 + k;
		end
	end
endtask

function [31:0] size_of(input [15:0] id);
	integer k; begin size_of = 32'hDEADBEEF; for (k = 0; k < 32; k = k + 1) if (mem[2*k][15:0] == id) size_of = mem[2*k+1]; end
endfunction

task pulse_and_wait; begin
	@(posedge clk) start <= 1; @(posedge clk) start <= 0;
	repeat (2) @(posedge clk); while (busy) @(posedge clk); repeat (4) @(posedge clk);
end endtask

task chk(input [15:0] id, input [31:0] v); begin
	if (size_of(id) !== v) begin errs = errs + 1; $display("slot %0d size %h, expected %h", id, size_of(id), v); end
end endtask

initial begin
	// 1. no save file yet (sizes 0), Cartridge not Backup
	fill(0, 0, 0); pulse_and_wait;
	chk(3, 32'h10000); chk(4, 0); chk(16, 32'h2A000000); chk(2, 32'h1003);
	// 2. Cartridge set to Backup
	cart = 1; pulse_and_wait;
	chk(3, 32'h10000); chk(4, 32'h100000); chk(5, 32'h1006);
	// 3. the host reorders the table (as at a save) with no pass: nothing written
	writes = 0;
	for (i = 0; i < 32; i = i + 1) begin mem[2*i] = {16'd0, 16'd4 - i[15:0]}; mem[2*i+1] = 32'h77; end
	repeat (500) @(posedge clk);
	if (writes != 0) begin errs = errs + 1; $display("%0d writes with no pass", writes); end
	// 4. slot 3 with a size above 4 GB in its ID word: left alone
	cart = 0; fill(32'h1234, 0, 16'h0039); pulse_and_wait;
	if (mem[9] !== 32'h1234) begin errs = errs + 1; $display("slot 3 with upper size bits was written: %h", mem[9]); end
	// 5. a start held high (slot update) delays the pass until it falls
	fill(0, 0, 0);
	@(posedge clk) start <= 1; repeat (200) @(posedge clk);
	if (size_of(3) !== 0) begin errs = errs + 1; $display("pass ran while start was high"); end
	start <= 0; repeat (2) @(posedge clk); while (busy) @(posedge clk); repeat (4) @(posedge clk);
	chk(3, 32'h10000);
	$display("tb_save_size: %0d errors", errs);
	if (errs == 0) $display("tb_save_size RESULT: PASS"); else $display("tb_save_size RESULT: FAIL");
	$finish;
end

endmodule
