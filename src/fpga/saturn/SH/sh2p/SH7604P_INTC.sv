module SH7604P_INTC (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	input             NMI_N,
	input       [3:0] IRL_N,
	
	input       [3:0] INT_MASK,
	input             INT_ACK,
	input             INT_ACP,
	output reg  [3:0] INT_LVL,
	output reg  [7:0] INT_VEC,
	output            INT_REQ,
	
	input             VECT_REQ,
	output            VECT_WAIT,
	
	output reg        NMI_REQ,
	
	input      [31:0] IBUS_A,
	input      [31:0] IBUS_DI,
	output     [31:0] IBUS_DO,
	input       [3:0] IBUS_BA,
	input             IBUS_WE,
	input             IBUS_REQ,
	output            IBUS_BUSY,
	output            IBUS_ACT,
	
	output      [3:0] VBUS_A,
	input       [7:0] VBUS_DI,
	output            VBUS_REQ,
	input             VBUS_WAIT,
	
	input             UBC_IRQ,
	input             DIVU_IRQ,
	input       [7:0] DIVU_VEC,
	input             DMAC0_IRQ,
	input       [7:0] DMAC0_VEC,
	input             DMAC1_IRQ,
	input       [7:0] DMAC1_VEC,
	input             WDT_IRQ,
	input             BSC_IRQ,
	input             SCI_ERI_IRQ,
	input             SCI_RXI_IRQ,
	input             SCI_TXI_IRQ,
	input             SCI_TEI_IRQ,
	input             FRT_ICI_IRQ,
	input             FRT_OCI_IRQ,
	input             FRT_OVI_IRQ
);

	// Source codes (INT_ACTIVE / INT_ACCEPTED). A vector-register source is {word index, hi}.
	localparam [3:0] FRT_OVI_INT = 4'd1, FRT_OCI_INT = 4'd2, FRT_ICI_INT = 4'd3, SCI_RXI_INT = 4'd4, SCI_ERI_INT = 4'd5,
	                 SCI_TEI_INT = 4'd6, SCI_TXI_INT = 4'd7, BSC_INT = 4'd8, WDT_INT = 4'd9, DMAC0_INT = 4'd10, DMAC1_INT = 4'd11,
	                 NMI_INT = 4'd12, UBC_INT = 4'd13, IRL_INT = 4'd14, DIVU_INT = 4'd15;
	
	// Registers. Unimplemented bits are not stored: IPRB[7:0], IPRA[3:0], VCR bits 15/7 (VCRD [7:0]) and ICR except NMIL/NMIE/VECMD read 0.
	// The 9 vector bytes live in MLABs: copy A is read by the accepted source, copy B by the bus address.
	reg  [3:0] SCIIP, FRTIP, DIVUIP, DMACIP, WDTIP;
	reg        NMIL, NMIE, VECMD;
	reg  [7:0] VB;    // first write done, per copy B word
	wire [7:0] VV = {3'b000, VB[7], VB[2], VB[1], VB[3], VB[4]};   // per copy A word: VCRWDT, VCRB, VCRA, VCRC, VCRD
	
	//Registers: FFFFFE60-69 and FFFFFEE0-E5
	wire        HIT  = IBUS_A[31:8] == 24'hFFFFFE;
	wire        SEL_A = HIT && IBUS_A[7:4] == 4'h6 && (!IBUS_A[3] || (!IBUS_A[2] && !IBUS_A[1]));
	wire        SEL_B = HIT && IBUS_A[7:4] == 4'hE && !IBUS_A[3] && !(IBUS_A[2] && IBUS_A[1]);
	wire        REG_SEL = SEL_A | SEL_B;
	wire [15:0] WD = IBUS_A[1] ? IBUS_DI[15:0] : IBUS_DI[31:16];
	wire [1:0]  WB = IBUS_A[1] ? IBUS_BA[1:0]  : IBUS_BA[3:2];
	wire        WR = REG_SEL && IBUS_WE && IBUS_REQ;
	wire        WR_ICRH = RES_N && WR && SEL_B && IBUS_A[3:1] == 3'd0 && WB[1];
	wire        R60 = SEL_A && IBUS_A[3:1] == 3'd0, R62 = SEL_A && IBUS_A[3:1] == 3'd1, R64 = SEL_A && IBUS_A[3:1] == 3'd2,
	            R66 = SEL_A && IBUS_A[3:1] == 3'd3, R68 = SEL_A && IBUS_A[3:1] == 3'd4,
	            RE0 = SEL_B && IBUS_A[3:1] == 3'd0, RE2 = SEL_B && IBUS_A[3:1] == 3'd1, RE4 = SEL_B && IBUS_A[3:1] == 3'd2;
	
	//NMI: the edge detector sees the NMIE written in the same clk (as the reference does in simulation).
	reg NMI_N_OLD;
	wire NMIE_NOW = (CE_R && WR_ICRH) ? WD[8] : NMIE;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) NMI_REQ <= 0;
		else if (!RES_N) NMI_REQ <= 0;
		else if (EN && CE_R) begin
			NMI_N_OLD <= NMI_N;
			if (NMI_N == NMIE_NOW && NMI_N_OLD != NMIE_NOW && !NMI_REQ) NMI_REQ <= 1;
			else if (INT_ACP && NMI_REQ) NMI_REQ <= 0;
		end
	end
	
	//IRL: a level is taken after 5 identical samples. IRL_RUN counts the identical samples before the current one (saturating at 4, stored minus 1).
	wire [3:0] IRL_CUR = ~IRL_N;
	reg  [3:0] IRL_PREV, IRL_LVL;
	reg  [1:0] IRL_RUN;
	reg        IRL_HOLD;
	wire       IRL_SAME = IRL_CUR == IRL_PREV;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			IRL_PREV <= 4'hF; IRL_RUN <= 2'd3; IRL_HOLD <= 0;
		end
		else if (!RES_N) begin
			IRL_PREV <= 4'hF; IRL_RUN <= 2'd3; IRL_HOLD <= 0;
		end
		else if (EN && CE_R) begin
			IRL_PREV <= IRL_CUR;
			IRL_RUN <= IRL_SAME ? (IRL_RUN == 2'd3 ? 2'd3 : IRL_RUN + 2'd1) : 2'd0;
			IRL_HOLD <= 1;
			if (IRL_SAME && IRL_RUN == 2'd3) IRL_LVL <= IRL_CUR;
			else if (!IRL_HOLD) IRL_LVL <= 4'h0;
		end
	end
	
	//Priority resolver: running maximum of the accepted levels, starting at the mask; a source wins when its level exceeds it.
	wire [3:0] M0 = INT_MASK;
	wire       W_IRL  = IRL_LVL > M0;
	wire [3:0] M1 = W_IRL ? IRL_LVL : M0;
	wire       W_DIVU = DIVU_IRQ && DIVUIP > M1;
	wire [3:0] M2 = W_DIVU ? DIVUIP : M1;
	wire       W_DMAC = (DMAC0_IRQ || DMAC1_IRQ) && DMACIP > M2;
	wire [3:0] M3 = W_DMAC ? DMACIP : M2;
	wire       W_WDT  = (WDT_IRQ || BSC_IRQ) && WDTIP > M3;
	wire [3:0] M4 = W_WDT ? WDTIP : M3;
	wire       W_SCI  = (SCI_ERI_IRQ || SCI_RXI_IRQ || SCI_TXI_IRQ || SCI_TEI_IRQ) && SCIIP > M4;
	wire [3:0] M5 = W_SCI ? SCIIP : M4;
	wire       W_FRT  = (FRT_ICI_IRQ || FRT_OCI_IRQ || FRT_OVI_IRQ) && FRTIP > M5;
	
	reg [3:0] INT_ACTIVE, INT_ACCEPTED;
	reg [3:0] INT;
	always_comb begin
		if (NMI_REQ)                           INT = NMI_INT;
		else if (UBC_IRQ && INT_MASK != 4'hF)  INT = UBC_INT;
		else if (W_FRT)                        INT = FRT_ICI_IRQ ? FRT_ICI_INT : FRT_OCI_IRQ ? FRT_OCI_INT : FRT_OVI_INT;
		else if (W_SCI)                        INT = SCI_ERI_IRQ ? SCI_ERI_INT : SCI_RXI_IRQ ? SCI_RXI_INT : SCI_TXI_IRQ ? SCI_TXI_INT : SCI_TEI_INT;
		else if (W_WDT)                        INT = WDT_IRQ ? WDT_INT : BSC_INT;
		else if (W_DMAC)                       INT = DMAC0_IRQ ? DMAC0_INT : DMAC1_INT;
		else if (W_DIVU)                       INT = DIVU_INT;
		else if (W_IRL)                        INT = IRL_INT;
		else                                   INT = 4'd0;
	end
	always @(posedge CLK) INT_ACTIVE <= INT;
	assign INT_REQ = |INT_ACTIVE;
	
	always_comb begin
		case (INT_ACTIVE[3:2])
			2'd0:    INT_LVL = |INT_ACTIVE[1:0] ? FRTIP : 4'h0;
			2'd1:    INT_LVL = SCIIP;
			2'd2:    INT_LVL = INT_ACTIVE[1] ? DMACIP : WDTIP;
			default: INT_LVL = !INT_ACTIVE[1] ? 4'hF : INT_ACTIVE[0] ? DIVUIP : IRL_LVL;
		endcase
	end
	
	reg  [2:0] IRL_LVL_SAVE;
	wire [7:0] IRL_VEC = !VECMD ? {5'b01000,IRL_LVL_SAVE} : VBUS_DI;
	wire [2:0] CI = INT_ACCEPTED[3:1];
	wire [13:0] VEC_W = RA[CI];
	wire [6:0] VEC_RAM = !VV[CI] ? 7'h00 : INT_ACCEPTED[0] ? VEC_W[13:7] : VEC_W[6:0];
	always_comb begin
		case (INT_ACCEPTED)
			NMI_INT:     INT_VEC = 8'd11;
			UBC_INT:     INT_VEC = 8'd12;
			IRL_INT:     INT_VEC = IRL_VEC;
			DIVU_INT:    INT_VEC = DIVU_VEC;
			DMAC0_INT:   INT_VEC = DMAC0_VEC;
			DMAC1_INT:   INT_VEC = DMAC1_VEC;
			default:     INT_VEC = {1'b0,VEC_RAM};
		endcase
	end
	
	reg [3:0] VBA;
	reg       VBREQ;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			VBREQ <= 0;
			VBA <= '0;
			INT_ACCEPTED <= '0;
		end else if (EN && CE_F) begin	
			if (VECT_REQ && !VBREQ) begin
				VBREQ <= 1;
				VBA <= INT_MASK;
			end else if (VBREQ && !VBUS_WAIT) begin
				VBREQ <= 0;
			end
		end else if (EN && CE_R) begin	
			if (INT_ACP) begin 
				INT_ACCEPTED <= INT_ACTIVE; 
				IRL_LVL_SAVE <= IRL_LVL[3:1]; 
			end
			if (INT_ACK) INT_ACCEPTED <= '0;
		end
	end
	assign VECT_WAIT = VBREQ;
	
	assign VBUS_A   = VBA;
	assign VBUS_REQ = VBREQ && INT_ACCEPTED == IRL_INT && VECMD;
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			{SCIIP, FRTIP, DIVUIP, DMACIP, WDTIP} <= '0;
			{NMIL, NMIE, VECMD} <= '0;
		end
		else if (CE_R) begin
			NMIL <= NMI_N;
			if (!RES_N) begin
				{SCIIP, FRTIP, DIVUIP, DMACIP, WDTIP} <= '0;
					{NMIE, VECMD} <= '0;
			end
			else if (WR) begin
				if (R60 && WB[1]) {SCIIP, FRTIP} <= WD[15:8];
				if (RE0 && WB[1]) NMIE <= WD[8];
				if (RE0 && WB[0]) VECMD <= WD[0];
				if (RE2 && WB[1]) {DIVUIP, DMACIP} <= WD[15:8];
				if (RE2 && WB[0]) WDTIP <= WD[7:4];
			end
		end
	end
	
	// Vector bytes (copy A, read by the accepted source) and every readable register (copy B, read by the bus address) live in MLABs.
	// A register reads as 0 until its first write after reset; a write merges the bytes it does not carry with the old word.
	wire       RWR  = CE_R && RES_N && WR;
	wire       VWR  = R62 || R64 || R66 || R68 || RE4;
	wire [2:0] WIDX = IBUS_A[7] ? 3'd4 : IBUS_A[3] ? 3'd0 : IBUS_A[2:1] == 2'd3 ? 3'd1 : IBUS_A[2:1] == 2'd1 ? 3'd2 : 3'd3;   // copy A word
	wire [2:0] BIDX = IBUS_A[7] ? 3'd5 + {1'b0, IBUS_A[2:1]} : IBUS_A[3:1];                                                     // copy B word
	wire [7:0] BMH  = (R60 || RE2) ? 8'hFF : RE0 ? 8'h01 : 8'h7F;
	wire [7:0] BML  = (R60 || R68) ? 8'h00 : RE0 ? 8'h01 : RE2 ? 8'hF0 : 8'h7F;
	(* ramstyle = "MLAB, no_rw_check" *) reg [13:0] RA [0:7];
	(* ramstyle = "MLAB, no_rw_check" *) reg [15:0] RB [0:7];
	wire [15:0] OLDB = VB[BIDX] ? RB[BIDX] : 16'h0000;
	wire [15:0] NEWB = {WB[1] ? WD[15:8] & BMH : OLDB[15:8], WB[0] ? WD[7:0] & BML : OLDB[7:0]};
	always @(posedge CLK) begin
		if (RWR) RB[BIDX] <= NEWB;
		if (RWR && VWR) RA[WIDX] <= {NEWB[14:8], NEWB[6:0]};
	end
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) VB <= 8'h00;
		else if (CE_R) begin
			if (!RES_N) VB <= 8'h00;
			else if (WR) VB[BIDX] <= 1'b1;
		end
	end
	
	reg [15:0] BUS_DO;
	wire       BRD = REG_SEL && !IBUS_WE && IBUS_REQ;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			BUS_DO <= '0;
		end
		else if (CE_F) begin
			if (BRD) BUS_DO <= OLDB | {RE0 & NMIL, 15'h0000};
		end
	end
	
	assign IBUS_DO = {2{BUS_DO}};
	assign IBUS_BUSY = 0;
	assign IBUS_ACT = REG_SEL;

endmodule
