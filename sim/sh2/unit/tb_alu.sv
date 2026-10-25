// ALU equivalence: SH2P_alu against the golden ALU (sizing/sh2p/alu/alu_gold.sv) for every (OP,CD,CMP,TAS) combination
// the decoder can produce, random and corner operands, random T/M/Q.
module tb_alu;
	reg [31:0] A, B; reg [2:0] OP, CMP; reg [3:0] CD; reg TAS, T, M, Q;
	wire [31:0] R1, R2; wire T1, T2;
	SH2P_alu dut (.A(A), .B(B), .OP(OP), .CD(CD), .CMP(CMP), .TAS(TAS), .T(T), .M(M), .Q(Q), .RES(R1), .ALU_T(T1));
	alu_gold gold (.A(A), .B(B), .OP(OP), .CD(CD), .CMP(CMP), .TAS(TAS), .T(T), .M(M), .Q(Q), .RES(R2), .ALU_T(T2));
	integer n = 0, bad = 0, seed = 1;
	reg [31:0] combos [0:63];
	integer nc;
	function [31:0] rnd32(input integer x);
		begin
			case ($urandom % 12)
				0: rnd32 = 0;
				1: rnd32 = 32'hFFFFFFFF;
				2: rnd32 = 32'h80000000;
				3: rnd32 = 32'h7FFFFFFF;
				4: rnd32 = $urandom & 32'hFF;
				5: rnd32 = $urandom & 32'hFF00FF00;
				default: rnd32 = $urandom;
			endcase
		end
	endfunction
	task add(input [2:0] op, input [3:0] cd, input [2:0] cmp, input tas);
		begin combos[nc] = {tas, cmp, cd, op}; nc++; end
	endtask
	initial begin
		integer k, it;
		reg [3:0] adds [0:6];
		reg [2:0] cmps [0:4];
		nc = 0;
		adds[0]=0; adds[1]=1; adds[2]=5; adds[3]=10; adds[4]=11; adds[5]=12; adds[6]=13;
		cmps[0]=0; cmps[1]=2; cmps[2]=3; cmps[3]=6; cmps[4]=7;
		for (k = 0; k < 7; k++) begin add(3'd0, adds[k], 3'd0, 0); add(3'd0, adds[k], 3'd0, 1); end
		for (k = 0; k < 5; k++) add(3'd0, 4'd5, cmps[k], 0);
		add(3'd1,0,0,0); add(3'd1,2,0,0); add(3'd1,4,0,0); add(3'd1,4,0,1); add(3'd1,5,0,0); add(3'd1,10,0,0);
		for (k = 0; k < 8; k++) add(3'd2, k[3:0], 0, 0);
		for (k = 0; k < 14; k++) add(3'd3, k[3:0], 0, 0);
		add(3'd4,0,0,0); add(3'd5,0,0,0); add(3'd5,0,0,1);
		for (it = 0; it < 400000; it++) begin
			k = $urandom % nc;
			{TAS, CMP, CD, OP} = combos[k][10:0];
			A = rnd32(0); B = rnd32(0); T = $urandom; M = $urandom; Q = $urandom;
			#1;
			n++;
			if (R1 !== R2 || T1 !== T2) begin
				bad++;
				if (bad < 10) $display("MISMATCH OP=%0d CD=%0d CMP=%0d TAS=%b A=%h B=%h T=%b M=%b Q=%b res %h/%h t %b/%b", OP, CD, CMP, TAS, A, B, T, M, Q, R1, R2, T1, T2);
			end
		end
		if (bad == 0) $display("PASS alu: %0d vectors", n); else $display("FAIL alu: %0d", bad);
		$finish;
	end
endmodule
