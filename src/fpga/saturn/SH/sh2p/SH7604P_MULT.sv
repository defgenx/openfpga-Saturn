// MULT: multiplier / MAC unit. One 64-bit adder serves MUL, DMUL, MAC.W and MAC.L (accumulator input forced to 0
// for the multiplies); the MAC.W 33-bit overflow test is derived from the same sum.
module SH7604P_MULT (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	
	input      [31:0] CBUS_A,
	input      [31:0] CBUS_DI,
	output     [31:0] CBUS_DO,
	input             CBUS_WR,
	input       [3:0] CBUS_BA,
	input             CBUS_REQ,
	output            CBUS_BUSY,
	
	input       [1:0] MAC_SEL,
	input       [3:0] MAC_OP,
	input             MAC_S,
	input             MAC_WE
);

	reg [31:0] MACL;
	reg [31:0] MACH;
	reg [31:0] MA;
	reg [31:0] MB;
	reg        MM_DONE;
	reg        SIGNED;
	reg [ 2:0] MM_CYC;
	reg        MUL_EXEC;
	reg        DMUL_EXEC;
	reg        MACW_EXEC;
	reg        MACL_EXEC;
	reg        SAT;
	
	wire [63:0] SRES = $signed({MA[31]&SIGNED,MA}) * $signed({MB[31]&SIGNED,MB});
	wire        ACC  = MACW_EXEC | MACL_EXEC;
	wire [63:0] SUM  = ({MACH,MACL} & {64{ACC}}) + SRES;
	
	// MAC.W: bit 32 of {MACL[31],MACL}+SRES[32:0] equals MACL[31]^MACH[0]^SUM[32]
	wire        W32  = MACL[31] ^ MACH[0] ^ SUM[32];
	wire        OVFW = MACW_EXEC & SAT & (W32 != SUM[31]);
	wire        OVFL = MACL_EXEC & SAT & (SUM[63:48] != {16{SUM[47]}});
	wire        SGN  = MA[31] ^ MB[31];
	
	wire        GO    = (MAC_SEL != 2'b00) && MAC_WE && EN && CE_R;
	wire        LDS   = GO && (MAC_OP == 4'b0100 || MAC_OP == 4'b1000);
	wire        CLR   = GO && MAC_OP == 4'b1111;
	wire        OPL   = MAC_OP == 4'b0001 || MAC_OP == 4'b0010 || MAC_OP == 4'b0011 || MAC_OP == 4'b1001;
	wire        OPMW  = MAC_OP == 4'b0110 || MAC_OP == 4'b0111;
	wire        OPAW  = MAC_OP == 4'b1011;
	wire        HI    = OPAW & ~CBUS_A[1];
	wire        DW15  = CBUS_A[1] ? CBUS_DI[15] : CBUS_DI[31];
	wire        EXT_A = OPAW ? DW15 : (CBUS_DI[15] & MAC_OP[0]);
	wire        EXT_B = OPAW ? DW15 : (CBUS_DI[31] & MAC_OP[0]);
	wire        WRA   = GO && ((OPL | OPAW) ? MAC_SEL[1] : OPMW);
	wire        WRB   = GO && ((OPL | OPAW) ? MAC_SEL[0] : OPMW);
	wire        EXEC  = MUL_EXEC | DMUL_EXEC | MACW_EXEC | MACL_EXEC;
	
	wire        KN    = MACW_EXEC ? W32 : SGN;
	wire        WRL   = LDS & MAC_SEL[0] | CLR | EXEC;
	wire        WRH   = LDS & MAC_SEL[1] | CLR | DMUL_EXEC | MACL_EXEC | (MACW_EXEC & (~SAT | OVFW));
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			MACL <= '0;
			MACH <= '0;
			MA <= '0;
			MB <= '0;
			MM_DONE <= 1;
			MM_CYC <= '0;
			MUL_EXEC <= 0;
			DMUL_EXEC <= 0;
			MACW_EXEC <= 0;
			MACL_EXEC <= 0;
			SIGNED <= 0;
			// synopsys translate_off
			MACL <= 32'h01234567;
			MACH <= 32'h89ABCDEF;
			// synopsys translate_on
		end
		else begin
			if (WRA) MA <= {{16{EXT_A}} & {16{OPMW | OPAW}} | CBUS_DI[31:16] & {16{OPL}}, HI ? CBUS_DI[31:16] : CBUS_DI[15:0]};
			if (WRB) MB <= {{16{EXT_B}} & {16{OPMW | OPAW}} | CBUS_DI[31:16] & {16{OPL}}, (OPMW | HI) ? CBUS_DI[31:16] : CBUS_DI[15:0]};
			
			if (GO) begin
				MM_DONE <= 1;
				case (MAC_OP) 
					4'b0001,
					4'b0010,
					4'b0011: begin
						if (MAC_SEL[0]) begin
							MUL_EXEC <= ~MAC_OP[1];
							DMUL_EXEC <= MAC_OP[1];
							SIGNED <= MAC_OP[0] & MAC_OP[1];
							MM_CYC <= 3'd4;
							MM_DONE <= 0;
						end
					end
					4'b0110,
					4'b0111: begin
						MUL_EXEC <= MAC_SEL[1];
						SIGNED <= MAC_OP[0];
						MM_CYC <= 3'd1;
						MM_DONE <= 0;
					end
					4'b1001: begin
						if (MAC_SEL[0]) begin
							MACL_EXEC <= 1;
							SIGNED <= 1;
							SAT <= MAC_S;
							MM_CYC <= 3'd4;
							MM_DONE <= 0;
						end
					end
					4'b1011: begin
						if (MAC_SEL[0]) begin
							MACW_EXEC <= 1;
							SIGNED <= 1;
							SAT <= MAC_S;
							MM_CYC <= 3'd2;
							MM_DONE <= 0;
						end
					end
					default:;
				endcase
			end
			
			if (!MM_DONE && CE_R) begin
				if (MM_CYC != 3'd0) MM_CYC <= MM_CYC - 3'd1;
				if (MM_CYC == 3'd1) MM_DONE <= 1;
			end
			
			if (EXEC) begin
				MUL_EXEC <= 0;
				DMUL_EXEC <= 0;
				MACW_EXEC <= 0;
				MACL_EXEC <= 0;
			end
			
			if (WRL) begin
				if (EXEC) MACL <= (OVFW | OVFL) ? {~(KN ^ MACW_EXEC), {31{~KN}}} : SUM[31:0];
				else      MACL <= CLR ? 32'd0 : CBUS_DI;
			end
			if (WRH) begin
				if (EXEC) MACH <= OVFL ? {{17{SGN}},{15{~SGN}}} : {SUM[63:33], SUM[32] | OVFW};
				else      MACH <= CLR ? 32'd0 : CBUS_DI;
			end
		end
	end
	
	assign CBUS_DO = MAC_SEL[1] ? MACH : MACL;
	assign CBUS_BUSY = ~MM_DONE && (!MAC_OP[2] ? MAC_SEL[0] : |MAC_SEL);

endmodule
