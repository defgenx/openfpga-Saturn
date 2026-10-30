// Unit bench: SCUP2_DSP (reference) vs SCUP2_DSPC (compact) driven through the control port.
// Single-step mode: the state after every instruction is compared. Free-run mode: end state.
`timescale 1ns/1ps

// D0-bus side of a DSP DMA: acknowledges at CE_F, supplies word n = hash(n), hashes what the DSP sends.
module dmaenv(input CLK, input CE_F, input RUN, input REQ, input DIR, input LAST, input [31:0] DOUT,
              output reg ACK, output END, output reg [31:0] DI, output reg [31:0] SUM, output reg [31:0] CNT);
	reg [31:0] n; reg [3:0] ec; reg run_o;
	assign END = ec != 0;
	function [31:0] hw(input [31:0] x); hw = (x * 32'h9E3779B1) ^ 32'hA5A5_1234 ^ (x << 7); endfunction
	initial begin ACK = 0; ec = 0; n = 0; SUM = 0; CNT = 0; DI = 0; run_o = 0; end
	always @(posedge CLK) begin
		ACK <= 0;
		if (ec != 0) ec <= ec - 4'd1;
		run_o <= RUN;
		if (RUN && !run_o) begin n <= 0; DI <= hw(32'd0); end
		if (CE_F && REQ && RUN && !ACK) begin
			ACK <= 1;
			n <= n + 1; DI <= hw(n + 1);
			if (DIR) begin SUM <= (SUM * 33) ^ DOUT; CNT <= CNT + 1; end
			if (LAST) ec <= 4'd10;
		end
	end
endmodule

module tb;
	reg CLK = 0; always #5 CLK = ~CLK;
	reg RST_N = 0, RES_N = 0;
	reg MD = 0; always @(posedge CLK) MD <= ~MD;
	wire CE_R = MD, CE_F = ~MD;
	reg DSP_CE = 0; always @(posedge CLK) if (CE_R) DSP_CE <= ~DSP_CE;
	wire CE = DSP_CE & CE_R;
	reg [1:0] A = 0; reg [31:0] DI = 0; reg [3:0] WE = 0; reg RE = 0;

	wire [31:0] r_DO, r_DSO, r_DMA_DO, d_DO, d_DSO, d_DMA_DO;
	wire [3:0] r_DMAC, d_DMAC;
	wire r_RA0W, r_WA0W, r_DMAW, d_RA0W, d_WA0W, d_DMAW;
	wire r_DMA_WE, r_REQ, r_RUN, r_LAST, r_IRQ, d_DMA_WE, d_REQ, d_RUN, d_LAST, d_IRQ;
	wire r_ACK, r_END, d_ACK, d_END;
	wire [31:0] r_DI, d_DI, r_SUM, d_SUM, r_CNT, d_CNT;

	SCUP2_DSP u_r(.CLK(CLK),.RST_N(RST_N),.CE(CE),.RES_N(RES_N),.CE_R(CE_R),.CE_F(CE_F),.A(A),.DI(DI),.DO(r_DO),.WE(WE),.RE(RE),
		.DSO(r_DSO),.DMAC(r_DMAC),.RA0W(r_RA0W),.WA0W(r_WA0W),.DMAW(r_DMAW),
		.DMA_DI(r_DI),.DMA_DO(r_DMA_DO),.DMA_WE(r_DMA_WE),.DMA_REQ(r_REQ),.DMA_ACK(r_ACK),.DMA_RUN(r_RUN),.DMA_LAST(r_LAST),.DMA_END(r_END),.IRQ(r_IRQ));
	SCUP2_DSPC u_d(.CLK(CLK),.RST_N(RST_N),.CE(CE),.RES_N(RES_N),.CE_R(CE_R),.CE_F(CE_F),.A(A),.DI(DI),.DO(d_DO),.WE(WE),.RE(RE),
		.DSO(d_DSO),.DMAC(d_DMAC),.RA0W(d_RA0W),.WA0W(d_WA0W),.DMAW(d_DMAW),
		.DMA_DI(d_DI),.DMA_DO(d_DMA_DO),.DMA_WE(d_DMA_WE),.DMA_REQ(d_REQ),.DMA_ACK(d_ACK),.DMA_RUN(d_RUN),.DMA_LAST(d_LAST),.DMA_END(d_END),.IRQ(d_IRQ));
	dmaenv e_r(CLK, CE_F, r_RUN, r_REQ, r_DMA_WE, r_LAST, r_DMA_DO, r_ACK, r_END, r_DI, r_SUM, r_CNT);
	dmaenv e_d(CLK, CE_F, d_RUN, d_REQ, d_DMA_WE, d_LAST, d_DMA_DO, d_ACK, d_END, d_DI, d_SUM, d_CNT);

	// strobe logs
	reg [31:0] r_log = 0, d_log = 0; integer r_nev = 0, d_nev = 0;
	always @(posedge CLK) begin
		if (r_RA0W) begin r_log <= (r_log * 31) ^ r_DSO ^ 32'h1; r_nev <= r_nev + 1; end
		if (r_WA0W) begin r_log <= (r_log * 31) ^ r_DSO ^ 32'h2; r_nev <= r_nev + 1; end
		if (r_DMAW) begin r_log <= (r_log * 31) ^ {28'd0, r_DMAC} ^ 32'h3; r_nev <= r_nev + 1; end
		if (d_RA0W) begin d_log <= (d_log * 31) ^ d_DSO ^ 32'h1; d_nev <= d_nev + 1; end
		if (d_WA0W) begin d_log <= (d_log * 31) ^ d_DSO ^ 32'h2; d_nev <= d_nev + 1; end
		if (d_DMAW) begin d_log <= (d_log * 31) ^ {28'd0, d_DMAC} ^ 32'h3; d_nev <= d_nev + 1; end
	end

	integer errors = 0, checks = 0;
	always @(posedge CLK) if ((d_RA0W | d_WA0W | d_DMAW) && !CE_R) begin errors = errors + 1; $display("%0t STROBE outside CE_R", $time); end
	always @(posedge CLK) if ($test$plusargs("DMAW")) begin
		if (r_DMAW) $display("%0t REF DMAW IC %08x CT0 %0d ram0[ct0]=%08x TN0(before) %0d", $time, u_r.IC, u_r.CT0, u_r.DATA_RAM_X.MEM[{2'b00,u_r.CT0}], u_r.TN0);
		if (d_DMAW) $display("%0t DUT DMAW IC %08x CT0 %0d D1T=%08x ram0[ct0]=%08x", $time, u_d.IC, u_d.CT0, u_d.D1T, u_d.DATA_RAM_E.MEM[{2'b00,u_d.CT0}]);
	end
	integer dbg = 0;
	always @(posedge CLK) if (dbg && (r_ACK || d_ACK || r_END != 0)) $display("%0t ACK r%b d%b END r%b d%b TN r%0d d%0d T0 %b %b REQ %b %b EPEND %b %b", $time, r_ACK, d_ACK, r_END, d_END, u_r.TN0, u_d.TN0, u_r.T0, u_d.T0, r_REQ, d_REQ, u_r.DMA_END_PEND, u_d.DMA_END_PEND);

	task wr(input [1:0] a, input [31:0] d);
		begin
			@(posedge CLK); #1;
			while (!CE_R) begin @(posedge CLK); #1; end
			A = a; DI = d; WE = 4'hF;
			@(posedge CLK); #1; WE = 0;
			repeat (4) @(posedge CLK);
			#1;
		end
	endtask

	task wrg(input [1:0] a, input [31:0] d, input integer gap);
		begin
			@(posedge CLK); #1;
			while (!CE_R) begin @(posedge CLK); #1; end
			A = a; DI = d; WE = 4'hF;
			@(posedge CLK); #1; WE = 0;
			repeat (gap) @(posedge CLK);
			#1;
		end
	endtask
	reg [31:0] rd_r, rd_d;
	task rd(input [1:0] a);
		begin
			@(posedge CLK); #1;
			while (!CE_F) begin @(posedge CLK); #1; end
			A = a; RE = 1;
			@(posedge CLK); #1; RE = 0;
			rd_r = r_DO; rd_d = d_DO;
			checks = checks + 1;
			if (rd_r !== rd_d) begin errors = errors + 1; $display("%0t READ A=%0d ref=%08x dut=%08x", $time, a, rd_r, rd_d); end
			repeat (2) @(posedge CLK);
		end
	endtask

	task mism(input [255:0] what);
		begin errors = errors + 1; if (errors < 30) $display("%0t MISMATCH %0s", $time, what); end
	endtask

	integer i;
	task cmp(input [255:0] tag);
		begin
			checks = checks + 1;
			if (48'(u_r.AC) !== u_d.AC) begin mism("AC"); $display("  ref %012x dut %012x", 48'(u_r.AC), u_d.AC); end
			if (48'(u_r.P) !== u_d.P) begin mism("P"); $display("  ref %012x dut %012x", 48'(u_r.P), u_d.P); end
			if (u_r.RX !== u_d.RX) mism("RX");
			if (u_r.RY !== u_d.RY) mism("RY");
			if (u_r.PC !== u_d.PC) begin mism("PC"); $display("  ref %02x dut %02x", u_r.PC, u_d.PC); end
			if (u_r.TOP !== u_d.TOP) mism("TOP");
			if (u_r.LOP !== u_d.LOP) mism("LOP");
			if (u_r.CT0 !== u_d.CT0 || u_r.CT1 !== u_d.CT1 || u_r.CT2 !== u_d.CT2 || u_r.CT3 !== u_d.CT3) mism("CT");
			if ({u_r.S,u_r.Z,u_r.C,u_r.V,u_r.E,u_r.T0,u_r.EX} !== {u_d.S,u_d.Z,u_d.C,u_d.V,u_d.E,u_d.T0,u_d.EX}) begin mism("FLAGS"); $display("  ref %b dut %b", {u_r.S,u_r.Z,u_r.C,u_r.V,u_r.E,u_r.T0,u_r.EX}, {u_d.S,u_d.Z,u_d.C,u_d.V,u_d.E,u_d.T0,u_d.EX}); end
			if (u_r.IC !== u_d.IC) begin mism("IC"); $display("  ref %08x dut %08x", u_r.IC, u_d.IC); end
			if (u_r.LPS_EXE !== u_d.LPS_EXE) mism("LPS_EXE");
			if (r_log !== d_log || r_nev !== d_nev) begin mism("STROBES"); $display("  ref %08x/%0d dut %08x/%0d", r_log, r_nev, d_log, d_nev); end
			if (r_SUM !== d_SUM || r_CNT !== d_CNT) mism("DMA sink");
			for (i = 0; i < 256; i = i + 1)
				if (u_r.DATA_RAM_X.MEM[i] !== u_d.DATA_RAM_E.MEM[i]) begin mism("DRAM"); $display("  [%0d] ref %08x dut %08x", i, u_r.DATA_RAM_X.MEM[i], u_d.DATA_RAM_E.MEM[i]); i = 256; end
			for (i = 0; i < 256; i = i + 1)
				if (u_r.PRG_RAM.MEM[i] !== u_d.PRG_RAM.MEM[i]) begin mism("PRAM"); $display("  [%0d] ref %08x dut %08x", i, u_r.PRG_RAM.MEM[i], u_d.PRG_RAM.MEM[i]); i = 256; end
			if (errors != 0 && errors < 30) $display("  (at %0s)", tag);
		end
	endtask

	// wait until both DSPs are idle (no step in progress, no DMA)
	task settle;
		integer t;
		begin
			t = 0;
			repeat (8) @(posedge CLK);
			while ((u_r.ES || u_d.ES || u_r.T0 || u_d.T0 || u_d.ph != 0 || u_r.DMA_END_PEND || u_d.DMA_END_PEND) && t < 4000) begin @(posedge CLK); t = t + 1; end
			if (t >= 4000) begin mism("TIMEOUT"); $display("  ES %b %b T0 %b %b ph %0d", u_r.ES, u_d.ES, u_r.T0, u_d.T0, u_d.ph); end
			repeat (12) @(posedge CLK);
			#1;
		end
	endtask

	task load_prg(input integer n);
		integer k;
		begin
			wr(0, 32'h0000_8000);
			for (k = 0; k < 256; k = k + 1) wr(1, prog[k]);
			wr(0, 32'h0000_8000);
		end
	endtask

	task load_ram;
		integer k;
		begin
			wr(2, 0);
			for (k = 0; k < 256; k = k + 1) wr(3, ramimg[k]);
		end
	endtask

	reg [31:0] prog [0:255];
	reg [31:0] ramimg [0:255];

	function [31:0] rnd_instr(input integer nprog, input integer allow_dma);
		reg [31:0] x; integer c;
		begin
			x = $urandom; c = $urandom % 100;
			if (c < 58) x[31:30] = 2'b00;
			else if (c < 74) x[31:30] = 2'b10;
			else if (c < 80) begin x[31:28] = 4'b1101; x[7:0] = $urandom % nprog; end
			else if (c < 86) begin x[31:28] = 4'b1110; end
			else if (c < 89) begin x[31:28] = 4'b1111; end
			else if (c < 92) x[31:30] = 2'b01;
			else if (allow_dma != 0) begin
				x[31:28] = 4'b1100;
				if ($urandom % 3 != 0) x[13] = 0;       // immediate count
				if (!x[13]) x[7:0] = 1 + ($urandom % 4);
				if ($urandom % 2) x[10] = 0;            // RAM bank rather than PRG/none
			end
			else x[31:30] = 2'b00;
			rnd_instr = x;
		end
	endfunction

	task run_single(input integer seed, input integer nprog, input integer nstep, input integer allow_dma);
		integer k;
		begin
			do_reset;
			for (k = 0; k < nprog; k = k + 1) prog[k] = rnd_instr(nprog, allow_dma);
			for (k = nprog; k < 256; k = k + 1) prog[k] = 0;
			for (k = 0; k < 256; k = k + 1) ramimg[k] = $urandom;
			load_ram; load_prg(nprog);
			// random start state: LOP, CT via the program itself
			cmp("load");
			for (k = 0; k < nstep; k = k + 1) begin
				wr(0, 32'h0002_0000);              // single step
				settle;
				if (dbg) $display("step %0d IC r%08x d%08x PC r%02x d%02x T0 %b %b TN %0d TOP %02x DS %0d", k, u_r.IC, u_d.IC, u_r.PC, u_d.PC, u_r.T0, u_d.T0, u_r.TN0, u_r.TOP, u_d.DS);
				cmp("step");
				if (errors != 0) begin $display("  seed %0d step %0d IC=%08x", seed, k, u_r.IC); k = nstep; end
			end
			rd(0); rd(2);
			wr(2, 0); rd(3); rd(3);
		end
	endtask

	// free-run: end state compare
	task run_free(input integer n, input integer maxclk);
		integer t;
		begin
			load_prg(n);
			wr(0, 32'h0001_8000);                // LE + EX from PC 0
			t = 0;
			repeat (8) @(posedge CLK);
			while ((u_r.EX || u_d.EX || u_r.T0 || u_d.T0 || u_r.DMA_END_PEND || u_d.DMA_END_PEND) && t < maxclk) begin @(posedge CLK); t = t + 1; end
			if (t >= maxclk) begin mism("FREE TIMEOUT"); $display("  EX %b %b T0 %b %b PC %02x %02x | dut ph %0d hz %b RUN %b PAUSED %b REQ %b TN %0d DS %0d DDIR %b IC %08x | ref TN %0d REQ %b", u_r.EX, u_d.EX, u_r.T0, u_d.T0, u_r.PC, u_d.PC, u_d.ph, u_d.hz, u_d.RUN, u_d.PAUSED, u_d.DMA_REQ, u_d.TN0, u_d.DS, u_d.DDIR, u_d.IC, u_r.TN0, u_r.DMA_REQ); end
			repeat (20) @(posedge CLK);
			#1;
			cmp("free");
			rd(0);
		end
	endtask


	task do_reset;
		begin RES_N = 0; repeat (6) @(posedge CLK); RES_N = 1; repeat (6) @(posedge CLK); end
	endtask
	integer dn; integer dtest = 0;
	task dstart;
		begin
			dtest = dtest + 1; if (dbg) $display("=== directed %0d at %0t", dtest, $time);
			do_reset;
			for (dn = 0; dn < 256; dn = dn + 1) begin prog[dn] = 0; if (dn > 2 || dir_keep == 0) ramimg[dn] = 32'h1000_0000 + dn * 32'h0101_0101 + 32'h0003_0000 * (dn & 1); end
		end
	endtask
	integer dir_keep = 0;
	task dfinish(input integer n);
		begin prog[n < 14 ? 14 : n] = 32'hF000_0000; load_ram; run_free(n < 14 ? 14 : n, 6000); end
	endtask

	integer s, k2, seed, only;
	initial begin
		if (!$value$plusargs("SEED=%d", seed)) seed = 1;
		k2 = $urandom(seed);
		repeat (6) @(posedge CLK);
		RST_N = 1; RES_N = 1;
		repeat (6) @(posedge CLK);

		if ($test$plusargs("DBG")) dbg = 1;
		// ---- directed programs (free-run, end state compared) ----
		// 1: MOV imm,RX ; MOV [M0],RY ; MUL ; ALU AD2/SUB/AND/OR/XOR/shifts ; MOV ALUL/ALUH,[M2]
		dstart;
		prog[0] = 32'h0000_1455; prog[1] = 32'h0008_0000; prog[2] = 32'h0100_0000; prog[3] = 32'h1800_0000; prog[4] = 32'h0000_3209; prog[5] = 32'h1400_0000; prog[6] = 32'h0000_3A0A; prog[7] = 32'h0480_0000; prog[8] = 32'h0380_0000; prog[9] = 32'h2400_0000; prog[10] = 32'h2000_0000; prog[11] = 32'h2C00_0000; prog[12] = 32'h3C00_0000; prog[13] = 32'h0000_0000;
		prog[14] = 32'h0000_1505; prog[15] = 32'h1000_0000; prog[16] = 32'h1400_0000; prog[17] = 32'h0C00_0000;
		prog[18] = 32'h0800_0000; prog[19] = 32'h0400_0000; prog[20] = 32'hF000_0000;
		dfinish(21);
		// 2: counters and X/Y/D1 buses: MOV M0++,X ; MOV M1++,Y ; MUL ; MOV MUL?,P ; MOV [M2],CT0 ; MVI to RAM with CT++
		dstart;
		prog[0] = 32'h0280_4000; prog[1] = 32'h0A00_4000 | 32'h0006_8000; prog[2] = 32'h0200_0000 | 32'h0140_5000; prog[3] = 32'h0000_1C03; prog[4] = 32'h0000_3C00; prog[5] = 32'h0000_3204; prog[6] = 32'h0000_3304; prog[7] = 32'h8000_0011; prog[8] = 32'h8400_0022; prog[9] = 32'h8C00_0033; prog[10] = 32'h0480_C000; prog[11] = 32'h0340_4000; prog[12] = 32'h0000_0000; prog[13] = 32'h0000_0000;
		dfinish(14);
		// 3: JMP, LOP/TOP, BTM loop
		dstart;
		prog[0] = 32'hA800_0003; prog[1] = 32'h0000_1B03; prog[2] = 32'h0000_1505; prog[3] = 32'h1000_0000; prog[4] = 32'hE000_0000; prog[5] = 32'h0000_0000; prog[6] = 32'h0C00_0000; prog[7] = 32'hF000_0000;
		dfinish(8);
		// 4: LPS repeat, conditional MVI, JMP on C
		dstart;
		prog[0] = 32'hA800_0004; prog[1] = 32'h0000_1505; prog[2] = 32'hE800_0000; prog[3] = 32'h1000_0000; prog[4] = 32'h0000_0000; prog[5] = 32'hAC40_0007 | 32'h0200_0000; prog[6] = 32'hD240_0007; prog[7] = 32'h0000_0000; prog[8] = 32'h0000_0000; prog[9] = 32'hF800_0000;
		dfinish(10);
		// 5: DMA D0->RAM1 (4 words), wait T0, RAM1->D0 (4 words, hold), END (NOPs fill the JMP delay slots)
		dstart;
		prog[0] = 32'hC000_8104; prog[1] = 32'h0; prog[2] = 32'hD340_0002; prog[3] = 32'h0; prog[4] = 32'hC000_5104; prog[5] = 32'h0;
		prog[6] = 32'hD340_0006; prog[7] = 32'h0; prog[8] = 32'hF000_0000; prog[9] = 32'h0;
		dfinish(14);
		// 6: BIOS pump: RAM[0..2] = RA0, WA0, count; MOV M0++,RA0; MOV M0++,WA0; DMA D0->M1 (count = M0++); wait; DMA M1->D0; wait; END
		dstart;
		prog[0] = 32'h0000_3604; prog[1] = 32'h0000_3704; prog[2] = 32'hC000_2104; prog[3] = 32'h0; prog[4] = 32'hD340_0004; prog[5] = 32'h0;
		prog[6] = 32'hC000_1106; prog[7] = 32'h0; prog[8] = 32'hD340_0008; prog[9] = 32'h0; prog[10] = 32'hF000_0000; prog[11] = 32'h0;
		ramimg[0] = 32'h05C2_0000; ramimg[1] = 32'h05A5_0000; ramimg[2] = 32'h0000_0006;
		dfinish(14);

		// ---- random single-step ----
		if ($test$plusargs("PUMPRT")) begin   // BIOS-like timing: 3 data words, PPAF 0x18000, 9 clk apart
			do_reset; $readmemh("pump.prog", prog); load_prg(32);
			wrg(2, 0, 9); wrg(3, 32'h09708000, 9); wrg(3, 32'h09694000, 9); wrg(3, 32'h00004001, 9); wrg(0, 32'h0001_8000, 9);
			k2 = 0;
			while ((u_r.EX || u_d.EX || u_r.T0 || u_d.T0) && k2 < 60000) begin @(posedge CLK); k2 = k2 + 1; end
			repeat (20) @(posedge CLK);
			$display("pumprt: clk %0d ref EX %b PC %02x sink %0d | dut EX %b PC %02x sink %0d | RAM0..2 ref %08x %08x %08x dut %08x %08x %08x", k2, u_r.EX, u_r.PC, r_CNT, u_d.EX, u_d.PC, d_CNT,
			        u_r.DATA_RAM_X.MEM[0], u_r.DATA_RAM_X.MEM[1], u_r.DATA_RAM_X.MEM[2], u_d.DATA_RAM_E.MEM[0], u_d.DATA_RAM_E.MEM[1], u_d.DATA_RAM_E.MEM[2]);
			cmp("pumprt");
		end
		if ($test$plusargs("PUMP")) begin   // local DSP program/data image (not committed): +PUMP, files pump.prog / pump.ram
			do_reset; $readmemh("pump.prog", prog); $readmemh("pump.ram", ramimg);
			load_ram; if ($test$plusargs("PFREE")) begin run_free(32, 20000); k2 = 2000; end else load_prg(32);
			for (k2 = (k2 == 2000 ? 2000 : 0); k2 < 80; k2 = k2 + 1) begin
				wr(0, 32'h0002_0000); settle;
				if (dbg) $display("pstep %0d IC r%08x d%08x PC r%02x d%02x CT0 %0d %0d TN %0d %0d", k2, u_r.IC, u_d.IC, u_r.PC, u_d.PC, u_r.CT0, u_d.CT0, u_r.TN0, u_d.TN0);
				cmp("pump"); if (errors != 0) k2 = 1000;
			end
			$display("pump: ref sink %0d words hash %08x, dut %0d words hash %08x, PC %02x/%02x", r_CNT, r_SUM, d_CNT, d_SUM, u_r.PC, u_d.PC);
		end
		if (!$value$plusargs("ONLY=%d", only)) only = -1;
		for (s = 0; s < 60; s = s + 1) begin
			if (only < 0 || only == s) run_single(s, 8 + (s % 40), 120, 0);
		end
		for (s = 0; s < 40; s = s + 1) begin
			if (only < 0 || only == 1000 + s) run_single(1000 + s, 8 + (s % 20), 60, 1);
		end

		$display("checks=%0d errors=%0d", checks, errors);
		if (errors == 0) $display("PASS"); else $display("FAIL");
		$finish;
	end
endmodule
