// Two SH7604_DIVU_CL clients on one SH7604_DIVU_SHR (the POCKET_CUT_SH2_DIVU_SHARED structure SH7604P instantiates),
// both dividing at the same time with random 32/32 and 64/32 operands; results and register read-back checked per client
// against an SV reference (truncating division). Quotients in [2^31, 2^32) are accepted as either exact or overflow.
`timescale 1ns/1ps
module tb_divu_shared;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg div = 0;
	always @(posedge CLK) div <= ~div;
	wire CE_R = div, CE_F = ~div;

	reg  [31:0] A [2], DI [2];
	reg         WE [2], REQ [2];
	wire [31:0] DO [2];
	wire        BUSY [2], IRQ [2];
	wire [7:0]  VEC [2];
	wire [65:0]  O0, O1;
	wire [140:0] I0, I1;

	SH7604_DIVU_SHR shr(.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .EN(1'b1), .C0_O(O0), .C1_O(O1), .C0_I(I0), .C1_I(I1));
	SH7604_DIVU_CL c0(.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(1'b1), .IBUS_A(A[0]), .IBUS_DI(DI[0]),
		.IBUS_DO(DO[0]), .IBUS_BA(4'hF), .IBUS_WE(WE[0]), .IBUS_REQ(REQ[0]), .IBUS_BUSY(BUSY[0]), .IBUS_ACT(), .IRQ(IRQ[0]), .VEC(VEC[0]),
		.SH_I(I0), .SH_O(O0));
	SH7604_DIVU_CL c1(.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(1'b1), .IBUS_A(A[1]), .IBUS_DI(DI[1]),
		.IBUS_DO(DO[1]), .IBUS_BA(4'hF), .IBUS_WE(WE[1]), .IBUS_REQ(REQ[1]), .IBUS_BUSY(BUSY[1]), .IBUS_ACT(), .IRQ(IRQ[1]), .VEC(VEC[1]),
		.SH_I(I1), .SH_O(O1));
	wire OPER [2];
	assign OPER[0] = c0.OPERATE;
	assign OPER[1] = c1.OPERATE;

	integer errors = 0, nops = 0, nov = 0, nband = 0, nboth = 0;

	// one bus access; the request is held two clocks (one CE_R, one CE_F), starting so that the first edge is CE_F
	task automatic wr(input integer c, input [31:0] a, input [31:0] d);
		begin
			@(posedge CLK); while (div) @(posedge CLK);
			A[c] = a; DI[c] = d; WE[c] = 1; REQ[c] = 1;
			@(posedge CLK); @(posedge CLK);
			REQ[c] = 0; WE[c] = 0;
		end
	endtask
	// read: held until the divider is idle; the capture edge must be a CE_F edge with BUSY and OPERATE low
	task automatic rd(input integer c, input [31:0] a, output [31:0] d);
		reg ok;
		begin
			@(posedge CLK); while (div) @(posedge CLK);
			A[c] = a; WE[c] = 0; REQ[c] = 1;
			ok = 0;
			while (!ok) begin
				@(posedge CLK);
				if (!div && !BUSY[c] && !OPER[c]) ok = 1;      // this edge captures REG_DO
			end
			@(posedge CLK);
			d = DO[c];
			REQ[c] = 0;
		end
	endtask

	reg [31:0] xs = 32'h1234abcd;
	function [31:0] rnd();
		begin xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5); rnd = xs; end
	endfunction
	function [31:0] opnd32();
		reg [31:0] r;
		begin
			r = rnd();
			case (r[2:0])
				0: opnd32 = rnd();
				1: opnd32 = rnd() >> (rnd() % 32);
				2: opnd32 = -(rnd() >> (rnd() % 32));
				3: opnd32 = {rnd()[15:0], 16'h0};
				4: opnd32 = (r[7:3] % 3) == 0 ? 32'h0 : (r[7:3] % 3) == 1 ? 32'h1 : 32'hFFFFFFFF;
				default: opnd32 = rnd() | 32'h80000000;
			endcase
		end
	endfunction

	reg        is64 [2];
	reg [31:0] dvsr [2], hi [2], lo [2];

	task automatic setup(input integer c);
		begin
			is64[c] = (rnd() % 2);
			dvsr[c] = opnd32();
			lo[c] = opnd32();
			hi[c] = is64[c] ? (rnd() % 4 == 0 ? {32{lo[c][31]}} : opnd32() >> (rnd() % 33)) : {32{lo[c][31]}};
			if (is64[c] && rnd() % 2) hi[c] = {32{lo[c][31]}} ^ (rnd() % 3 == 0 ? 32'h1 : 32'h0);
			wr(c, 32'hFFFFFF08, 0);                       // DVCR: OVFIE=0, clear OVF
			wr(c, 32'hFFFFFF0C, 32'h40 + c);               // VCRDIV
			wr(c, 32'hFFFFFF00, dvsr[c]);
			if (is64[c]) wr(c, 32'hFFFFFF10, hi[c]);
		end
	endtask
	task automatic startw(input integer c, input integer dly);
		begin
			repeat (dly) @(posedge CLK);
			if (is64[c]) wr(c, 32'hFFFFFF14, lo[c]); else wr(c, 32'hFFFFFF04, lo[c]);
		end
	endtask
	task automatic check(input integer c);
		reg [31:0] q, r, s, vc, dc, dsr;
		longint n, dd, eq, er;
		reg exp_ov, band;
		begin
			rd(c, 32'hFFFFFF14, q);
			rd(c, 32'hFFFFFF10, r);
			rd(c, 32'hFFFFFF08, dc);
			rd(c, 32'hFFFFFF0C, vc);
			rd(c, 32'hFFFFFF00, dsr);
			n = {hi[c], lo[c]};
			dd = $signed(dvsr[c]);
			exp_ov = 0; band = 0; eq = 0; er = 0;
			if (dd == 0) exp_ov = 1;
			else if (n == 64'sh8000000000000000 && dd == -1) band = 1;
			else begin
				eq = n / dd; er = n % dd;
				if (eq >= 64'sh100000000 || eq < -64'sh100000000) exp_ov = 1;
				else if (eq > 64'sh7FFFFFFF || eq < -64'sh7FFFFFFF) band = 1;
			end
			if (vc[7:0] !== 8'h40 + c || dsr !== dvsr[c]) begin
				errors++; $display("FAIL c%0d regs vcr=%h dvsr=%h exp %h", c, vc, dsr, dvsr[c]);
			end
			if (exp_ov || (band && dc[0])) begin
				if (!dc[0]) begin errors++; $display("FAIL c%0d no OVF n=%h d=%h dvcr=%h", c, n, dvsr[c], dc); end
				else if (exp_ov && q !== {n[63] ^ dvsr[c][31], {31{~(n[63] ^ dvsr[c][31])}}}) begin
					errors++; $display("FAIL c%0d sat q=%h n=%h d=%h", c, q, n, dvsr[c]);
				end
				nov++;
			end else if (!band) begin
				if (dc[0] || q !== eq[31:0] || r !== er[31:0]) begin
					errors++; $display("FAIL c%0d n=%h d=%h got q=%h r=%h ov=%b exp q=%h r=%h", c, n, dvsr[c], q, r, dc[0], eq[31:0], er[31:0]);
				end
			end else nband++;
			nops++;
		end
	endtask

	integer it, dly;
	initial begin
		A[0]=0; A[1]=0; DI[0]=0; DI[1]=0; WE[0]=0; WE[1]=0; REQ[0]=0; REQ[1]=0;
		#47 RST_N = 1;
		repeat (10) @(posedge CLK);
		for (it = 0; it < 4000; it++) begin
			fork setup(0); setup(1); join
			dly = (rnd() % 3 == 0) ? 0 : rnd() % 12;
			fork
				begin startw(0, 0); check(0); end
				begin startw(1, dly); check(1); end
			join
			if (dly < 4) nboth++;
		end
		$display("%s tb_divu_shared: %0d divides (%0d overflow, %0d band), %0d contended starts, %0d errors", errors ? "FAIL" : "PASS", nops, nov, nband, nboth, errors);
		$finish;
	end
	initial begin #50000000; $display("FAIL timeout"); $finish; end
endmodule
