//      // verilator_coverage annotation
        package VDP1_PKG;
        
        	//Registers
        	typedef struct packed	//WO,100000
        	{
        		bit [11: 0] UNUSED;
        		bit         VBE;
        		bit [ 2: 0] TVM;
        	} TVMR_t;
        	parameter bit [15:0] TVMR_MASK = 16'h000F;
        
        	typedef struct packed	//WO,100002
        	{
        		bit [10: 0] UNUSED;
        		bit         EOS;
        		bit         DIE;
        		bit         DIL;
        		bit         FCM;
        		bit         FCT;
        	} FBCR_t;
        	parameter bit [15:0] FBCR_MASK = 16'h001F;
        
        	typedef struct packed	//WO,100004
        	{
        		bit [13: 0] UNUSED;
        		bit [ 1: 0] PTM;
        	} PTMR_t;
        	parameter bit [15:0] PTMR_MASK = 16'h0003;
        	
        	typedef bit [15:0] EWDR_t;	//WO,100006
        	parameter bit [15:0] EWDR_MASK = 16'hFFFF;
        	
        	typedef struct packed	//WO,100008
        	{
        		bit         UNUSED;
        		bit [ 8: 3] X1;
        		bit [ 8: 0] Y1;
        	} EWLR_t;
        	parameter bit [15:0] EWLR_MASK = 16'h7FFF;
        
        	typedef struct packed	//WO,10000A
        	{
        		bit [ 9: 3] X3;
        		bit [ 8: 0] Y3;
        	} EWRR_t;
        	parameter bit [15:0] EWRR_MASK = 16'hFFFF;
        	
        	typedef bit [15:0] ENDR_t;	//WO,10000C
        	parameter bit [15:0] ENDR_MASK = 16'h0000;
        	
        	typedef struct packed	//RO,100010
        	{
        		bit [13: 0] UNUSED;
        		bit         CEF;
        		bit         BEF;
        	} EDSR_t;
        	parameter bit [15:0] EDSR_MASK = 16'h0003;
        	
        	typedef bit [15:0] LOPR_t;	//RO,100012
        	parameter bit [15:0] LOPR_MASK = 16'hFFFC;
        	
        	typedef bit [15:0] COPR_t;	//RO,100014
        	parameter bit [15:0] COPR_MASK = 16'hFFFC;
        	
        	typedef struct packed	//RO,100016
        	{
        		bit [ 3: 0] VER;
        		bit [ 2: 0] UNUSED;
        		bit         PTM1;
        		bit         EOS;
        		bit         DIE;
        		bit         DIL;
        		bit         FCM;
        		bit         VBE;
        		bit [ 2: 0] TVM;
        	} MODR_t;
        	parameter bit [15:0] MODR_MASK = 16'hF1FF;
        	
        	//Command tables
        	typedef struct packed	//00
        	{
        		bit         END;
        		bit [ 2: 0] JP;
        		bit [ 3: 0] ZP;
        		bit [ 1: 0] UNUSED;
        		bit [ 1: 0] DIR;
        		bit [ 3: 0] COMM;
        	} CMDCTRL_t;
        	parameter bit [15:0] CMDCTRL_MASK = 16'hFF3F;
        	
        	typedef bit [15:0] CMDLINK_t;	//02
        	parameter bit [15:0] CMDLINK_MASK = 16'hFFFC;
        	
        	typedef struct packed	//04
        	{
        		bit         MON;
        		bit [ 1: 0] UNUSED;
        		bit         HSS;
        		bit         PCLP;
        		bit         CLIP;
        		bit         CMOD;
        		bit         MESH;
        		bit         ECD;
        		bit         SPD;
        		bit [ 2: 0] CM;
        		bit [ 2: 0] CCB;
        	} CMDPMOD_t;
        	parameter bit [15:0] CMDPMOD_MASK = 16'h9FFF;
        	
        	typedef bit [15:0] CMDCOLR_t;	//06
        	parameter bit [15:0] CMDCOLR_MASK = 16'hFFFF;
        	
        	typedef bit [15:0] CMDSRCA_t;	//08
        	parameter bit [15:0] CMDSRCA_MASK = 16'hFFFF;
        	
        	typedef struct packed	//0A
        	{
        		bit [ 1: 0] UNUSED;
        		bit [ 8: 3] SX;
        		bit [ 7: 0] SY;
        	} CMDSIZE_t;
        	parameter bit [15:0] CMDSIZE_MASK = 16'h3FFF;
        	
        	typedef struct packed	//0C-1A
        	{
        		bit [ 4: 0] EXT;
        		bit [10: 0] COORD;
        	} CMDCRD_t;
        	parameter bit [15:0] CMDCRD_MASK = 16'hFFFF;
        	
        	typedef bit [15:0] CMDGRDA_t;	//1C
        	parameter bit [15:0] CMDGRDA_MASK = 16'hFFFF;
        	
        	typedef struct packed
        	{
        		CMDCTRL_t   CMDCTRL;	//00
        		CMDLINK_t   CMDLINK;	//02
        		CMDPMOD_t   CMDPMOD;	//04
        		CMDCOLR_t   CMDCOLR;	//06
        		CMDSRCA_t   CMDSRCA;	//08
        		CMDSIZE_t   CMDSIZE;	//0A
        		CMDCRD_t    CMDXA;	//0C
        		CMDCRD_t    CMDYA;	//0E
        		CMDCRD_t    CMDXB;	//10
        		CMDCRD_t    CMDYB;	//12
        		CMDCRD_t    CMDXC;	//14
        		CMDCRD_t    CMDYC;	//16
        		CMDCRD_t    CMDXD;	//18
        		CMDCRD_t    CMDYD;	//1A
        		CMDGRDA_t   CMDGRDA;	//1C
        		bit [15: 0] UNUSED;	//1E
        	} CMDTBL_t;
        	
        	//Command value
        	parameter CMD_NSPR 	= 4'h0; 	//Normal sprite draw
        	parameter CMD_SSPR 	= 4'h1; 	//Scaled sprite draw
        	parameter CMD_DSPR 	= 4'h2;	//Distorted sprite draw
        	parameter CMD_POLY 	= 4'h4;	//Polygon draw
        	parameter CMD_PLIN 	= 4'h5;	//Polyline draw
        	parameter CMD_LINE 	= 4'h6;	//Line draw
        	parameter CMD_UCLIP 	= 4'h8;	//Set user clipping coordinate
        	parameter CMD_SCLIP 	= 4'h9;	//Set system clipping coordinate
        	parameter CMD_LCORD 	= 4'hA;	//Set local coordinate
        	
        	
        	typedef struct packed
        	{
        		bit [10: 0] X1;
        		bit [10: 0] Y1;
        		bit [10: 0] X2;
        		bit [10: 0] Y2;
        	} Clip_t;
        	parameter Clip_t CLIP_NULL = {11'h000,11'h000,11'h000,11'h000};
        	
        	typedef struct packed
        	{
        		bit [11: 0] X;
        		bit [11: 0] Y;
        	} Coord_t;
        	parameter Coord_t COORD_NULL = {11'h000,11'h000};
        	
        	
        	typedef struct packed
        	{
        		bit [12: 0] X;
        		bit [12: 0] Y;
        	} Vertex_t;
        	parameter Vertex_t VERT_NULL = {12'h000,12'h000};
        	
        	//Rotation screen
        	typedef struct packed
        	{
        		bit [ 2: 0] UNUSED;
        		bit [12: 0] INT;
        		bit [ 9: 0] FRAC;
        		bit [ 5: 0] UNUSED2;
        	} ScrnStart_t;
        	parameter ScrnStart_t SCNST_NULL = {3'h0,13'h0000,10'h000,6'h00};
        	
        	typedef struct packed
        	{
        		bit [12: 0] UNUSED;
        		bit [ 2: 0] INT;
        		bit [ 9: 0] FRAC;
        		bit [ 5: 0] UNUSED2;
        	} ScrnInc_t;
        	parameter ScrnInc_t SCNINC_NULL = {13'h0000,3'h0,10'h000,6'h00};
        	
        	typedef struct packed
        	{
        		bit [10: 0] INT;
        		bit [ 8: 0] FRAC;
        	} RotCoord_t;
        	parameter bit [31:0] RC_NULL = {16'h0000,16'h0000};
        	parameter bit [31:0] RC_ONE = {16'h0001,16'h0000};
        	
 000064 	function RotCoord_t ScrnStartToRC(ScrnStart_t P);
 000064 		return { {P.INT[12],P.INT[9:0]}, P.FRAC[9:1]};
        	endfunction
        	
 4594198 	function RotCoord_t ScrnIncToRC(ScrnInc_t P);
 4594198 		return { {{8{P.INT[2]}},P.INT}, P.FRAC[9:1] };
        	endfunction
        	
