module pair_one (
	input CLK, input SEL,
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
	output reg [31:0] ALU_RES_O, MA_ADDR_O, MA_WD_O, REG_B_O, REG_A_O,
	output reg ALU_T_O,
	output reg [31:0] SR_NEW_O
);
	wire [$bits(EX_DI_m)-1:0] EX_DI_x = SEL ? EX_DI_s : EX_DI_m;
	wire [$bits(MA_DI_m)-1:0] MA_DI_x = SEL ? MA_DI_s : MA_DI_m;
	wire [$bits(WB_DI_m)-1:0] WB_DI_x = SEL ? WB_DI_s : WB_DI_m;
	wire [$bits(EX_IR_m)-1:0] EX_IR_x = SEL ? EX_IR_s : EX_IR_m;
	wire [$bits(PC_m)-1:0] PC_x = SEL ? PC_s : PC_m;
	wire [$bits(SAVE_PC_m)-1:0] SAVE_PC_x = SEL ? SAVE_PC_s : SAVE_PC_m;
	wire [$bits(EX_PC_m)-1:0] EX_PC_x = SEL ? EX_PC_s : EX_PC_m;
	wire [$bits(GBR_m)-1:0] GBR_x = SEL ? GBR_s : GBR_m;
	wire [$bits(VBR_m)-1:0] VBR_x = SEL ? VBR_s : VBR_m;
	wire [$bits(REGS_RAQ_m)-1:0] REGS_RAQ_x = SEL ? REGS_RAQ_s : REGS_RAQ_m;
	wire [$bits(REGS_RBQ_m)-1:0] REGS_RBQ_x = SEL ? REGS_RBQ_s : REGS_RBQ_m;
	wire [$bits(REGS_R0Q_m)-1:0] REGS_R0Q_x = SEL ? REGS_R0Q_s : REGS_R0Q_m;
	wire [$bits(RD_SAVE_m)-1:0] RD_SAVE_x = SEL ? RD_SAVE_s : RD_SAVE_m;
	wire [$bits(WB_RD_m)-1:0] WB_RD_x = SEL ? WB_RD_s : WB_RD_m;
	wire [$bits(MA_RES_m)-1:0] MA_RES_x = SEL ? MA_RES_s : MA_RES_m;
	wire [$bits(SR_m)-1:0] SR_x = SEL ? SR_s : SR_m;
	wire [$bits(WB2_RZ_m)-1:0] WB2_RZ_x = SEL ? WB2_RZ_s : WB2_RZ_m;
	wire [$bits(RES_EXP_m)-1:0] RES_EXP_x = SEL ? RES_EXP_s : RES_EXP_m;
	wire [$bits(INT_REQ_LATCH_m)-1:0] INT_REQ_LATCH_x = SEL ? INT_REQ_LATCH_s : INT_REQ_LATCH_m;
	wire [$bits(ILI_EXP_m)-1:0] ILI_EXP_x = SEL ? ILI_EXP_s : ILI_EXP_m;
	wire [$bits(ILSI_m)-1:0] ILSI_x = SEL ? ILSI_s : ILSI_m;
	wire [$bits(NMI_N_m)-1:0] NMI_N_x = SEL ? NMI_N_s : NMI_N_m;
	wire [$bits(INT_VEC_m)-1:0] INT_VEC_x = SEL ? INT_VEC_s : INT_VEC_m;
	wire [$bits(INT_LVL_LATCH_m)-1:0] INT_LVL_LATCH_x = SEL ? INT_LVL_LATCH_s : INT_LVL_LATCH_m;
	wire [31:0] r0,r1,r2,r3,r4; wire t0; wire [31:0] sn;
	SH2P_cone c (.EX_DI(EX_DI_x), .MA_DI(MA_DI_x), .WB_DI(WB_DI_x), .EX_IR(EX_IR_x), .PC(PC_x), .SAVE_PC(SAVE_PC_x), .EX_PC(EX_PC_x), .GBR(GBR_x), .VBR(VBR_x), .REGS_RAQ(REGS_RAQ_x), .REGS_RBQ(REGS_RBQ_x), .REGS_R0Q(REGS_R0Q_x), .RD_SAVE(RD_SAVE_x), .WB_RD(WB_RD_x), .MA_RES(MA_RES_x), .SR(SR_x), .WB2_RZ(WB2_RZ_x), .RES_EXP(RES_EXP_x), .INT_REQ_LATCH(INT_REQ_LATCH_x), .ILI_EXP(ILI_EXP_x), .ILSI(ILSI_x), .NMI_N(NMI_N_x), .INT_VEC(INT_VEC_x), .INT_LVL_LATCH(INT_LVL_LATCH_x), .ALU_RES_O(r0), .MA_ADDR_O(r1), .MA_WD_O(r2), .REG_B_O(r3), .REG_A_O(r4), .ALU_T_O(t0), .SR_NEW_O(sn));
	always @(posedge CLK) begin ALU_RES_O <= r0; MA_ADDR_O <= r1; MA_WD_O <= r2; REG_B_O <= r3; REG_A_O <= r4; ALU_T_O <= t0; SR_NEW_O <= sn; end
endmodule
