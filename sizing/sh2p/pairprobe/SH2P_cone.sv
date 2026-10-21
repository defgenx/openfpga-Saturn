// Probe: the combinational execute cone of SH2P_core (operand select, ALU, address/write-data select, SR update).
module SH2P_cone (
	input  SH2P_PKG::DecInstr_t EX_DI, MA_DI, WB_DI,
	input  [15:0] EX_IR,
	input  [31:0] PC, SAVE_PC, EX_PC, GBR, VBR, REGS_RAQ, REGS_RBQ, REGS_R0Q, RD_SAVE, WB_RD, MA_RES,
	input  SH2P_PKG::SR_t SR,
	input  WB2_RZ, RES_EXP, INT_REQ_LATCH, ILI_EXP, ILSI, NMI_N,
	input  [7:0] INT_VEC,
	input  [3:0] INT_LVL_LATCH,
	output [31:0] ALU_RES_O, MA_ADDR_O, MA_WD_O, REG_B_O, REG_A_O,
	output ALU_T_O,
	output SH2P_PKG::SR_t SR_NEW_O
);
	SR_t SR_NEW;
	import SH2P_PKG::*;
	wire [31:0] ALU_RES; wire ALU_T;
	wire MA_LD = (MA_DI.MEM.R & ~MA_DI.MAC.W) | (MA_DI.MAC.R & ~MA_DI.MEM.W);
	wire WB_LD = (WB_DI.MEM.R & ~WB_DI.MAC.W) | (WB_DI.MAC.R & ~WB_DI.MEM.W);
	wire MA_WA = MA_DI.RA.W & ~MA_LD;
	wire MA_WB = MA_DI.RB.W & (~MA_DI.RA.W | MA_DI.RA.N != MA_DI.RB.N);
	
	//MA instruction already wrote this register (youngest writer wins)
	wire BP_A_EXEX = EX_DI.RA.R & (((EX_DI.RA.N == MA_DI.RA.N) & MA_WA) | ((EX_DI.RA.N == MA_DI.RB.N) & MA_WB));
	wire BP_B_EXEX = EX_DI.RB.R & (((EX_DI.RB.N == MA_DI.RA.N) & MA_WA) | ((EX_DI.RB.N == MA_DI.RB.N) & MA_WB));
	wire BP_C_EXEX = EX_DI.R0R & (((5'd0            == MA_DI.RA.N) & MA_WA) | ((5'd0            == MA_DI.RB.N) & MA_WB));
	
	wire BP_A_MALD = (EX_DI.RA.N == MA_DI.RA.N) & EX_DI.RA.R & MA_DI.RA.W & MA_LD;
	wire BP_B_MALD = (EX_DI.RB.N == MA_DI.RA.N) & EX_DI.RB.R & MA_DI.RA.W & MA_LD;
	wire BP_C_MALD = (5'd0            == MA_DI.RA.N) & EX_DI.R0R  & MA_DI.RA.W & MA_LD;
	
	wire BP_A_WBLD = (EX_DI.RA.N == WB_DI.RA.N) & EX_DI.RA.R & WB_DI.RA.W & WB_LD;
	wire BP_B_WBLD = (EX_DI.RB.N == WB_DI.RA.N) & EX_DI.RB.R & WB_DI.RA.W & WB_LD;
	wire BP_C_WBLD = (5'd0            == WB_DI.RA.N) & EX_DI.R0R  & WB_DI.RA.W & WB_LD;
	
	bit [31: 0] REG_A;
	bit [31: 0] REG_B;
	bit [31: 0] REG_C;
	always_comb begin
		bit [11: 0] ir_imm;
		bit [ 7: 0] vec;
		bit [31: 0] temp, IMM_VAL, SCR_VAL;
		bit [31: 0] BP_A, BP_B, BP_C;
		
		ir_imm = EX_IR[11:0];
		vec = RES_EXP       ? {6'b000000,~NMI_N,1'b0} : 
		      INT_REQ_LATCH ? INT_VEC : 
				ILI_EXP       ? 8'h04 | {6'b000000,ILSI,1'b0} : 
				                EX_IR[7:0];
		
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
			BP_A = WB_RD;
		end
		else if (EX_DI.DP.BPWBA) begin
			BP_A = {31'b0,~WB2_RZ};
		end
		else begin
			BP_A = REGS_RAQ;
		end
	
		REG_A = BP_A;
		
		if (EX_DI.DP.BPMAB) begin
			BP_B = MA_RES;
		end
		else if (!BP_B_EXEX && BP_B_MALD) begin
			BP_B = RD_SAVE;
		end
		else if (!BP_B_EXEX && BP_B_WBLD) begin
			BP_B = WB_RD;
		end
		else begin
			BP_B = REGS_RBQ;
		end
		
		case (EX_DI.DP.RSB)
			GRX: REG_B = BP_B;
			BPC: REG_B = {PC[31:2],PC[1:0] & {2{~EX_DI.DP.PCM}}};
			TPC: REG_B = SAVE_PC;
			IPC: REG_B = EX_PC;
			SCR: REG_B = SCR_VAL;
			default: REG_B = 32'h0;
		endcase
		
		if (!BP_C_EXEX && BP_C_MALD) begin
			BP_C = RD_SAVE;
		end
		else if (!BP_C_EXEX && BP_C_WBLD) begin
			BP_C = WB_RD;
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
	
	assign ALU_RES_O = ALU_RES; assign ALU_T_O = ALU_T; assign MA_ADDR_O = MA_ADDR; assign MA_WD_O = MA_WD;
	assign REG_B_O = REG_B; assign REG_A_O = REG_A;
	assign SR_NEW_O = SR_NEW;
endmodule
