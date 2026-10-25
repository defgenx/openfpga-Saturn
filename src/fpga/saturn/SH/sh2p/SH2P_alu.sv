// ALU of the execute stage: 32-bit add/sub/compare/DIV1 step, logic, byte/word extract and swap, shifts and rotates.
// Only the (OP,CD) combinations the decoder produces are implemented (checked by sim/sh2/unit/tb_alu.sv).
module SH2P_alu (
	input  [31:0] A, B,
	input   [2:0] OP,
	input   [3:0] CD,
	input   [2:0] CMP,
	input         TAS, T, M, Q,
	output [31:0] RES,
	output        ALU_T
);
	// add / subtract / compare / DIV1
	wire        DIV = (OP == 3'd4);
	wire [31:0] AA = DIV ? {A[30:0],T} : A;
	wire        C0 = DIV ? ~(M ^ Q) : CD[0];
	wire        C1 = ~DIV & CD[1];
	wire [31:0] BX = B ^ {32{C0}};
	wire        CI = C1 ? (T ^ C0) : C0;
	wire [32:0] SUM = {1'b0,AA} + {1'b0,BX} + {32'd0,CI};
	
	// logic: and / xor / or, B optionally inverted (TAS forces 0x80)
	wire [31:0] LB = (TAS ? 32'h00000080 : B) ^ {32{CD[0]}};
	wire [31:0] LOGR = CD[2] ? (A | LB) : CD[1] ? (A ^ LB) : (A & LB);
	
	// byte / word extract and swap
	reg [31:0] EXTR;
	always_comb begin
		case (CD[2:0])
			3'b000: EXTR = {B[31:16],B[7:0],B[15:8]};
			3'b001: EXTR = {B[15:0],B[31:16]};
			3'b010: EXTR = {B[15:0],A[31:16]};
			3'b011: EXTR = {B[15:0],A[15:0]};
			3'b100: EXTR = {24'd0,B[7:0]};
			3'b101: EXTR = {16'd0,B[15:0]};
			3'b110: EXTR = {{24{B[7]}},B[7:0]};
			default: EXTR = {{16{B[15]}},B[15:0]};
		endcase
	end
	
	// shifts and rotates: one bit (CD[3]=0) or 2/8/16 bits (CD[3]=1), CD[0] selects right
	reg        SCI, SCO;
	reg [31:0] SHR;
	always_comb begin
		case (CD[2:0])
			3'b011, 3'b100: SCI = A[31];
			3'b101:         SCI = A[0];
			3'b110, 3'b111: SCI = T;
			default:        SCI = 1'b0;
		endcase
		SCO = CD[0] ? A[0] : A[31];
		if (!CD[3]) SHR = CD[0] ? {SCI,A[31:1]} : {A[30:0],SCI};
		else if (CD[2]) SHR = CD[0] ? {16'd0,A[31:16]} : {A[15:0],16'd0};
		else if (CD[1]) SHR = CD[0] ? {8'd0,A[31:8]} : {A[23:0],8'd0};
		else            SHR = CD[0] ? {2'd0,A[31:2]} : {A[29:0],2'd0};
	end
	
	reg [31:0] R;
	always_comb begin
		case (OP)
			3'd0, 3'd4: R = SUM[31:0];
			3'd1:       R = LOGR;
			3'd2:       R = EXTR;
			3'd3:       R = SHR;
			default:    R = B;
		endcase
	end
	assign RES = R;
	
	// T flag
	wire        Z = ~|R;
	wire        STR = ~|R[31:24] | ~|R[23:16] | ~|R[15:8] | ~|R[7:0];
	wire        GE = (~A[31] & ~B[31] & ~SUM[31]) | (A[31] & B[31] & ~SUM[31]) | ((CMP[0] ^ A[31]) & (~CMP[0] ^ B[31]));
	wire        CO = SUM[32] ^ C0;
	wire        OV = ~((A[31] ^ B[31]) ^ C0) & (A[31] ^ SUM[31]);
	reg         TR;
	always_comb begin
		TR = 1'b0;
		case (OP)
			3'd0: case (CD[3:2])
					2'b01: case (CMP[2:1])
						2'b00: TR = Z;
						2'b01: TR = GE;
						2'b11: TR = GE & ~Z;
						default: TR = 1'b0;
					endcase
					2'b10: TR = CO;
					2'b11: TR = OV;
					default: TR = 1'b0;
				endcase
			3'd1: TR = CD[3] ? STR : Z;
			3'd3: TR = SCO;
			3'd4: TR = CO;
			default: TR = 1'b0;
		endcase
	end
	assign ALU_T = TR;
endmodule
