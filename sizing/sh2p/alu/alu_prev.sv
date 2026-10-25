// ALU of the execute stage: 32-bit add/sub/compare/DIV1 step, logic, byte/word extract and swap, shifts and rotates.
module SH2P_alu (
	input  [31:0] A, B,
	input   [2:0] OP,
	input   [3:0] CD,
	input   [2:0] CMP,
	input         TAS, T, M, Q,
	output [31:0] RES,
	output        ALU_T
);
	import SH2P_PKG::*;
	bit [31:0] ALU_RES_;
	bit        ALU_T_;
	always_comb begin
		bit [31:0] ADDER_RES;
		bit        ADDER_C;
		bit        ADDER_V;
		bit [31:0] LOG_RES;
		bit        LOG_Z;
		bit [31:0] EXT_RES;
		bit [31:0] SHIFT_RES;
		bit        SHIFT_C;
		bit [31:0] adder_a;
		bit [ 3:0] adder_code;
		bit [ 2:0] adder_cmp;
		bit        ge_hs, eq, str_eq;
		bit [31:0] log_b;
		
		adder_a = OP == DIV ? {A[30:0],T} : A;
		adder_code = OP == DIV ? {3'b000,(M ~^ Q)} : CD;
		adder_cmp = CMP;
		{ADDER_C,ADDER_RES} = Adder(adder_a,B,T,adder_code);
		ADDER_V = ~((A[31] ^ B[31]) ^ adder_code[0]) & (A[31] ^ ADDER_RES[31]);
		ge_hs = (~A[31] & ~B[31] & ~ADDER_RES[31]) | (A[31] & B[31] & ~ADDER_RES[31]) | ((adder_cmp[0] ^ A[31]) & (~adder_cmp[0] ^ B[31]));

		
		log_b = TAS ? 32'h00000080 : B;
		LOG_RES = Log(A,log_b,CD);
		
		EXT_RES = Ext(A,B,CD);
		
		{SHIFT_C,SHIFT_RES} = Shifter(A,T,CD);
		
		case (OP)
			ADD:   ALU_RES_ = ADDER_RES;
			LOG:   ALU_RES_ = LOG_RES;
			EXT:   ALU_RES_ = EXT_RES;
			SHIFT: ALU_RES_ = SHIFT_RES;
			DIV:   ALU_RES_ = ADDER_RES;
			default: ALU_RES_ = B;
		endcase
								
		eq = ~|ALU_RES_;
		LOG_Z = eq;
		str_eq = ~|ALU_RES_[31:24] | ~|ALU_RES_[23:16] | ~|ALU_RES_[15:8] | ~|ALU_RES_[7:0];
		ALU_T_ = 0;
		case (OP)
			ADD: case (CD[3:2])
					2'b01: case (CMP[2:1])
						2'b00: ALU_T_ = eq;
						2'b01: ALU_T_ = ge_hs;
						2'b11: ALU_T_ = ge_hs & ~eq;
						default:;
					endcase
					2'b10: ALU_T_ = ADDER_C;
					2'b11: ALU_T_ = ADDER_V;
					default:;
				endcase
			LOG: ALU_T_ = CD[3] ? str_eq : LOG_Z;
			SHIFT: ALU_T_ = SHIFT_C;
			DIV: ALU_T_ = ADDER_C;
			default:;
		endcase
	end
	assign RES = ALU_RES_;
	assign ALU_T = ALU_T_;
endmodule
