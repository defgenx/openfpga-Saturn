//Compact SCU DSP (POCKET_SCU_DSP_COMPACT), same ports as SCUP2_DSP. Docs: docs/scu.md "Compact SCU DSP".
//A step is a short micro-sequence (1-6 clk) instead of one parallel commit:
//  ph0 D1 source -> D1T, flags    ph1 AC <- ALU/0    ph2 P <- RX*RY    ph3 X read -> RX/P
//  ph4 Y read -> RY/AC            ph5 D1 write, CT/PC/LOP update, IC fetch (commit)
//Phases without work are skipped. The steps read AC/P/RX/RY in an order that keeps the old-value semantics.
//One RAM read port per user (engine, DMA, CPU), one write port (priority DMA, CPU, engine).
module SCUP2_DSPC (
	input             CLK,
	input             RST_N,
	input             CE,
	input             RES_N,
	input             CE_R,
	input             CE_F,
	input       [1:0] A,
	input      [31:0] DI,
	output reg [31:0] DO,
	input       [3:0] WE,
	input             RE,
	output     [31:0] DSO,
	output      [3:0] DMAC,
	output            RA0W,
	output            WA0W,
	output            DMAW,
	input      [31:0] DMA_DI,
	output     [31:0] DMA_DO,
	output            DMA_WE,
	output reg        DMA_REQ,
	input             DMA_ACK,
	output            DMA_RUN,
	output            DMA_LAST,
	input             DMA_END,
	output            IRQ
);
	wire rst = ~RST_N | ~RES_N;

	reg [47:0] AC, P;
	reg [31:0] RX, RY, D1T, IC;
	reg  [7:0] PC, TOP, TN0;
	reg [11:0] LOP;
	reg  [5:0] CT0, CT1, CT2, CT3;
	reg        EX, EP, ES, E, T0, S, Z, C, V, LPS_EXE, PAUSED, DMA_END_PEND, DMA_END_OLD;
	reg  [2:0] ph;
	reg        DDIR;       //DMA direction (1: RAM -> D0)
	reg  [2:0] DS;         //DMA IC[10:8]: bank (1:0), 1xx = program RAM (DIR 0) / no CT (DIR 1)
	reg        PRG_TRANS_WE, DATA_TRANS_WE, DATA_TRANS_RE;
	reg  [7:0] DATA_TRANS_ADDR;
	reg        DWR_WE;
	reg  [7:0] DWR_A;

	wire [31:0] RAMQ, DMAQ, CPUQ, PRG_Q;
	wire        dma_prg = ~DDIR & DS == 3'b100;     //DMA D0 -> program RAM

	//Instruction classes
	wire cA = ~IC[31] & ~IC[30];                 //ALU/X/Y/D1
	wire cM =  IC[31] & ~IC[30];                 //MVI
	wire cD = IC[31:28] == 4'b1100;              //DMA
	wire cJ = IC[31:28] == 4'b1101;              //JMP
	wire cL = IC[31:28] == 4'b1110;              //BTM/LPS
	wire cEN = IC[31:28] == 4'b1111;              //END/ENDI

	wire COND = IC[24] ? ((IC[22]&T0) | (IC[21]&C) | (IC[20]&S) | (IC[19]&Z))
	                   : ((~IC[22]|~T0) & (~IC[21]|~C) & (~IC[20]|~S) & (~IC[19]|~Z));
	wire MC   = ~IC[25] | COND;                  //MVI/JMP condition met

	//D1 destination
	wire [3:0] dcode = cA ? IC[11:8] : IC[29:26];
	wire       den   = cA ? IC[12] : (cM & MC);
	wire       d_ram = den & (cA | cM) & dcode[3:2] == 2'b00;
	wire [1:0] wb    = cA ? IC[9:8] : IC[27:26];
	wire       d_rx  = den & dcode == 4'b0100;
	wire       d_p   = den & dcode == 4'b0101;
	wire       d_ra0 = den & dcode == 4'b0110;
	wire       d_wa0 = den & dcode == 4'b0111;
	wire       d_lop = den & dcode == 4'b1010;
	wire       d_top = den & cA & dcode == 4'b1011;
	wire       d_pc  = den & cM & dcode == 4'b1100;
	wire [3:0] d_ctw = {4{den & cA & dcode[3:2] == 2'b11}} & (4'b0001 << dcode[1:0]);

	//D1 source
	wire d_ramr = cA & IC[13] & IC[12] & ~IC[3];
	wire d_alus = cA & IC[13] & IC[12] & (IC[3:0] == 4'h9 | IC[3:0] == 4'hA);
	wire d_imms = cM | (cA & ~IC[13] & IC[12]);

	//X, Y fields
	wire xr = cA & (IC[25:23] >= 3'd3);
	wire yr = cA & (IC[19:17] >= 3'd3);
	wire rx_conflict = d_rx & cA & IC[25];

	//Phase enables
	wire en1 = cA & (IC[18:17] == 2'b01 | IC[18:17] == 2'b10);
	wire en2 = cA & IC[24] & ~IC[23];
	wire en3 = cA & (IC[25] | (IC[24] & IC[23]));
	wire en4 = cA & (IC[19] | IC[18:17] == 2'b11);
	reg [2:0] nxt;
	always @* begin
		nxt = 3'd5;
		if (en4 && ph < 3'd4) nxt = 3'd4;
		if (en3 && ph < 3'd3) nxt = 3'd3;
		if (en2 && ph < 3'd2) nxt = 3'd2;
		if (en1 && ph < 3'd1) nxt = 3'd1;
	end

	//Run / hazard
	wire RUN = (EX | ES) & ~EP & ~PAUSED;
	wire [1:0] hb = DS[1:0];
	wire [3:0] xcti = {4{xr & IC[22]}} & (4'b0001 << IC[21:20]);
	wire [3:0] ycti = {4{yr & IC[16]}} & (4'b0001 << IC[15:14]);
	wire [3:0] dcti = {4{cA & IC[13] & IC[12] & IC[3:2] == 2'b01}} & (4'b0001 << IC[1:0]);
	wire [3:0] mcti = {4{cM & ~IC[29] & ~IC[28] & MC}} & (4'b0001 << IC[27:26]);
	wire [3:0] dwcti= {4{cA & IC[12] & IC[11:10] == 2'b00}} & (4'b0001 << IC[9:8]);	//dest RAM CT++
	wire [3:0] mdma = {4{cD & IC[13] & IC[2]}} & (4'b0001 << IC[1:0]);
	wire hz = T0 & ((xr & IC[21:20] == hb) | (yr & IC[15:14] == hb) | (d_ramr & IC[1:0] == hb) |
	                (d_ram & wb == hb) | d_ctw[hb] | xcti[hb] | ycti[hb] | dcti[hb] | mcti[hb] |
	                cD | d_ra0 | d_wa0);
	wire start  = ph == 3'd0 & RUN & ~hz;
	wire step   = start | ph != 3'd0;
	wire [2:0] pe = start ? 3'd0 : ph;           //executing phase

	//Write-port users that outrank the engine
	wire CPU_WE = ~RUN & DATA_TRANS_WE & CE_R & ~(T0 & ~DDIR & ~DS[2] & DATA_TRANS_ADDR[7:6] == DS[1:0]);
	wire commit = step & pe == 3'd5 & ~DWR_WE & ~CPU_WE;

	//ALU
	wire        ALU_SUB = IC[29:26] == 4'b0101;
	wire [32:0] ALU_LS = {1'b0,AC[31:0]} + {1'b0,P[31:0] ^ {32{ALU_SUB}}} + {32'd0,ALU_SUB};
	wire [16:0] ALU_HS = {1'b0,AC[47:32]} + {1'b0,P[47:32]} + {16'd0,ALU_LS[32]};
	reg  [47:0] ALQ;
	reg         ALC;
	always @* begin
		ALQ = AC; ALC = 1'b0;
		case (IC[29:26])
			4'b0001: {ALC,ALQ[31:0]} = {1'b0,AC[31:0]} & {1'b0,P[31:0]};
			4'b0010: {ALC,ALQ[31:0]} = {1'b0,AC[31:0]} | {1'b0,P[31:0]};
			4'b0011: {ALC,ALQ[31:0]} = {1'b0,AC[31:0]} ^ {1'b0,P[31:0]};
			4'b0100: {ALC,ALQ[31:0]} = ALU_LS;
			4'b0101: {ALC,ALQ[31:0]} = {~ALU_LS[32],ALU_LS[31:0]};
			4'b0110: {ALC,ALQ}       = {ALU_HS,ALU_LS[31:0]};
			4'b1000: {ALQ[31:0],ALC} = {AC[31],AC[31:0]};
			4'b1001: {ALQ[31:0],ALC} = {AC[0],AC[31:0]};
			4'b1010: {ALC,ALQ[31:0]} = {AC[31:0],1'b0};
			4'b1011: {ALC,ALQ[31:0]} = {AC[31:0],AC[31]};
			4'b1111: {ALC,ALQ[31:0]} = {AC[24:0],AC[31:24]};
			default: ;
		endcase
	end
	wire        alu_en = cA & |IC[29:26];
	wire        S31 = ALQ[31], S47 = ALQ[47];
	wire        ZL = ~|ALQ[31:0], ZH = ~|ALQ[47:32];
	wire        OVF31 = ~(AC[31] ^ P[31]) & (AC[31] ^ ALQ[31]);
	wire        UNF31 =  (AC[31] ^ P[31]) & (AC[31] ^ ALQ[31]);
	wire        OVF47 = ~(AC[47] ^ P[47]) & (AC[47] ^ ALQ[47]);

	wire [47:0] MUL = $signed(RX) * $signed(RY);

	//D1 source value
	reg [31:0] IMM;
	always @* begin
		if (cM & ~IC[25]) IMM = {{7{IC[24]}},IC[24:0]};
		else if (cM)      IMM = {{13{IC[18]}},IC[18:0]};
		else              IMM = {{24{IC[7]}},IC[7:0]};
	end
	wire [31:0] D1SRC = d_imms ? IMM : d_alus ? (IC[0] ? ALQ[31:0] : ALQ[47:16]) : (d_ramr | cD) ? RAMQ : 32'hFFFFFFFF;

	//CT
	wire [5:0] ctv0 = CT0, ctv1 = CT1, ctv2 = CT2, ctv3 = CT3;
	function [5:0] ctsel(input [1:0] b, input [5:0] c0, input [5:0] c1, input [5:0] c2, input [5:0] c3);
		case (b) 2'd0: ctsel = c0; 2'd1: ctsel = c1; 2'd2: ctsel = c2; default: ctsel = c3; endcase
	endfunction
	wire [1:0] ebank = pe == 3'd5 ? wb : pe == 3'd4 ? IC[15:14] : pe == 3'd3 ? IC[21:20] : IC[1:0];
	wire [7:0] EADDR = {ebank, ctsel(ebank, CT0, CT1, CT2, CT3)};
	wire [7:0] DADDR = {DS[1:0], ctsel(DS[1:0], CT0, CT1, CT2, CT3)};

	wire [3:0] inc;
	genvar gk;
	generate for (gk = 0; gk < 4; gk++) begin : g_inc
		wire dsel = (cA & IC[13] & IC[12] & ~IC[3] & IC[1:0] == gk);
		assign inc[gk] = xcti[gk] | ycti[gk] | ((dcti[gk] | mcti[gk]) & ~dwcti[gk] & ~rx_conflict) |
		                 (dwcti[gk] & ~(xr & IC[21:20] == gk) & ~(yr & IC[15:14] == gk) & ~dsel & ~rx_conflict) | mdma[gk];
	end endgenerate

	//DMA
	wire DMA_EN = T0 & DMA_ACK;
	wire [7:0] TN0_NEXT = TN0 - 8'd1;
	wire [3:0] dma_ct = {4{~DS[2]}} & (4'b0001 << DS[1:0]);   //CT++ per DMA word
	assign DMA_DO  = DMAQ;
	assign DMA_WE  = DDIR;
	assign DMA_RUN = T0;
	assign DMA_LAST = TN0_NEXT == 8'd0;

	assign DSO  = D1T;
	assign DMAC = IC[17:14];
	assign RA0W = d_ra0 & commit;
	assign WA0W = d_wa0 & commit;
	assign DMAW = cD & commit;
	assign IRQ  = E;

	//Datapath, CT, flags
	always @(posedge CLK) begin
		if (rst) begin
			AC <= 0; P <= 0; RX <= 0; RY <= 0; D1T <= 0;
			CT0 <= 0; CT1 <= 0; CT2 <= 0; CT3 <= 0;
			S <= 0; Z <= 0; C <= 0; V <= 0;
		end else begin
			if (step) case (pe)
				3'd0: begin
					D1T <= D1SRC;
					if (alu_en) case (IC[29:26])
						4'b0001, 4'b0010, 4'b0011, 4'b1000, 4'b1001, 4'b1010, 4'b1011, 4'b1111: begin S <= S31; Z <= ZL; C <= ALC; end
						4'b0100: begin S <= S31; Z <= ZL; C <= ALC; V <= V | OVF31; end
						4'b0101: begin S <= S31; Z <= ZL; C <= ALC; V <= V | UNF31; end
						4'b0110: begin S <= S47; Z <= ZL & ZH; C <= ALC; V <= V | OVF47; end
						default: ;
					endcase
				end
				3'd1: AC <= IC[18] ? ALQ : 48'd0;     //ACS 10: ALU, 01: clear
				3'd2: P <= MUL;
				3'd3: begin
					if (IC[25]) RX <= RAMQ;
					if (IC[24] & IC[23]) P <= {{16{RAMQ[31]}},RAMQ};
				end
				3'd4: begin
					if (IC[19]) RY <= RAMQ;
					if (IC[18:17] == 2'b11) AC <= {{16{RAMQ[31]}},RAMQ};
				end
				default: ;
			endcase
			if (commit) begin
				if (d_rx & ~(cA & IC[25])) RX <= D1T;
				if (d_p  & ~(cA & IC[24])) P  <= {{16{D1T[31]}},D1T};
				if (inc[0]) CT0 <= CT0 + 6'd1;
				if (inc[1]) CT1 <= CT1 + 6'd1;
				if (inc[2]) CT2 <= CT2 + 6'd1;
				if (inc[3]) CT3 <= CT3 + 6'd1;
				if (d_ctw[0]) CT0 <= D1T[5:0];
				if (d_ctw[1]) CT1 <= D1T[5:0];
				if (d_ctw[2]) CT2 <= D1T[5:0];
				if (d_ctw[3]) CT3 <= D1T[5:0];
			end
			if (DMA_EN & CE_R) begin
				if (dma_ct[0]) CT0 <= CT0 + 6'd1;
				if (dma_ct[1]) CT1 <= CT1 + 6'd1;
				if (dma_ct[2]) CT2 <= CT2 + 6'd1;
				if (dma_ct[3]) CT3 <= CT3 + 6'd1;
			end
			if (A == 2'b00 & RE) V <= 0;
		end
	end

	//Sequencer, PC, IC, loop
	always @(posedge CLK) begin
		if (rst) begin
			ph <= 0; IC <= 0; PC <= 0; LOP <= 0; TOP <= 0; LPS_EXE <= 0;
		end else begin
			if (step) ph <= pe == 3'd5 ? (commit ? 3'd0 : 3'd5) : nxt;
			if (commit) begin
				IC <= PRG_Q;
				PC <= PC + 8'd1;
				if (cL & IC[27]) begin
					if (LOP != 12'd0) begin LPS_EXE <= 1; PC <= PC; end
					LOP <= LOP - 12'd1;
				end else if (LPS_EXE) begin
					if (LOP != 12'd0) PC <= PC; else LPS_EXE <= 0;
					LOP <= LOP - 12'd1;
				end
				if (cL & ~IC[27]) begin
					if (LOP != 12'd0) PC <= TOP;
					LOP <= LOP - 12'd1;
				end
				if (d_lop) LOP <= D1T[11:0];
				if (d_pc) begin PC <= D1T[7:0]; TOP <= PC; end
				if (cJ & MC) PC <= IC[7:0];
				if (d_top) TOP <= D1T[7:0];
				if (T0 & dma_prg & d_pc) IC <= 0;
			end
			if (CE & DMA_END_PEND & dma_prg) PC <= TOP;
			if (CE_R) begin
				if (DMA_EN & dma_prg) PC <= PC + 8'd1;
				if (~EX) begin
					if (PRG_TRANS_WE) PC <= PC + 8'd1;
					if (A == 2'b00 & |WE & DI[15]) begin PC <= DI[7:0]; IC <= 0; end
				end
			end
		end
	end

	//DMA state
	always @(posedge CLK) begin
		if (rst) begin
			TN0 <= 0; T0 <= 0; PAUSED <= 0; DDIR <= 0; DS <= 0; DMA_REQ <= 0; DMA_END_PEND <= 0; DMA_END_OLD <= 0;
		end else begin
			if (commit) begin
				if (cD & ~T0) begin
					T0 <= 1;
					TN0 <= IC[13] ? D1T[7:0] : IC[7:0];
					DDIR <= IC[12];
					DS <= IC[10:8];
					DMA_REQ <= 1;
				end
				if (T0 & dma_prg & d_pc) PAUSED <= 1;
			end
			if (CE) begin
				DMA_END_PEND <= 0;
				if (DMA_END_PEND) begin T0 <= 0; PAUSED <= 0; DDIR <= 0; DS <= 0; end
			end
			if (CE_F) begin
				DMA_END_OLD <= DMA_END;
				if (~DMA_END & DMA_END_OLD) DMA_END_PEND <= 1;
			end
			if (CE_R) begin
				if (~EX & A == 2'b00 & |WE & DI[15]) begin T0 <= 0; PAUSED <= 0; DDIR <= 0; DS <= 0; end
				if (DMA_EN) begin
					DMA_REQ <= 0;
					TN0 <= TN0_NEXT;
					if (TN0_NEXT != 8'd0) DMA_REQ <= 1;
				end
			end
		end
	end

	//Data RAM: three read copies (engine, DMA, CPU), one write port
	always @(posedge CLK) begin
		DWR_WE <= T0 & ~DDIR & ~DS[2] & DMA_EN & CE_R;
		DWR_A  <= DADDR;
	end
	wire        RWE = DWR_WE | CPU_WE | (commit & d_ram);
	wire [7:0]  RWA = DWR_WE ? DWR_A : CPU_WE ? DATA_TRANS_ADDR : EADDR;
	wire [31:0] RWD = DWR_WE ? DMA_DI : CPU_WE ? DI : D1T;
	SCUP2_DRAM #(8,32) DATA_RAM_E(CLK, RWA, EADDR, RWD, RWE, RAMQ);
	SCUP2_DRAM #(8,32) DATA_RAM_D(CLK, RWA, DADDR, RWD, RWE, DMAQ);
	SCUP2_DRAM #(8,32) DATA_RAM_C(CLK, RWA, DATA_TRANS_ADDR, RWD, RWE, CPUQ);

	//Program RAM
	wire PRG_WE = T0 ? (dma_prg & DMA_EN & CE_R) : (~RUN & PRG_TRANS_WE & CE_R);
	SCUP2_PRG_RAM #(8,32," ","prg.txt") PRG_RAM(CLK, PC, T0 ? DMA_DI : DI, PRG_WE, PRG_Q);

	//Control port
	always @(posedge CLK) begin
		if (rst) begin
			EX <= 0; EP <= 0; ES <= 0; E <= 0;
			PRG_TRANS_WE <= 0; DATA_TRANS_ADDR <= 0; DATA_TRANS_WE <= 0; DATA_TRANS_RE <= 0;
		end else begin
			if (CE_R) begin
				PRG_TRANS_WE <= 0;
				DATA_TRANS_WE <= 0;
				if (DATA_TRANS_WE) DATA_TRANS_ADDR <= DATA_TRANS_ADDR + 8'd1;
				if (|WE) case (A)
					2'b00: if (DI[25]) EP <= 1;
					       else if (DI[26]) EP <= 0;
					       else begin
					           if (~EX & DI[16]) EX <= 1;
					           else if (EX & ~DI[16]) EX <= 0;
					           if (~EX & DI[17]) ES <= 1;
					       end
					2'b01: PRG_TRANS_WE <= 1;
					2'b10: DATA_TRANS_ADDR <= DI[7:0];
					2'b11: DATA_TRANS_WE <= 1;
				endcase
			end
			DATA_TRANS_RE <= 0;
			if (DATA_TRANS_RE) DATA_TRANS_ADDR <= DATA_TRANS_ADDR + 8'd1;
			if (RE) begin
				case (A)
					2'b00: DO <= {8'h00,T0,S,Z,C,V,E,1'b0,EX&~EP,8'h00,PC};
					2'b11: begin DO <= ~EX | EP ? CPUQ : 32'hFFFFFFFF; DATA_TRANS_RE <= 1; end
					default: DO <= 0;
				endcase
				if (A == 2'b00 & E) E <= 0;
			end
			if (commit) begin
				if (ES) ES <= 0;
				if (cEN) begin EX <= 0; if (IC[27]) E <= 1; end
			end
		end
	end
endmodule
