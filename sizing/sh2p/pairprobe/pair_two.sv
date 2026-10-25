module pair_two (
	input  SH2P_PKG::DecInstr_t EX_DI_m, MA_DI_m, WB_DI_m,
	input  [15:0] EX_IR_m,
	input  [31:0] PC_m, SAVE_PC_m, EX_PC_m, GBR_m, VBR_m, REGS_RAQ_m, REGS_RBQ_m, REGS_R0Q_m, RD_SAVE_m, WB_RD_m, MA_RES_m,
	input  SH2P_PKG::SR_t SR_m,
	input  WB2_RZ_m, RES_EXP_m, INT_REQ_LATCH_m, ILI_EXP_m, ILSI_m, NMI_N_m,
	input  [7:0] INT_VEC_m,
	input  [3:0] INT_LVL_LATCH_m,
	input  SH2P_PKG::DecInstr_t EX_DI_s, MA_DI_s, WB_DI_s,
	input  [15:0] EX_IR_s,
	input  [31:0] PC_s, SAVE_PC_s, EX_PC_s, GBR_s, VBR_s, REGS_RAQ_s, REGS_RBQ_s, REGS_R0Q_s, RD_SAVE_s, WB_RD_s, MA_RES_s,
	input  SH2P_PKG::SR_t SR_s,
	input  WB2_RZ_s, RES_EXP_s, INT_REQ_LATCH_s, ILI_EXP_s, ILSI_s, NMI_N_s,
	input  [7:0] INT_VEC_s,
	input  [3:0] INT_LVL_LATCH_s,
	output [31:0] ALU_RES_O_m, MA_ADDR_O_m, MA_WD_O_m, REG_B_O_m, REG_A_O_m,
	output ALU_T_O_m,
	output SH2P_PKG::SR_t SR_NEW_O_m,
	output [31:0] ALU_RES_O_s, MA_ADDR_O_s, MA_WD_O_s, REG_B_O_s, REG_A_O_s,
	output ALU_T_O_s,
	output SH2P_PKG::SR_t SR_NEW_O_s
);
	SH2P_cone c_m (.EX_DI(EX_DI_m), .MA_DI(MA_DI_m), .WB_DI(WB_DI_m), .EX_IR(EX_IR_m), .PC(PC_m), .SAVE_PC(SAVE_PC_m), .EX_PC(EX_PC_m), .GBR(GBR_m), .VBR(VBR_m), .REGS_RAQ(REGS_RAQ_m), .REGS_RBQ(REGS_RBQ_m), .REGS_R0Q(REGS_R0Q_m), .RD_SAVE(RD_SAVE_m), .WB_RD(WB_RD_m), .MA_RES(MA_RES_m), .SR(SR_m), .WB2_RZ(WB2_RZ_m), .RES_EXP(RES_EXP_m), .INT_REQ_LATCH(INT_REQ_LATCH_m), .ILI_EXP(ILI_EXP_m), .ILSI(ILSI_m), .NMI_N(NMI_N_m), .INT_VEC(INT_VEC_m), .INT_LVL_LATCH(INT_LVL_LATCH_m), .ALU_RES_O(ALU_RES_O_m), .MA_ADDR_O(MA_ADDR_O_m), .MA_WD_O(MA_WD_O_m), .REG_B_O(REG_B_O_m), .REG_A_O(REG_A_O_m), .ALU_T_O(ALU_T_O_m), .SR_NEW_O(SR_NEW_O_m));
	SH2P_cone c_s (.EX_DI(EX_DI_s), .MA_DI(MA_DI_s), .WB_DI(WB_DI_s), .EX_IR(EX_IR_s), .PC(PC_s), .SAVE_PC(SAVE_PC_s), .EX_PC(EX_PC_s), .GBR(GBR_s), .VBR(VBR_s), .REGS_RAQ(REGS_RAQ_s), .REGS_RBQ(REGS_RBQ_s), .REGS_R0Q(REGS_R0Q_s), .RD_SAVE(RD_SAVE_s), .WB_RD(WB_RD_s), .MA_RES(MA_RES_s), .SR(SR_s), .WB2_RZ(WB2_RZ_s), .RES_EXP(RES_EXP_s), .INT_REQ_LATCH(INT_REQ_LATCH_s), .ILI_EXP(ILI_EXP_s), .ILSI(ILSI_s), .NMI_N(NMI_N_s), .INT_VEC(INT_VEC_s), .INT_LVL_LATCH(INT_LVL_LATCH_s), .ALU_RES_O(ALU_RES_O_s), .MA_ADDR_O(MA_ADDR_O_s), .MA_WD_O(MA_WD_O_s), .REG_B_O(REG_B_O_s), .REG_A_O(REG_A_O_s), .ALU_T_O(ALU_T_O_s), .SR_NEW_O(SR_NEW_O_s));
endmodule
