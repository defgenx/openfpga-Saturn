// pll_lite vs altera_pll_reconfig (pll_sys_cfg): both drive a DPRIO register model with random initial
// contents; after each mode change the register files must be identical and hold the expected M and K.
`timescale 1ns/1ps

// DPRIO model: writes ignored while mdio_dis; read data valid exactly two clocks after the read, X otherwise;
// the lock flag drops for 60 clocks when K ready (0x17 bit 11) is set again.
module dprio_plant #(parameter SEED = 1) (input wire [63:0] to, output wire [63:0] from, output reg [31:0] nwr = 0);
	reg [15:0] mem [0:63];
	reg [15:0] p1, p2;
	reg        v1, v2;
	reg        lock = 1'b1;
	integer    lcnt = 0, i, sd;
	wire clk = to[0];
	initial begin
		sd = SEED;
		for (i = 0; i < 64; i = i + 1) mem[i] = $random(sd);
		mem[6'h17][11] = 1'b1;
	end
	always @(posedge clk) begin
		v1 <= 1'b0; v2 <= v1; p2 <= p1; p1 <= 16'hxxxx;
		if (to[3]) begin v1 <= 1'b1; p1 <= mem[to[9:4]]; end
		if (to[2] && !to[29] && to[1]) begin
			nwr <= nwr + 1;
			if (to[9:4] == 6'h17 && to[21] && !mem[6'h17][11]) begin lock <= 1'b0; lcnt <= 60; end
			mem[to[9:4]] <= to[25:10];
		end
		if (lcnt > 0) begin lcnt <= lcnt - 1; if (lcnt == 1) lock <= 1'b1; end
	end
	assign from = {46'd0, 1'b0, lock, v2 ? p2 : 16'hxxxx};
endmodule

module tb;
	reg clk = 0;
	always #6.734 clk = ~clk;

	reg pal = 0, dotsel = 1;
	wire [63:0] to_a, from_a, to_b, from_b;
	wire [31:0] nwr_a, nwr_b;

	pll_lite dut (.clk(clk), .pal(pal), .dotsel(dotsel), .reconfig_to_pll(to_a), .reconfig_from_pll(from_a));
	dprio_plant #(.SEED(7)) plant_a (.to(to_a), .from(from_a), .nwr(nwr_a));

	reg         w = 0;
	reg  [5:0]  a;
	reg  [31:0] wd;
	wire        wr_req;
	pll_sys_cfg ref_cfg (.mgmt_clk(clk), .mgmt_reset(1'b0), .mgmt_waitrequest(wr_req), .mgmt_read(1'b0), .mgmt_readdata(),
		.mgmt_write(w), .mgmt_address(a), .mgmt_writedata(wd), .reconfig_to_pll(to_b), .reconfig_from_pll(from_b));
	dprio_plant #(.SEED(7)) plant_b (.to(to_b), .from(from_b), .nwr(nwr_b));

	task avwrite(input [5:0] ad, input [31:0] d);
		begin
			@(posedge clk); #1; w = 1; a = ad; wd = d;
			@(posedge clk); while (wr_req) @(posedge clk);
			#1 w = 0;
		end
	endtask

	function [31:0] kof(input p, input d);
		kof = !p ? (!d ? 32'hAFC38FAE : 32'h4196FC35) : (!d ? 32'hA052BF5B : 32'h31219DBD);
	endfunction

	integer errs = 0, i, m;
	reg [31:0] kk;
	reg [3:0] seq [0:5];
	task check(input p, input d);
		begin
			for (i = 0; i < 64; i = i + 1)
				if (plant_a.mem[i] !== plant_b.mem[i]) begin
					errs = errs + 1; $display("MISMATCH reg %h lite %h altera %h", i, plant_a.mem[i], plant_b.mem[i]);
				end
			if (plant_a.mem[6'h12] !== {d ? 8'd5 : 8'd4, 8'd4}) begin errs = errs + 1; $display("bad M reg"); end
			kk = kof(p, d);
			if (plant_a.mem[6'h18] !== kk[15:0] || plant_a.mem[6'h19] !== kk[31:16]) begin errs = errs + 1; $display("bad K"); end
			if (plant_a.mem[6'h17][4] !== d || plant_a.mem[6'h15][4] !== 1'b0 || plant_a.mem[6'h17][11] !== 1'b1) begin errs = errs + 1; $display("bad flags"); end
			if (!plant_a.lock || !plant_b.lock) begin errs = errs + 1; $display("not locked"); end
		end
	endtask

	initial begin
		seq[0] = 4'b0_1; seq[1] = 4'b0_0; seq[2] = 4'b1_1; seq[3] = 4'b1_0; seq[4] = 4'b0_1; seq[5] = 4'b1_1;
		repeat (1200) @(posedge clk);     // DPRIO init of both blocks
		for (m = 0; m < 6; m = m + 1) begin
			pal = seq[m][1]; dotsel = seq[m][0];
			avwrite(6'd0, 0); avwrite(6'd4, !dotsel ? 32'h00000404 : 32'h00020504);
			avwrite(6'd7, kof(pal, dotsel)); avwrite(6'd2, 0);
			repeat (700) @(posedge clk);
			check(pal, dotsel);
			$display("mode pal=%0d wide=%0d done, DPRIO writes lite %0d altera %0d", pal, dotsel, nwr_a, nwr_b);
		end
		if (errs == 0) $display("RESULT: PASS"); else $display("RESULT: FAIL");
		$finish;
	end
endmodule
