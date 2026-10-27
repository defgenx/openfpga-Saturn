module SH2P_core
#(parameter bit VER=1)//0-SH1,1-SH2
 (
	input             CLK,
	input             RST_N,
	input             CE,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	input             NMI_N,
	
	output     [31:0] BUS_A,
	input      [31:0] BUS_DI,
	output     [31:0] BUS_DO,
	output            BUS_WR,
	output      [3:0] BUS_BA,
	output            BUS_REQ,
	output            BUS_ID,	//instruction=1,data=0
	output            BUS_TAS,
	input             BUS_WAIT,
	
	output      [1:0] MAC_SEL,
	output      [3:0] MAC_OP,
	output            MAC_S,
	output            MAC_WE,
	
	input       [3:0] INT_LVL,
	input       [7:0] INT_VEC,
	input             INT_REQ,
	output      [3:0] INT_MASK,
	output            INT_ACK,
	output            INT_ACP,
	
	output            VECT_REQ,
	input             VECT_WAIT,
	
	output            SLEEP
`ifdef POCKET_DEBUG_OVERLAY
	,output     [31:0] DBG_PC
`endif
);

	
	import SH2P_PKG::*;

	//CPU registers
	bit [31: 0] PC;
	bit [31: 0] GBR;
	bit [31: 0] VBR;
	SR_t        SR;
	
	PipelineState_t PIPE;
	DecInstr_t  EX_DI;
	bit         IF_STALL;
	bit         ID_STALL;
	bit         EX_STALL;
	bit [31: 0] RD_SAVE;
	bit         WBRD_Z;
	bit         WB2_RZ;
	bit         WB_LDP;
	bit [ 2: 0] STATE;
	DecInstr_t  ID_DECI;
	bit  [ 7:0] ID_CLS;
	bit         SLP;
	bit [31: 0] ALU_RES;
	bit         ALU_T;
	SR_t        SR_NEW;
	bit         BR_T;
	bit         RES_EXP;
	bit         INT_REQ_LATCH;
	bit [ 3: 0] INT_LVL_LATCH;
	bit         ILI_EXP,ILSI;
	
	bit         MA_ACTIVE;
	bit         IF_ACTIVE;
	bit         VECT_ACTIVE;
	bit         INST_SPLIT;
	bit         MAWB_STALL;
	bit         IFID_STALL;
	// synopsys translate_off
	bit         LOAD_SPLIT;
	// synopsys translate_on
	
	
	//Register file: read in EX; results written early (see docs/sh2-rewrite.md 4.1)
	bit [31: 0] REGS_RAQ;
	bit [31: 0] REGS_RBQ;
	bit [31: 0] REGS_R0Q;
	bit [ 4: 0] W1_N;
	bit [31: 0] W1_D;
	bit         W1_E;
	bit [ 4: 0] W2_N;
	bit [31: 0] W2_D;
	bit         W2_E;
	
	SH2P_regfile regfile (.CLK(CLK), .RST_N(RST_N), .CE_R(CE), .EN(EN),
	                      .W1_ADDR(W1_N), .W1_D(W1_D), .W1_E(W1_E), .W2_ADDR(W2_N), .W2_D(W2_D), .W2_E(W2_E),
	                      .RA_ADDR(EX_DI.RA.N), .RA_Q(REGS_RAQ), .RB_ADDR(EX_DI.RB.N), .RB_Q(REGS_RBQ), .R0_Q(REGS_R0Q));

	
	//**********************************************************
	//PC
	//**********************************************************
	wire PC_STALL = (MA_ACTIVE & BUS_WAIT) | (IF_ACTIVE & BUS_WAIT) | (VECT_ACTIVE & VECT_WAIT) | INST_SPLIT | IFID_STALL;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			PC <= '0;
		end
		else if (!RES_N) begin
			PC <= '0;
		end
		else if (EN && CE) begin
			if (EX_DI.PCW && !EX_STALL) begin
				PC <= ALU_RES;
			end else if (!PC_STALL && !ID_DECI.SLP && !SLP) begin
				PC <= PC + 2;
			end
		end
	end

	wire LOAD_ISSUE = (EX_DI.MEM.R | (EX_DI.MAC.R & ~EX_DI.MEM.W)) & ((EX_DI.RA.W & EX_DI.RA.N == ID_DECI.RA.N & ID_DECI.RA.R) |
	                                                                                 (EX_DI.RA.W & EX_DI.RA.N == ID_DECI.RB.N & ID_DECI.RB.R) |
	                                                                                 (EX_DI.RA.W & EX_DI.RA.N ==         5'd0 & ID_DECI.R0R ));
	wire INST_ISSUE = ((IFID_STALL & ~PC[1]) | ~PIPE.ID.PC[1]) & (EX_DI.MEM.R | EX_DI.MEM.W | EX_DI.MAC.R | EX_DI.MAC.W) & ~ID_DECI.IID;
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			MA_ACTIVE <= 0;
			IF_ACTIVE <= 0;
			VECT_ACTIVE <= 0;
			INST_SPLIT <= 0;
			MAWB_STALL <= 0;
			// synopsys translate_off
			LOAD_SPLIT <= 0;
			// synopsys translate_on
		end
		else if (!RES_N) begin
			MA_ACTIVE <= 0;
			IF_ACTIVE <= 0;
			INST_SPLIT <= 0;
			MAWB_STALL <= 0;
		end
		else if (EN && CE) begin
			// synopsys translate_off
			if (LOAD_ISSUE && !INST_SPLIT && (!MA_ACTIVE || !BUS_WAIT) && (STATE == 3'd0) && !EX_STALL) begin
				LOAD_SPLIT <= 1;
			end else if (INST_SPLIT && (!MA_ACTIVE || !BUS_WAIT)) begin
				LOAD_SPLIT <= 0;
			end
			// synopsys translate_on
			
			if ((EX_DI.MEM.R || EX_DI.MEM.W || EX_DI.MAC.R || EX_DI.MAC.W) && !INST_SPLIT && (!IF_ACTIVE || !BUS_WAIT) && !(VECT_ACTIVE && VECT_WAIT)) begin
				MA_ACTIVE <= 1;
			end else if (!BUS_WAIT && MA_ACTIVE) begin
				MA_ACTIVE <= 0;
			end
			
			if ((PC[1] && (!MA_ACTIVE || !BUS_WAIT) && !IFID_STALL && !EX_STALL) || (PIPE.EX.BC && (!MA_ACTIVE || !BUS_WAIT))) begin
				IF_ACTIVE <= 1;
			end else if (!BUS_WAIT && IF_ACTIVE && !PC_STALL) begin
				IF_ACTIVE <= 0;
			end
			
			if (EX_DI.VECR && !INST_SPLIT && (!IF_ACTIVE || !BUS_WAIT) && (!MA_ACTIVE || !BUS_WAIT)) begin
				VECT_ACTIVE <= 1;
			end else if (!VECT_WAIT && VECT_ACTIVE) begin
				VECT_ACTIVE <= 0;
			end
			
			if ((INST_ISSUE && !INST_SPLIT && (!MA_ACTIVE || !BUS_WAIT) && (!IFID_STALL || STATE == ID_DECI.LST)) || 
				 (LOAD_ISSUE && !INST_SPLIT && (!MA_ACTIVE || !BUS_WAIT) && (STATE == 3'd0) && !EX_STALL)) begin
				INST_SPLIT <= 1;
			end else if (INST_SPLIT && (!MA_ACTIVE || !BUS_WAIT)) begin
				INST_SPLIT <= 0;
			end
			
			if (INST_SPLIT && (!MA_ACTIVE || !BUS_WAIT)) begin
				MAWB_STALL <= 1;
			end else if (MAWB_STALL && (!IF_ACTIVE || !BUS_WAIT)) begin
				MAWB_STALL <= 0;
			end
		end
	end
	
	wire BUS_STALL = (MA_ACTIVE & BUS_WAIT) | (IF_ACTIVE & BUS_WAIT) | (VECT_ACTIVE & VECT_WAIT);
	
	
	//**********************************************************
	// IF stage
	//**********************************************************
	assign IF_STALL = BUS_STALL | INST_SPLIT | IFID_STALL;
	
	IFtoID_t   SAVE_ID;
	always @(posedge CLK or negedge RST_N) begin
		bit [15: 0] SAVE_IR;
		bit [15: 0] NEW_IR;
		
		if (!RST_N) begin
			PIPE.ID.IR <= 16'h0000;
			PIPE.ID.PC <= '0;
			SAVE_IR <= '0;
		end
		else if (!RES_N) begin
			PIPE.ID.IR <= 16'h0000;
			PIPE.ID.PC <= '0;
			SAVE_IR <= '0;
		end
		else if (EN && CE) begin
			if (!PC[1] || PIPE.MA.BC) begin
				NEW_IR = PC[1] ? BUS_DI[15:0] : BUS_DI[31:16];
			end
			else begin
				NEW_IR = SAVE_IR;
			end
			
			if (ID_DECI.SLP || SLP) begin
				NEW_IR = 16'h0009;
			end
				
			if (!IF_STALL) begin
				if (!PC[1] || PIPE.MA.BC) begin
					SAVE_IR <= BUS_DI[15:0];
				end
				
				if (ID_DECI.LST == 3'd0) begin
					PIPE.ID.IR <= NEW_IR;
					PIPE.ID.PC <= PC;
				end
				else begin
					SAVE_ID.IR <= NEW_IR;
					SAVE_ID.PC <= PC;
				end
			end
			
			if (!ID_STALL) begin
				if ((ID_DECI.LST != 3'd0) && (STATE == ID_DECI.LST)) begin
					PIPE.ID <= SAVE_ID;
				end
			end
		end
	end

	//**********************************************************
	//ID stage
	//**********************************************************
	assign ID_STALL = BUS_STALL | INST_SPLIT;
	
	wire INT_BLOCKED = EX_DI.IBI;
	wire ID_DELAY_SLOT = ~EX_DI.BR.BI & (EX_DI.BR.BT == CB | EX_DI.BR.BT == UCB);
	
	wire INT_EXP = ((INT_REQ && !INT_BLOCKED && !ID_DELAY_SLOT && !IFID_STALL) || INT_REQ_LATCH);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			RES_EXP <= 1;
			INT_REQ_LATCH <= 0;
			INT_LVL_LATCH <= '0;
			ILI_EXP <= 0;
		end
		else if (!RES_N) begin
			RES_EXP <= 1;
			INT_REQ_LATCH <= 0;
			INT_LVL_LATCH <= '0;
			ILI_EXP <= 0;
		end
		else if (EN && CE) begin
			if (!ID_STALL) begin
				if (STATE == 3'd5 && RES_EXP) begin
					RES_EXP <= 0;
				end
				
				if (INT_REQ && !INT_BLOCKED && !ID_DELAY_SLOT && !IFID_STALL && !INT_REQ_LATCH) begin
					INT_REQ_LATCH <= 1;
					INT_LVL_LATCH <= INT_LVL;
				end else if (STATE == 3'd7 && INT_REQ_LATCH) begin
					INT_REQ_LATCH <= 0;
				end
				
				if (ID_DECI.ILI && !RES_EXP && !INT_EXP && !ILI_EXP) begin
					ILI_EXP <= 1;
					ILSI <= ID_DELAY_SLOT;
				end else if (STATE == 3'd6 && ILI_EXP) begin
					ILI_EXP <= 0;
				end
			end
		end
	end
	
	wire [15:0] DEC_IR = RES_EXP || INT_EXP ? 16'h0000 : 
								ID_DELAY_SLOT && !EX_DI.BR.BD ? 16'h0009 :
								IFID_STALL ? PIPE.EX.IR : PIPE.ID.IR;
								
	assign BR_T = EX_DI.CTRL.W && EX_DI.CTRL.S == SR_ ? SR_NEW.T : SR.T;

	SH2P_dec #(VER) dec (.IR(DEC_IR), .STATE(STATE), .T(BR_T), .DS(ID_DELAY_SLOT), .RES_EXP(RES_EXP), .INT_EXP(INT_REQ_LATCH), .ILI_EXP(ILI_EXP), .ILSI(ILSI), .DECI(ID_DECI), .CLS_O(ID_CLS));
	SH2P_decrom decrom (.CLK(CLK), .EN_A(EN && CE && !ID_STALL), .RESET(!RST_N || !RES_N), .CLS_D(ID_CLS), .IR(PIPE.EX.IR), .DI(EX_DI));
	
	wire [ 2: 0] NEXT_STATE = STATE == ID_DECI.LST ? 3'd0 : STATE + 3'd1;
	always @(posedge CLK or negedge RST_N) begin
		bit BR_COND;
		
		if (!RST_N) begin
			PIPE.EX.IR <= '0;
			PIPE.EX.PC <= '0;
			PIPE.EX.BC <= 0;
			STATE <= '0;
			IFID_STALL <= 0;
			SLP <= 1;
		end
		else if (!RES_N) begin
			PIPE.EX.IR <= '0;
			PIPE.EX.PC <= '0;
			PIPE.EX.BC <= 0;
			STATE <= '0;
			IFID_STALL <= 0;
			SLP <= 0;
		end
		else if (EN && CE) begin
			BR_COND = ID_DECI.BR.BI & ((BR_T == ID_DECI.BR.BCV) | (ID_DECI.BR.BT == UCB));
			
			if (!ID_STALL) begin
				PIPE.EX.IR <= DEC_IR;
				PIPE.EX.PC <= PIPE.ID.PC;
				PIPE.EX.BC <= BR_COND;
				STATE <= NEXT_STATE;
				IFID_STALL <= |NEXT_STATE;
				
				if (ID_DECI.SLP) SLP <= 1;
				if (SLP && INT_REQ) SLP <= 0;
			end
		end
	end
	
	//**********************************************************
	//EX stage
	//**********************************************************
	//Operand sources: the register file (execute results are written there when the instruction leaves EX),
	//the load-data registers RD_SAVE (load in MA) and WB.RD (load in WB), and the microcode forwarding flags.
	wire MA_LD = (PIPE.MA.DI.MEM.R & ~PIPE.MA.DI.MAC.W) | (PIPE.MA.DI.MAC.R & ~PIPE.MA.DI.MEM.W);
	wire WB_LD = (PIPE.WB.DI.MEM.R & ~PIPE.WB.DI.MAC.W) | (PIPE.WB.DI.MAC.R & ~PIPE.WB.DI.MEM.W);
	wire MA_WA = PIPE.MA.DI.RA.W & ~MA_LD;
	wire MA_WB = PIPE.MA.DI.RB.W & (~PIPE.MA.DI.RA.W | PIPE.MA.DI.RA.N != PIPE.MA.DI.RB.N);
	
	//MA instruction already wrote this register (youngest writer wins)
	wire BP_A_EXEX = EX_DI.RA.R & (((EX_DI.RA.N == PIPE.MA.DI.RA.N) & MA_WA) | ((EX_DI.RA.N == PIPE.MA.DI.RB.N) & MA_WB));
	wire BP_B_EXEX = EX_DI.RB.R & (((EX_DI.RB.N == PIPE.MA.DI.RA.N) & MA_WA) | ((EX_DI.RB.N == PIPE.MA.DI.RB.N) & MA_WB));
	wire BP_C_EXEX = EX_DI.R0R & (((5'd0            == PIPE.MA.DI.RA.N) & MA_WA) | ((5'd0            == PIPE.MA.DI.RB.N) & MA_WB));
	
	wire BP_A_MALD = (EX_DI.RA.N == PIPE.MA.DI.RA.N) & EX_DI.RA.R & PIPE.MA.DI.RA.W & MA_LD;
	wire BP_B_MALD = (EX_DI.RB.N == PIPE.MA.DI.RA.N) & EX_DI.RB.R & PIPE.MA.DI.RA.W & MA_LD;
	wire BP_C_MALD = (5'd0            == PIPE.MA.DI.RA.N) & EX_DI.R0R  & PIPE.MA.DI.RA.W & MA_LD;
	
	wire BP_A_WBLD = (EX_DI.RA.N == PIPE.WB.DI.RA.N) & EX_DI.RA.R & PIPE.WB.DI.RA.W & WB_LD;
	wire BP_B_WBLD = (EX_DI.RB.N == PIPE.WB.DI.RA.N) & EX_DI.RB.R & PIPE.WB.DI.RA.W & WB_LD;
	wire BP_C_WBLD = (5'd0            == PIPE.WB.DI.RA.N) & EX_DI.R0R  & PIPE.WB.DI.RA.W & WB_LD;
	
	bit [31: 0] REG_A;
	bit [31: 0] REG_B;
	bit [31: 0] REG_C;
	always_comb begin
		bit [11: 0] ir_imm;
		bit [ 7: 0] vec;
		bit [31: 0] temp, IMM_VAL, SCR_VAL;
		bit [31: 0] BP_A, BP_B, BP_C;
		
		ir_imm = PIPE.EX.IR[11:0];
		vec = RES_EXP       ? {6'b000000,~NMI_N,1'b0} : 
		      INT_REQ_LATCH ? INT_VEC : 
				ILI_EXP       ? 8'h04 | {6'b000000,ILSI,1'b0} : 
				                PIPE.EX.IR[7:0];
		
		case (EX_DI.IMMT)
			ZIMM4:  temp = {{28{1'b0}},      ir_imm[ 3:0]};
			SIMM8:  temp = {{24{ir_imm[ 7]}},ir_imm[ 7:0]};
			ZIMM8:  temp = {{24{1'b0}},      ir_imm[ 7:0]};
			SIMM12: temp = {{20{ir_imm[11]}},ir_imm[11:0]};
			ZERO:   temp = 32'h00000000;
			ONE:    temp = 32'h00000001;
			VECT:   temp = {{24{1'b0}},      vec};
			default: temp = 32'h00000000;
		endcase
		
		if (EX_DI.BR.BI) begin
			IMM_VAL = {temp[30:0],1'b0};
		end else begin
			case (EX_DI.MEM.SZ)
				2'b00:   IMM_VAL = temp;
				2'b01:   IMM_VAL = {temp[30:0],1'b0};
				default: IMM_VAL = {temp[29:0],2'b00};
			endcase
		end
		
		case (EX_DI.CTRL.S)
			SR_:  SCR_VAL = SR & 32'h000003F3;
			GBR_: SCR_VAL = GBR;
			VBR_: SCR_VAL = VBR;
			default: SCR_VAL = 32'h00000000;
		endcase
		
		if (!BP_A_EXEX && BP_A_MALD) begin
			BP_A = RD_SAVE;
		end
		else if (EX_DI.DP.BPLDA || (!BP_A_EXEX && BP_A_WBLD)) begin
			BP_A = PIPE.WB.RD;
		end
		else if (EX_DI.DP.BPWBA) begin
			BP_A = {31'b0,~WB2_RZ};
		end
		else begin
			BP_A = REGS_RAQ;
		end
	
		REG_A = BP_A;
		
		if (EX_DI.DP.BPMAB) begin
			BP_B = PIPE.MA.RES;
		end
		else if (!BP_B_EXEX && BP_B_MALD) begin
			BP_B = RD_SAVE;
		end
		else if (!BP_B_EXEX && BP_B_WBLD) begin
			BP_B = PIPE.WB.RD;
		end
		else begin
			BP_B = REGS_RBQ;
		end
		
		case (EX_DI.DP.RSB)
			GRX: REG_B = BP_B;
			BPC: REG_B = {PC[31:2],PC[1:0] & {2{~EX_DI.DP.PCM}}};
			TPC: REG_B = SAVE_ID.PC;
			IPC: REG_B = PIPE.EX.PC;
			SCR: REG_B = SCR_VAL;
			default: REG_B = 32'h0;
		endcase
		
		if (!BP_C_EXEX && BP_C_MALD) begin
			BP_C = RD_SAVE;
		end
		else if (!BP_C_EXEX && BP_C_WBLD) begin
			BP_C = PIPE.WB.RD;
		end
		else begin
			BP_C = REGS_R0Q;
		end
		
		case (EX_DI.DP.RSC)
			1'b0: REG_C = BP_C;
			1'b1: REG_C = IMM_VAL;
		endcase
	end
	
	wire [31:0] ALU_A = EX_DI.ALU.SA ? REG_C : REG_A;
	wire [31:0] ALU_B = EX_DI.ALU.SB ? REG_C : REG_B;
	SH2P_alu alu (.A(ALU_A), .B(ALU_B), .OP(EX_DI.ALU.OP), .CD(EX_DI.ALU.CD), .CMP(EX_DI.ALU.CMP), .TAS(EX_DI.TAS),
	              .T(SR.T), .M(SR.M), .Q(SR.Q), .RES(ALU_RES), .ALU_T(ALU_T));
	
	bit [31: 0] MA_ADDR;
	always_comb begin
		MA_ADDR = ALU_RES;
		case (EX_DI.MEM.ADDS)
			ALUA:    MA_ADDR = REG_A;
			ALUB:    MA_ADDR = REG_B;
			ALURES:  MA_ADDR = ALU_RES;
			default:;
		endcase
	end
	
	bit [31: 0] MA_WD;
	always_comb begin
		MA_WD = ALU_RES;
		case (EX_DI.MEM.WDS)
			ALUA: MA_WD = REG_A;
			ALUB: MA_WD = REG_B;
			ALURES: MA_WD = ALU_RES;
			default:;
		endcase
	end
	
	assign EX_STALL = BUS_STALL | INST_SPLIT;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			PIPE.MA.IR <= '0;
			PIPE.MA.DI <= DECI_RESET;
			PIPE.MA.BC <= 0;
			PIPE.MA.RES <= '0;
			PIPE.MA.ADDR <= '0;
			PIPE.MA.WD <= '0;
		end
		else if (!RES_N) begin
			PIPE.MA.IR <= '0;
			PIPE.MA.DI <= DECI_RESET;
			PIPE.MA.PC <= '0;
			PIPE.MA.BC <= 0;
			PIPE.MA.RES <= '0;
			PIPE.MA.ADDR <= '0;
			PIPE.MA.WD <= '0;
		end
		else if (EN && CE) begin
			if (!EX_STALL) begin
				PIPE.MA.IR <= PIPE.EX.IR;
				PIPE.MA.DI <= EX_DI;
				PIPE.MA.PC <= PIPE.EX.PC;
				PIPE.MA.BC <= PIPE.EX.BC;
				PIPE.MA.RES <= EX_DI.BR.BI ? REG_B : ALU_RES;
				PIPE.MA.ADDR <= MA_ADDR;
				PIPE.MA.WD <= MA_WD;
			end
		end
	end
	
	always_comb begin
		SR_NEW = SR & 32'h000003F3;
		case (EX_DI.CTRL.SRS)
			LOAD: SR_NEW = ALU_RES;
			ALU:case (EX_DI.ALU.OP)
					ADD: SR_NEW.T = ALU_T;
					LOG: SR_NEW.T = ALU_T;
					SHIFT: SR_NEW.T = ALU_T;
					DIV: begin
						SR_NEW.Q = REG_A[31] ^ SR.M ^ ALU_T;
						SR_NEW.T = (REG_A[31] ^ SR.M ^ ALU_T) ~^ SR.M;
					end
					NOP: SR_NEW.T = ALU_RES[0];
					default:;
				endcase
			DIV0S: begin
				SR_NEW.Q = REG_A[31];
				SR_NEW.M = REG_B[31];
				SR_NEW.T = REG_A[31] ^ REG_B[31];
			end
			DIV0U: begin
				SR_NEW.Q = 0;
				SR_NEW.M = 0;
				SR_NEW.T = 0;
			end
			IMSK: SR_NEW.I = INT_LVL_LATCH;
			default:;
		endcase
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			SR <= SR_RESET;
			GBR <= '0;
			VBR <= '0;
		end
		else if (!RES_N) begin
			SR <= SR_RESET;
			GBR <= '0;
			VBR <= '0;
		end
		else if (EN && CE) begin
			if (!EX_STALL) begin
				if (EX_DI.CTRL.W) begin
					case (EX_DI.CTRL.S)
						SR_:  SR <= SR_NEW & 32'h000003F3;
						GBR_: GBR <= ALU_RES;
						VBR_: VBR <= ALU_RES;
						default:;
					endcase
				end
			end
		end
	end
	
	
	//**********************************************************
	//MA stage
	//**********************************************************
	bit [31: 0] MA_RDATA;
	always_comb begin
		bit [ 1: 0] mask;
		bit [31: 0] temp;

		case (PIPE.MA.DI.MEM.SZ)
			2'b00:   mask = 2'b11;
			2'b01:   mask = 2'b10;
			default: mask = 2'b00;
		endcase
		
		temp = ByteShiftRigth(BUS_DI, (~PIPE.MA.ADDR[1:0] & mask));
		
		case (PIPE.MA.DI.MEM.SZ)
			2'b00:   MA_RDATA = {{24{temp[ 7]}},temp[ 7:0]};
			2'b01:   MA_RDATA = {{16{temp[15]}},temp[15:0]};
			default: MA_RDATA = temp;
		endcase
	end
	
	wire MA_STALL = BUS_STALL | MAWB_STALL;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			PIPE.WB.IR <= '0;
			PIPE.WB.DI <= DECI_RESET;
			PIPE.WB.RD <= '0;
		end
		else if (!RES_N) begin
			PIPE.WB.IR <= '0;
			PIPE.WB.DI <= DECI_RESET;
			PIPE.WB.RD <= '0;
		end
		else if (EN && CE) begin
			if (!MA_STALL && !INST_SPLIT) begin
				PIPE.WB.IR <= PIPE.MA.IR;
				PIPE.WB.DI <= PIPE.MA.DI;
				PIPE.WB.PC <= PIPE.MA.PC;
				PIPE.WB.RD <= MA_RDATA;
				WBRD_Z <= (MA_RDATA[7:0] == 8'h0);
				RD_SAVE <= MA_RDATA;
			end
			else if (!MA_STALL && INST_SPLIT) begin
				RD_SAVE <= MA_RDATA;
			end
			else if (!(IF_ACTIVE & BUS_WAIT) && MAWB_STALL) begin
				PIPE.WB.IR <= PIPE.MA.IR;
				PIPE.WB.DI <= PIPE.MA.DI;
				PIPE.WB.PC <= PIPE.MA.PC;
				PIPE.WB.RD <= RD_SAVE;
				WBRD_Z <= (RD_SAVE[7:0] == 8'h0);
			end
		end
	end
	
	bit [31: 0] MA_WDATA;
	bit [ 3: 0] MA_BA;
	always_comb begin
		bit [31: 0] temp;

		temp = PIPE.MA.WD;
		
		case (PIPE.MA.DI.MEM.SZ)
			2'b00:   MA_WDATA = {temp[7:0],temp[7:0],temp[7:0],temp[7:0]};
			2'b01:   MA_WDATA = {temp[15:0],temp[15:0]};
			default: MA_WDATA = temp;
		endcase
		
		case (PIPE.MA.DI.MEM.SZ)
			2'b00:   MA_BA = 4'b0001 << ~PIPE.MA.ADDR[1:0];
			2'b01:   MA_BA = 4'b0011 << {~PIPE.MA.ADDR[1],1'b0};
			default: MA_BA = 4'b1111;
		endcase
	end
	
	//**********************************************************
	//WB stage
	//**********************************************************
	wire WB_STALL = BUS_STALL | MAWB_STALL;
	//Events at which the MA instruction moves to WB (the same two conditions as the WB register update above)
	wire WB_EV = (!MA_STALL && !INST_SPLIT) || (!(IF_ACTIVE & BUS_WAIT) && MAWB_STALL);
	
	//TAS: zero flag of the byte loaded two stages earlier (golden WB2.RESA is only compared with zero)
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			WB2_RZ <= 0;
		end
		else if (EN && CE) begin
			if (WB_EV) WB2_RZ <= WBRD_Z;
		end
	end
	
	//Execute results are written when the instruction leaves EX (slot R, live ALU data);
	//load / MAC-read data when the load has entered WB (slot F, data WB.RD), unless a younger instruction wrote the same register.
	wire EX_LD = (EX_DI.MEM.R & ~EX_DI.MAC.W) | (EX_DI.MAC.R & ~EX_DI.MEM.W);
	wire EX_WA = EX_DI.RA.W & ~EX_LD;
	wire EX_WB = EX_DI.RB.W & (~EX_DI.RA.W | EX_DI.RA.N != EX_DI.RB.N);
	assign W1_E = (EX_WA | EX_WB) & ~EX_STALL & RES_N;
	assign W1_N = EX_WA ? EX_DI.RA.N : EX_DI.RB.N;
	assign W1_D = EX_DI.BR.BI ? REG_B : ALU_RES;
	
	wire LD_KILL = (MA_WA & (PIPE.MA.DI.RA.N == PIPE.WB.DI.RA.N)) | (MA_WB & (PIPE.MA.DI.RB.N == PIPE.WB.DI.RA.N));
	assign W2_E = CE_F & WB_LDP & ~LD_KILL;
	assign W2_N = PIPE.WB.DI.RA.N;
	assign W2_D = PIPE.WB.RD;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			WB_LDP <= 0;
		end
		else if (!RES_N) begin
			WB_LDP <= 0;
		end
		else if (EN && CE) begin
			if (WB_EV) WB_LDP <= MA_LD & PIPE.MA.DI.RA.W;
		end
		else if (EN && CE_F) begin
			WB_LDP <= 0;
		end
	end
	
	//Ports
	assign BUS_A = MA_ACTIVE ? PIPE.MA.ADDR : (PC & 32'hFFFFFFFC);
	assign BUS_DO = MA_WDATA;
	assign BUS_WR = PIPE.MA.DI.MEM.W & MA_ACTIVE;
	assign BUS_BA = MA_BA | {4{IF_ACTIVE & ~INST_SPLIT & ~IFID_STALL}};
	assign BUS_REQ = ((PIPE.MA.DI.MEM.R | PIPE.MA.DI.MEM.W) & MA_ACTIVE & ~MAWB_STALL) | (IF_ACTIVE & ~INST_SPLIT & ~IFID_STALL);
	assign BUS_ID = ~(PIPE.MA.DI.MEM.DF & MA_ACTIVE & ~MAWB_STALL);
	assign BUS_TAS = PIPE.MA.DI.TAS & MA_ACTIVE & ~MAWB_STALL;
	
	assign MAC_SEL = PIPE.MA.DI.MAC.S & {2{(MA_ACTIVE & ~MAWB_STALL)}};
	assign MAC_OP = PIPE.MA.DI.MAC.OP & {4{(MA_ACTIVE & ~MAWB_STALL)}};
	assign MAC_S = SR.S;
	assign MAC_WE = |PIPE.MA.DI.MAC.S & PIPE.MA.DI.MAC.W & MA_ACTIVE & ~MA_STALL;
	
	assign INT_MASK = SR.I;
	assign INT_ACP = INT_REQ & ~INT_REQ_LATCH & ~INT_BLOCKED & ~ID_DELAY_SLOT & ~IFID_STALL & ~ID_STALL;
	assign INT_ACK = PIPE.MA.DI.VECR & ~MA_STALL;
	assign VECT_REQ = VECT_ACTIVE;
	
	assign SLEEP = SLP;
	
	//Debug

`ifdef POCKET_DEBUG_OVERLAY
	assign DBG_PC = PIPE.EX.PC;
`endif

endmodule
