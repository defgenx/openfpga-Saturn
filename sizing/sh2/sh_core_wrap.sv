// Timing-only wrapper: SH_core with registered ports so reg-to-reg Fmax is meaningful.
module sh_core_wrap (
	input CLK, input RST_N, input CE, input EN, input RES_N, input NMI_N,
	input [31:0] BUS_DI_I, input BUS_WAIT_I, input [3:0] INT_LVL_I, input [7:0] INT_VEC_I, input INT_REQ_I, input VECT_WAIT_I,
	output reg [31:0] BUS_A_O, output reg [31:0] BUS_DO_O, output reg BUS_WR_O, output reg [3:0] BUS_BA_O, output reg BUS_REQ_O,
	output reg BUS_ID_O, output reg BUS_TAS_O, output reg [1:0] MAC_SEL_O, output reg [3:0] MAC_OP_O, output reg MAC_S_O, output reg MAC_WE_O,
	output reg [3:0] INT_MASK_O, output reg INT_ACK_O, output reg INT_ACP_O, output reg VECT_REQ_O, output reg SLEEP_O
);
	reg [31:0] BUS_DI; reg BUS_WAIT; reg [3:0] INT_LVL; reg [7:0] INT_VEC; reg INT_REQ, VECT_WAIT;
	always @(posedge CLK) begin BUS_DI<=BUS_DI_I; BUS_WAIT<=BUS_WAIT_I; INT_LVL<=INT_LVL_I; INT_VEC<=INT_VEC_I; INT_REQ<=INT_REQ_I; VECT_WAIT<=VECT_WAIT_I; end
	wire [31:0] BUS_A, BUS_DO; wire BUS_WR, BUS_REQ, BUS_ID, BUS_TAS, MAC_S, MAC_WE, INT_ACK, INT_ACP, VECT_REQ, SLEEP; wire [3:0] BUS_BA, MAC_OP, INT_MASK; wire [1:0] MAC_SEL;
	SH_core core (.CLK(CLK),.RST_N(RST_N),.CE(CE),.EN(EN),.RES_N(RES_N),.NMI_N(NMI_N),.BUS_A(BUS_A),.BUS_DI(BUS_DI),.BUS_DO(BUS_DO),.BUS_WR(BUS_WR),.BUS_BA(BUS_BA),
		.BUS_REQ(BUS_REQ),.BUS_ID(BUS_ID),.BUS_TAS(BUS_TAS),.BUS_WAIT(BUS_WAIT),.MAC_SEL(MAC_SEL),.MAC_OP(MAC_OP),.MAC_S(MAC_S),.MAC_WE(MAC_WE),
		.INT_LVL(INT_LVL),.INT_VEC(INT_VEC),.INT_REQ(INT_REQ),.INT_MASK(INT_MASK),.INT_ACK(INT_ACK),.INT_ACP(INT_ACP),.VECT_REQ(VECT_REQ),.VECT_WAIT(VECT_WAIT),.SLEEP(SLEEP));
	always @(posedge CLK) begin BUS_A_O<=BUS_A; BUS_DO_O<=BUS_DO; BUS_WR_O<=BUS_WR; BUS_BA_O<=BUS_BA; BUS_REQ_O<=BUS_REQ; BUS_ID_O<=BUS_ID; BUS_TAS_O<=BUS_TAS;
		MAC_SEL_O<=MAC_SEL; MAC_OP_O<=MAC_OP; MAC_S_O<=MAC_S; MAC_WE_O<=MAC_WE; INT_MASK_O<=INT_MASK; INT_ACK_O<=INT_ACK; INT_ACP_O<=INT_ACP; VECT_REQ_O<=VECT_REQ; SLEEP_O<=SLEEP; end
endmodule
