// pad_pocket, port 2 with and without controller 2. The SMPC tells what is on a port from D3-D0 read with TH high (a) and
// TH low (b): {a[3]|a[2], a[1]|a[0], b[3]|b[2], b[1]|b[0]} = 1011 is a standard pad (reported as F1 02 + 2 data bytes),
// 1111 is nothing connected (reported as F0) (firmware/smpc/smpc.c poll_port; sim/smpc: the SMPC program does the same).
// Controller 2 connected: port 2 reads exactly as port 1 with the same pad word, for every TH/TR setting.
// No controller 2: ID 1111 and every line the SMPC does not drive reads high.
// -DNEG: JOY2_ON tied to 1 (port 2 always answers as a pad); must FAIL.
`timescale 1ns/1ps
module tb_pad;
	reg  [6:0]  pdro = 0, ddr = 0;
	reg  [15:0] joy = 16'hFFFF;
	reg         on = 1;
	wire [6:0]  p1, p2;
`ifdef NEG
	wire        on_q = 1'b1;
`else
	wire        on_q = on;
`endif
	pad_pocket dut (.PDR1O(pdro), .DDR1(ddr), .PDR2O(pdro), .DDR2(ddr), .JOY1(joy), .JOY2(joy), .JOY2_ON(on_q),
		.PDR1I(p1), .PDR2I(p2));

	integer err = 0, n = 0;
	reg [3:0] a, b, id;
	string want, kind;
	task automatic drive(input [6:0] d, input [6:0] o);
		ddr = d; pdro = o; #10;
		n = n + 1;
		if (on ? p2 !== p1 : p2 !== ((o & d) | ~d)) begin
			err = err + 1;
			if (err < 10) $display("port 2 not %s: DDR=%b PDR=%b -> %b (port 1 %b)", want, d, o, p2, p1);
		end
	endtask
	task automatic port2(input [15:0] j, input c);
		joy = j; on = c; want = c ? "a pad" : "empty";
		// ID read as the SMPC does it: TH output (DDR 10), TH high then TH low
		drive(7'b1000000, 7'b1000000); a = p2[3:0];
		drive(7'b1000000, 7'b0000000); b = p2[3:0];
		id = {|a[3:2], |a[1:0], |b[3:2], |b[1:0]};
		if (id == 4'b1011) kind = "standard pad (F1 02 ..)"; else if (id == 4'b1111) kind = "nothing connected (F0)"; else kind = "?";
		$display("controller 2 %0d, pad word %h: port 2 ID %b = %s", c, j, id, kind);
		if (id != (c ? 4'b1011 : 4'b1111)) err = err + 1;
		// every TH/TR setting of the 3-wire read, and nothing driven
		for (int k = 0; k < 4; k++) drive(7'b1100000, {k[1:0], 5'b00000});
		drive(7'b1000000, 7'b1000000); drive(7'b1000000, 7'b0000000); drive(7'b0000000, 7'b0000000);
	endtask

	initial begin
		port2(16'hFFFF, 1); port2(16'h7FF7, 1); port2(16'hA5A5, 1);    // nothing pressed; right + L; mixed
		port2(16'hFFFF, 0); port2(16'h7FF7, 0); port2(16'hA5A5, 0);
		$display("pad_pocket: %0d settings, %0d errors", n, err);
		if (err == 0) $display("RESULT: PASS"); else $display("RESULT: FAIL");
		$finish;
	end
endmodule