%000000 	function bit [18:1] SprAddr(input bit [16:3] OFFSY, input CMDSRCA_t CMDSRCA, input bit [2:0] CM);
%000000 		bit [18:1] ADDR;
        
%000000 		case (CM)
        			3'b000,
%000000 			3'b001:  ADDR = {CMDSRCA,2'b00} + {3'b000,OFFSY,1'b0};
        			3'b010,
        			3'b011,
%000000 			3'b100:  ADDR = {CMDSRCA,2'b00} + {2'b00,OFFSY,2'b00};
%000000 			default: ADDR = {CMDSRCA[15:1],1'b0,2'b00} + {1'b0,OFFSY,3'b000};
        		endcase
%000000 		return ADDR;
        	endfunction
        	
 9952887 	function bit [15:0] GetSprData(input bit [15:0] DATA, input bit [2:0] CM, input bit [1:0] OFFSX);
 9952887 		bit [15:0] D;
        		
 9952887 		case (CM)
        			3'b000,
 6911808 			3'b001:
 6911808 				case (OFFSX)
 5434137 					2'b00: D = {12'h000,DATA[15:12]};
 693435 					2'b01: D = {12'h000,DATA[11: 8]};
 132517 					2'b10: D = {12'h000,DATA[ 7: 4]};
 651719 					2'b11: D = {12'h000,DATA[ 3: 0]};
        				endcase
        			3'b010,
        			3'b011,
 2125354 			3'b100:
 2125354 				case (OFFSX[0])
 931148 					1'b0: D = {8'h00,DATA[15: 8]};
 1194206 					1'b1: D = {8'h00,DATA[ 7: 0]};
        				endcase
 915725 			default: D = DATA;
        		endcase
        
 9952887 		return D;
        	endfunction
        	
        	typedef struct packed
        	{
        		bit [15: 0] C;
        		bit         TP;
        		bit         EC;
        	} Pattern_t;
        	parameter Pattern_t PATTERN_NULL = {16'h0000,1'b0,1'b0};
        	
 9876594 	function Pattern_t GetPattern(input bit [15:0] DATA, input bit [2:0] CM);
 9876594 		bit [15:0] C;
 9876594 		bit        TP;
 9876594 		bit        EC;
        		
 9876594 		case (CM)
        			3'b000,
 6889931 			3'b001: begin C = {12'h000,DATA[3:0]}; TP = ~|DATA[3:0]; EC = &DATA[3:0]; end
        			3'b010,
        			3'b011,
 2096010 			3'b100: begin C = {8'h00,DATA[7:0]}; TP = ~|DATA[7:0]; EC = &DATA[7:0]; end
 890653 			default: begin C = DATA; TP = ~DATA[15]; EC = (DATA == 16'h7FFF); end
        		endcase
        
 9876594 		return {C,TP,EC};
        	endfunction
        	
        	typedef struct packed
        	{
        		bit [ 4: 0] B;
        		bit [ 4: 0] G;
        		bit [ 4: 0] R;
        	} RGB_t;
        	
        	typedef struct packed
        	{
        		bit         DIR;
        		bit [ 4: 0] INT;
        		bit [11: 0] FRAC;
        	} ColorFP_t;
        	
        	typedef struct packed
        	{
        		ColorFP_t  B;
        		ColorFP_t  G;
        		ColorFP_t  R;
        	} RGBFP_t;
        	
 064583 	function RGBFP_t RGBItoF(input RGB_t CI);
 064583 		RGBFP_t CF;
        		
 064583 		CF.R = {1'b0,CI.R,12'b000000000000};
 064583 		CF.G = {1'b0,CI.G,12'b000000000000};
 064583 		CF.B = {1'b0,CI.B,12'b000000000000};
 064583 		return CF;
        	endfunction
        	
 17623554 	function RGB_t RGBFtoI(input RGBFP_t CF);
 17623554 		RGB_t CI;
        		
 17623554 		CI.R = CF.R.INT;
 17623554 		CI.G = CF.G.INT;
 17623554 		CI.B = CF.B.INT;
 17623554 		return CI;
        	endfunction
        	
 1528812 	function RGB_t ColorHalf(input RGB_t CA);
 1528812 		RGB_t CH;
        		
 1528812 		CH.R = {1'b0,CA.R[4:1]};
 1528812 		CH.G = {1'b0,CA.G[4:1]};
 1528812 		CH.B = {1'b0,CA.B[4:1]};
 1528812 		return CH;
        	endfunction
        	
 4708563 	function RGB_t ColorAdd(input RGB_t CA, input RGB_t CB);
 4708563 		RGB_t CR;
        		
 4708563 		CR.R = CA.R + CB.R;
 4708563 		CR.G = CA.G + CB.G;
 4708563 		CR.B = CA.B + CB.B;
 4708563 		return CR;
        	endfunction
        	
 4708563 	function RGB_t GouraudAdd(input RGB_t CO, input RGB_t CG);
 4708563 		bit [6:0] SUMR,SUMG,SUMB;
 4708563 		RGB_t CR;
        		
 4708563 		SUMR = {2'b00,CO.R} + {2'b00,CG.R} - 7'h10;
 4708563 		SUMG = {2'b00,CO.G} + {2'b00,CG.G} - 7'h10;
 4708563 		SUMB = {2'b00,CO.B} + {2'b00,CG.B} - 7'h10;
        		
 4708563 		CR.R = SUMR[6:5] == 2'b11 ? 5'h00 : SUMR[6:5] == 2'b01 ? 5'h1F : SUMR[4:0];
 4708563 		CR.G = SUMG[6:5] == 2'b11 ? 5'h00 : SUMG[6:5] == 2'b01 ? 5'h1F : SUMG[4:0];
 4708563 		CR.B = SUMB[6:5] == 2'b11 ? 5'h00 : SUMB[6:5] == 2'b01 ? 5'h1F : SUMB[4:0];
        		
 4708563 		return CR;
        	endfunction
        	
        	// Colour calculation. A is the source (original or gouraud-shaded, optionally halved), B the background.
        	//  CCB[1:0]: 0 replace, 1 shadow (background only), 2 half luminance, 3 half transparent; CCB[2] selects gouraud.
 4708563 	function bit [15:0] ColorCalc(input bit [15:0] ORIG, input bit [15:0] BACK, input bit [14:0] CG, input bit [2:0] CCB);
 4708563 		RGB_t      GOUR,BASE,A,B,S;
 4708563 		bit        H,Z,BH,BZ,BFULL;
        		
 4708563 		GOUR = GouraudAdd(ORIG[14:0],CG);
 4708563 		BASE = CCB[2] ? GOUR : ORIG[14:0];
 4708563 		H = CCB[1] & (~CCB[0] | BACK[15]);
 4708563 		Z = ~CCB[1] & CCB[0];
 4708563 		BZ = ~CCB[0] | (CCB[1] & ~BACK[15]);
 4708563 		BH = BACK[15] & (CCB[1] | ~CCB[2]);
 4708563 		A = Z ? '0 : H ? ColorHalf(BASE) : BASE;
 4708563 		B = BZ ? '0 : BH ? ColorHalf(BACK[14:0]) : BACK[14:0];
 4708563 		S = ColorAdd(A,B);
 4708563 		return {CCB[0] & ~CCB[1] ? BACK[15] : CCB[1] & CCB[0] ? (BACK[15] | ORIG[15]) : ORIG[15], S};
        	endfunction
        
 9633731 	function bit [12:0] SDiv2(input bit [12:0] C);
 9633731 		return {C[12],C[12:1]};
        	endfunction
        	
 226340 	function bit [11:0] Abs(input bit [12:0] C);
 226340 		bit [12:0] abs; 
        		
 226340 		abs = $signed(C) >= 0 ? $signed(C) : -$signed(C);
 226340 		return abs[11:0];
        	endfunction
        	
        endpackage
        
