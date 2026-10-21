//
// FX 68K
//
// M68K cycle accurate, fully synchronous
// Copyright (c) 2018 by Jorge Cwik
//
// ALU
//

// altera message_off 10230
// altera message_off 10763
// altera message_off 10958

`timescale 1 ns / 1 ns

localparam mp_MASK_NBITS = 5;

localparam
		mp_OP_AND = 1,
		mp_OP_SUB = 2, mp_OP_SUBX = 3, mp_OP_ADD = 4,
		mp_OP_EXT = 5, mp_OP_SBCD = 6, mp_OP_SUB0 = 7,
		mp_OP_OR = 8, mp_OP_EOR = 9,
		mp_OP_SUBC = 10, mp_OP_ADDC = 11, mp_OP_ADDX = 12,
		mp_OP_ASL = 13,
		mp_OP_ASR = 14,
		mp_OP_LSL = 15,
		mp_OP_LSR = 16,
		mp_OP_ROL = 17,
		mp_OP_ROR = 18,
		mp_OP_ROXL = 19,
		mp_OP_ROXR = 20,
		mp_OP_SLAA = 21,
		mp_OP_ABCD = 22;

module mp_fx68kAlu ( input clk, pwrUp, enT1, enT3, enT4,
	input [15:0] ird,
	input [2:0] aluColumn,
	input [1:0] aluDataCtrl,
	input aluAddrCtrl, alueClkEn, ftu2Ccr, init, finish, aluIsByte,
	input [15:0] ftu,
	input [15:0] alub,
	input [15:0] iDataBus, input [15:0] iAddrBus,
	output ze,
	output reg [15:0] alue,
	output reg [7:0] ccr,
	output [15:0] aluOut);


`define MP_ALU_ROW_01		16'h0002
`define MP_ALU_ROW_02		16'h0004
`define MP_ALU_ROW_03		16'h0008
`define MP_ALU_ROW_04		16'h0010
`define MP_ALU_ROW_05		16'h0020
`define MP_ALU_ROW_06		16'h0040
`define MP_ALU_ROW_07		16'h0080
`define MP_ALU_ROW_08		16'h0100
`define MP_ALU_ROW_09		16'h0200
`define MP_ALU_ROW_10		16'h0400
`define MP_ALU_ROW_11		16'h0800
`define MP_ALU_ROW_12		16'h1000
`define MP_ALU_ROW_13		16'h2000
`define MP_ALU_ROW_14		16'h4000
`define MP_ALU_ROW_15		16'h8000
	
	
	// Bit positions for flags in CCR
	localparam mp_CF = 0, mp_VF = 1, mp_ZF = 2, mp_NF = 3, mp_XF = 4;

	reg [15:0] aluLatch;
	reg [4:0] pswCcr;
	reg [4:0] ccrCore;
	
	logic [15:0] result;
	logic [4:0] ccrTemp;
	reg coreH;		// half carry latch

	logic [15:0] subResult;
	logic subHcarry;
	logic subCout, subOv;

	assign aluOut = aluLatch;
	assign ze = ~ccrCore[ mp_ZF];		// Check polarity !!!

	//
	// Control
	//	Signals derived from IRD *must* be registered on either T3 or T4
	//  Signals derived from nano rom can be registered on T4.

	reg [15:0] row;
	reg isArX;									// Don't set Z
	reg noCcrEn;
	reg isByte;
	
	reg [4:0] ccrMask;
	reg [4:0] oper;
	
	logic [15:0] aOperand, dOperand;
	wire isCorf = ( aluDataCtrl == 2'b10);

	wire [15:0] cRow;
	wire cIsArX;
	wire cNoCcrEn;
	mp_rowDecoder mp_rowDecoder( .ird( ird), .row( cRow), .noCcrEn( cNoCcrEn), .isArX( cIsArX));
	
	// Get Operation & CCR Mask from row/col
	// Registering them on T4 increase performance. But slowest part seems to be corf !
	wire [4:0] cMask;
	wire [4:0] aluOp;

	mp_aluGetOp mp_aluGetOp( .row, .col( aluColumn), .isCorf, .aluOp);	
	mp_ccrTable mp_ccrTable( .col( aluColumn), .row( row), .finish, .ccrMask( cMask));

	// Inefficient, uCode could help !
	wire shftIsMul = row[7];
	wire shftIsDiv = row[1];

	wire [31:0] shftResult;
	reg [7:0] bcdLatch;
	reg bcdCarry, bcdOverf;
		
	reg isLong;
	reg rIrd8;
	logic isShift;
	logic shftCin, shftRight, addCin;
	
	// Register some decoded signals	
	always_ff @( posedge clk) begin
		if( enT3) begin
			row <= cRow;
			isArX <= cIsArX;
			noCcrEn <= cNoCcrEn;
			rIrd8 <= ird[8];
			isByte <= aluIsByte;
		end
		
		if( enT4) begin
			// Decode if long shift
			// MUL and DIV are long (but special !)
			isLong <= (ird[7] & ~ird[6]) | shftIsMul | shftIsDiv;			
			
			ccrMask <= cMask;
			oper <= aluOp;
		end
	end
	
	
	always_comb begin
		// Dest (addr) operand source
		// If aluCsr (depends on column/row) addrbus is shifted !!
		aOperand = (aluAddrCtrl ? alub : iAddrBus);
		
		// Second (data,source) operand mux
		case( aluDataCtrl)
			2'b00:				dOperand = iDataBus;
			2'b01:				dOperand = 'h0000;
			2'b11:				dOperand = 'hffff;
			// 2'b10:				dOperand = bcdResult;
			2'b10:				dOperand = 'X;
		endcase
	end
	
	// Execution
	   
	// shift operand MSB. Input in ASR/ROL. Carry in right.
	// Can't be registered because uses bus operands that aren't available early !
	wire shftMsb = isLong ? alue[15] : (isByte ? aOperand[7] : aOperand[15]);
	   
	mp_aluShifter shifter( .data( { alue, aOperand}),
		.swapWords( shftIsMul | shftIsDiv),
		.cin( shftCin), .dir( shftRight), .isByte( isByte), .isLong( isLong),
		.result( shftResult));
				
	wire [7:0] bcdResult;
	wire bcdC, bcdV;
	mp_aluCorf mp_aluCorf( .binResult( aluLatch[7:0]), .hCarry( coreH),
		.bAdd( (oper != mp_OP_SBCD) ), .cin( pswCcr[ mp_XF]),
		.bcdResult( bcdResult), .dC( bcdC), .ov( bcdV));

	// BCD adjust is among the slowest processing on ALU !
	// Precompute and register BCD result on T1
	// We don't need to wait for execution buses because corf is always added to ALU previous result
	always_ff @( posedge clk)
		if( enT1) begin
			bcdLatch <= bcdResult;
			bcdCarry <= bcdC;
			bcdOverf <= bcdV;
		end
		
	// Adder carry in selector
	always_comb
	begin
		case( oper)
			mp_OP_ADD, mp_OP_SUB:   addCin = 1'b0;
			mp_OP_SUB0:          addCin = 1'b1;			// NOT = 0 - op - 1
			mp_OP_ADDC,mp_OP_SUBC:  addCin = ccrCore[ mp_CF];
			mp_OP_ADDX,mp_OP_SUBX:  addCin = pswCcr[ mp_XF];
			default: addCin = 1'bX;
		endcase
	end
   	
	// Shifter carry in and direction selector
	always_comb begin
		case( oper)
		mp_OP_LSL, mp_OP_ASL, mp_OP_ROL, mp_OP_ROXL, mp_OP_SLAA:   shftRight = 1'b0;
		mp_OP_LSR, mp_OP_ASR, mp_OP_ROR, mp_OP_ROXR:            shftRight = 1'b1;
		default:									shftRight = 1'bX;
		endcase
		
		case( oper)
		mp_OP_LSR,
		mp_OP_ASL,
		mp_OP_LSL:		shftCin = 1'b0;
		mp_OP_ROL,
		mp_OP_ASR:		shftCin = shftMsb;
		mp_OP_ROR:		shftCin = aOperand[0];
		mp_OP_ROXL,
		mp_OP_ROXR:
			if( shftIsMul)
				shftCin = rIrd8 ? pswCcr[mp_NF] ^ pswCcr[mp_VF] : pswCcr[ mp_CF];
			else
				shftCin = pswCcr[ mp_XF];
				
		mp_OP_SLAA:	shftCin = aluColumn[1];   // col4 -> 0, col 6-> 1
		default:	shftCin = 'X;
		endcase
	end
	
	// ALU operation selector
	always_comb begin	      

		// sub is DATA - ADDR	    
		mySubber( aOperand, dOperand, addCin,
			(oper == mp_OP_ADD) | (oper == mp_OP_ADDC) | (oper == mp_OP_ADDX),
			isByte, subResult, subCout, subOv);
			
		isShift = 1'b0;
		case( oper)
		mp_OP_AND: result = aOperand & dOperand;
		mp_OP_OR:  result = aOperand | dOperand;
		mp_OP_EOR: result = aOperand ^ dOperand;
		
		mp_OP_EXT: result = { {8{aOperand[7]}}, aOperand[7:0]};
		
		mp_OP_SLAA,
		mp_OP_ASL, mp_OP_ASR,
		mp_OP_LSL, mp_OP_LSR,
		mp_OP_ROL, mp_OP_ROR,
		mp_OP_ROXL, mp_OP_ROXR:
			begin
				result = shftResult[15:0];
				isShift = 1'b1;
			end
			
		mp_OP_ADD,
		mp_OP_ADDC,
		mp_OP_ADDX,
		mp_OP_SUB,
		mp_OP_SUBC,
		mp_OP_SUB0,
		mp_OP_SUBX:	result = subResult;
		
		mp_OP_ABCD,
		mp_OP_SBCD:	result = { 8'hXX, bcdLatch};

		default:	result = 'X;
		endcase	   
	end
	
	task mySubber;
		input [15:0] inpa, inpb;
		input cin, bAdd, isByte;
		output reg [15:0] result;
		output cout, ov;

		// Not very efficient!
		logic [16:0] rtemp;
		logic rm,sm,dm,tsm;

		begin
			if( isByte)
			begin
				rtemp = bAdd ? { 1'b0, inpb[7:0]} + { 1'b0, inpa[7:0]} + cin:
								{ 1'b0, inpb[7:0] } - { 1'b0, inpa[7:0]} - cin;
				result = { {8{ rtemp[7]}}, rtemp[7:0]};
				cout = rtemp[8];
			end
			else begin
				rtemp = bAdd ? { 1'b0, inpb } + { 1'b0, inpa} + cin:
								{ 1'b0, inpb } - { 1'b0, inpa} - cin;
				result = rtemp[ 15:0];
				cout = rtemp[16];
			end
	        
			rm  = isByte ? rtemp[7] : rtemp[15];
			dm  = isByte ? inpb[ 7] : inpb[ 15];
			tsm = isByte ? inpa[ 7] : inpa[ 15];
			sm  = bAdd ? tsm : ~tsm;

			ov = (sm & dm & ~rm) | (~sm & ~dm & rm);
			
			// Store half carry for bcd correction
			subHcarry = inpa[4] ^ inpb[4] ^ rtemp[4];
		
		end
	endtask
	
	
	// CCR flags process
	always_comb begin
		
		ccrTemp[mp_XF] = pswCcr[mp_XF];     ccrTemp[mp_CF] = 0;     ccrTemp[mp_VF] = 0;	

		// Not on all operators
		ccrTemp[ mp_ZF] = isByte ? ~(| result[7:0]) : ~(| result);
		ccrTemp[ mp_NF] = isByte ? result[7] : result[15];

		unique case( oper)
		
		mp_OP_EXT:
			// Division overflow.
			if( aluColumn == 5) begin
				ccrTemp[mp_VF] = 1'b1;		
				ccrTemp[mp_NF] = 1'b1; 
				ccrTemp[mp_ZF] = 1'b0;
			end

		mp_OP_SUB0,				// used by NOT
		mp_OP_OR,
		mp_OP_EOR:
			begin
				ccrTemp[mp_CF] = 0;      ccrTemp[mp_VF] = 0;
			end

		mp_OP_AND:
			begin
				// ROXL/ROXR indeed copy X to C in column 1 (mp_OP_AND), executed before entering the loop.
				// Needed when rotate count is zero, the ucode with the ROX operator never reached.
				// 	C must be set to the value of X, X remains unaffected.
				if( (aluColumn == 1) & (row[11] | row[8]))
					ccrTemp[mp_CF] = pswCcr[mp_XF];
				else
					ccrTemp[mp_CF] = 0;
				ccrTemp[mp_VF] = 0;
			end
			
		// Assumes col 3 of DIV use C and not X !
		// V will be set in other cols (2/3) of DIV
		mp_OP_SLAA:   ccrTemp[ mp_CF] = aOperand[15];
		
		mp_OP_LSL,mp_OP_ROXL:
			begin
				ccrTemp[ mp_CF] = shftMsb;
				ccrTemp[ mp_XF] = shftMsb;
				ccrTemp[ mp_VF] = 1'b0;
			end
			
		mp_OP_LSR,mp_OP_ROXR:
			begin
				// 0 Needed for mul, or carry gets in high word
				ccrTemp[ mp_CF] = shftIsMul ? 1'b0 : aOperand[0];
				ccrTemp[ mp_XF] = aOperand[0];
				// Not relevant for MUL, we clear it at mulm6 (1f) anyway.
				// Not that MUL can never overlow!
				ccrTemp[ mp_VF] = 0;
				// Z is checking here ALU (low result is actually in ALUE).
				// But it is correct, see comment above.
			end
			
		mp_OP_ASL:
			begin
				ccrTemp[ mp_XF] = shftMsb;			ccrTemp[ mp_CF] = shftMsb;
				// V set if msb changed on any shift.
				// Otherwise clear previously on mp_OP_AND (col 1i).
				ccrTemp[ mp_VF] = pswCcr[mp_VF] | (shftMsb ^
					(isLong ? alue[15-1] : (isByte ? aOperand[7-1] : aOperand[15-1])) );
			end
		mp_OP_ASR:
			begin
				ccrTemp[ mp_XF] = aOperand[0];		ccrTemp[ mp_CF] = aOperand[0];
				ccrTemp[ mp_VF] = 0;
			end
      
		// X not changed on ROL/ROR !
		mp_OP_ROL:		ccrTemp[ mp_CF] = shftMsb;
		mp_OP_ROR:		ccrTemp[ mp_CF] = aOperand[0];

		mp_OP_ADD,
		mp_OP_ADDC,
		mp_OP_ADDX,
		mp_OP_SUB,
		mp_OP_SUBC,
		mp_OP_SUBX:
			begin
				ccrTemp[ mp_CF] = subCout;
				ccrTemp[ mp_XF] = subCout;
				ccrTemp[ mp_VF] = subOv;
			end

		mp_OP_ABCD,
		mp_OP_SBCD:
			begin
				ccrTemp[ mp_XF] = bcdCarry;
				ccrTemp[ mp_CF] = bcdCarry;
				ccrTemp[ mp_VF] = bcdOverf;
			end
		
		endcase
				
	end
	
	// Core and psw latched at the same cycle
	
	// CCR filter
	// CCR out mux for Z & C flags
	// Z flag for 32-bit result
	// Not described, but should be used also for instructions
	//   that clear but not set Z (ADDX/SUBX/ABCD, etc)!
	logic [4:0] ccrMasked;
	always_comb begin
		ccrMasked = (ccrTemp & ccrMask) | (pswCcr & ~ccrMask);
		// if( finish | isCorf | isArX)		// No need to check specicially for isCorf as they always have the "finish" flag anyway
		if( finish | isArX)
			ccrMasked[ mp_ZF] = ccrTemp[ mp_ZF] & pswCcr[ mp_ZF];
	end
		
	always_ff @( posedge clk) begin
		if( enT3) begin
			// Update latches from ALU operators
			if( (| aluColumn)) begin
				aluLatch <= result;
				
				coreH <= subHcarry;
			   
				// Update CCR core
				if( (| aluColumn))
					ccrCore <= ccrTemp;		// Most bits not really used
			end

			if( alueClkEn)
				alue <= iDataBus;
			else if( isShift & (| aluColumn))
				alue <= shftResult[31:16];
		end
				
		// CCR
		// Originally on T3-T4 edge pulse !!
		// Might be possible to update on T4 (but not after T0) from partial result registered on T3, it will increase performance!
		if( pwrUp)
			pswCcr <= '0;
		else if( enT3 & ftu2Ccr)
			pswCcr <= ftu[4:0];	
		else if( enT3 &	~noCcrEn & (finish | init))
			pswCcr <= ccrMasked;
	end
	assign ccr = { 3'b0, pswCcr};	

	      
endmodule

// add bcd correction factor
// It would be more efficient to merge add/sub with main ALU !!!
module mp_aluCorf( input [7:0] binResult, input bAdd, input cin, input hCarry,
	output [7:0] bcdResult, output dC, output logic ov);

	reg [8:0] htemp;
	reg [4:0] hNib;
	
	wire lowC  = hCarry | (bAdd ? gt9( binResult[ 3:0]) : 1'b0);
	wire highC = cin	| (bAdd ? (gt9( htemp[7:4]) | htemp[8]) : 1'b0);
		
	always_comb begin
		if( bAdd) begin
			htemp = { 1'b0, binResult} + (lowC  ? 4'h6 : 4'h0);
			hNib  = htemp[8:4] + (highC ? 4'h6 : 4'h0);
			ov = hNib[3] & ~binResult[7];
		end
		else begin
			htemp = { 1'b0, binResult} - (lowC  ? 4'h6 : 4'h0);
			hNib  = htemp[8:4] - (highC ? 4'h6 : 4'h0);
			ov = ~hNib[3] & binResult[7];
		end
	end

	assign bcdResult = { hNib[ 3:0], htemp[3:0]};
	assign dC = hNib[4] | cin;

	// Nibble > 9
	function gt9 (input [3:0] nib);
	begin
		gt9 = nib[3] & (nib[2] | nib[1]);
	end
	endfunction

endmodule


module mp_aluShifter( input [31:0] data,
	input isByte, input isLong, swapWords,
	input dir, input cin,
	output logic [31:0] result);
	// output reg cout

	logic [31:0] tdata;         

	// size mux, put cin in position if dir == right
	always_comb begin
		tdata = data;
		if( isByte & dir)
			tdata[8] = cin;
		else if( !isLong & dir)
			tdata[16] = cin;
	end
    
	always_comb begin
		// Reverse alu/alue position for MUL & DIV
		// Result reversed again
		if( swapWords & dir)
			result = { tdata[0], tdata[31:17], cin, tdata[15:1]};
		else if( swapWords)
			result = { tdata[30:16], cin, tdata[14:0], tdata[31]};
			
		else if( dir)
			result = { cin, tdata[31:1]};
		else
			result = { tdata[30:0], cin};
	end

endmodule


// Get current OP from row & col
module mp_aluGetOp( input [15:0] row, input [2:0] col, input isCorf,
	output logic [4:0] aluOp);
	
	always_comb begin
		aluOp = 'X;
		unique case( col)  
		1:   aluOp = mp_OP_AND;
		5:   aluOp = mp_OP_EXT;

		default:
			unique case( 1'b1)
				row[1]:
					unique case( col)
					2: aluOp = mp_OP_SUB;
					3: aluOp = mp_OP_SUBC;
					4,6: aluOp = mp_OP_SLAA;
					endcase
				
				row[2]:
					unique case( col)
					2: aluOp = mp_OP_ADD;
					3: aluOp = mp_OP_ADDC;
					4: aluOp = mp_OP_ASR;
					endcase

				row[3]:
					unique case( col)
					2: aluOp = mp_OP_ADDX;
					3: aluOp = isCorf ? mp_OP_ABCD : mp_OP_ADD;
					4: aluOp = mp_OP_ASL;
					endcase
                  
				row[4]:
					aluOp = ( col == 4) ? mp_OP_LSL : mp_OP_AND;
				
				row[5],
				row[6]:
					unique case( col)
					2: aluOp = mp_OP_SUB;
					3: aluOp = mp_OP_SUBC;
					4: aluOp = mp_OP_LSR;
					endcase
				
				row[7]:					// MUL
					unique case( col)
					2: aluOp = mp_OP_SUB;
					3: aluOp = mp_OP_ADD;
					4: aluOp = mp_OP_ROXR;
					endcase
               
				row[8]:
					// mp_OP_AND For EXT.L
					// But would be more efficient to change ucode and use column 1 instead of col3 at ublock extr1!				
					unique case( col)
					2: aluOp = mp_OP_EXT;
					3: aluOp = mp_OP_AND;
					4: aluOp = mp_OP_ROXR;
					endcase
               
				row[9]:
					unique case( col)
					2: aluOp = mp_OP_SUBX;
					3: aluOp = mp_OP_SBCD;
					4: aluOp = mp_OP_ROL;
					endcase

				row[10]:
					unique case( col)
					2: aluOp = mp_OP_SUBX;
					3: aluOp = mp_OP_SUBC;
					4: aluOp = mp_OP_ROR;
					endcase
                
				row[11]:
					unique case( col)
					2: aluOp = mp_OP_SUB0;
					3: aluOp = mp_OP_SUB0;
					4: aluOp = mp_OP_ROXL;
					endcase
                
				row[12]:	aluOp = mp_OP_ADDX;               
				row[13]:	aluOp = mp_OP_EOR;
				row[14]:	aluOp = (col == 4) ? mp_OP_EOR : mp_OP_OR;
				row[15]:	aluOp = (col == 3) ? mp_OP_ADD : mp_OP_OR;		// mp_OP_ADD used by DBcc
				
			endcase         
		endcase
	end
endmodule

// Decodes IRD into ALU row (1-15)
// Slow, but no need to optimize for speed since IRD is latched at least two CPU cycles before it is used
// We also register the result after combining with column from nanocode
//
// Many opcodes are not decoded because they either don't do any ALU op,
// or use only columns 1 and 5 that are the same for all rows.

module mp_rowDecoder( input [15:0] ird,
	output logic [15:0] row, output noCcrEn, output logic isArX);


	// Addr or data register direct
	wire eaRdir = (ird[ 5:4] == 2'b00);
	// Addr register direct
	wire eaAdir = (ird[ 5:3] == 3'b001);
	wire size11 = ird[7] & ird[6];
	
	always_comb begin
		case( ird[15:12])
		'h4,
		'h9,
		'hd:
			isArX = row[10] | row[12];
		default:
			isArX = 1'b0;
		endcase
	end

	always_comb begin
		unique case( ird[15:12])

		'h4:  begin
				if( ird[8])
					row = `MP_ALU_ROW_06;			// chk (or lea)
				else case( ird[11:9])
					'b000: row = `MP_ALU_ROW_10;	// negx
					'b001: row = `MP_ALU_ROW_04;	// clr
					'b010: row = `MP_ALU_ROW_05;	// neg
					'b011: row = `MP_ALU_ROW_11;	// not
					'b100: row = (ird[7]) ? `MP_ALU_ROW_08 : `MP_ALU_ROW_09;	// nbcd/swap/ext(or pea)
					'b101: row = `MP_ALU_ROW_15;	// tst & tas
					default: row = 0;
				endcase
			end

		'h0: begin
				if( ird[8])                       // dynamic bit
					row = ird[7] ? `MP_ALU_ROW_14 : `MP_ALU_ROW_13;
				else case( ird[ 11:9])
					'b000:   row = `MP_ALU_ROW_14;	// ori
					'b001:   row = `MP_ALU_ROW_04;	// andi
					'b010:   row = `MP_ALU_ROW_05;	// subi
					'b011:   row = `MP_ALU_ROW_02;	// addi
					'b100:   row = ird[7] ? `MP_ALU_ROW_14 : `MP_ALU_ROW_13;   // static bit
					'b101:   row = `MP_ALU_ROW_13;	// eori
					'b110:   row = `MP_ALU_ROW_06;	// cmpi
					default: row = 0;
					endcase
				end
				
		// MOVE
		// move.b originally also rows 5 & 15. Only because IRD bit 14 is not decoded.
		// It's the same for move the operations performed by MOVE.B

		'h1,'h2,'h3:   row = `MP_ALU_ROW_02;
		
		'h5:
			if( size11)										
               row = `MP_ALU_ROW_15;								// As originally and easier to decode
			else
				row = ird[8] ? `MP_ALU_ROW_05 : `MP_ALU_ROW_02;     // addq/subq
		'h6:	row = 0;						//bcc/bra/bsr
		'h7:	row = `MP_ALU_ROW_02;				// moveq
		'h8:
			if( size11)						// div
				row = `MP_ALU_ROW_01;
			else if( ird[8] & eaRdir)		// sbcd
				row = `MP_ALU_ROW_09;
			else
				row = `MP_ALU_ROW_14;			// or
		'h9:
			if( ird[8] & ~size11 & eaRdir)
				row = `MP_ALU_ROW_10;			// subx
			else
				row = `MP_ALU_ROW_05;			// sub/suba
		'hb:
			if( ird[8] & ~size11 & ~eaAdir)
				row = `MP_ALU_ROW_13;			// eor
			else
				row = `MP_ALU_ROW_06;			// cmp/cmpa/cmpm
		'hc:
			if( size11)
				row = `MP_ALU_ROW_07;			// mul
			else if( ird[8] & eaRdir)		// abcd
				row = `MP_ALU_ROW_03;
			else
				row = `MP_ALU_ROW_04;			// and
		'hd:
			if( ird[8] & ~size11 & eaRdir)
				row = `MP_ALU_ROW_12;			// addx
			else
				row = `MP_ALU_ROW_02;			// add/adda
		'he:
			begin
				reg [1:0] stype;
				
				if( size11)					// memory shift/rotate
					stype = ird[ 10:9];
				else						// register shift/rotate
					stype = ird[ 4:3];

				case( {stype, ird[8]})
				0: row = `MP_ALU_ROW_02;	// ASR
				1: row = `MP_ALU_ROW_03;	// ASL
				2: row = `MP_ALU_ROW_05;	// LSR
				3: row = `MP_ALU_ROW_04;	// LSL
				4: row = `MP_ALU_ROW_08;	// ROXR
				5: row = `MP_ALU_ROW_11;	// ROXL
				6: row = `MP_ALU_ROW_10;	// ROR
				7: row = `MP_ALU_ROW_09;	// ROL
				endcase
			end
			
		default:	row = 0;
		endcase
	end
   
	// Decode opcodes that don't affect flags
	// ADDA/SUBA ADDQ/SUBQ MOVEA

	assign noCcrEn =
		// ADDA/SUBA
		( ird[15] & ~ird[13] & ird[12] & size11) |
		// ADDQ/SUBQ to An
		( (ird[15:12] == 4'h5) & eaAdir) |
		// MOVEA
		( (~ird[15] & ~ird[14] & ird[13]) & ird[8:6] == 3'b001);
        
endmodule

// Row/col CCR update table
module mp_ccrTable( 
	input [2:0] col, input [15:0] row, input finish,
	output logic [mp_MASK_NBITS-1:0] ccrMask);
    
	localparam
		KNZ00 = 5'b01111,   // ok coz operators clear them
		KKZKK = 5'b00100,
		KNZKK = 5'b01100,
		KNZ10 = 5'b01111,	// Used by mp_OP_EXT on divison overflow
		KNZ0C = 5'b01111,	// Used by DIV. V should be 0, but it is ok:
							// DIVU: ends with quotient - 0, so V & C always clear.
							// DIVS: ends with 1i (AND), again, V & C always clear.

		KNZVC	= 5'b01111,
		XNKVC	= 5'b11011,	// Used by BCD instructions. Don't modify Z at all at the binary operation. Only at the BCD correction cycle
		
		CUPDALL = 5'b11111,
		CUNUSED = 5'bxxxxx;
    

	logic [mp_MASK_NBITS-1:0] ccrMask1;

	always_comb begin
		unique case( col)
		1:			ccrMask = ccrMask1;
		
		2,3:
			unique case( 1'b1)
			row[1]:		ccrMask = KNZ0C;		// DIV, used as 3n in col3
			
			row[3],								// ABCD
			row[9]:								// SBCD/NBCD
						ccrMask = (col == 2) ? XNKVC : CUPDALL;
			
			row[2],
			row[5],
			row[10],							// SUBX/NEGX
			row[12]:	ccrMask = CUPDALL;		// ADDX

			row[6],								// CMP
			row[7],								// MUL		
			row[11]:	ccrMask = KNZVC;		// NOT
			row[4],
			row[8],								// Not used in col 3
			row[13],
			row[14]:	ccrMask = KNZ00;
			row[15]:	ccrMask = 5'b0;			// TAS/Scc, not used in col 3
			// default:	ccrMask = CUNUSED;
			endcase			
			
		4:
			unique case( row)
			// 1: DIV, only n (4n & 6n)
			// 14: BCLR 4n
			// 6,12,13,15	// not used
			`MP_ALU_ROW_02,
			`MP_ALU_ROW_03,							// ASL    (originally ANZVA)
			`MP_ALU_ROW_04,
			`MP_ALU_ROW_05:	ccrMask = CUPDALL;		// Shifts (originally ANZ0A)
			
			`MP_ALU_ROW_07:	ccrMask = KNZ00;		// MUL (originally KNZ0A)
			`MP_ALU_ROW_09,
			`MP_ALU_ROW_10:	ccrMask = KNZ00;		// RO[lr] (originally KNZ0A)
			`MP_ALU_ROW_08,							// ROXR (originally ANZ0A)
			`MP_ALU_ROW_11:	ccrMask = CUPDALL;		// ROXL (originally ANZ0A)
			default:	ccrMask = CUNUSED;
			endcase
		
		5:			ccrMask = row[1] ? KNZ10 : 5'b0;
		default:	ccrMask = CUNUSED;
		endcase
	end

	// Column 1 (AND)      
	always_comb begin
		if( finish)
			ccrMask1 = row[7] ? KNZ00 : KNZKK;
		else
			ccrMask1 = row[13] | row[14] ? KKZKK : KNZ00;
	end
    
endmodule
