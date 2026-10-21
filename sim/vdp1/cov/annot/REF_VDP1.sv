//      // verilator_coverage annotation
        module REF_VDP1 (
 8799623 	input              CLK,
 000060 	input              RST_N,
 4399836 	input              CE_R,
 4399836 	input              CE_F,
%000001 	input              EN,
        	
%000001 	input              RES_N,
        
 030787 	input      [15: 0] DI,
 013392 	output     [15: 0] DO,
 028362 	input              CS_N,
 028362 	input              AD_N,
 012592 	input              DTEN_N,
 038062 	input              REQ_N,
 042122 	output             RDY_N,
        	
 000053 	output             IRQ_N,
        	
 2029401 	input              DCE_R,
 2029438 	input              DCE_F,
 040568 	input              HTIM_N,
 002567 	input              VTIM_N,
 2200983 	input      [15: 0] VOUTI,
 157129 	output     [15: 0] VOUTO,
        	
 270914 	output reg [18: 1] VRAM_A,
 003450 	output reg [15: 0] VRAM_D,
 014044 	input      [15: 0] VRAM_Q,
 013595 	output reg [ 1: 0] VRAM_WE,
 685625 	output reg         VRAM_RD,
~002151 	output reg [ 8: 0] VRAM_BLEN,
 699221 	input              VRAM_RDY,
        	
 430241 	output     [17: 1] FB0_A,
 015796 	output     [15: 0] FB0_D,
 116363 	input      [15: 0] FB0_Q,
 445406 	output     [ 1: 0] FB0_WE,
 106065 	output             FB0_RD,
        	
 500045 	output     [17: 1] FB1_A,
 008055 	output     [15: 0] FB1_D,
 118430 	input      [15: 0] FB1_Q,
 533639 	output     [ 1: 0] FB1_WE,
 066261 	output             FB1_RD,
 229206 	input              FB_RDY,
 000014 	output             FB_MODE3,
        	
 000012 	input              FAST,
 000015 	input              BLUR_MESH,
        	
%000000 	input      [ 7: 0] DBG_EXT
        	
        `ifdef DEBUG
        	                   ,
        	output             DBG_START,
        	output             DBG_CMD_END,
        	output     [18: 1] DBG_SPR_ADDR,
        	output             DBG_LINE_DRAW_STEP,
        	output             DBG_TEXT_READ_STEP,
        	output             DBG_COL_DRAW_STEP,
        	output     [ 8: 0] DBG_TEXT_X,
        	output     [ 7: 0] DBG_TEXT_Y,
        	output     [15: 0] ORIG_C_DBG,
        	output     [11: 0] DRAW_X_DBG,
        	output     [11: 0] DRAW_Y_DBG,
        	output       RGB_t DBG_ORIG_RGB,
        	output Pattern_t   DBG_PAT,
        	output             TP_DBG,
        	output             SCLIP_DBG,
        	output             UCLIP_DBG,
        	output             DBG_LINE_OVER,
        	output             DBG_DRAW_OVER,
        	output     [ 7: 0] FRAMES_DBG,
        	output     [ 7: 0] START_DRAW_CNT,
        	output     [18: 1] DBG_CMD_ADDR16,
        	output     [18: 1] DBG_CMD_ADDR_LAST,
        	output   CMDSRCA_t DBG_CMD_CMDSRCA_LAST,
        	output     [ 7: 0] DBG_CMD_CNT,
        	output     [ 7: 0] DBG_CMD_WAIT_CNT,
        	output             DBG_CMD_ADDR_ERR,
        	output       RGB_t DBG_GHCOLOR_C,
        	output       RGB_t DBG_GHCOLOR_D,
        	output reg         DBG_SKIP,
        	output             DBG_PENALTY_OVER,
        	output reg         DBG_HOOK,
        	output             DBG_REG_WR
        `endif
        );
        	import REF_VDP1_PKG::*;
        	
~000026 	TVMR_t       TVMR;
~000052 	FBCR_t       FBCR;
~000048 	PTMR_t       PTMR;
 000026 	EWDR_t       EWDR;
~000037 	EWLR_t       EWLR;
~000037 	EWRR_t       EWRR;
~000052 	EDSR_t       EDSR;
~000378 	LOPR_t       LOPR;
~014011 	COPR_t       COPR;
~000030 	MODR_t       MODR;
 000017 	bit          DIE,DIL;
        
 000145 	bit          FRAME_START;
 000026 	bit          FRAME_ERASE;
 001401 	bit          VBLANK_ERASE;
 000721 	bit          FRAME_ERASE_EN;
 001401 	bit          VBLANK_ERASE_EN;
%000000 	bit          OUT_EN;
%000000 	bit          DRAW_TERMINATE;
 000052 	bit          DRAW_END;
 001267 	bit          FRAME_ODD;
        	
 009320 	bit  [15: 0] CLT_Q;
        	
        	//Frame buffers
 000813 	bit          FB_SEL;
 072601 	bit  [17: 1] FB_A;
 022891 	bit  [15: 0] FB_D;
 220625 	bit  [ 1: 0] FB_WE;
 172325 	bit          FB_RD;
 063799 	bit  [15: 0] FB_DRAW_Q;
 431558 	bit          FB_DRAW_WAIT;
 586817 	bit  [17: 1] FB_DISP_A;
%000000 	bit          FB_DISP_WE;
 174062 	bit  [15: 0] FB_DISP_Q;
 1070179 	bit  [17: 1] FB_ERASE_A;
        //	bit          FRAME;
 757490 	wire         FB_ERASE_WE = (FRAME_ERASE_EN & DCE_R) | (VBLANK_ERASE_EN & CE_R);
 7354533 	wire [17: 1] FB_OUT_A = VBLANK_ERASE_EN ? FB_ERASE_A : FB_DISP_A;
        	
 4882051 	assign FB0_A  = FB_SEL ? FB_A             : FB_OUT_A;
 4882051 	assign FB1_A  = FB_SEL ? FB_OUT_A         : FB_A;
 4838711 	assign FB0_D  = FB_SEL ? FB_D             : EWDR;
 4838711 	assign FB1_D  = FB_SEL ? EWDR             : FB_D;
 9677417 	assign FB0_WE = FB_SEL ? FB_WE /*& CE_R*/ : {2{FB_ERASE_WE}};
 9677417 	assign FB1_WE = FB_SEL ? {2{FB_ERASE_WE}} : FB_WE /*& CE_R*/;
 4838711 	assign FB0_RD = FB_SEL ? FB_RD            : 1'b0;
 4838711 	assign FB1_RD = FB_SEL ? 1'b0             : FB_RD;
        	
 5389342 	assign FB_DRAW_Q = FB_SEL ? FB0_Q : FB1_Q;
 5389342 	assign FB_DISP_Q = FB_SEL ? FB1_Q : FB0_Q;
        	
        	assign FB_MODE3 = (TVMR.TVM[1:0] == 2'b11);
        	
        	typedef enum bit [5:0] {
        		CMDS_IDLE,  
        		CMDS_READ, 
        		CMDS_GRD_LOAD,
        		CMDS_EXEC,
        		CMDS_CLT_LOAD,
        		CMDS_DELAY,
        		CMDS_GRD_CALC_COL,
        		CMDS_GRD_CALC_LEFT,
        		CMDS_GRD_CALC_RIGHT,
        		CMDS_GRD_CALC_ROW,
        		CMDS_GRD_CALC_LINE,
        		CMDS_ROW_DRAW,
        		CMDS_EDGE_INIT,
        		CMDS_LINE_INIT,
        		CMDS_PRE_DRAW,CMDS_PRE_DRAW2,
        		CMDS_NSPR_CALCX,
        		CMDS_NSPR_DRAW,
        		CMDS_SSPR_CALCX,
        		CMDS_SSPR_CALCTX,
        		CMDS_SSPR_DRAW,
        		CMDS_POLYGON_CALCE,
        		CMDS_POLYGON_CALCH,
        		CMDS_POLYGON_CALCTY,
        		CMDS_LINE_CALC,
        		CMDS_LINE_CALCTX,
        		CMDS_LINE_DRAW,
        		CMDS_AA_DRAW,
        		CMDS_LINE_END,
        		CMDS_LINE_NEXT,
        		CMDS_ROW_CLIP,
        		CMDS_END
        	} CMDState_t;
~303055 	CMDState_t CMD_ST;
~014045 	bit  [18: 1] CMD_ADDR;
 028110 	bit          CMD_READ;
 056173 	bit          CMD_READ_DONE;
 001343 	bit  [18: 1] SPR_ADDR;
 031949 	bit          SPR_READ;
 017954 	bit  [15: 0] SPR_DATA;
 113255 	bit          SPR_DATA_READY;
~000244 	bit  [18: 1] CLT_ADDR;
 000067 	bit          CLT_READ;
 000134 	bit          CLT_READ_DONE;
~000245 	bit  [18: 1] GRD_ADDR;
 000225 	bit          GRD_READ;
 000448 	bit          GRD_READ_DONE;
 000072 	bit  [15: 0] GRD_TBL[4];
        	
~000408 	CMDTBL_t     CMD;
~000040 	Clip_t       SYS_CLIP;
~000070 	Clip_t       USR_CLIP;
 000038 	Coord_t      LOC_COORD;
 000167 	Vertex_t     VERTA,VERTB,VERTC,VERTD;
 017954 	Pattern_t    PAT;
 109527 	bit  [ 8: 0] TEXT_X;
~002300 	bit  [ 7: 0] TEXT_Y;
~001470 	bit  [16: 3] SPR_OFFSY;
~000061 	bit  [11: 0] POLY_LSX;
~000085 	bit  [11: 0] POLY_LSY;
~000064 	bit  [11: 0] POLY_RSX;
~000076 	bit  [11: 0] POLY_RSY;
 000053 	bit          POLY_LDIRX;
%000000 	bit          POLY_LDIRY;
 000063 	bit          POLY_RDIRX;
 000018 	bit          POLY_RDIRY;
 000177 	bit  [ 1: 0] POLY_S;
        	
 216192 	Coord_t      LINE_VERTA;
 004966 	Coord_t      LINE_VERTB;
 005313 	Vertex_t     LEFT_VERT;
 005535 	Vertex_t     RIGHT_VERT;
%000000 	Vertex_t     BOTTOM_VERT;
 000202 	bit          LINE_DIRX;
 000239 	bit          LINE_DIRY;
 000051 	bit          LINE_CLIP;
 000243 	bit          LINE_S;
~003096 	bit  [11: 0] ROW_WIDTH;
~000091 	bit  [11: 0] COL_HEIGHT,LEFT_HEIGHT,RIGHT_HEIGHT;
%000000 	bit          COL_DIRY;
%000000 	bit          SPR_COL_ENLARGE;
 002403 	bit          EC_FIND;
 081133 	bit  [11: 0] AA_X;
 071249 	bit  [11: 0] AA_Y;
 071685 	bit          AA;
 000301 	bit  [11: 0] AA_X_INC;
 000301 	bit  [11: 0] AA_Y_INC;
~000089 	bit  [ 1: 0] DIR;
 000014 	bit          HSS_EN;
 561148 	bit          DRAW_WAIT;
 525947 	bit          DRAW_ENABLE;
        	
 075293 	bit          LINE_DRAW_STEP;
 071687 	bit          LINE_AA_STEP;
 042438 	bit          COL_DRAW_STEP;
 054379 	bit          TEXT_X_READ_STEP;
~004134 	bit          TEXTY_READ_STEP, TEXT_Y_READ_STEP;
 010521 	bit          LEFT_COL_X_STEP, LEFT_COL_Y_STEP;
 010973 	bit          RIGHT_COL_X_STEP,RIGHT_COL_Y_STEP;
 911348 	bit  [ 4: 0] GRD_CALC_STATE;
~001793 	bit  [11: 0] GRD_CALC_S;
 023476 	RGB_t        GRD_CALC_1,GRD_CALC_2;
        	
~000233 	bit  [ 8: 0] ORIG_WIDTH;
~000225 	bit  [ 7: 0] ORIG_HEIGHT;
 000309 	wire         TEXT_DIRX = (CMD.CMDCTRL.DIR[0] ^ DIR[0]);
 000212 	wire         TEXT_DIRY = (CMD.CMDCTRL.DIR[1] ^ DIR[1]);
 004213 	wire         IS_PAT_EC = (CMD.CMDCTRL.COMM <= 4'h3 && !CMD.CMDPMOD.ECD && PAT.EC && !HSS_EN);
        	
 034760 	bit  [12: 0] COL_D;
~042532 	bit  [13: 0] NEXT_LEFT_COL_ERROR_X, NEXT_LEFT_COL_ERROR_Y, LEFT_COL_ERROR_X, LEFT_COL_ERROR_Y, LEFT_COL_ERROR_X_INC, LEFT_COL_ERROR_Y_INC, LEFT_COL_ERROR_ADJ;
~042532 	bit  [13: 0] NEXT_RIGHT_COL_ERROR_X, NEXT_RIGHT_COL_ERROR_Y, RIGHT_COL_ERROR_X, RIGHT_COL_ERROR_Y, RIGHT_COL_ERROR_X_INC, RIGHT_COL_ERROR_Y_INC, RIGHT_COL_ERROR_ADJ;
~042532 	bit  [13: 0] NEXT_LEFT_D_ERROR, LEFT_D_ERROR, LEFT_D_ERROR_INC, LEFT_D_ERROR_ADJ;
~042532 	bit  [13: 0] NEXT_RIGHT_D_ERROR, RIGHT_D_ERROR, RIGHT_D_ERROR_INC, RIGHT_D_ERROR_ADJ;
~000063 	bit          LEFT_D_ERROR_CMP, RIGHT_D_ERROR_CMP, LEFT_COL_ERROR_X_CMP, LEFT_COL_ERROR_Y_CMP, RIGHT_COL_ERROR_X_CMP, RIGHT_COL_ERROR_Y_CMP;
        					 
~080796 	bit  [13: 0] NEXT_LINE_ERROR, LINE_ERROR, LINE_ERROR_INC, LINE_ERROR_ADJ;
~083200 	bit  [13: 0] NEXT_TEXT_ERROR, TEXT_ERROR, TEXT_ERROR_INC, TEXT_ERROR_ADJ;
~032135 	bit  [13: 0] NEXT_TEXT_Y_ERROR, TEXT_Y_ERROR, TEXT_Y_ERROR_INC, TEXT_Y_ERROR_ADJ;
 8799683 	always_comb begin
 8799683 		bit COL_STEP;
 8799683 		bit  [13: 0] TEXT_ERROR_ADJUSTED,LINE_ERROR_ICREMENTED;
 8799683 		bit  [13: 0] TEXT_Y_ERROR_ADJUSTED;
 8799683 		bit  [13: 0] LEFT_D_ERROR_ICREMENTED,LEFT_COL_ERROR_X_ICREMENTED,LEFT_COL_ERROR_Y_ICREMENTED;
 8799683 		bit  [13: 0] RIGHT_D_ERROR_ICREMENTED,RIGHT_COL_ERROR_X_ICREMENTED,RIGHT_COL_ERROR_Y_ICREMENTED;
        		
 8799683 		LINE_DRAW_STEP = 0;
 8799683 		LINE_AA_STEP = 0;
 8799683 		COL_DRAW_STEP = 0;
 8799683 		TEXT_X_READ_STEP = 0;
 8799683 		TEXT_Y_READ_STEP = 0;
 8799683 		{LEFT_COL_X_STEP,LEFT_COL_Y_STEP} = '0;
 8799683 		{RIGHT_COL_X_STEP,RIGHT_COL_Y_STEP} = '0;
        		
        		
 8799683 		NEXT_TEXT_ERROR = '0;
 8799683 		NEXT_LINE_ERROR = '0;
 8799683 		NEXT_TEXT_Y_ERROR = '0;
 8799683 		NEXT_LEFT_D_ERROR = '0;
 8799683 		NEXT_LEFT_COL_ERROR_X = '0;
 8799683 		NEXT_LEFT_COL_ERROR_Y = '0;
 8799683 		NEXT_RIGHT_D_ERROR = '0;
 8799683 		NEXT_RIGHT_COL_ERROR_X = '0;
 8799683 		NEXT_RIGHT_COL_ERROR_Y = '0;
 8799683 		case (CMD_ST) 
 1082661 			CMDS_NSPR_DRAW: begin		
 1082661 				LINE_DRAW_STEP = 1;		
 1082661 				TEXT_X_READ_STEP = 1;
        			end
        			
        			CMDS_PRE_DRAW,
        			CMDS_SSPR_DRAW,
 1421745 			CMDS_LINE_DRAW: begin
 819468 				if (CMD.CMDCTRL.COMM >= 4'h4) begin
 819468 					LINE_DRAW_STEP = 1;
 819468 					TEXT_X_READ_STEP = 0;
 602277 				end else begin
 408705 					if (!TEXT_ERROR[13]) begin
 193572 						TEXT_ERROR_ADJUSTED = $signed(TEXT_ERROR) - $signed(TEXT_ERROR_ADJ);
 147985 						if (TEXT_ERROR_ADJUSTED[13]) begin
 147985 							LINE_DRAW_STEP = 1;
 147985 							NEXT_TEXT_ERROR = $signed(TEXT_ERROR_ADJUSTED) + $signed(TEXT_ERROR_INC);
 045587 						end else begin
 045587 							NEXT_TEXT_ERROR = $signed(TEXT_ERROR_ADJUSTED);
        						end
 408705 					end else begin
 408705 						TEXT_ERROR_ADJUSTED = $signed(TEXT_ERROR);
 408705 						LINE_DRAW_STEP = 1;
 408705 						NEXT_TEXT_ERROR = $signed(TEXT_ERROR_ADJUSTED) + $signed(TEXT_ERROR_INC);
        					end
        					
 402288 					if (!NEXT_TEXT_ERROR[13]) begin
 199989 						TEXT_X_READ_STEP = 1;
        					end
        				end
        					
 949148 				if (LINE_DRAW_STEP && CMD_ST == CMDS_LINE_DRAW) begin
 949148 					LINE_ERROR_ICREMENTED = LINE_ERROR + LINE_ERROR_INC;
 650892 					if ($signed(LINE_ERROR_ICREMENTED) >= 14'sd1) begin
 298256 						NEXT_LINE_ERROR = LINE_ERROR_ICREMENTED + LINE_ERROR_ADJ;
 298256 						LINE_AA_STEP = 1;
 650892 					end else begin
 650892 						NEXT_LINE_ERROR = LINE_ERROR_ICREMENTED;
        					end
        				end
        			end
        			
        			CMDS_AA_DRAW,
 301479 			CMDS_LINE_END: begin
 301479 				LINE_DRAW_STEP = AA;
        			end
        			
 042795 			CMDS_ROW_DRAW: begin
 036313 				if (CMD.CMDCTRL.COMM >= 4'h4) begin
 006482 					COL_DRAW_STEP = 1;
 036313 				end else begin
 031822 					if (!TEXT_Y_ERROR[13]) begin
 004491 						TEXT_Y_ERROR_ADJUSTED = $signed(TEXT_Y_ERROR) - $signed(TEXT_Y_ERROR_ADJ);
 004134 						if (!TEXT_Y_ERROR_ADJUSTED[13]) begin
 000357 							NEXT_TEXT_Y_ERROR = $signed(TEXT_Y_ERROR_ADJUSTED);
 004134 						end else begin
 004134 							COL_DRAW_STEP = 1;
 004134 							NEXT_TEXT_Y_ERROR = $signed(TEXT_Y_ERROR_ADJUSTED) + $signed(TEXT_Y_ERROR_INC);
        						end
 004491 						TEXT_Y_READ_STEP = 1;
 031822 					end else begin
 031822 						TEXT_Y_ERROR_ADJUSTED = $signed(TEXT_Y_ERROR);
 031822 						COL_DRAW_STEP = 1;
 031822 						NEXT_TEXT_Y_ERROR = $signed(TEXT_Y_ERROR_ADJUSTED) + $signed(TEXT_Y_ERROR_INC);
        					end
        				end
        			end
        			
 042532 			CMDS_LINE_NEXT: begin
 042532 				LEFT_D_ERROR_ICREMENTED = LEFT_D_ERROR + LEFT_D_ERROR_INC;
 031971 				if ($signed(LEFT_D_ERROR_ICREMENTED) >= $signed({14{LEFT_D_ERROR_CMP}})) begin
 010561 					NEXT_LEFT_D_ERROR = LEFT_D_ERROR_ICREMENTED + LEFT_D_ERROR_ADJ;
        					
 010561 					LEFT_COL_ERROR_X_ICREMENTED = LEFT_COL_ERROR_X + LEFT_COL_ERROR_X_INC;
 009478 					if ($signed(LEFT_COL_ERROR_X_ICREMENTED) >= $signed({14{LEFT_COL_ERROR_X_CMP}})) begin
 001083 						NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X_ICREMENTED + LEFT_COL_ERROR_ADJ;
 001083 						LEFT_COL_X_STEP = 1;
 009478 					end else begin
 009478 						NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X_ICREMENTED;
        					end
        					
 010561 					LEFT_COL_ERROR_Y_ICREMENTED = LEFT_COL_ERROR_Y + LEFT_COL_ERROR_Y_INC;
 010521 					if ($signed(LEFT_COL_ERROR_Y_ICREMENTED) >= $signed({14{LEFT_COL_ERROR_Y_CMP}})) begin
 010521 						NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y_ICREMENTED + LEFT_COL_ERROR_ADJ;
 010521 						LEFT_COL_Y_STEP = 1;
 000040 					end else begin
 000040 						NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y_ICREMENTED;
        					end
 031971 				end else begin
 031971 					NEXT_LEFT_D_ERROR = LEFT_D_ERROR_ICREMENTED;
 031971 					NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X;
 031971 					NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y;
        				end
        				
 042532 				RIGHT_D_ERROR_ICREMENTED = RIGHT_D_ERROR + RIGHT_D_ERROR_INC;
 029451 				if ($signed(RIGHT_D_ERROR_ICREMENTED) >= $signed({14{RIGHT_D_ERROR_CMP}})) begin
 013081 					NEXT_RIGHT_D_ERROR = RIGHT_D_ERROR_ICREMENTED + RIGHT_D_ERROR_ADJ;
        					
 013081 					RIGHT_COL_ERROR_X_ICREMENTED = RIGHT_COL_ERROR_X + RIGHT_COL_ERROR_X_INC;
 009583 					if ($signed(RIGHT_COL_ERROR_X_ICREMENTED) >= $signed({14{RIGHT_COL_ERROR_X_CMP}})) begin
 003498 						NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X_ICREMENTED + RIGHT_COL_ERROR_ADJ;
 003498 						RIGHT_COL_X_STEP = 1;
 009583 					end else begin
 009583 						NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X_ICREMENTED;
        					end
        					
 013081 					RIGHT_COL_ERROR_Y_ICREMENTED = RIGHT_COL_ERROR_Y + RIGHT_COL_ERROR_Y_INC;
 010973 					if ($signed(RIGHT_COL_ERROR_Y_ICREMENTED) >= $signed({14{RIGHT_COL_ERROR_Y_CMP}})) begin
 010973 						NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y_ICREMENTED + RIGHT_COL_ERROR_ADJ;
 010973 						RIGHT_COL_Y_STEP = 1;
 002108 					end else begin
 002108 						NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y_ICREMENTED;
        					end
 029451 				end else begin
 029451 					NEXT_RIGHT_D_ERROR = RIGHT_D_ERROR_ICREMENTED;
 029451 					NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X;
 029451 					NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y;
        				end
        			end
        
 5908471 			default:;
        		endcase
        	end
        	
        
 134539 	bit  [16: 0] DIV_R_Q,DIV_G_Q,DIV_B_Q;//5.12
 091145 	wire DIV_START = (CMD_ST == CMDS_GRD_CALC_LEFT || CMD_ST == CMDS_GRD_CALC_RIGHT || CMD_ST == CMDS_GRD_CALC_LINE) && GRD_CALC_STATE == 0;
        	
 5306498 	wire [ 5: 0] DIV_A_R = GRD_CALC_2.R >= GRD_CALC_1.R ? {1'b0,GRD_CALC_2.R - GRD_CALC_1.R} : {1'b1,GRD_CALC_1.R - GRD_CALC_2.R};
 4476540 	wire [ 5: 0] DIV_A_G = GRD_CALC_2.G >= GRD_CALC_1.G ? {1'b0,GRD_CALC_2.G - GRD_CALC_1.G} : {1'b1,GRD_CALC_1.G - GRD_CALC_2.G};
 4487281 	wire [ 5: 0] DIV_A_B = GRD_CALC_2.B >= GRD_CALC_1.B ? {1'b0,GRD_CALC_2.B - GRD_CALC_1.B} : {1'b1,GRD_CALC_1.B - GRD_CALC_2.B};
        					
        	REF_VDP1_DIV_24_12 GRD_DIV_R(CLK, {DIV_A_R[4:0],12'b000000000000}, GRD_CALC_S, DIV_START, DIV_R_Q);
        	REF_VDP1_DIV_24_12 GRD_DIV_G(CLK, {DIV_A_G[4:0],12'b000000000000}, GRD_CALC_S, DIV_START, DIV_G_Q);
        	REF_VDP1_DIV_24_12 GRD_DIV_B(CLK, {DIV_A_B[4:0],12'b000000000000}, GRD_CALC_S, DIV_START, DIV_B_Q);
        	
 000072 	RGB_t        GHCOLOR_A,GHCOLOR_B,GHCOLOR_C,GHCOLOR_D;
        	assign {GHCOLOR_A,GHCOLOR_B,GHCOLOR_C,GHCOLOR_D} = {GRD_TBL[0][14:0],GRD_TBL[1][14:0],GRD_TBL[2][14:0],GRD_TBL[3][14:0]};
~102852 	RGBFP_t      LEFT_GHCOLOR,RIGHT_GHCOLOR,LINE_GHCOLOR;
~001295 	RGBFP_t      LEFT_GHCOLOR_STEP,RIGHT_GHCOLOR_STEP,LINE_GHCOLOR_STEP;
        	
        `ifdef DEBUG
        	assign DBG_GHCOLOR_C = GRD_TBL[2][14:0];
        	assign DBG_GHCOLOR_D = GRD_TBL[3][14:0];
        	assign DBG_LINE_DRAW_STEP = LINE_DRAW_STEP;
        	assign DBG_TEXT_READ_STEP = TEXT_X_READ_STEP;
        	assign DBG_COL_DRAW_STEP = COL_DRAW_STEP;
        	assign DBG_TEXT_X = TEXT_X;
        	assign DBG_TEXT_Y = TEXT_Y;
        `endif
        	
        `ifdef DEBUG
        	bit  [ 9: 0] CMD_CURR,CMD_SKIP;
        	bit  [ 8: 0] CMD_PIX_XPOS,CMD_PIX_YPOS;
        	bit          CMD_SKIP_EN,CMD_PIX_EN,DBG_DRAW_EN;
        `endif
~147818 	bit  [ 8: 0] CMD_DELAY;
~001343 	bit  [ 9: 0] PENALTY_CNT;
 8799682 	always @(posedge CLK or negedge RST_N) begin
        //	   bit         FRAME_START_PEND;
 8799682 		bit [18: 1] NEXT_ADDR;
 8799682 		bit [18: 1] CMD_RET_ADDR;
 8799682 		bit         CMD_SUB_RUN;
 8799682 		bit [12: 0] NEW_LINE_SX;
 8799682 		bit [12: 0] NEW_LINE_SY;
 8799682 		bit [11: 0] NEW_LINE_ASX;
 8799682 		bit [11: 0] NEW_LINE_ASY;
 8799682 		bit [12: 0] NEW_POLY_LSX;
 8799682 		bit [12: 0] NEW_POLY_LSY;
 8799682 		bit [12: 0] NEW_POLY_RSX;
 8799682 		bit [12: 0] NEW_POLY_RSY;
 8799682 		bit         LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR;
 8799682 		bit         AA_DRAW;
 8799682 		bit         LINE_SWAP;
 8799682 		bit [16: 3] SPR_OFFSY_NEXT;
 8799682 		bit         CLIP_H;
 8799682 		RGBFP_t     GRD_CALC_STEP;
 8799682 		bit         GRD_CALC_DIR_R,GRD_CALC_DIR_G,GRD_CALC_DIR_B;
 8799682 		bit [ 1: 0] SYS_CLIP_STATE;
 8799682 		bit [12: 0] SYS_CLIP_A,SYS_CLIP_B,SYS_CLIP_RES;
 8799682 		bit [12: 0] SYS_CLIP_X1,SYS_CLIP_X2,SYS_CLIP_Y1,SYS_CLIP_Y2;
 8799682 		bit [12: 0] LINE_DIFF_LEFT_CLIPX1,LINE_DIFF_LEFT_CLIPX2,LINE_DIFF_RIGHT_CLIPX1,LINE_DIFF_RIGHT_CLIPX2;
 8799682 		bit         LINE_EQ_LEFT_CLIPX1,LINE_EQ_LEFT_CLIPX2,LINE_EQ_RIGHT_CLIPX1,LINE_EQ_RIGHT_CLIPX2;
 8799682 		bit         LINE_GT_LEFT_CLIPX1,LINE_GT_LEFT_CLIPX2,LINE_GT_RIGHT_CLIPX1,LINE_GT_RIGHT_CLIPX2;
 8799682 		bit         LINE_LT_LEFT_CLIPX1,LINE_LT_LEFT_CLIPX2,LINE_LT_RIGHT_CLIPX1,LINE_LT_RIGHT_CLIPX2;
 8799682 		bit         LINE_LEFT_OVER,LINE_RIGHT_OVER,LINE_TOP_OVER,LINE_BOTTOM_OVER;
 8799682 		bit [ 3: 0] CLIP_DELAY;
        `ifdef DEBUG
        		bit [ 7: 0] DBG_EXT_OLD;
        `endif
        		
 000599 		if (!RST_N) begin
 000599 			CMD_ST <= CMDS_IDLE;
 000599 			CMD_ADDR <= '0;
 000599 			CMD_READ <= 0;
 000599 			SPR_READ <= 0;
 000599 			CLT_READ <= 0;
 000599 			GRD_READ <= 0;
 000599 			CMD_SUB_RUN <= 0;
        			
        `ifdef DEBUG
        			CMD_SKIP <= '1;
        			
        			{CMD_SKIP_EN,CMD_PIX_EN,DBG_DRAW_EN} <= '0;
        `endif
 000145 		end else if (FRAME_START) begin
 000145 			CMD_ADDR <= '0;
 000145 			CMD_READ <= 1;
 000145 			SPR_READ <= 0;
 000145 			CLT_READ <= 0;
 000145 			GRD_READ <= 0;
 000145 			CMD_SUB_RUN <= 0;
 000145 			CMD_ST <= CMDS_READ;
%000000 		end else if (DRAW_TERMINATE) begin
%000000 			CMD_READ <= 0;
%000000 			SPR_READ <= 0;
%000000 			CLT_READ <= 0;
%000000 			GRD_READ <= 0;
%000000 			CMD_ST <= CMDS_IDLE;
~8798938 		end else if (EN) begin
 8798938 			SPR_OFFSY_NEXT = TEXT_DIRY ? SPR_OFFSY - ORIG_WIDTH[8:3] : SPR_OFFSY + ORIG_WIDTH[8:3];
        			
 8359590 			if (CMD.CMDPMOD.CLIP && !CMD.CMDPMOD.CMOD) begin
 439348 				case (SYS_CLIP_STATE)
 109874 					2'd0: SYS_CLIP_A = {{2{USR_CLIP.X1[10]}},USR_CLIP.X1};
 109855 					2'd1: SYS_CLIP_A = {{2{USR_CLIP.Y1[10]}},USR_CLIP.Y1};
 109828 					2'd2: SYS_CLIP_A = {{2{USR_CLIP.X2[10]}},USR_CLIP.X2};
 109791 					2'd3: SYS_CLIP_A = {{2{USR_CLIP.Y2[10]}},USR_CLIP.Y2};
        				endcase
 8359590 			end else begin
 8359590 				case (SYS_CLIP_STATE)
 2089970 					2'd0: SYS_CLIP_A = 13'd0;
 2089918 					2'd1: SYS_CLIP_A = 13'd0;
 2089885 					2'd2: SYS_CLIP_A = {{2{SYS_CLIP.X2[10]}},SYS_CLIP.X2};
 2089817 					2'd3: SYS_CLIP_A = {{2{SYS_CLIP.Y2[10]}},SYS_CLIP.Y2};
        				endcase
        			end
 8798938 			case (SYS_CLIP_STATE)
 2199844 				2'd0: SYS_CLIP_B = {{1{LOC_COORD.X[10]}},LOC_COORD.X};
 2199773 				2'd1: SYS_CLIP_B = {{1{LOC_COORD.Y[10]}},LOC_COORD.Y};
 2199713 				2'd2: SYS_CLIP_B = {{1{LOC_COORD.X[10]}},LOC_COORD.X};
 2199608 				2'd3: SYS_CLIP_B = {{1{LOC_COORD.Y[10]}},LOC_COORD.Y};
        			endcase
        				
 8798938 			SYS_CLIP_RES = $signed(SYS_CLIP_A) - $signed(SYS_CLIP_B);
 8798938 			case (SYS_CLIP_STATE)
 2199844 				2'd0: SYS_CLIP_X1 <= SYS_CLIP_RES;
 2199773 				2'd1: SYS_CLIP_Y1 <= SYS_CLIP_RES;
 2199713 				2'd2: SYS_CLIP_X2 <= SYS_CLIP_RES;
 2199608 				2'd3: SYS_CLIP_Y2 <= SYS_CLIP_RES;
        			endcase
 8798938 			SYS_CLIP_STATE <= SYS_CLIP_STATE + 2'd1;
        			
 8798938 			LINE_DIFF_LEFT_CLIPX1 = $signed(LEFT_VERT.X) - $signed(SYS_CLIP_X1);
 8798938 			LINE_DIFF_LEFT_CLIPX2 = $signed(LEFT_VERT.X) - $signed(SYS_CLIP_X2);
 8798938 			LINE_DIFF_RIGHT_CLIPX1 = $signed(RIGHT_VERT.X) - $signed(SYS_CLIP_X1);
 8798938 			LINE_DIFF_RIGHT_CLIPX2 = $signed(RIGHT_VERT.X) - $signed(SYS_CLIP_X2);
 8798938 			LINE_EQ_LEFT_CLIPX1 = !LINE_DIFF_LEFT_CLIPX1;
 8798938 			LINE_EQ_LEFT_CLIPX2 = !LINE_DIFF_LEFT_CLIPX2;
 8798938 			LINE_EQ_RIGHT_CLIPX1 = !LINE_DIFF_RIGHT_CLIPX1;
 8798938 			LINE_EQ_RIGHT_CLIPX2 = !LINE_DIFF_RIGHT_CLIPX2;
 8798938 			LINE_GT_LEFT_CLIPX1 = ~LINE_DIFF_LEFT_CLIPX1[12];
 8798938 			LINE_GT_LEFT_CLIPX2 = ~LINE_DIFF_LEFT_CLIPX2[12];
 8798938 			LINE_GT_RIGHT_CLIPX1 = ~LINE_DIFF_RIGHT_CLIPX1[12];
 8798938 			LINE_GT_RIGHT_CLIPX2 = ~LINE_DIFF_RIGHT_CLIPX2[12];
 8798938 			LINE_LT_LEFT_CLIPX1 = LINE_DIFF_LEFT_CLIPX1[12];
 8798938 			LINE_LT_LEFT_CLIPX2 = LINE_DIFF_LEFT_CLIPX2[12];
 8798938 			LINE_LT_RIGHT_CLIPX1 = LINE_DIFF_RIGHT_CLIPX1[12];
 8798938 			LINE_LT_RIGHT_CLIPX2 = LINE_DIFF_RIGHT_CLIPX2[12];
        																							  
 8798938 			LINE_LEFT_OVER <= ($signed(LEFT_VERT.X) < $signed(SYS_CLIP_X1) && $signed(RIGHT_VERT.X) < $signed(SYS_CLIP_X1));
 8798938 			LINE_RIGHT_OVER <= ($signed(LEFT_VERT.X) > $signed(SYS_CLIP_X2) && $signed(RIGHT_VERT.X) > $signed(SYS_CLIP_X2));
 8798938 			LINE_TOP_OVER <= ($signed(LEFT_VERT.Y) < $signed(SYS_CLIP_Y1) && $signed(RIGHT_VERT.Y) < $signed(SYS_CLIP_Y1));
 8798938 			LINE_BOTTOM_OVER <= ($signed(LEFT_VERT.Y) > $signed(SYS_CLIP_Y2) && $signed(RIGHT_VERT.Y) > $signed(SYS_CLIP_Y2));
        			
        `ifdef DEBUG
        			DBG_EXT_OLD <= DBG_EXT;
        			if (DBG_EXT[0] && !DBG_EXT_OLD[0]) CMD_SKIP <= CMD_SKIP - 8'd1;
        			if (DBG_EXT[1] && !DBG_EXT_OLD[1]) CMD_SKIP <= CMD_SKIP + 8'd1;
        			if (DBG_EXT[2] && !DBG_EXT_OLD[2]) CMD_SKIP <= CMD_SKIP - 8'd10;
        			if (DBG_EXT[3] && !DBG_EXT_OLD[3]) CMD_SKIP <= CMD_SKIP + 8'd10;
        			if (DBG_EXT[4] && !DBG_EXT_OLD[4]) CMD_SKIP_EN <= ~CMD_SKIP_EN;
        			
        			if (DBG_EXT[0] && !DBG_EXT_OLD[0]) CMD_PIX_XPOS <= CMD_PIX_XPOS - 8'd1;
        			if (DBG_EXT[1] && !DBG_EXT_OLD[1]) CMD_PIX_XPOS <= CMD_PIX_XPOS + 8'd1;
        			if (DBG_EXT[2] && !DBG_EXT_OLD[2]) CMD_PIX_YPOS <= CMD_PIX_YPOS - 8'd1;
        			if (DBG_EXT[3] && !DBG_EXT_OLD[3]) CMD_PIX_YPOS <= CMD_PIX_YPOS + 8'd1;
        			if (DBG_EXT[5] && !DBG_EXT_OLD[5]) CMD_PIX_EN <= ~CMD_PIX_EN;
        			
        			if (DBG_EXT[6] && !DBG_EXT_OLD[6]) DBG_DRAW_EN <= ~DBG_DRAW_EN;
        			
        			if (DBG_EXT[7] && !DBG_EXT_OLD[7]) {CMD_SKIP,CMD_SKIP_EN,CMD_PIX_EN,DBG_DRAW_EN} <= '0;
        `endif
        			
 6885126 			if (CMD_ST == CMDS_GRD_CALC_LEFT || CMD_ST == CMDS_GRD_CALC_RIGHT || CMD_ST == CMDS_GRD_CALC_LINE) begin
 1913812 				GRD_CALC_STATE <= GRD_CALC_STATE + 5'd1;
 1822669 				if (GRD_CALC_STATE == 5'd0) begin
 091143 					GRD_CALC_DIR_R <= DIV_A_R[5];
 091143 					GRD_CALC_DIR_G <= DIV_A_G[5];
 091143 					GRD_CALC_DIR_B <= DIV_A_B[5];
        				end
 1822687 				if (GRD_CALC_STATE == 5'd19) begin
 091125 					GRD_CALC_STEP.R <= {GRD_CALC_DIR_R,DIV_R_Q[16:0]};
 091125 					GRD_CALC_STEP.G <= {GRD_CALC_DIR_G,DIV_G_Q[16:0]};
 091125 					GRD_CALC_STEP.B <= {GRD_CALC_DIR_B,DIV_B_Q[16:0]};
        				end
        			end
        									
 4399499 			if (CE_R) DRAW_END <= 0;
 8268962 			if (FBD_ST == FBDS_WRITE) DRAW_ENABLE <= 0;
 8798938 			case (CMD_ST) 
 679794 				CMDS_IDLE: begin
        `ifdef DEBUG
        					CMD_CURR <= '0;
        `endif
        				end
        					
 2499352 				CMDS_READ: begin
        `ifdef DEBUG
        					DBG_CMD_WAIT_CNT <= DBG_CMD_WAIT_CNT + 1'd1;
        `endif
 2499352 					CMD_READ <= 0;
        					
 2471267 					if (CMD_READ_DONE) begin
        `ifdef DEBUG
        						CMD_CURR <= CMD_CURR + 1'd1;
        						DBG_SKIP <= (CMD_CURR == CMD_SKIP);
        `endif
 028003 						if (!CMD.CMDCTRL.JP[2] && !CMD.CMDCTRL.END 
        `ifdef DEBUG
        						    && (CMD_CURR != CMD_SKIP || !CMD_SKIP_EN)
        `endif
 028003 						                                             ) begin
 028003 							case (CMD.CMDCTRL.COMM) 
 027329 								4'h0: begin	//normal sprite
 027292 									if (CMD.CMDPMOD.CCB[2]) begin
 000037 										GRD_READ <= 1;
 000037 										CMD_DELAY <= 8'd10;
 000037 										CMD_ST <= CMDS_GRD_LOAD;
 027292 									end else begin
 027292 										CMD_DELAY <= 8'd23;
 027292 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        							
 000058 								4'h1: begin	//scaled sprite
 000035 									if (CMD.CMDPMOD.CCB[2]) begin
 000035 										GRD_READ <= 1;
 000035 										CMD_DELAY <= 8'd10;
 000035 										CMD_ST <= CMDS_GRD_LOAD;
 000023 									end else begin
 000023 										CMD_DELAY <= 8'd23;
 000023 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
        								4'h2,
 000070 								4'h3: begin	//distored sprite
 000043 									if (CMD.CMDPMOD.CCB[2]) begin
 000043 										GRD_READ <= 1;
 000043 										CMD_DELAY <= 8'd10;
 000043 										CMD_ST <= CMDS_GRD_LOAD;
 000027 									end else begin
 000027 										CMD_DELAY <= 8'd23;
 000027 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
        								4'h4,			//polygon
        								4'h5,
 000204 								4'h7: begin	//polyline
 000128 									if (CMD.CMDPMOD.CCB[2]) begin
 000076 										GRD_READ <= 1;
 000076 										CMD_DELAY <= 8'd0;
 000076 										CMD_ST <= CMDS_GRD_LOAD;
 000128 									end else begin
 000128 										CMD_DELAY <= 8'd0;
 000128 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
 000056 								4'h6: begin	//line
 000034 									if (CMD.CMDPMOD.CCB[2]) begin
 000034 										GRD_READ <= 1;
 000034 										CMD_DELAY <= 8'd0;
 000034 										CMD_ST <= CMDS_GRD_LOAD;
 000022 									end else begin
 000022 										CMD_DELAY <= 8'd0;
 000022 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        							
        								4'h8,
        								4'hB,
        								4'h9,
        								4'hA,
 000286 								4'hB: begin	
 000286 									CMD_DELAY <= 8'd0;
 000286 									CMD_ST <= CMDS_EXEC;
        								end
        							
%000000 								default: begin	
%000000 									CMD_READ <= 1;
%000000 									CMD_ST <= CMDS_READ;
        								end
        							endcase
        						end
 000082 						else begin
 000082 							CMD_ST <= CMDS_END;
        						end
        						
 028085 						COPR <= CMD_ADDR[18:3];
        `ifdef DEBUG
        						DBG_CMD_WAIT_CNT <= '0;
        						DBG_CMD_ADDR_ERR <= (CMD_ADDR > 18'h09000);
        `endif
        					end
        				end
        				
 004835 				CMDS_GRD_LOAD: begin
 004835 					GRD_READ <= 0;
 004611 					if (GRD_READ_DONE) begin 
 000224 						CMD_ST <= CMDS_EXEC;
        					end
        				end
        				
 028002 				CMDS_EXEC: begin
 028002 						case (CMD.CMDCTRL.COMM)
        							4'h0,			//normal sprite
        							4'h1,			//scaled sprite
        							4'h2,
 027456 							4'h3: begin	//distored sprite
 027389 								if (CMD.CMDPMOD.CM == 3'b001) begin
 000067 									CLT_READ <= 1;
 000067 									CMD_ST <= CMDS_CLT_LOAD;
 027389 								end else begin
 019293 									if (PENALTY_CNT > CMDS_DELAY) CMD_DELAY <= '0;
 027389 									CMD_ST <= CMDS_DELAY;
        								end
        							end
        							
 000112 							4'h4: begin	//polygon
 000112 								CMD_ST <= CMDS_DELAY;
        							end
        							
        							4'h5,
 000092 							4'h7: begin	//polyline
 000092 								CMD_ST <= CMDS_DELAY;
        							end
        							
 000056 							4'h6: begin	//line
 000056 								CMD_ST <= CMDS_DELAY;
        							end
        							
        							4'h8,
 000075 							4'hB: begin	
 000075 								SYS_CLIP_STATE <= '0;
 000075 								CMD_ST <= CMDS_END;
        							end
        							
 000095 							4'h9: begin	
 000095 								SYS_CLIP_STATE <= '0;
 000095 								CMD_ST <= CMDS_END;
        							end
        							
 000116 							4'hA: begin	
 000116 								SYS_CLIP_STATE <= '0;
 000116 								CMD_ST <= CMDS_END;
        							end
        								
%000000 							default: begin	
%000000 								CMD_ST <= CMDS_END;
        							end
        						endcase
        `ifdef DEBUG
        						if (DBG_CMD_CNT == 16) begin
        							DBG_CMD_ADDR16 <= CMD_ADDR;
        						end
        `endif
        				end
        				
 006059 				CMDS_CLT_LOAD: begin
 006059 					CLT_READ <= 0;
 005992 					if (CLT_READ_DONE) begin
 000067 						CMD_ST <= CMDS_DELAY;
        					end
        				end
        				
 418160 				CMDS_DELAY: if (CE_R) begin
 213983 					CMD_DELAY <= CMD_DELAY - 1'd1;
 186269 					if (!CMD_DELAY) begin
 027714 						case (CMD.CMDCTRL.COMM) 
 027327 							4'h0: CMD_ST <= CMDS_EDGE_INIT;
 000057 							4'h1: CMD_ST <= CMDS_EDGE_INIT;
        							4'h2,
 000070 							4'h3: CMD_ST <= CMDS_EDGE_INIT;
 000112 							4'h4: CMD_ST <= CMDS_EDGE_INIT;							
        							4'h5,
 000092 							4'h7: CMD_ST <= CMDS_LINE_INIT;							
 000056 							4'h6: CMD_ST <= CMDS_LINE_INIT;
        						endcase
 027714 						CMD_DELAY <= 9'd8;
        					end
        				end
        				
 027566 				CMDS_EDGE_INIT: begin
 027566 					LEFT_VERT <= VERTA;
 027566 					RIGHT_VERT <= VERTB;
 027566 					NEW_POLY_LSX = VERTD.X - VERTA.X;
 027566 					NEW_POLY_LSY = VERTD.Y - VERTA.Y;
 027566 					NEW_POLY_RSX = VERTC.X - VERTB.X;
 027566 					NEW_POLY_RSY = VERTC.Y - VERTB.Y;
        					
 027566 					POLY_LSX <= Abs(NEW_POLY_LSX);
 027566 					POLY_LSY <= Abs(NEW_POLY_LSY);
 027566 					POLY_RSX <= Abs(NEW_POLY_RSX);
 027566 					POLY_RSY <= Abs(NEW_POLY_RSY);
 027566 					POLY_LDIRX <= NEW_POLY_LSX[12];
 027566 					POLY_LDIRY <= NEW_POLY_LSY[12];
 027566 					POLY_RDIRX <= NEW_POLY_RSX[12];
 027566 					POLY_RDIRY <= NEW_POLY_RSY[12];
        					
 027566 					DIR <= '0;
        					
 027566 					CLIP_H <= 0;
 027449 					if (($signed(VERTA.X) < $signed(SYS_CLIP_X1) && $signed(VERTD.X) < $signed(SYS_CLIP_X1)) ||
        					    ($signed(VERTB.X) < $signed(SYS_CLIP_X1) && $signed(VERTC.X) < $signed(SYS_CLIP_X1)) ||
        						 ($signed(VERTA.X) > $signed(SYS_CLIP_X2) && $signed(VERTD.X) > $signed(SYS_CLIP_X2)) ||
 000117 						 ($signed(VERTB.X) > $signed(SYS_CLIP_X2) && $signed(VERTC.X) > $signed(SYS_CLIP_X2))) begin
 000117 						CLIP_H <= ~CMD.CMDPMOD.PCLP;
        					end
        							
 027566 					CMD_ST <= CMDS_POLYGON_CALCE;
        				end
        				
 000148 				CMDS_LINE_INIT: begin
 000148 					LEFT_VERT <= VERTA;
 000148 					RIGHT_VERT <= VERTB;
 000148 					POLY_S <= 2'b00;
 000148 					TEXT_X <= '0;
 000148 					LEFT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 000148 					RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_B);
 000148 					CMD_ST <= CMDS_LINE_CALC;
        				end
        				
 027565 				CMDS_POLYGON_CALCE: begin
 027251 					if (POLY_LSX >= POLY_LSY) begin
 027251 						LEFT_HEIGHT <= POLY_LSX;
 000314 					end else begin
 000314 						LEFT_HEIGHT <= POLY_LSY;
        					end
 027292 					if (POLY_RSX >= POLY_RSY) begin
 027292 						RIGHT_HEIGHT <= POLY_RSX;
 000273 					end else begin
 000273 						RIGHT_HEIGHT <= POLY_RSY;
        					end
        					
 027565 					CMD_ST <= CMDS_POLYGON_CALCH;
        				end
        				
 027565 				CMDS_POLYGON_CALCH: begin
 027470 					if (LEFT_HEIGHT >= RIGHT_HEIGHT) begin
 027470 						COL_HEIGHT <= LEFT_HEIGHT;
 000095 					end else begin
 000095 						COL_HEIGHT <= RIGHT_HEIGHT;
        					end
        					
 027565 					CMD_ST <= CMDS_POLYGON_CALCTY;
        				end
        				
 027562 				CMDS_POLYGON_CALCTY: begin
 027507 					if ((COL_HEIGHT + 13'd1) <= {5'b00000,ORIG_HEIGHT - 8'd1}) begin
 000055 						TEXT_Y_ERROR_INC <= ({5'b00000,ORIG_HEIGHT} << 1);
 000055 						TEXT_Y_ERROR_ADJ <= (COL_HEIGHT + 13'd1) << 1;
 000055 						TEXT_Y_ERROR <= {5'b00000,ORIG_HEIGHT} - (((COL_HEIGHT + 13'd1) << 1) + (!TEXT_DIRY || ORIG_HEIGHT == 8'd1 ? 13'd0 : 13'd1 ));
 027507 					end else begin
 027507 						TEXT_Y_ERROR_INC <= ({5'b00000,ORIG_HEIGHT - 8'd1} << 1);
 027507 						TEXT_Y_ERROR_ADJ <= (((COL_HEIGHT + 13'd1) - 13'd1) << 1);
 027507 						TEXT_Y_ERROR <= (COL_HEIGHT + 13'd1) - (((COL_HEIGHT + 13'd1) << 1) - (!TEXT_DIRY || ORIG_HEIGHT == 8'd1 ? 13'd0 : 13'd1 ));
        					end
        					
 027562 					LEFT_COL_ERROR_X_INC <= POLY_LSX << 1;
 027562 					LEFT_COL_ERROR_Y_INC <= POLY_LSY << 1;
 027562 					LEFT_COL_ERROR_ADJ <= -(LEFT_HEIGHT << 1);
 027562 					LEFT_COL_ERROR_X <= ~LEFT_HEIGHT;
 027562 					LEFT_COL_ERROR_Y <= ~LEFT_HEIGHT;
 027562 					LEFT_COL_ERROR_X_CMP <= POLY_LDIRY;
 027562 					LEFT_COL_ERROR_Y_CMP <= POLY_LDIRX;
        					
 027562 					LEFT_D_ERROR_INC <= LEFT_HEIGHT << 1;
 027562 					LEFT_D_ERROR_ADJ <= -(COL_HEIGHT << 1);
 027562 					LEFT_D_ERROR <= ~COL_HEIGHT;
 027562 					LEFT_D_ERROR_CMP <= POLY_LSY > POLY_LSX ? POLY_LDIRY : POLY_LDIRX;
        					
 027562 					RIGHT_COL_ERROR_X_INC <= POLY_RSX << 1;
 027562 					RIGHT_COL_ERROR_Y_INC <= POLY_RSY << 1;
 027562 					RIGHT_COL_ERROR_ADJ <= -(RIGHT_HEIGHT << 1);
 027562 					RIGHT_COL_ERROR_X <= ~RIGHT_HEIGHT;
 027562 					RIGHT_COL_ERROR_Y <= ~RIGHT_HEIGHT;
 027562 					RIGHT_COL_ERROR_X_CMP <= POLY_RDIRY;
 027562 					RIGHT_COL_ERROR_Y_CMP <= POLY_RDIRX;
        					
 027562 					RIGHT_D_ERROR_INC <= RIGHT_HEIGHT << 1;
 027562 					RIGHT_D_ERROR_ADJ <= -(COL_HEIGHT << 1);
 027562 					RIGHT_D_ERROR <= ~COL_HEIGHT;
 027562 					RIGHT_D_ERROR_CMP <= POLY_RSY > POLY_RSX ? POLY_RDIRY : POLY_RDIRX;
        					
 027562 					COL_D <= COL_HEIGHT;
        					
 027562 					SPR_OFFSY <= TEXT_DIRY ? (ORIG_HEIGHT - 8'd1) * ORIG_WIDTH[8:3] : '0;
 027562 					TEXT_Y <= '0;
 027562 					TEXT_X <= '0;
        					
 027562 					CMD_ST <= CMDS_GRD_CALC_COL;
        				end
        				
 027562 				CMDS_GRD_CALC_COL: begin
 027562 					LEFT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 027562 					RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_B);
        					
 027562 					GRD_CALC_1 <= GHCOLOR_A;
 027562 					GRD_CALC_2 <= GHCOLOR_D;
 027562 					GRD_CALC_S <= COL_HEIGHT + 12'd1;
 027562 					GRD_CALC_STATE <= '0;
 027562 					CMD_ST <= CMDS_GRD_CALC_LEFT;
        				end
        				
 578768 				CMDS_GRD_CALC_LEFT: begin
 551208 					if (GRD_CALC_STATE == 5'd20) begin
 027560 						GRD_CALC_STATE <= '0;
 027560 						LEFT_GHCOLOR_STEP <= GRD_CALC_STEP;
        						
 027560 						GRD_CALC_1 <= GHCOLOR_B;
 027560 						GRD_CALC_2 <= GHCOLOR_C;
 027560 						GRD_CALC_S <= COL_HEIGHT + 12'd1;
 027560 						CMD_ST <= CMDS_GRD_CALC_RIGHT;
        					end
        				end
        				
 578724 				CMDS_GRD_CALC_RIGHT: begin
 551169 					if (GRD_CALC_STATE == 5'd20) begin
 027555 						GRD_CALC_STATE <= '0;
 027555 						RIGHT_GHCOLOR_STEP <= GRD_CALC_STEP;
 027555 						CMD_ST <= CMDS_ROW_DRAW;
        					end
        				end
        				
 042795 				CMDS_ROW_DRAW: begin
 038304 					if (TEXT_Y_READ_STEP) begin
 004491 						TEXT_Y <= TEXT_Y + 8'd1;
 004491 						SPR_OFFSY <= SPR_OFFSY_NEXT;
        					end
        					
 042438 					if (COL_DRAW_STEP) begin
 042438 						case (CMD.CMDCTRL.COMM) 
 029237 							4'h0: CMD_ST <= CMDS_NSPR_CALCX;
 002764 							4'h1: CMD_ST <= CMDS_SSPR_CALCX;
 010437 							default: CMD_ST <= CMDS_LINE_CALC;
        						endcase
 000357 					end else begin
 000357 						CMD_ST <= CMDS_ROW_DRAW;
        					end
 042795 					TEXT_Y_ERROR <= NEXT_TEXT_Y_ERROR;
        				end
        				
 029237 				CMDS_NSPR_CALCX: begin
 029237 					NEW_LINE_SX = RIGHT_VERT.X - LEFT_VERT.X;
        //					NEW_LINE_SY = RIGHT_VERT.Y - LEFT_VERT.Y;
 029237 					NEW_LINE_ASX = Abs(NEW_LINE_SX);
        //					NEW_LINE_ASY = Abs(NEW_LINE_SY);
        					/*if (LEFT_VERT.Y == RIGHT_VERT.Y && $signed(LEFT_VERT.X) < $signed(SYS_CLIP_X1) && !CMD.CMDPMOD.PCLP) begin
        						LINE_VERTA.X <= RIGHT_VERT.X[10:0];
        						LINE_VERTA.Y <= RIGHT_VERT.Y[10:0];
        						LINE_VERTB.X <= SYS_CLIP_X1[10:0];
        						LINE_VERTB.Y <= LEFT_VERT.Y[10:0];
        						LINE_DIRX <= 0;
        						LINE_DIRY <= 0;
        						LINE_CLIP <= 1;
        						DIR[0] <= 1;
        					end else if (LEFT_VERT.Y == RIGHT_VERT.Y && $signed(LEFT_VERT.X) > $signed(SYS_CLIP_X2) && !CMD.CMDPMOD.PCLP) begin
        						LINE_VERTA.X <= RIGHT_VERT.X[10:0];
        						LINE_VERTA.Y <= RIGHT_VERT.Y[10:0];
        						LINE_VERTB.X <= SYS_CLIP_X2[10:0];
        						LINE_VERTB.Y <= LEFT_VERT.Y[10:0];
        						LINE_DIRX <= 0;
        						LINE_DIRY <= 0;
        						LINE_CLIP <= 1;
        						DIR[0] <= 1;
 029237 					end else*/ begin
 029237 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
 029237 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
 029237 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
 029237 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
 029237 						LINE_DIRX <= 0;
 029237 						LINE_DIRY <= 0;
 029237 						LINE_CLIP <= 0;
 029237 						DIR[0] <= 0;
        					end
 029237 					EC_FIND <= 0;
 029237 					HSS_EN <= 0;
        					
 029237 					ROW_WIDTH <= NEW_LINE_ASX + 12'd1;
        					
 029237 					CMD_ST <= CMDS_SSPR_CALCTX;
        				end
        				
 002764 				CMDS_SSPR_CALCX: begin
 002764 					NEW_LINE_SX = RIGHT_VERT.X - LEFT_VERT.X;
        //					NEW_LINE_SY = RIGHT_VERT.Y - LEFT_VERT.Y;
 002764 					NEW_LINE_ASX = Abs(NEW_LINE_SX);
        //					NEW_LINE_ASY = Abs(NEW_LINE_SY);
 000025 					if (LINE_LT_LEFT_CLIPX1 && LINE_GT_RIGHT_CLIPX2 && CLIP_H) begin
 000025 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
 000025 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
 000025 						LINE_VERTB.X <= SYS_CLIP_X2[11:0];
 000025 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
 000025 						LINE_DIRX <= NEW_LINE_SX[12];
 000025 						LINE_CLIP <= 0;
 000025 						DIR[0] <= 0;
%000000 					end else if (LINE_GT_LEFT_CLIPX2 && LINE_LT_RIGHT_CLIPX1 && CLIP_H) begin
%000000 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
%000000 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
%000000 						LINE_VERTB.X <= SYS_CLIP_X1[11:0];
%000000 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
%000000 						LINE_DIRX <= NEW_LINE_SX[12];
%000000 						LINE_CLIP <= 0;
%000000 						DIR[0] <= 0;
 000609 					end else if (LINE_LT_LEFT_CLIPX1 && (LINE_LT_RIGHT_CLIPX2 || LINE_EQ_RIGHT_CLIPX2) && CLIP_H) begin
 000609 						LINE_VERTA.X <= RIGHT_VERT.X[11:0];
 000609 						LINE_VERTA.Y <= RIGHT_VERT.Y[11:0];
 000609 						LINE_VERTB.X <= LEFT_VERT.X[11:0];
 000609 						LINE_VERTB.Y <= LEFT_VERT.Y[11:0];
 000609 						LINE_DIRX <= ~NEW_LINE_SX[12];
 000609 						LINE_CLIP <= 1;
 000609 						DIR[0] <= 1;
 000033 					end else if ((LINE_LT_LEFT_CLIPX2 || LINE_EQ_LEFT_CLIPX2) && LINE_GT_RIGHT_CLIPX1 && CLIP_H) begin
 000033 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
 000033 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
 000033 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
 000033 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
 000033 						LINE_DIRX <= NEW_LINE_SX[12];
 000033 						LINE_CLIP <= 1;
 000033 						DIR[0] <= 0;
 000365 					end else if (LINE_GT_LEFT_CLIPX2 && (LINE_GT_RIGHT_CLIPX1 || LINE_EQ_RIGHT_CLIPX1) && CLIP_H) begin
 000365 						LINE_VERTA.X <= RIGHT_VERT.X[11:0];
 000365 						LINE_VERTA.Y <= RIGHT_VERT.Y[11:0];
 000365 						LINE_VERTB.X <= LEFT_VERT.X[11:0];
 000365 						LINE_VERTB.Y <= LEFT_VERT.Y[11:0];
 000365 						LINE_DIRX <= ~NEW_LINE_SX[12];
 000365 						LINE_CLIP <= 1;
 000365 						DIR[0] <= 1;
~001732 					end else if ((LINE_GT_LEFT_CLIPX1 || LINE_EQ_LEFT_CLIPX1) && LINE_GT_RIGHT_CLIPX2 && CLIP_H) begin
%000000 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
%000000 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
%000000 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
%000000 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
%000000 						LINE_DIRX <= NEW_LINE_SX[12];
%000000 						LINE_CLIP <= 1;
%000000 						DIR[0] <= 0;
 001732 					end else begin
 001732 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
 001732 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
 001732 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
 001732 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
 001732 						LINE_DIRX <= NEW_LINE_SX[12];
 001732 						LINE_CLIP <= 0;
 001732 						DIR[0] <= 0;
        					end
 002764 					LINE_DIRY <= 0;
 002764 					EC_FIND <= 0;
        					
 002764 					ROW_WIDTH <= NEW_LINE_ASX + 12'd1;
        					
 002764 					CMD_ST <= CMDS_SSPR_CALCTX;
        				end
        				
 032000 				CMDS_SSPR_CALCTX: begin
 031915 					if (ROW_WIDTH < {4'b0000,ORIG_WIDTH} && CMD.CMDPMOD.HSS) begin
 000051 						if (ROW_WIDTH < {5'b00000,ORIG_WIDTH[8:1]}) begin
 000051 							TEXT_ERROR_INC <= {5'b00000,ORIG_WIDTH};
 000051 							TEXT_ERROR_ADJ <= (ROW_WIDTH << 1);
 000051 							TEXT_ERROR <= {6'b000000,ORIG_WIDTH[8:1]} - (ROW_WIDTH << 1) - (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
 000034 						end else begin
 000034 							TEXT_ERROR_INC <= ({6'b000000,ORIG_WIDTH[8:1] - 8'd1} << 1);
 000034 							TEXT_ERROR_ADJ <= ((ROW_WIDTH - 13'd1) << 1);
 000034 							TEXT_ERROR <= (-ROW_WIDTH) + (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
        						end
 000085 						HSS_EN <= 1;
 031915 					end else begin
 030652 						if (ROW_WIDTH < {5'b00000,ORIG_WIDTH}) begin
 001263 							TEXT_ERROR_INC <= ({5'b00000,ORIG_WIDTH} << 1);
 001263 							TEXT_ERROR_ADJ <= (ROW_WIDTH << 1);
 001263 							TEXT_ERROR <= {5'b00000,ORIG_WIDTH} - (ROW_WIDTH << 1) - (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
 030652 						end else begin
 030652 							TEXT_ERROR_INC <= ({5'b00000,ORIG_WIDTH - 9'd1} << 1);
 030652 							TEXT_ERROR_ADJ <= ((ROW_WIDTH - 13'd1) << 1);
 030652 							TEXT_ERROR <= (-ROW_WIDTH) + (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
        						end
 031915 						HSS_EN <= 0;
        					end
        
 030469 					if ((LINE_LEFT_OVER || LINE_RIGHT_OVER || LINE_TOP_OVER || LINE_BOTTOM_OVER) && !CMD.CMDPMOD.PCLP) begin
 001531 						CMD_ST <= CMDS_LINE_NEXT;
 030469 					end else begin
 030469 						SPR_READ <= 1;
 030469 						CMD_ST <= CMDS_PRE_DRAW;
        					end
        				end
        				
 010584 				CMDS_LINE_CALC: begin
 010584 					NEW_LINE_SX = RIGHT_VERT.X - LEFT_VERT.X;
 010584 					NEW_LINE_SY = RIGHT_VERT.Y - LEFT_VERT.Y;
 010584 					NEW_LINE_ASX = Abs(NEW_LINE_SX);
 010584 					NEW_LINE_ASY = Abs(NEW_LINE_SY);
 010584 					LINE_SWAP = 0;
%000000 					if (LINE_LT_LEFT_CLIPX1 && LINE_GT_RIGHT_CLIPX2 && CLIP_H) begin
%000000 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
%000000 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
%000000 						LINE_VERTB.X <= SYS_CLIP_X2[11:0];
%000000 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
%000000 						LINE_DIRX <= NEW_LINE_SX[12];
%000000 						LINE_DIRY <= NEW_LINE_SY[12];
%000000 						LINE_CLIP <= 0;
%000000 						DIR[0] <= 0;
%000000 					end else if (LINE_GT_LEFT_CLIPX2 && LINE_LT_RIGHT_CLIPX1 && CLIP_H) begin
%000000 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
%000000 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
%000000 						LINE_VERTB.X <= SYS_CLIP_X1[11:0];
%000000 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
%000000 						LINE_DIRX <= NEW_LINE_SX[12];
%000000 						LINE_DIRY <= NEW_LINE_SY[12];
%000000 						LINE_CLIP <= 0;
%000000 						DIR[0] <= 0;
 003190 					end else if (LINE_LT_LEFT_CLIPX1 && (LINE_LT_RIGHT_CLIPX2 || LINE_EQ_RIGHT_CLIPX2) && CLIP_H) begin
 003190 						LINE_VERTA.X <= RIGHT_VERT.X[11:0];
 003190 						LINE_VERTA.Y <= RIGHT_VERT.Y[11:0];
 003190 						LINE_VERTB.X <= LEFT_VERT.X[11:0];
 003190 						LINE_VERTB.Y <= LEFT_VERT.Y[11:0];
 003190 						LINE_DIRX <= ~NEW_LINE_SX[12];
 003190 						LINE_DIRY <= ~NEW_LINE_SY[12];
 003190 						LINE_CLIP <= 1;
 003190 						DIR[0] <= 1;
 003190 						LINE_SWAP = 1;
 000163 					end else if ((LINE_LT_LEFT_CLIPX2 || LINE_EQ_LEFT_CLIPX2) && LINE_GT_RIGHT_CLIPX1 && CLIP_H) begin
 000163 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
 000163 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
 000163 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
 000163 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
 000163 						LINE_DIRX <= NEW_LINE_SX[12];
 000163 						LINE_DIRY <= NEW_LINE_SY[12];
 000163 						LINE_CLIP <= 1;
 000163 						DIR[0] <= 0;
 001438 					end else if (LINE_GT_LEFT_CLIPX2 && (LINE_GT_RIGHT_CLIPX1 || LINE_EQ_RIGHT_CLIPX1) && CLIP_H) begin
 001438 						LINE_VERTA.X <= RIGHT_VERT.X[11:0];
 001438 						LINE_VERTA.Y <= RIGHT_VERT.Y[11:0];
 001438 						LINE_VERTB.X <= LEFT_VERT.X[11:0];
 001438 						LINE_VERTB.Y <= LEFT_VERT.Y[11:0];
 001438 						LINE_DIRX <= ~NEW_LINE_SX[12];
 001438 						LINE_DIRY <= ~NEW_LINE_SY[12];
 001438 						LINE_CLIP <= 1;
 001438 						DIR[0] <= 1;
 001438 						LINE_SWAP = 1;
~005793 					end else if ((LINE_GT_LEFT_CLIPX1 || LINE_EQ_LEFT_CLIPX1) && LINE_GT_RIGHT_CLIPX2 && CLIP_H) begin
%000000 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
%000000 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
%000000 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
%000000 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
%000000 						LINE_DIRX <= NEW_LINE_SX[12];
%000000 						LINE_DIRY <= NEW_LINE_SY[12];
%000000 						LINE_CLIP <= 1;
%000000 						DIR[0] <= 0;
 005793 					end else begin
 005793 						LINE_VERTA.X <= LEFT_VERT.X[11:0];
 005793 						LINE_VERTA.Y <= LEFT_VERT.Y[11:0];
 005793 						LINE_VERTB.X <= RIGHT_VERT.X[11:0];
 005793 						LINE_VERTB.Y <= RIGHT_VERT.Y[11:0];
 005793 						LINE_DIRX <= NEW_LINE_SX[12];
 005793 						LINE_DIRY <= NEW_LINE_SY[12];
 005793 						LINE_CLIP <= 0;
 005793 						DIR[0] <= 0;
        					end
        					
 005850 					if (NEW_LINE_ASY > NEW_LINE_ASX) begin
 004734 						LINE_ERROR_INC <= (NEW_LINE_ASX << 1);
 004734 						LINE_ERROR_ADJ <= -(NEW_LINE_ASY << 1);
 004734 						LINE_ERROR <= (NEW_LINE_ASY - (NEW_LINE_ASY << 1)) - (NEW_LINE_ASX << 1);
 004734 						LINE_S <= 1;
 004734 						AA_X_INC <= (NEW_LINE_SY[12]^LINE_SWAP) ? {12{(NEW_LINE_SX[12]^LINE_SWAP)}} : {{11{1'b0}},~(NEW_LINE_SX[12]^LINE_SWAP)};
 004734 						AA_Y_INC <= (NEW_LINE_SY[12]^LINE_SWAP) ? {{11{1'b0}},(NEW_LINE_SX[12]^LINE_SWAP)} : {12{~(NEW_LINE_SX[12]^LINE_SWAP)}};
        						
 004734 						ROW_WIDTH <= NEW_LINE_ASY + 12'd1;
 005850 					end else begin
 005850 						LINE_ERROR_INC <= (NEW_LINE_ASY << 1);
 005850 						LINE_ERROR_ADJ <= -(NEW_LINE_ASX << 1);
 005850 						LINE_ERROR <= (NEW_LINE_ASX - (NEW_LINE_ASX << 1)) - (NEW_LINE_ASY << 1);
 005850 						LINE_S <= 0;
 005850 						AA_X_INC <= (NEW_LINE_SX[12]^LINE_SWAP) ? {{11{1'b0}},~(NEW_LINE_SY[12]^LINE_SWAP)} : {12{(NEW_LINE_SY[12]^LINE_SWAP)}};
 005850 						AA_Y_INC <= (NEW_LINE_SX[12]^LINE_SWAP) ? {{11{1'b0}},~(NEW_LINE_SY[12]^LINE_SWAP)} : {12{(NEW_LINE_SY[12]^LINE_SWAP)}};
        						
 005850 						ROW_WIDTH <= NEW_LINE_ASX + 12'd1;
        					end
        					
 010584 					CMD_ST <= CMDS_LINE_CALCTX;
        				end
        				
 010584 				CMDS_LINE_CALCTX: begin
 010050 					if (ROW_WIDTH <= {4'b0000,ORIG_WIDTH - 9'd1} && CMD.CMDPMOD.HSS && !CMD.CMDCTRL.COMM[2]) begin
 000363 						if (ROW_WIDTH < {5'b00000,ORIG_WIDTH[8:1]}) begin
 000171 							TEXT_ERROR_INC <= {5'b00000,ORIG_WIDTH};
 000171 							TEXT_ERROR_ADJ <= (ROW_WIDTH << 1);
 000171 							TEXT_ERROR <= {6'b000000,ORIG_WIDTH[8:1]} - (ROW_WIDTH << 1) - (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
 000363 						end else begin
 000363 							TEXT_ERROR_INC <= ({6'b000000,ORIG_WIDTH[8:1] - 8'd1} << 1);
 000363 							TEXT_ERROR_ADJ <= ((ROW_WIDTH - 13'd1) << 1);
 000363 							TEXT_ERROR <= ROW_WIDTH - (ROW_WIDTH << 1) + (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
        						end
 000534 						HSS_EN <= 1;
 010050 					end else begin
 006468 						if (ROW_WIDTH < {4'b0000,ORIG_WIDTH}) begin
 003582 							TEXT_ERROR_INC <= ({5'b00000,ORIG_WIDTH} << 1);
 003582 							TEXT_ERROR_ADJ <= (ROW_WIDTH << 1);
 003582 							TEXT_ERROR <= {5'b00000,ORIG_WIDTH} - (ROW_WIDTH << 1) - (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
 006468 						end else begin
 006468 							TEXT_ERROR_INC <= ({5'b00000,ORIG_WIDTH - 9'd1} << 1);
 006468 							TEXT_ERROR_ADJ <= ((ROW_WIDTH - 13'd1) << 1);
 006468 							TEXT_ERROR <= ROW_WIDTH - (ROW_WIDTH << 1) + (!TEXT_DIRX || ORIG_WIDTH == 8'd1 ? 14'd0 : 14'd1);
        						end
 010050 						HSS_EN <= 0;
        					end
        					
 010584 					EC_FIND <= 0;
 010584 					AA <= 0;
        				
 005557 					if ((LINE_LEFT_OVER || LINE_RIGHT_OVER || LINE_TOP_OVER || LINE_BOTTOM_OVER) && !CMD.CMDPMOD.PCLP) begin
 005027 						CMD_ST <= CMDS_LINE_NEXT;
 005557 					end else begin
 005557 						SPR_READ <= ~CMD.CMDCTRL.COMM[2];
 005557 						CMD_ST <= CMDS_PRE_DRAW;
        					end
        				end
        				
 036026 				CMDS_PRE_DRAW: begin
 036026 					TEXT_X <= '0;
 034532 					if (!TEXT_ERROR[12]) begin
 000853 						if (TEXT_X_READ_STEP) begin
 000853 							TEXT_X <= (HSS_EN ? 2'd2 : 2'd1);
        						end
 001494 						TEXT_ERROR <= NEXT_TEXT_ERROR;
        					end
 036026 					CMD_ST <= CMDS_GRD_CALC_ROW;
        				end
        				
 036025 				CMDS_GRD_CALC_ROW: begin
 036025 					LINE_GHCOLOR <= DIR[0] ? RIGHT_GHCOLOR : LEFT_GHCOLOR;
 036025 					GRD_CALC_1 <= RGBFtoI(LEFT_GHCOLOR);
 036025 					GRD_CALC_2 <= RGBFtoI(RIGHT_GHCOLOR);
 036025 					GRD_CALC_S <= ROW_WIDTH;
 036025 					CMD_ST <= CMDS_GRD_CALC_LINE;
        				end
        				
 756320 				CMDS_GRD_CALC_LINE: begin
 720310 					if (GRD_CALC_STATE == 5'd20) begin
 036010 						GRD_CALC_STATE <= '0;
 036010 						LINE_GHCOLOR_STEP <= GRD_CALC_STEP;
        						
 036010 						case (CMD.CMDCTRL.COMM) 
 028696 							4'h0: CMD_ST <= CMDS_NSPR_DRAW;
 001766 							4'h1: CMD_ST <= CMDS_SSPR_DRAW;
 005548 							default: CMD_ST <= CMDS_LINE_DRAW;
        						endcase
        					end
        				end
        				
        				CMDS_NSPR_DRAW,
 1485232 				CMDS_SSPR_DRAW: if (!DRAW_WAIT && SPR_DATA_READY) begin
 239152 					DRAW_ENABLE <= LINE_DRAW_STEP;
        					
 171586 					if (TEXT_X_READ_STEP) begin
 171586 						TEXT_X <= TEXT_X + (HSS_EN ? 2'd2 : 2'd1);
 168625 						if (IS_PAT_EC) EC_FIND <= 1;
        					end
 239152 					TEXT_ERROR <= NEXT_TEXT_ERROR;
        					
 236994 					if (LINE_DRAW_STEP) begin
 236994 						LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
        						
 236994 						{LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} <= {LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} + ({LINE_GHCOLOR_STEP.R.INT,LINE_GHCOLOR_STEP.R.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.R.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.R.DIR);
 236994 						{LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} <= {LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} + ({LINE_GHCOLOR_STEP.G.INT,LINE_GHCOLOR_STEP.G.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.G.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.G.DIR);
 236994 						{LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} <= {LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} + ({LINE_GHCOLOR_STEP.B.INT,LINE_GHCOLOR_STEP.B.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.B.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.B.DIR);
        					end
        					  
 208704 					if ((LINE_VERTA.X == LINE_VERTB.X && LINE_DRAW_STEP) || (IS_PAT_EC && EC_FIND && TEXT_X_READ_STEP)) begin
 030448 						SPR_READ <= 0;
 030448 						CMD_ST <= CMDS_LINE_NEXT;
        					end
        				end
        				
 983121 				CMDS_LINE_DRAW: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 240631 					DRAW_ENABLE <= LINE_DRAW_STEP;
        					
 218354 					if (TEXT_X_READ_STEP) begin
 022277 						TEXT_X <= TEXT_X + (HSS_EN ? 2'd2 : 2'd1);
 020855 						if (IS_PAT_EC) EC_FIND <= 1;
        					end
 240631 					TEXT_ERROR <= NEXT_TEXT_ERROR;
        					
 240631 					{LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR} = '0;
 240631 					AA_DRAW = 0;
 240631 					AA_X <= LINE_VERTA.X + AA_X_INC;
 240631 					AA_Y <= LINE_VERTA.Y + AA_Y_INC;
 234736 					if (LINE_DRAW_STEP) begin
 163051 						if (LINE_AA_STEP) begin
 037431 							if (!LINE_S) begin
 037431 								LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 034254 							end else begin
 034254 								LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
        							end
 071685 							AA <= 1;
 071685 							AA_DRAW = 1;
 163051 						end else begin
 091751 							if (!LINE_S) begin
 091751 								LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 091751 								LINE_VERTA_X_OVR = (LINE_VERTA.X == LINE_VERTB.X) || ($signed(LINE_VERTA.X) < $signed(SYS_CLIP_X1) && LINE_DIRX && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.X) > $signed(SYS_CLIP_X2) && !LINE_DIRX && !CMD.CMDPMOD.PCLP);
 091751 								LINE_VERTA_Y_OVR = ($signed(LINE_VERTA.Y) < $signed(SYS_CLIP_Y1) && LINE_DIRY && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.Y) > $signed(SYS_CLIP_Y2) && !LINE_DIRY && !CMD.CMDPMOD.PCLP);
 071300 							end else begin
 071300 								LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 071300 								LINE_VERTA_X_OVR = ($signed(LINE_VERTA.X) < $signed(SYS_CLIP_X1) && LINE_DIRX && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.X) > $signed(SYS_CLIP_X2) && !LINE_DIRX && !CMD.CMDPMOD.PCLP);
 071300 								LINE_VERTA_Y_OVR = (LINE_VERTA.Y == LINE_VERTB.Y) || ($signed(LINE_VERTA.Y) < $signed(SYS_CLIP_Y1) && LINE_DIRY && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.Y) > $signed(SYS_CLIP_Y2) && !LINE_DIRY && !CMD.CMDPMOD.PCLP);
        							end
        						end
 234736 						LINE_ERROR <= NEXT_LINE_ERROR;
        					
 234736 						{LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} <= {LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} + ({LINE_GHCOLOR_STEP.R.INT,LINE_GHCOLOR_STEP.R.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.R.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.R.DIR);
 234736 						{LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} <= {LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} + ({LINE_GHCOLOR_STEP.G.INT,LINE_GHCOLOR_STEP.G.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.G.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.G.DIR);
 234736 						{LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} <= {LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} + ({LINE_GHCOLOR_STEP.B.INT,LINE_GHCOLOR_STEP.B.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.B.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.B.DIR);
        					end
        
 000663 					if (IS_PAT_EC && EC_FIND && TEXT_X_READ_STEP) begin
 000663 						CMD_ST <= AA_DRAW ? CMDS_LINE_END : CMDS_LINE_NEXT;
 003311 					end else if ((LINE_VERTA_X_OVR || LINE_VERTA_Y_OVR) && LINE_DRAW_STEP) begin
~003311 						CMD_ST <= AA_DRAW ? CMDS_LINE_END : CMDS_LINE_NEXT;
 165141 					end else if (AA_DRAW) begin
 071516 						CMD_ST <= CMDS_AA_DRAW;
        					end
        				end
        				
 301037 				CMDS_AA_DRAW: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 071507 					DRAW_ENABLE <= 1;
 071507 					AA <= 0;
        					
 071507 					{LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR} = '0;
 037322 					if (!LINE_S) begin
 037322 						LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 037322 						LINE_VERTA_X_OVR = (LINE_VERTA.X == LINE_VERTB.X);
 034185 					end else begin
 034185 						LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 034185 						LINE_VERTA_Y_OVR = (LINE_VERTA.Y == LINE_VERTB.Y);
        					end
 069955 					if ((LINE_VERTA_X_OVR || LINE_VERTA_Y_OVR) && LINE_DRAW_STEP) 
 001552 						CMD_ST <= CMDS_LINE_NEXT;
        					else
 069955 						CMD_ST <= CMDS_LINE_DRAW;
        				end
        				
 000433 				CMDS_LINE_END: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 000169 					DRAW_ENABLE <= AA;
 000169 					AA <= 0;
 000169 					CMD_ST <= CMDS_LINE_NEXT;
        				end
        				
 042532 				CMDS_LINE_NEXT: begin
 042532 					SPR_READ <= 0;
 042532 					TEXT_X <= '0;
        					
 042129 					if (CMD.CMDCTRL.COMM == 4'h0 || CMD.CMDCTRL.COMM == 4'h1 || CMD.CMDCTRL.COMM == 4'h2 || CMD.CMDCTRL.COMM == 4'h3 || CMD.CMDCTRL.COMM == 4'h4) begin 
 041090 						if (LEFT_COL_X_STEP) begin
 001039 							LEFT_VERT.X <= LEFT_VERT.X + {{12{POLY_LDIRX}},1'b1};
        						end
 031909 						if (LEFT_COL_Y_STEP) begin
 010220 							LEFT_VERT.Y <= LEFT_VERT.Y + {{12{POLY_LDIRY}},1'b1};
        						end
 038726 						if (RIGHT_COL_X_STEP) begin
 003403 							RIGHT_VERT.X <= RIGHT_VERT.X + {{12{POLY_RDIRX}},1'b1};
        						end
 031464 						if (RIGHT_COL_Y_STEP) begin
 010665 							RIGHT_VERT.Y <= RIGHT_VERT.Y + {{12{POLY_RDIRY}},1'b1};
        						end
        						
 042129 						LEFT_D_ERROR <= NEXT_LEFT_D_ERROR;
 042129 						LEFT_COL_ERROR_X <= NEXT_LEFT_COL_ERROR_X;
 042129 						LEFT_COL_ERROR_Y <= NEXT_LEFT_COL_ERROR_Y;
 042129 						RIGHT_D_ERROR <= NEXT_RIGHT_D_ERROR;
 042129 						RIGHT_COL_ERROR_X <= NEXT_RIGHT_COL_ERROR_X;
 042129 						RIGHT_COL_ERROR_Y <= NEXT_RIGHT_COL_ERROR_Y;
        						
 042129 						{LEFT_GHCOLOR.R.INT, LEFT_GHCOLOR.R.FRAC } <= {LEFT_GHCOLOR.R.INT, LEFT_GHCOLOR.R.FRAC } + ({LEFT_GHCOLOR_STEP.R.INT, LEFT_GHCOLOR_STEP.R.FRAC }^{17{LEFT_GHCOLOR_STEP.R.DIR }}) + LEFT_GHCOLOR_STEP.R.DIR;
 042129 						{LEFT_GHCOLOR.G.INT, LEFT_GHCOLOR.G.FRAC } <= {LEFT_GHCOLOR.G.INT, LEFT_GHCOLOR.G.FRAC } + ({LEFT_GHCOLOR_STEP.G.INT, LEFT_GHCOLOR_STEP.G.FRAC }^{17{LEFT_GHCOLOR_STEP.G.DIR }}) + LEFT_GHCOLOR_STEP.G.DIR;
 042129 						{LEFT_GHCOLOR.B.INT, LEFT_GHCOLOR.B.FRAC } <= {LEFT_GHCOLOR.B.INT, LEFT_GHCOLOR.B.FRAC } + ({LEFT_GHCOLOR_STEP.B.INT, LEFT_GHCOLOR_STEP.B.FRAC }^{17{LEFT_GHCOLOR_STEP.B.DIR }}) + LEFT_GHCOLOR_STEP.B.DIR;
 042129 						{RIGHT_GHCOLOR.R.INT,RIGHT_GHCOLOR.R.FRAC} <= {RIGHT_GHCOLOR.R.INT,RIGHT_GHCOLOR.R.FRAC} + ({RIGHT_GHCOLOR_STEP.R.INT,RIGHT_GHCOLOR_STEP.R.FRAC}^{17{RIGHT_GHCOLOR_STEP.R.DIR}}) + RIGHT_GHCOLOR_STEP.R.DIR;
 042129 						{RIGHT_GHCOLOR.G.INT,RIGHT_GHCOLOR.G.FRAC} <= {RIGHT_GHCOLOR.G.INT,RIGHT_GHCOLOR.G.FRAC} + ({RIGHT_GHCOLOR_STEP.G.INT,RIGHT_GHCOLOR_STEP.G.FRAC}^{17{RIGHT_GHCOLOR_STEP.G.DIR}}) + RIGHT_GHCOLOR_STEP.G.DIR;
 042129 						{RIGHT_GHCOLOR.B.INT,RIGHT_GHCOLOR.B.FRAC} <= {RIGHT_GHCOLOR.B.INT,RIGHT_GHCOLOR.B.FRAC} + ({RIGHT_GHCOLOR_STEP.B.INT,RIGHT_GHCOLOR_STEP.B.FRAC}^{17{RIGHT_GHCOLOR_STEP.B.DIR}}) + RIGHT_GHCOLOR_STEP.B.DIR;
        						
 042129 						CMD_ST <= !CMD.CMDPMOD.PCLP && !FAST ? CMDS_ROW_CLIP : CMDS_ROW_DRAW;
 042129 						COL_D <= COL_D - 12'd1;
 027508 						if (COL_D == 12'd0) begin
 027508 							CMD_ST <= CMDS_END;
        						end
 000347 					end else if (CMD.CMDCTRL.COMM == 4'h5 || CMD.CMDCTRL.COMM == 4'h7) begin
 000347 						case (POLY_S)
 000092 							2'd0: begin
 000092 								LEFT_VERT <= VERTB;
 000092 								RIGHT_VERT <= VERTC;
 000092 								LEFT_GHCOLOR <= RGBItoF(GHCOLOR_B);
 000092 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_C);
 000092 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000085 							2'd1: begin
 000085 								LEFT_VERT <= VERTC;
 000085 								RIGHT_VERT <= VERTD;
 000085 								LEFT_GHCOLOR <= RGBItoF(GHCOLOR_C);
 000085 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_D);
 000085 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000085 							2'd2: begin
 000085 								LEFT_VERT <= VERTD;
 000085 								RIGHT_VERT <= VERTA;
 000085 								LEFT_GHCOLOR <= RGBItoF(GHCOLOR_D);
 000085 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 000085 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000085 							2'd3: begin
 000085 								CMD_ST <= CMDS_END;
        							end
        						endcase
 000347 						POLY_S <= POLY_S + 2'd01;
~000056 					end else if (CMD.CMDCTRL.COMM == 4'h6) begin
 000056 						CMD_ST <= CMDS_END;
%000000 					end else begin
%000000 						CMD_ST <= CMDS_END;
        					end
        				end
        				
 070569 				CMDS_ROW_CLIP: begin
 070569 					CMD_DELAY <= CMD_DELAY - 9'd1;
 062708 					if (!CMD_DELAY || PENALTY_CNT >= CMD_DELAY) begin
 007861 						CMD_DELAY <= 9'd8;
 007861 						CMD_ST <= CMDS_ROW_DRAW;
        					end
        				end
        				
 028017 				CMDS_END: begin
 028017 					NEXT_ADDR = CMD_ADDR + 18'h10;
 028017 					case (CMD.CMDCTRL.JP[1:0])
 027980 						2'b00: begin CMD_ADDR <= NEXT_ADDR; end
 000015 						2'b01: begin CMD_ADDR <= {CMD.CMDLINK[15:2],2'b00,2'b00}; end
~000011 						2'b10: begin CMD_ADDR <= {CMD.CMDLINK[15:2],2'b00,2'b00}; if (!CMD_SUB_RUN) CMD_RET_ADDR <= NEXT_ADDR; CMD_SUB_RUN <= 1; end
~000011 						2'b11: begin CMD_ADDR <= CMD_SUB_RUN ? CMD_RET_ADDR : NEXT_ADDR; CMD_SUB_RUN <= 0; end
        					endcase
        					
 027965 					if (CMD.CMDCTRL.END) begin
 000052 						DRAW_END <= 1;
 000052 						CMD_ST <= CMDS_IDLE;
        `ifdef DEBUG
        						DBG_CMD_CNT <= '0;
        `endif
 027965 					end else begin
 027965 						CMD_READ <= 1;
 027965 						CMD_ST <= CMDS_READ;
        `ifdef DEBUG
        						DBG_CMD_CNT <= DBG_CMD_CNT + 1'd1;
        						DBG_CMD_ADDR_LAST <= CMD_ADDR;
        						DBG_CMD_CMDSRCA_LAST <= CMD.CMDSRCA;
        `endif
        					end
        				end
        			endcase
        		end
        	end
        `ifdef DEBUG
        	assign DBG_START = (CMD_ST == CMDS_IDLE && (FRAME_START /*|| FRAME_START_PEND*/));
        	assign DBG_CMD_END = (CMD_ST == CMDS_END);
        	assign DBG_LINE_OVER = COL_HEIGHT > 12'h200 || ROW_WIDTH > 12'h200;
        	assign DBG_PAT = PAT;
        `endif
        		
        	assign PAT = GetPattern(SPR_DATA, CMD.CMDPMOD.CM);
        	
        	typedef enum bit [2:0] {
        		FBDS_IDLE,
        		FBDS_RAS,
        		FBDS_READ,
        		FBDS_READWAIT,
        		FBDS_READBACK,
        		FBDS_WRITE,
        		FBDS_SKIP
        	} FBDrawState_t;
 913550 	FBDrawState_t FBD_ST;
        	
 013179 	bit          CPU_VRAM_BUSY;
        	
 199234 	bit  [11: 0] DRAW_X;
 087320 	bit  [11: 0] DRAW_Y;
 010957 	Pattern_t    DRAW_PAT;
 027773 	RGB_t        DRAW_GHCOLOR;
 025597 	bit  [15: 0] DRAW_BACK_C;
 525735 	bit          FB_DRAW_PEND;
 365656 	bit          FB_READ_PEND;
 193864 	bit          PAT_NEXT;
 8799682 	always @(posedge CLK or negedge RST_N) begin
 8799682 		bit  [ 1: 0] RAS_DELAY;
 8799682 		bit          FBD_RAS;
        		
 8799083 		if (!RST_N) begin
 000599 			FBD_ST <= FBDS_IDLE;
 000599 			FB_DRAW_PEND <= 0;
 000599 			FB_READ_PEND <= 0;
 000599 			PAT_NEXT <= 0;
 000599 			RAS_DELAY <= '0;
 000599 			FBD_RAS <= 0;
        		end
 8799083 		else begin
 8799083 			PAT_NEXT <= 0;
 8799083 			case (FBD_ST)
 6709155 				FBDS_IDLE: begin
 362085 					if (CPU_VRAM_BUSY) begin
 362085 						FBD_ST <= FBDS_SKIP;
 4875342 					end else if (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4) begin
 920262 						if ((CMD_ST == CMDS_NSPR_DRAW || CMD_ST == CMDS_SSPR_DRAW || CMD_ST == CMDS_LINE_DRAW || CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END)) begin
 479787 							if ((CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END)) begin
 071679 								DRAW_X <= LOC_COORD.X + AA_X;
 071679 								DRAW_Y <= LOC_COORD.Y + AA_Y;
 479787 							end else begin
 445532 								if (LINE_AA_STEP && LINE_S) begin
 034255 									DRAW_X <= LOC_COORD.X + LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 445532 								end else begin
 445532 									DRAW_X <= LOC_COORD.X + LINE_VERTA.X;
        								end
 442356 								if (LINE_AA_STEP && !LINE_S) begin
 037431 									DRAW_Y <= LOC_COORD.Y + LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 442356 								end else begin
 442356 									DRAW_Y <= LOC_COORD.Y + LINE_VERTA.Y;
        								end
 477807 								if (!(TEXT_X_READ_STEP && EC_FIND && IS_PAT_EC)) begin
 477807 									DRAW_PAT <= PAT;
 477807 									DRAW_GHCOLOR <= RGBFtoI(LINE_GHCOLOR);
        								end
 479787 								FBD_RAS <= LINE_DRAW_STEP && (CMD.CMDCTRL.COMM <= 4'h1) && &LINE_VERTA.X[3:0];
        							end
        							
        							
 525737 							if (LINE_DRAW_STEP && !IS_PAT_EC) begin
 365656 								if (CMD.CMDPMOD.CCB[0] || CMD.CMDPMOD.MON) begin
 365656 									FB_READ_PEND <= 1;
 365656 									FBD_ST <= FBDS_READ;
 160081 								end else begin
 160081 									FB_DRAW_PEND <= 1;
 160081 									FBD_ST <= FBDS_WRITE;
        								end
 025729 							end else begin
 025729 								FBD_ST <= FBDS_SKIP;
        							end
        						end
 1466634 						if (CMD_ST == CMDS_ROW_DRAW) begin
 005094 							FBD_RAS <= 1;
        						end
 1471728 						PAT_NEXT <= TEXT_X_READ_STEP;
        					end
        					
        				end
        				
 368175 				FBDS_READ: begin
 365655 					if (!FB_DRAW_WAIT) begin
 365655 						FB_READ_PEND <= 0;
 365655 						FBD_ST <= FBDS_READWAIT;
        					end
        				end
        			
 365655 				FBDS_READWAIT: begin
 365655 					FBD_ST <= FBDS_READBACK;
        				end
        			
 365654 				FBDS_READBACK: begin
 365654 					DRAW_BACK_C <= FB_DRAW_Q;
 365654 					FB_DRAW_PEND <= 1;
 365654 					FBD_ST <= FBDS_WRITE;
        				end
        				
 529983 				FBDS_WRITE: begin
 525735 					if (!FB_DRAW_WAIT) begin
 525735 						FB_DRAW_PEND <= 0;
 513034 						if (FBD_RAS)
 012662 							if (PENALTY_CNT < 10'd3) begin
 012662 								FBD_ST <= FBDS_RAS;
 000039 							end else begin
 000039 								PENALTY_CNT <= PENALTY_CNT - 10'd3;
 000039 								FBD_ST <= FBDS_IDLE;
        							end
        						else
 513034 							FBD_ST <= FBDS_IDLE;
        					end
        				end
        				
 072647 				FBDS_RAS: if (CE_R) begin
 037986 					RAS_DELAY <= RAS_DELAY + 2'd1;
 025324 					if (RAS_DELAY == 2'd2) begin
 012662 						RAS_DELAY <= 2'd0;
 012662 						FBD_RAS <= 0;
 012662 						FBD_ST <= FBDS_IDLE;
        					end
        				end
        				
 387814 				FBDS_SKIP: begin
 387814 					FBD_ST <= FBDS_IDLE;
        				end
        			endcase
        			
 8796558 			if (((CMD_ST == CMDS_LINE_DRAW && CMD.CMDCTRL.COMM <= 4'h3) || CMD_ST == CMDS_NSPR_DRAW || CMD_ST == CMDS_SSPR_DRAW) && PAT_PREREAD_WAIT && !CPU_VRAM_BUSY && CE_R) PENALTY_CNT <= PENALTY_CNT + 10'd1;
 8798928 			if ((CMD_ST == CMDS_EXEC || CMD_ST == CMDS_ROW_CLIP) && CMD_DELAY && PENALTY_CNT >= CMD_DELAY) PENALTY_CNT <= PENALTY_CNT - CMD_DELAY;
        		end
        	end
        	assign DRAW_WAIT = (FBD_ST != FBDS_IDLE) || CPU_VRAM_BUSY;
        	
        `ifdef DEBUG
        	assign DBG_PENALTY_OVER = (PENALTY_CNT >= 10'd256);
        `endif
        
 7193079 	assign SPR_ADDR = CMD.CMDCTRL.COMM >= 4'h4 ? '1 : SprAddr(SPR_OFFSY, CMD.CMDSRCA, CMD.CMDPMOD.CM);
        	assign CLT_ADDR = {CMD.CMDCOLR[15:2],2'b00,2'b00};
        	assign GRD_ADDR = {CMD.CMDGRDA,2'b00};
        	
 025420 	bit  [15: 0] FB_DRAW_D;
 037226 	bit          FB_DRAW_WE;
 001463 	bit          SCLIP;
 001361 	bit          UCLIP;
 010654 		bit [15: 0] ORIG_C;
 007125 		bit         TP;
 8799713 	always_comb begin
 8799713 		bit [15: 0] CALC_C;
 8799713 		bit         EC;
 8799713 		bit         MESH;
 8799713 		bit         IDRAW;
        		
 7259366 		if (!CMD.CMDCTRL.COMM[2]) begin
 7259366 			case (CMD.CMDPMOD.CM)
 5472839 				3'b000: ORIG_C = {CMD.CMDCOLR[15:4],DRAW_PAT.C[3:0]};
 699826 				3'b001: ORIG_C = CLT_Q;
 176478 				3'b010: ORIG_C = {CMD.CMDCOLR[15:6],DRAW_PAT.C[5:0]};
 107050 				3'b011: ORIG_C = {CMD.CMDCOLR[15:7],DRAW_PAT.C[6:0]};
 193698 				3'b100: ORIG_C = {CMD.CMDCOLR[15:8],DRAW_PAT.C[7:0]};
 609475 				default: ORIG_C = DRAW_PAT.C;
        			endcase
 7259366 			TP = DRAW_PAT.TP;
 7259366 			EC = DRAW_PAT.EC;
 1540347 		end else begin
 1540347 			ORIG_C = CMD.CMDCOLR;
 1540347 			TP = 0;
 1540347 			EC = 0;
        		end
 8799713 		CALC_C = CMD.CMDPMOD.MON ? DRAW_BACK_C : !TVMR.TVM[0] ? ColorCalc(ORIG_C, DRAW_BACK_C, DRAW_GHCOLOR, CMD.CMDPMOD.CCB) : ORIG_C;
        			
 8799713 		SCLIP = !DRAW_X[11:10]                                    && DRAW_X[9:0] <= SYS_CLIP.X2[9:0] && !DRAW_Y[11:10]                                    && DRAW_Y[9:0] <= SYS_CLIP.Y2[9:0];
 8799713 		UCLIP = !DRAW_X[11:10] && DRAW_X[9:0] >= USR_CLIP.X1[9:0] && DRAW_X[9:0] <= USR_CLIP.X2[9:0] && !DRAW_Y[11:10] && DRAW_Y[9:0] >= USR_CLIP.Y1[9:0] && DRAW_Y[9:0] <= USR_CLIP.Y2[9:0];
 8799713 		MESH = ~(DRAW_X[0] ^ DRAW_Y[0]) ^ (FRAME_ODD&BLUR_MESH);
 8799713 		IDRAW = ~(DIL ^ DRAW_Y[0]);
 8799713 		FB_DRAW_D = CALC_C;
 8799713 		FB_DRAW_WE = (~TP | CMD.CMDPMOD.SPD) & (~EC | CMD.CMDPMOD.ECD) & SCLIP & ((UCLIP^CMD.CMDPMOD.CMOD) | ~CMD.CMDPMOD.CLIP) & (MESH | ~CMD.CMDPMOD.MESH) & (IDRAW | ~DIE);
        	end
        `ifdef DEBUG
        	assign ORIG_C_DBG = ORIG_C;
        	assign DBG_ORIG_RGB = ORIG_C[14:0];
        	assign DRAW_X_DBG = DRAW_X;
        	assign DRAW_Y_DBG = DRAW_Y;
        	assign TP_DBG = TP;
        	assign SCLIP_DBG = SCLIP;
        	assign UCLIP_DBG = UCLIP;
        	
        	assign DBG_DRAW_OVER = DRAW_X[11:8] == 4'b0011 || DRAW_X[11:8] == 4'b1101 || DRAW_Y[11:8] == 4'b0011 || DRAW_Y[11:8] == 4'b1101;
        	assign DBG_SPR_ADDR = SPR_ADDR;
        `endif
        
        	//FB out
 010273 	ScrnStart_t  RP_Xst;
 010242 	ScrnStart_t  RP_Yst;
 010257 	ScrnInc_t    RP_DXst;
 010227 	ScrnInc_t    RP_DYst;
 010224 	ScrnInc_t    RP_DX;
 010250 	ScrnInc_t    RP_DY;
 010281 	RotCoord_t   RXst,RYst;
 511032 	RotCoord_t   OUT_RX,OUT_RY;
 1070179 	bit  [ 8: 0] OUT_X;
 020961 	bit  [ 8: 0] OUT_Y;
%000000 	bit          FRAME_ERASE_HIT;
%000000 	bit  [ 8: 0] ERASE_X;
%000000 	bit  [ 8: 0] ERASE_Y;
 002748 	bit          ERASE_HIT;
 040568 	bit  [15: 0] HTIM_PIPE;
 8799682 	always @(posedge CLK or negedge RST_N) begin
 8799682 		bit          HTIM_N_OLD;
 8799682 		bit          VTIM_N_OLD;
 8799682 		bit  [ 2: 0] RP_POS;
 8799682 		bit          RP_FIRST;
        		
 8799083 		if (!RST_N) begin
 000599 			OUT_X <= '0;
 000599 			OUT_Y <= '0;
        		end
 8799083 		else begin
 8799083 			HTIM_N_OLD <= HTIM_N;
 8799083 			VTIM_N_OLD <= VTIM_N;
        			
 6769787 			if (DCE_R) begin
 2029296 				HTIM_PIPE <= {HTIM_PIPE[14:0],HTIM_N};
        			end
        			
 6769787 			if (DCE_R) begin
 1745320 				if (RP_POS != 3'd7) RP_POS <= RP_POS + 3'd1;
        			end
 8758516 			if (!HTIM_N && HTIM_N_OLD) begin
 040567 				RP_POS <= '0;
        			end
 8796550 			if (VTIM_N && !VTIM_N_OLD) begin
 002533 				RP_FIRST <= 1;
        			end
 8758515 			if (HTIM_N && !HTIM_N_OLD) begin
 040568 				RP_FIRST <= 0;
        			end
        			
 6769764 			if (DCE_F) begin
 2029319 				case (RP_POS)
 040568 					3'd0: RP_Xst[31:16] <= VOUTI;	//0x18C/0x1A8
 040568 					3'd1: RP_Yst[31:16] <= VOUTI;	//0x18D/0x1A9
 040568 					3'd2: RP_DXst[31:16] <= VOUTI;//0x18E/0x1AA
 040568 					3'd3: RP_DYst[31:16] <= VOUTI;//0x18F/0x1AB
 040568 					3'd4: RP_DX[31:16] <= VOUTI;	//0x190/0x1AC
 040568 					3'd5: RP_DY[31:16] <= VOUTI;	//0x191/0x1AD
        				endcase
        			end
 6769787 			if (DCE_R) begin
 2029296 				case (RP_POS)
 040568 					3'd0: RP_Xst[15:0] <= VOUTI;
 040568 					3'd1: RP_Yst[15:0] <= VOUTI;
 040568 					3'd2: RP_DXst[15:0] <= VOUTI;
 040568 					3'd3: RP_DYst[15:0] <= VOUTI;
 040568 					3'd4: RP_DX[15:0] <= VOUTI;
 040568 					3'd5: RP_DY[15:0] <= VOUTI;
 040568 					3'd6: begin
 040568 						RXst <= $signed(RXst) + $signed(ScrnIncToRC(RP_DXst));
 040568 						RYst <= $signed(RYst) + $signed(ScrnIncToRC(RP_DYst));
 040548 						if (RP_FIRST) begin
 000020 							RXst <= ScrnStartToRC(RP_Xst);
 000020 							RYst <= ScrnStartToRC(RP_Yst);
        						end
        					end
        				endcase
        			end
        			
 6769787 			if (DCE_R) begin
 2029296 				OUT_RX <= $signed(OUT_RX) + $signed(ScrnIncToRC(RP_DX));
 2029296 				OUT_RY <= $signed(OUT_RY) + $signed(ScrnIncToRC(RP_DY));
 1988728 				if (HTIM_PIPE[8:7] == 2'b01) begin
 040568 					OUT_RX <= $signed(RXst);
 040568 					OUT_RY <= $signed(RYst);
        				end
        			end
        			
 7525035 			if (VTIM_N && DCE_R) begin
 025453 				if (HTIM_PIPE[8:7] == 2'b01) begin
 025453 					OUT_X <= '0;
 025453 					OUT_Y <= OUT_Y + 9'd1;
        				end
~1248587 				else if (OUT_X < 9'd352 + 8) begin
 1248587 					OUT_X <= OUT_X + 9'd1;
        				end
        			end
        			
 7932777 			if ((HTIM_N || |HTIM_PIPE) && VBLANK_ERASE && CE_R) begin
 866306 				OUT_X <= OUT_X + 9'd1;
 852035 				if ({1'b0,OUT_X} + 10'd1 == (!EWRR.X3[9] ? {EWRR.X3,3'b000} : 10'h200)) begin
 014271 					OUT_X <= {EWLR.X1,3'b000};
 014271 					OUT_Y <= OUT_Y + 9'd1;
        				end
        			end
 8796551 			if (!VTIM_N && VTIM_N_OLD) begin
 002532 				OUT_X <= {EWLR.X1,3'b000};
 002532 				OUT_Y <= EWLR.Y1;
        			end
 8796550 			if (VTIM_N && !VTIM_N_OLD) begin
 002533 				OUT_Y <= '1;
        			end
 4399547 			if (CE_F) begin
 4399547 				ERASE_HIT <= (OUT_X >= {EWLR.X1,3'b000}) && ({1'b0,OUT_X} < {EWRR.X3,3'b000}) && (OUT_Y >= EWLR.Y1) && (OUT_Y <= EWRR.Y3);
        			end
        		end
        	end
        	
        	assign FRAME_ERASE_EN = ERASE_HIT && FRAME_ERASE && VTIM_N;
        	assign VBLANK_ERASE_EN = ERASE_HIT && VBLANK_ERASE && (HTIM_N || |HTIM_PIPE);
        	
        	assign FB_ERASE_A = {OUT_Y[7:0],OUT_X[8:0]};
 6592647 	assign FB_DISP_A = TVMR.TVM[1:0] == 2'b10 ? {OUT_RY.INT[7:0],OUT_RX.INT[8:0]} : 
 4002618 	                   TVMR.TVM[1:0] == 2'b11 ? {OUT_RY.INT[8:0],OUT_RX.INT[8:1]} : 
 4002618 							                          {     OUT_Y[7:0],     OUT_X[8:0]};
 2029401 	bit DCLK;
 8799623 	always @(posedge CLK) begin
 2029401 		if      (DCE_R) DCLK <= 1;
 4740798 		else if (DCE_F) DCLK <= 0;
        		
 8799623 		VOUTO <= TVMR.TVM[1:0] == 2'b01 ? (DCLK ? {8'hFF,FB_DISP_Q[15:8]} : {8'hFF,FB_DISP_Q[7:0]}) :
 5331773 	            TVMR.TVM[1:0] == 2'b10 ? (OUT_RX.INT[10:9] || OUT_RY.INT[10:8] ? 16'h0000 : FB_DISP_Q) :
 2741758 					TVMR.TVM[1:0] == 2'b11 ? (OUT_RX.INT[10:9] || OUT_RY.INT[10:9] ? 16'h0000 : !OUT_X[0] ? {8'h00,FB_DISP_Q[15:8]} : {8'h00,FB_DISP_Q[7:0]}) :
 2741758 					FB_DISP_Q;
        	end
        	
        	//VRAM
        	typedef enum bit [3:0] {
        		VS_IDLE,  
        		VS_RAS0,VS_RAS1,VS_RAS2,
        		VS_CPU_WRITE,
        		VS_CPU_READ,
        		VS_CMD_READ,
        		VS_PAT_READ,
        		VS_CLT_READ,
        		VS_GRD_READ
        	} VRAMState_t;
 697249 	VRAMState_t VRAM_ST;
        	
        	typedef enum bit [2:0] {
        		FS_IDLE,  
        		FS_CPU_WRITE,
        		FS_CPU_WAIT,
        		FS_CPU_READ,
        		FS_DRAW
        	} FBState_t;
 423157 	FBState_t FB_ST;
        		
 018651 	wire CPU_VRAM_REQ = (A[20:19] == 2'b00) & ~AD_N & ~CS_N & ~REQ_N;	//000000-07FFFF
 013559 	wire CPU_FB_REQ = (A[20:19] == 2'b01) & ~AD_N & ~CS_N & ~REQ_N;	//080000-0FFFFF
        	
 023345 	bit  [20: 1] A;
 006809 	bit          WE_N;
 000060 	bit  [ 1: 0] DQM;
 002395 	bit          BURST;
 028363 	bit          READY;
 013599 	bit          VRAM_SEL,FBRAM_SEL,REG_SEL;
        	
 005056 	bit          CPU_VRAM_RRDY;
 005276 	bit          CPU_FB_RRDY;
 003277 	bit          CPU_VRAM_WRDY;
 000159 	bit          CPU_FB_WRDY;
 005275 	bit          CPU_FB_RPEND;
 008284 	bit          CPU_FB_WPEND;
        	
 019590 	wire [15: 0] PAT_FIFO_D = GetSprData(VRAM_Q, CMD.CMDPMOD.CM, PAT_CNT[1:0] ^ {2{CMD.CMDCTRL.DIR[0]}} ^ {2{DIR[0]}});
 392699 	wire         PAT_FIFO_WRREQ = VRAM_ST == VS_PAT_READ && !PAT_PREREAD && VRAM_RDY;
 193864 	wire         PAT_FIFO_RDREQ = PAT_NEXT && SPR_DATA_READY;
 017954 	bit  [15: 0] PAT_FIFO_Q;
 113255 	bit          PAT_FIFO_EMPTY;
 068947 	bit          PAT_FIFO_FULL;
 031950 	wire         PAT_FIFO_RST = !SPR_READ;
        	REF_VDP1_PAT_FIFO PAT_FIFO(CLK, PAT_FIFO_RST, PAT_FIFO_D, PAT_FIFO_WRREQ, PAT_FIFO_RDREQ, PAT_FIFO_Q, PAT_FIFO_EMPTY, PAT_FIFO_FULL);
        	
        	assign SPR_DATA = PAT_FIFO_Q;
        	assign SPR_DATA_READY = !PAT_FIFO_EMPTY || PAT_CNT >= ORIG_WIDTH;
        	
 001308 	bit  [15: 0] MEM_DO;
 109711 	bit  [ 8: 0] PAT_CNT;
 031946 	bit          PAT_PREREAD;
 225749 	bit  [ 3: 0] VRAM_READ_POS;
 005055 	bit          CPU_VRAM_RPEND;
 013595 	bit          CPU_VRAM_WPEND;
 013818 	bit          CPU_VRAM_ACCESS;
 8799682 	always @(posedge CLK or negedge RST_N) begin
 8799682 		bit         CS_N_OLD;
 8799682 		bit         READY2,READY3;
        //		bit         VRAM_PAGE_BREAK;
 8799682 		bit [18: 1] CPU_RA;
 8799682 		bit [18: 1] CPU_WA,CPU_FB_WA;
 8799682 		bit [15: 0] CPU_D,CPU_FB_D;
 8799682 		bit [ 1: 0] CPU_WE,CPU_FB_WE;
 8799682 		bit [18: 1] SAVE_WA,SAVE_FB_WA;
 8799682 		bit [15: 0] SAVE_D,SAVE_FB_D;
 8799682 		bit [ 1: 0] SAVE_WE,SAVE_FB_WE;
 8799682 		bit         CMD_READ_PEND;
 8799682 		bit         CLT_READ_PEND;
 8799682 		bit         GRD_READ_PEND;
 8799682 		bit [ 8: 0] FB_Y;
 8799682 		bit         VRAM_FIFO_FULL,FB_FIFO_FULL,VRAM_FIFO_EMPTY,FB_FIFO_EMPTY;
 8799682 		bit [ 4: 0] CPU_ACCESS_WAIT,DRAW_ACCESS_WAIT;
 8799682 		bit [ 1: 0] CPU_VRAM_WDELAY;
        		
 8799083 		if (!RST_N) begin
 000599 			VRAM_ST <= VS_IDLE;
 000599 			VRAM_A <= '0;
 000599 			VRAM_D <= '0;
 000599 			VRAM_WE <= '0;
 000599 			VRAM_RD <= 0;
 000599 			FB_ST <= FS_IDLE;
 000599 			FB_A <= '0;
 000599 			FB_D <= '0;
 000599 			FB_WE <= '0;
 000599 			FB_RD <= 0;
 000599 			{CMD_READ_PEND,CLT_READ_PEND,GRD_READ_PEND} <= 0;
        			
 000599 			A <= '0;
 000599 			WE_N <= 1;
 000599 			DQM <= '1;
 000599 			BURST <= 0;
 000599 			READY <= 1;
 000599 			{CPU_VRAM_RPEND,CPU_VRAM_WPEND} <= '0;
 000599 			{CPU_VRAM_RRDY,CPU_VRAM_WRDY} <= '1;
 000599 			{CPU_FB_RPEND,CPU_FB_WPEND} <= '0;
 000599 			{CPU_FB_RRDY,CPU_FB_WRDY} <= '1;
 000599 			{VRAM_FIFO_FULL,FB_FIFO_FULL,VRAM_FIFO_EMPTY,FB_FIFO_EMPTY} <= '0;
        			
 000599 			CPU_ACCESS_WAIT <= '0;
 000599 			DRAW_ACCESS_WAIT <= '0;
        		end 
 8799083 		else begin
 8799083 			CS_N_OLD <= CS_N;
 4399547 			if (CE_F) begin				
 4399547 				READY2 <= 1;
 4281470 				if (VRAM_FIFO_EMPTY && FB_FIFO_EMPTY) begin
 4281470 					READY3 <= READY2; 
 4281470 					READY <= READY2 & READY3;	
        				end	
        			end		
 8770722 			if (!CS_N && CS_N_OLD) begin
 028361 				READY <= 0;
 028361 				READY2 <= 0;
 028361 				READY3 <= 0;
        			end
        			
 4399547 			if (CE_R) begin
 4253329 				if (!CS_N && DTEN_N && AD_N) begin
 117846 					if (!DI[15]) begin
 117846 						A[20:9] <= DI[11:0];
 117846 						WE_N <= DI[14];
 117846 						BURST <= DI[13];
 117846 						VRAM_SEL <= (DI[11:10] == 2'b00);
 117846 						FBRAM_SEL <= (DI[11:10] == 2'b01);
 117846 						REG_SEL <= DI[11];
 028361 					end else begin
 028361 						A[8:1] <= DI[7:0];
 028361 						DQM <= DI[13:12];
        					end
        				end
        			end
 8770721 			if (CS_N && !CS_N_OLD) begin
 028362 				BURST <= 0;
 028362 				VRAM_SEL <= 0;
 028362 				FBRAM_SEL <= 0;
 028362 				REG_SEL <= 0;
        			end
        			
 8770973 			if (CMD_READ && !CMD_READ_PEND) begin CMD_READ_PEND <= 1; VRAM_READ_POS <= '0; end
 8799016 			if (CLT_READ && !CLT_READ_PEND) begin CLT_READ_PEND <= 1; VRAM_READ_POS <= '0; end
 8798858 			if (GRD_READ && !GRD_READ_PEND) begin GRD_READ_PEND <= 1; VRAM_READ_POS <= '0; end
        
 6351911 			if (!SPR_READ) begin PAT_CNT <= {8'b00000000,HSS_EN&(FBCR.EOS^TEXT_DIRX)}; PAT_PREREAD <= 1; end
        			
 8788753 			if ((CPU_VRAM_REQ || CPU_FB_REQ) && WE_N && DTEN_N) begin 
 010330 				CPU_RA <= A[18:1];
 005275 				if (CPU_VRAM_REQ) begin
 005055 					CPU_VRAM_RPEND <= 1;
 005055 					CPU_VRAM_RRDY <= 0;
        				end 
 005275 				if (CPU_FB_REQ) begin
 005275 					CPU_FB_RPEND <= 1;
 005275 					CPU_FB_RRDY <= 0;
        				end
 010330 				A <= A + 20'd1;
        			end
        			
 8777207 			if (CPU_VRAM_WDELAY && CE_F) CPU_VRAM_WDELAY <= CPU_VRAM_WDELAY - 2'd1;
 8785488 			if (CPU_VRAM_REQ && !WE_N && !DTEN_N) begin
 010319 				if (!CPU_VRAM_WPEND) begin
 010319 					CPU_WA <= A[18:1];
 010319 					CPU_D <= DI;
 010319 					CPU_WE <= ~{2{WE_N}} & ~DQM;
 010319 					CPU_VRAM_WPEND <= 1;
 010319 					VRAM_FIFO_EMPTY <= 0;
 003276 				end else begin
 003276 					SAVE_WA <= A[18:1];
 003276 					SAVE_D <= DI;
 003276 					SAVE_WE <= ~{2{WE_N}} & ~DQM;
 003276 					CPU_VRAM_WRDY <= 0;
 003276 					VRAM_FIFO_FULL <= 1;
        				end
 007292 				if (!BURST) CPU_VRAM_WDELAY <= 2'd3;
 013595 				A <= A + 20'd1;
        			end
 8795807 			if (!CPU_VRAM_WRDY && !CPU_VRAM_WPEND) begin
 003276 				CPU_WA <= SAVE_WA;
 003276 				CPU_D <= SAVE_D;
 003276 				CPU_WE <= SAVE_WE;
 003276 				CPU_VRAM_WPEND <= 1;
 003276 				CPU_VRAM_WRDY <= 1;
 003276 				VRAM_FIFO_EMPTY <= 0;
 003276 				VRAM_FIFO_FULL <= 0;
        			end
 8789549 			if (CPU_VRAM_WRDY && !CPU_VRAM_WPEND && !VRAM_FIFO_EMPTY) begin
 009534 				VRAM_FIFO_EMPTY <= 1;
        			end
        			
 8790799 			if (CPU_FB_REQ && !WE_N && !DTEN_N) begin
 008126 				if (CPU_FB_REQ && !CPU_FB_WPEND) begin
 008126 					CPU_FB_WA <= A[18:1];
 008126 					CPU_FB_D <= DI;
 008126 					CPU_FB_WE <= ~{2{WE_N}} & ~DQM;
 008126 					CPU_FB_WPEND <= 1;
 008126 					FB_FIFO_EMPTY <= 0;
 000158 				end else begin
 000158 					SAVE_FB_WA <= A[18:1];
 000158 					SAVE_FB_D <= DI;
 000158 					SAVE_FB_WE <= ~{2{WE_N}} & ~DQM;
 000158 					CPU_FB_WRDY <= 0;
 000158 					FB_FIFO_FULL <= 1;
        				end
 008284 				A <= A + 20'd1;
        			end
 8798925 			if (!CPU_FB_WRDY && !CPU_FB_WPEND) begin
 000158 				CPU_FB_WA <= SAVE_FB_WA;
 000158 				CPU_FB_D <= SAVE_FB_D;
 000158 				CPU_FB_WE <= SAVE_FB_WE;
 000158 				CPU_FB_WPEND <= 1;
 000158 				CPU_FB_WRDY <= 1;
 000158 				FB_FIFO_EMPTY <= 0;
 000158 				FB_FIFO_FULL <= 0;
        			end
 8793399 			if (CPU_FB_WRDY && !CPU_FB_WPEND && !FB_FIFO_EMPTY) begin
 005684 				FB_FIFO_EMPTY <= 1;
        			end
        			
 6457315 			if (CPU_ACCESS_WAIT && CE_R) CPU_ACCESS_WAIT <= CPU_ACCESS_WAIT - 5'd1;
 8629767 			if (DRAW_ACCESS_WAIT && CE_R) DRAW_ACCESS_WAIT <= DRAW_ACCESS_WAIT - 5'd1;
 8799083 			case (VRAM_ST)
 5873027 				VS_IDLE: if (VRAM_RDY) begin
 5834757 					CPU_VRAM_ACCESS <= 0;
 097683 					if (CPU_VRAM_WPEND && !CPU_VRAM_WDELAY) begin
 097683 						CPU_VRAM_ACCESS <= 1;
 075608 						if (!CPU_ACCESS_WAIT) begin
 022075 							VRAM_A <= CPU_WA;
 013595 							if (VRAM_A[18:9] != CPU_WA[18:9]) begin
 008480 								VRAM_ST <= VS_RAS0;
 013595 							end else begin
 013595 								VRAM_D <= CPU_D;
 013595 								VRAM_WE <= CPU_WE;
 013595 								VRAM_RD <= 0;
 013595 								VRAM_BLEN <= '0;
 013595 								CPU_VRAM_WPEND <= 0;
 013595 								VRAM_ST <= VS_CPU_WRITE;
        							end
        						end
 039633 					end else if (CPU_VRAM_RPEND) begin
 039633 						CPU_VRAM_ACCESS <= 1;
 034578 						if (!CPU_ACCESS_WAIT) begin
 005055 							VRAM_A <= CPU_RA;
 005055 							VRAM_WE <= '0;
 005055 							VRAM_RD <= 1;
 005055 							VRAM_BLEN <= '0;
 005055 							CPU_VRAM_RPEND <= 0;
 005055 							VRAM_ST <= VS_CPU_READ;
        						end
 270674 					end else if (DRAW_ACCESS_WAIT && !BURST) begin
 270674 						CPU_VRAM_ACCESS <= 1;
        //					end else if (VRAM_PAGE_BREAK) begin
        //						VRAM_ST <= VS_RAS;
 449536 					end else if (CMD_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 421449 						if (VRAM_READ_POS == 4'd15) CMD_READ_PEND <= 0;
 449536 						VRAM_A <= CMD_ADDR + VRAM_READ_POS;
 449536 						VRAM_WE <= '0;
 449536 						VRAM_RD <= 1;
 449536 						VRAM_BLEN <= '0;
 449536 						VRAM_ST <= VS_CMD_READ;
 229063 					end else if (SPR_READ && !PAT_FIFO_FULL && PAT_CNT < ORIG_WIDTH && !FRAME_START && !BURST && !VRAM_SEL) begin
 197115 						if (PAT_PREREAD) begin
 031948 							VRAM_A <= SPR_ADDR;
 031948 							case (CMD.CMDPMOD.CM)
        								3'b000,
 029203 								3'b001: VRAM_BLEN <= {2'b00,ORIG_WIDTH[8:2]};
        								3'b010,
        								3'b011,
 001601 								3'b100: VRAM_BLEN <= {1'b0,ORIG_WIDTH[8:1]};
 001144 								default: VRAM_BLEN <= ORIG_WIDTH[8:0];
        							endcase
 197115 						end else begin
 197115 							case (CMD.CMDPMOD.CM)
        								3'b000,
 133587 								3'b001: VRAM_A <= !TEXT_DIRX ? SPR_ADDR + {2'b00,PAT_CNT[8:2]} : SPR_ADDR + ({2'b00,ORIG_WIDTH[8:2]} - {2'b00,PAT_CNT[8:2]} - 9'd1);
        								3'b010,
        								3'b011,
 018809 								3'b100: VRAM_A <= !TEXT_DIRX ? SPR_ADDR + {1'b0,PAT_CNT[8:1]} : SPR_ADDR + ({1'b0,ORIG_WIDTH[8:1]} - {1'b0,PAT_CNT[8:1]} - 9'd1);
 044719 								default: VRAM_A <= !TEXT_DIRX ? SPR_ADDR + PAT_CNT[8:0] : SPR_ADDR + (ORIG_WIDTH[8:0] - PAT_CNT[8:0] - 9'd1);
        							endcase
 197115 							VRAM_BLEN <= '0;
        						end
 229063 						VRAM_WE <= '0;
 229063 						VRAM_RD <= 1;
 229063 						VRAM_ST <= VS_PAT_READ;
 001072 					end else if (CLT_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 001005 						if (VRAM_READ_POS == 4'd15) CLT_READ_PEND <= 0;
 001072 						VRAM_A <= CLT_ADDR + VRAM_READ_POS;
 001072 						VRAM_WE <= '0;
 001072 						VRAM_RD <= 1;
 001072 						VRAM_BLEN <= '0;
 001072 						VRAM_ST <= VS_CLT_READ;
 4746197 					end else if (GRD_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 000675 						if (VRAM_READ_POS == 4'd3) GRD_READ_PEND <= 0;
 000899 						VRAM_A <= GRD_ADDR + VRAM_READ_POS;
 000899 						VRAM_WE <= '0;
 000899 						VRAM_RD <= 1;
 000899 						VRAM_BLEN <= '0;
 000899 						VRAM_ST <= VS_GRD_READ;
        					end
        				end
        				
 013320 				VS_RAS0: if (CE_F) begin
 008480 					VRAM_ST <= VS_RAS1;
        				end
        				
 016960 				VS_RAS1: if (CE_F) begin
 008480 					VRAM_ST <= VS_RAS2;
        				end
        				
 016960 				VS_RAS2: if (CE_F) begin
 008480 					VRAM_ST <= VS_IDLE;
        				end
        				
 013595 				VS_CPU_WRITE: begin
 013595 					VRAM_WE <= '0;
        //					VRAM_PAGE_BREAK <= 1;
 013595 					DRAW_ACCESS_WAIT <= FAST ? 5'd5 : 5'd13;
 007581 					if (!VRAM_FIFO_FULL && !BURST) CPU_ACCESS_WAIT <= 5'd10;
 013595 					VRAM_ST <= VS_IDLE;
        				end
        				
 024939 				VS_CPU_READ: begin
 019884 					if (VRAM_RDY && CE_R) begin
 005055 						MEM_DO <= VRAM_Q;
 005055 						VRAM_RD <= 0;
        //						VRAM_PAGE_BREAK <= 1;
 005055 						DRAW_ACCESS_WAIT <= FAST ? 5'd5 : 5'd13;
 005055 						CPU_VRAM_RRDY <= 1;
 005055 						VRAM_ST <= VS_IDLE;
        					end
        				end
        					
 1789591 				VS_CMD_READ: begin
 1789591 					VRAM_RD <= 0;
 000020 					if (FRAME_START) begin
 000020 						VRAM_WE <= '0;
 000020 						VRAM_RD <= 0;
 000020 						VRAM_ST <= VS_IDLE;
 1340055 					end else if (VRAM_RDY) begin
 449516 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 449516 						CPU_ACCESS_WAIT <= 5'd10;
 449516 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 004875 				VS_CLT_READ: begin
 004875 					VRAM_RD <= 0;
%000000 					if (FRAME_START) begin
%000000 						VRAM_RD <= 0;
%000000 						VRAM_ST <= VS_IDLE;
 003803 					end else if (VRAM_RDY) begin
 001072 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 001072 						CPU_ACCESS_WAIT <= 5'd10;
 001072 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 1042251 				VS_PAT_READ: begin
 1042251 					VRAM_RD <= 0;
 001787 					if (FRAME_START || !SPR_READ) begin
 001787 						VRAM_WE <= '0;
 001787 						VRAM_RD <= 0;
 001787 						VRAM_ST <= VS_IDLE;
 813192 					end else if (VRAM_RDY) begin
 195327 						if (!PAT_PREREAD) begin
 195327 							PAT_CNT <= PAT_CNT + (HSS_EN ? 9'd2 : 9'd1);
 195327 							CPU_ACCESS_WAIT <= 5'd10;
        						end
 227272 						PAT_PREREAD <= 0;
 227272 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 003565 				VS_GRD_READ: begin
 003565 					VRAM_RD <= 0;
%000001 					if (FRAME_START) begin
%000001 						VRAM_RD <= 0;
%000001 						VRAM_ST <= VS_IDLE;
 002666 					end else if (VRAM_RDY) begin
 000898 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 000898 						CPU_ACCESS_WAIT <= 5'd10;
 000898 						VRAM_ST <= VS_IDLE;
        					end
        				end
        			endcase
        			
 8798938 			if (FRAME_START) begin
 000145 				CMD_READ_PEND <= 0;
 000145 				CLT_READ_PEND <= 0;
 000145 				GRD_READ_PEND <= 0;
        			end
        			
 8799083 			case (FB_ST)
 8356151 				FS_IDLE: begin
 008732 					if (CPU_FB_WPEND && !FB_WE) begin
 008284 						if (FB_RDY) begin
 008284 							FB_A <= CPU_FB_WA[17:1];
 008284 							FB_D <= CPU_FB_D;
 008284 							FB_WE <= CPU_FB_WE;
 008284 							CPU_FB_WPEND <= 0;
 008284 							FB_ST <= FS_CPU_WRITE;
        						end
 005582 					end else if (CPU_FB_RPEND && !FB_RD) begin
 005275 						if (FB_RDY) begin
 005275 							FB_A <= CPU_RA[17:1];
 005275 							FB_RD <= 1;
 005275 							CPU_FB_RPEND <= 0;
 005275 							FB_ST <= FS_CPU_WAIT;
        						end
        					end
 7918680 					else if (((FB_READ_PEND && !FB_RD) || (FB_DRAW_PEND && !FB_WE)) && FB_DRAW_WE && !(FBRAM_SEL && BURST)) begin
 423157 						FB_Y = !DIE ? DRAW_Y[8:0] : DRAW_Y[9:1];
 423157 						casex (TVMR.TVM[1:0]) 
 275264 							2'bx0: begin
 275264 								FB_A <= {FB_Y[7:0],DRAW_X[8:0]};
 275264 								FB_D <= FB_DRAW_D | {CMD.CMDPMOD.MON,15'h0000};
 275264 								FB_WE <= {2{FB_DRAW_PEND}};
 275264 								FB_RD <= FB_READ_PEND;
        							end
 035264 							2'b01: begin
 035264 								FB_A <= {FB_Y[7:0],DRAW_X[9:1]};
 035264 								FB_D <= {FB_DRAW_D[7:0],FB_DRAW_D[7:0]} | {CMD.CMDPMOD.MON,15'h0000};
 035264 								FB_WE <= ({~DRAW_X[0],DRAW_X[0]} | {2{CMD.CMDPMOD.MON}}) & {2{FB_DRAW_PEND}};
 035264 								FB_RD <= FB_READ_PEND;
        							end
 112629 							2'b11: begin
 112629 								FB_A <= {FB_Y[8:0],DRAW_X[8:1]};
 112629 								FB_D <= {FB_DRAW_D[7:0],FB_DRAW_D[7:0]} | {CMD.CMDPMOD.MON,15'h0000};
 112629 								FB_WE <= ({~DRAW_X[0],DRAW_X[0]} | {2{CMD.CMDPMOD.MON}}) & {2{FB_DRAW_PEND}};
 112629 								FB_RD <= FB_READ_PEND;
        							end
        						endcase
 423157 						FB_ST <= FS_DRAW;
        					end
        				end
        				
 008284 				FS_CPU_WRITE: begin
 008284 					FB_WE <= '0;
 008284 					FB_ST <= FS_IDLE;
        				end
        				
 006216 				FS_CPU_WAIT: begin
 005275 					if (FB_RDY && CE_F) begin
 005275 						CPU_FB_RRDY <= 1;
 005275 						FB_ST <= FS_CPU_READ;
        					end
        				end
        				
 005275 				FS_CPU_READ: begin
 005275 					FB_RD <= 0;
 005275 					FB_ST <= FS_IDLE;
        				end
        				
 423157 				FS_DRAW: begin
 423157 					FB_WE <= '0;
 423157 					FB_RD <= 0;
 423157 					FB_ST <= FS_IDLE;
        				end
        			endcase
        		end
        	end
        	assign CPU_VRAM_BUSY = VRAM_SEL || CPU_VRAM_RPEND || CPU_VRAM_WPEND || CPU_VRAM_ACCESS;
        	assign FB_DRAW_WAIT = (FB_ST != FS_IDLE) || CPU_FB_WPEND || CPU_FB_RPEND;
 031948 	wire PAT_PREREAD_WAIT = (VRAM_ST == VS_PAT_READ) && PAT_PREREAD && !VRAM_RDY;
        	
 225749 	bit [ 3: 0] CMD_POS;
 014044 	bit [15: 0] CMD_DAT;
~001072 	bit         CMD_WE,CLT_WE,GRD_WE;
 8799682 	always @(posedge CLK or negedge RST_N) begin
 8799682 		bit         CMD_WE,GRD_WE;
 8799682 		bit [12: 0] TEMP;
        		
 8799083 		if (!RST_N) begin
 000599 			CMD_WE <= 0;
 000599 			CLT_WE <= 0;
 000599 			GRD_WE <= 0;
 000599 			SYS_CLIP <= CLIP_NULL;
 000599 			USR_CLIP <= CLIP_NULL;
 000599 			LOC_COORD <= COORD_NULL;
 8799083 		end else begin
 8799083 			CMD_DAT <= VRAM_Q;
 8799083 			CMD_POS <= VRAM_READ_POS;
 8799083 			CMD_WE <= (VRAM_ST == VS_CMD_READ && VRAM_RDY);
 8349560 			if (CMD_WE) begin
 449523 				case (CMD_POS)
 028109 					4'h0: CMD.CMDCTRL <= CMD_DAT;
 028107 					4'h1: CMD.CMDLINK <= CMD_DAT;
 028103 					4'h2: CMD.CMDPMOD <= CMD_DAT;
 028102 					4'h3: CMD.CMDCOLR <= CMD_DAT;
 028102 					4'h4: CMD.CMDSRCA <= CMD_DAT;
        //					4'h5: CMD.CMDSIZE <= CMD_DAT;
        //					4'h6: CMD.CMDXA <= CMD_DAT;
        //					4'h7: CMD.CMDYA <= CMD_DAT;
        //					4'h8: CMD.CMDXB <= CMD_DAT;
        //					4'h9: CMD.CMDYB <= CMD_DAT;
        //					4'hA: CMD.CMDXC <= CMD_DAT;
        //					4'hB: CMD.CMDYC <= CMD_DAT;
        //					4'hC: CMD.CMDXD <= CMD_DAT;
        //					4'hD: CMD.CMDYD <= CMD_DAT;
 028087 					4'hE: CMD.CMDGRDA <= CMD_DAT;
        				endcase
        				
        				
 449523 				case (CMD_POS)
 028098 					4'h5: begin
 028098 						ORIG_WIDTH <= {CMD_DAT[13:8],3'b000} | ~|CMD_DAT[13:8];
 028098 						ORIG_HEIGHT <= CMD_DAT[7:0] | ~|CMD_DAT[7:0];
        					end
 028095 					4'h6: begin
 028095 						case (CMD.CMDCTRL.COMM)
 027347 							4'h0: begin
 027347 								TEMP = CMD_DAT[12:0] + ORIG_WIDTH - 13'd1;
 027347 								VERTA.X <= CMD_DAT[12:0];
 027347 								VERTB.X <= TEMP;
 027347 								VERTC.X <= TEMP;
 027347 								VERTD.X <= CMD_DAT[12:0];
        							end
 000064 							4'h1: begin
 000064 								VERTA.X <= CMD_DAT[12:0];
 000064 								VERTB.X <= CMD_DAT[12:0];
 000064 								VERTC.X <= CMD_DAT[12:0];
 000064 								VERTD.X <= CMD_DAT[12:0];
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000390 							4'h6: begin
 000390 								VERTA.X <= CMD_DAT[12:0];
        							end
        							4'h8,
 000078 							4'hB: begin	
 000078 								USR_CLIP.X1 <= {1'b0,CMD_DAT[9:0]}; 
        							end
 000095 							4'h9: begin	
        							end
 000116 							4'hA: begin	
 000116 								LOC_COORD.X <= CMD_DAT[11:0]; 
        							end
        						endcase
        					end
 028092 					4'h7: begin
 028092 						case (CMD.CMDCTRL.COMM)
 027345 							4'h0: begin
 027345 								TEMP = CMD_DAT[12:0] + ORIG_HEIGHT - 13'd1;
 027345 								VERTA.Y <= CMD_DAT[12:0];
 027345 								VERTB.Y <= CMD_DAT[12:0];
 027345 								VERTC.Y <= TEMP;
 027345 								VERTD.Y <= TEMP;
        							end
 000064 							4'h1: begin
 000064 								VERTA.Y <= CMD_DAT[12:0];
 000064 								VERTB.Y <= CMD_DAT[12:0];
 000064 								VERTC.Y <= CMD_DAT[12:0];
 000064 								VERTD.Y <= CMD_DAT[12:0];
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTA.Y <= CMD_DAT[12:0];
        							end
        							4'h8,
 000078 							4'hB: begin	
 000078 								USR_CLIP.Y1 <= {1'b0,CMD_DAT[9:0]}; 
        							end
 000095 							4'h9: begin	
        							end
 000116 							4'hA: begin	
 000116 								LOC_COORD.Y <= CMD_DAT[11:0];
        							end
        						endcase
        					end
 028092 					4'h8: begin
 028092 						case (CMD.CMDCTRL.COMM)
 000064 							4'h1: begin
 000064 								case (CMD.CMDCTRL.ZP[1:0])
 000010 									2'b00: begin 
        									end
 000013 									2'b01: begin 
 000013 										VERTB.X <= VERTA.X + CMD_DAT[12:0];
 000013 										VERTC.X <= VERTA.X + CMD_DAT[12:0];
        									end
 000015 									2'b10: begin 
 000015 										VERTA.X <= VERTA.X - SDiv2(CMD_DAT[12:0]);
 000015 										VERTB.X <= VERTA.X + SDiv2(CMD_DAT[12:0] + 13'd1);
 000015 										VERTC.X <= VERTA.X + SDiv2(CMD_DAT[12:0] + 13'd1);
 000015 										VERTD.X <= VERTA.X - SDiv2(CMD_DAT[12:0]);
        									end
 000026 									2'b11: begin 
 000026 										VERTA.X <= VERTA.X - CMD_DAT[12:0];
 000026 										VERTD.X <= VERTA.X - CMD_DAT[12:0];
        									end
        								endcase
        							end							
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTB.X <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 028091 					4'h9: begin
 028091 						case (CMD.CMDCTRL.COMM)
 000064 							4'h1: begin
 000064 								case (CMD.CMDCTRL.ZP[3:2])
 000014 									2'b00: begin 
        									end
 000016 									2'b01: begin 
 000016 										VERTC.Y <= VERTA.Y + CMD_DAT[12:0];
 000016 										VERTD.Y <= VERTA.Y + CMD_DAT[12:0];
        									end
 000019 									2'b10: begin 
 000019 										VERTA.Y <= VERTA.Y - SDiv2(CMD_DAT[12:0]);
 000019 										VERTB.Y <= VERTA.Y - SDiv2(CMD_DAT[12:0]);
 000019 										VERTC.Y <= VERTA.Y + SDiv2(CMD_DAT[12:0] + 13'd1);
 000019 										VERTD.Y <= VERTA.Y + SDiv2(CMD_DAT[12:0] + 13'd1);
        									end
 000015 									2'b11: begin 
 000015 										VERTA.Y <= VERTA.Y - CMD_DAT[12:0];
 000015 										VERTB.Y <= VERTA.Y - CMD_DAT[12:0];
        									end
        								endcase
        							end							
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTB.Y <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 028091 					4'hA: begin
 028091 						case (CMD.CMDCTRL.COMM) 
 000064 							4'h1: begin
 000064 								case (CMD.CMDCTRL.ZP[1:0])
 000010 									2'b00: begin 
 000010 										VERTB.X <= CMD_DAT[12:0];
 000010 										VERTC.X <= CMD_DAT[12:0];
        									end
 000013 									2'b01: begin 
        									end
 000015 									2'b10: begin 
        									end
 000026 									2'b11: begin 
        									end
        								endcase
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTC.X <= CMD_DAT[12:0];
        							end
        							4'h8,
 000078 							4'hB: begin	
 000078 								USR_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
        							end
 000095 							4'h9: begin	
 000095 								SYS_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
 000095 								USR_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
        							end
        						endcase
        					end
 028091 					4'hB: begin
 028091 						case (CMD.CMDCTRL.COMM) 
 000064 							4'h1: begin
 000064 								case (CMD.CMDCTRL.ZP[3:2])
 000014 									2'b00: begin 
 000014 										VERTC.Y <= CMD_DAT[12:0];
 000014 										VERTD.Y <= CMD_DAT[12:0];
        									end
 000016 									2'b01: begin 
        									end
 000019 									2'b10: begin 
        									end
 000015 									2'b11: begin 
        									end
        								endcase
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTC.Y <= CMD_DAT[12:0];
        							end
        							4'h8,
 000078 							4'hB: begin	
 000078 								USR_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
        							end
 000095 							4'h9: begin	
 000095 								SYS_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
 000095 								USR_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
        							end
        						endcase
        					end
 028089 					4'hC: begin
 028089 						case (CMD.CMDCTRL.COMM) 
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTD.X <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 028088 					4'hD: begin
 028088 						case (CMD.CMDCTRL.COMM) 
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000389 							4'h6: begin
 000389 								VERTD.Y <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 028087 					4'hE: begin
        					end
        				endcase
        			end
        			
 8799083 			CLT_WE <= (VRAM_ST == VS_CLT_READ) && VRAM_RDY;
        			
 8799083 			GRD_WE <= (VRAM_ST == VS_GRD_READ) && VRAM_RDY;
 8798184 			if (GRD_WE) begin
 000899 				GRD_TBL[CMD_POS[1:0]] <= CMD_DAT;
        			end
        		end
        	end
        	assign CMD_READ_DONE = (VRAM_ST == VS_CMD_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd15);
        	
 010957 	wire [ 3: 0] CLT_RA = DRAW_PAT.C[3:0];
        	REF_VDP1_COL_TBL CLT(.CLK(CLK), .WRADDR(CMD_POS), .DATA(CMD_DAT), .WREN(CLT_WE), .RDADDR(CLT_RA), .Q(CLT_Q));
        	assign CLT_READ_DONE = (VRAM_ST == VS_CLT_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd15);
        	
        	assign GRD_READ_DONE = (VRAM_ST == VS_GRD_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd3);
        
        	//Registers
 005852 	wire REG_REQ = (A[20:19] == 2'b10) & ~AD_N & ~CS_N & ~REQ_N;
        	
        	assign MODR = {4'h1,3'b000,PTMR.PTM[1],FBCR.EOS,FBCR.DIE,FBCR.DIL,FBCR.FCM,TVMR.VBE,TVMR.TVM};
        	
 002533 	bit        VBOUT;
 8799682 	always @(posedge CLK or negedge RST_N) begin
 8799682 		bit        VTIM_N_OLD;
 8799682 		bit        FRAME_CHANGE;
 8799682 		bit        MANUAL_ERASECHANGE_PEND;
 8799682 		bit        START_DRAW_PEND;
 8799682 		bit        VBERASE_PEND;
        		
 000599 		if (!RST_N) begin
 000599 			TVMR <= '0;
 000599 			FBCR <= '0;
 000599 			PTMR <= '0;
 000599 			EWDR <= 16'h0000;
 000599 			EWLR <= 16'h0000;
 000599 			EWRR <= 16'h0000;
 000599 			EDSR <= '0;
 000599 			IRQ_N <= 1;
        			
 000599 			MANUAL_ERASECHANGE_PEND <= 0;
 000599 			FRAME_ERASE <= 0;
 000599 			VBLANK_ERASE <= 0;
 000599 			DRAW_TERMINATE <= 0;
 000599 			VBERASE_PEND <= 0;
~8799083 		end else if (!RES_N) begin
%000000 			TVMR <= '0;
%000000 			FBCR <= '0;
%000000 			PTMR <= '0;
%000000 			EDSR <= '0;
 8799083 		end else begin
 8799083 			START_DRAW_PEND <= 0;
 8799083 			DRAW_TERMINATE <= 0;
 8798671 			if (REG_REQ && !WE_N && !DTEN_N) begin
 000412 				case ({A[5:1],1'b0})
 000060 					5'h00: TVMR <= DI & TVMR_MASK;
 000112 					5'h02: FBCR <= DI & FBCR_MASK;
 000060 					5'h04: PTMR <= DI & PTMR_MASK;
 000060 					5'h06: EWDR <= DI & EWDR_MASK;
 000060 					5'h08: EWLR <= DI & EWLR_MASK;
 000060 					5'h0A: EWRR <= DI & EWRR_MASK;
%000000 					default:;
        				endcase
 000334 				if (A[5:1] == 5'h02>>1 && DI[1]) MANUAL_ERASECHANGE_PEND <= 1;
 000364 				if (A[5:1] == 5'h04>>1 && DI[1:0] == 2'b01) begin 
 000048 					START_DRAW_PEND <= 1; 
        `ifdef DEBUG
        					START_DRAW_CNT <= START_DRAW_CNT + 8'd1; 
        `endif
        				end
~000412 				if (A[5:1] == 5'h0C>>1 && DI[1]) DRAW_TERMINATE <= 1;
        			end
        			
 8799009 			if (DRAW_END) begin
 000074 				EDSR.CEF <= 1;
        			end
 4399547 			if (CE_R) begin
 4399536 				IRQ_N <= ~EDSR.CEF;
        			end
        
 8799083 			FRAME_START <= 0;
 8799035 			if (START_DRAW_PEND) begin
 000048 				FRAME_START <= 1;
 000048 				EDSR.CEF <= 0;
 000048 				DIE <= FBCR.DIE;
 000048 				DIL <= FBCR.DIL;
        			end
 8796550 			if (FRAME_CHANGE) begin
 002533 				FRAME_ERASE <= 0;
        `ifdef DEBUG
        				FRAMES_DBG <= FRAMES_DBG + 8'd1;
        `endif
 001587 				if (!FBCR.FCM) begin
 001587 					FB_SEL <= ~FB_SEL;
 001587 					FRAME_ERASE <= ~TVMR.TVM[1];
 001587 					VBERASE_PEND <= TVMR.TVM[1];
 001587 					EDSR.CEF <= 0;
 001587 					EDSR.BEF <= EDSR.CEF;
 001587 					LOPR <= COPR;
 001587 					DIE <= FBCR.DIE;
 001587 					DIL <= FBCR.DIL;
 001490 					if (PTMR.PTM[1]) begin
 000097 						FRAME_START <= 1;
        					end
 001587 					MANUAL_ERASECHANGE_PEND <= 0;
        `ifdef DEBUG
        					FRAMES_DBG <= 8'd0;
        `endif
 000038 				end else if (MANUAL_ERASECHANGE_PEND && FBCR.FCT) begin
 000038 					FB_SEL <= ~FB_SEL;
 000038 					EDSR.CEF <= 0;
 000038 					EDSR.BEF <= EDSR.CEF;
 000038 					LOPR <= COPR;
 000038 					DIE <= FBCR.DIE;
 000038 					DIL <= FBCR.DIL;
~000038 					if (PTMR.PTM[1]) begin
%000000 						FRAME_START <= 1;
        					end
 000038 					MANUAL_ERASECHANGE_PEND <= 0;
        `ifdef DEBUG
        					FRAMES_DBG <= 8'd0;
        `endif
 000894 				end else if (MANUAL_ERASECHANGE_PEND && !FBCR.FCT) begin
 000014 					FRAME_ERASE <= ~TVMR.TVM[1];
 000014 					VBERASE_PEND <= TVMR.TVM[1];
 000014 					MANUAL_ERASECHANGE_PEND <= 0;
        				end;
        			end
        			
 8799083 			FRAME_CHANGE <= 0;
 6769787 			if (DCE_R) begin
 2029296 				VTIM_N_OLD <= VTIM_N;
        				
 2026763 				if (VTIM_N && !VTIM_N_OLD) begin
 002533 					VBOUT <= 1;
        				end
 2026763 				if (VTIM_N && HTIM_PIPE[11:10] == 2'b10 && VBOUT) begin
 002533 					VBOUT <= 0;
 002533 					FRAME_CHANGE <= 1;
        				end
        				
 2026764 				if (!VTIM_N && VTIM_N_OLD) begin
 002048 					if (TVMR.VBE) begin
 000484 						VBLANK_ERASE <= 1;
        					end
 001458 					if (VBERASE_PEND) begin
 001074 						VBLANK_ERASE <= 1;
        					end
 002532 					VBERASE_PEND <= 0;
        				end
 2026763 				if (VTIM_N && !VTIM_N_OLD) begin
 002533 					VBLANK_ERASE <= 0;
 002533 					FRAME_ODD <= ~FRAME_ODD;
        				end
        			end
        		end
        	end
        	
~003639 	bit  [15: 0] REG_DO;
 8799683 	always_comb begin
 8799683 		case ({A[5:1],1'b0})
 566577 			5'h10: REG_DO <= EDSR & EDSR_MASK;
 537071 			5'h12: REG_DO <= LOPR & LOPR_MASK;
 566558 			5'h14: REG_DO <= COPR & COPR_MASK;
 781214 			5'h16: REG_DO <= MODR & MODR_MASK;
 6348263 			default: REG_DO <= '0;
        		endcase
        	end
 9721612 	assign DO = REG_SEL ? REG_DO : FBRAM_SEL ? FB_DRAW_Q : MEM_DO;
        	assign RDY_N = ~CPU_VRAM_RRDY | ~CPU_VRAM_WRDY | ~CPU_FB_RRDY | ~CPU_FB_WRDY | ~READY;
        	
        endmodule
        
        
        module REF_VDP1_PAT_FIFO #(parameter l = 1) (
 8799623 	input	         CLK,
 031950 	input          RST,
        	
 019590 	input	 [15: 0] DATA,
 392699 	input	         WRREQ,
 193864 	input	         RDREQ,
 017954 	output [15: 0] Q,
 113255 	output	      EMPTY,
 068947 	output	      FULL
        );
        
 016482 	wire [15: 0] sub_wire0;
 083323 	bit  [l-1: 0] RADDR;
 111872 	bit  [l-1: 0] WADDR;
 181825 	bit  [l: 0] AMOUNT;
 031943 	bit         NULL;
 8799623 	always @(posedge CLK) begin
 6352451 		if (RST) begin
 6352451 			AMOUNT <= '0;
 6352451 			RADDR <= '0;
 6352451 			WADDR <= '0;
 6352451 			NULL <= 1;
        		end
 2447172 		else begin
 2251842 			if (WRREQ && !AMOUNT[l]) begin
 195330 				WADDR <= WADDR + 1'd1;
 195330 				NULL <= 0;
        			end
 2283438 			if (RDREQ && AMOUNT) begin
 163734 				RADDR <= RADDR + 1'd1;
        			end
        			
 182201 			if (WRREQ && !RDREQ && !AMOUNT[l]) begin
 182201 				AMOUNT <= AMOUNT + 1'd1;
 2114366 			end else if (!WRREQ && RDREQ && AMOUNT) begin
 150605 				AMOUNT <= AMOUNT - 1'd1;
        			end
        		end
        	end
        	assign EMPTY = ~|AMOUNT;
        	assign FULL = AMOUNT[l];
        	
        	altdpram	altdpram_component (
        				.data (DATA),
        				.inclock (CLK),
        				.rdaddress (RADDR),
        				.wraddress (WADDR),
        				.wren (WRREQ),
        				.q (sub_wire0),
        				.aclr (1'b0),
        				.byteena (1'b1),
        				.inclocken (1'b1),
        				.rdaddressstall (1'b0),
        				.rden (1'b1),
        //				.sclr (1'b0),
        				.wraddressstall (1'b0));
        	defparam
        		altdpram_component.indata_aclr = "OFF",
        		altdpram_component.indata_reg = "INCLOCK",
        		altdpram_component.intended_device_family = "Cyclone V",
        		altdpram_component.lpm_type = "altdpram",
        		altdpram_component.outdata_aclr = "OFF",
        		altdpram_component.outdata_reg = "UNREGISTERED",
        		altdpram_component.ram_block_type = "MLAB",
        		altdpram_component.rdaddress_aclr = "OFF",
        		altdpram_component.rdaddress_reg = "UNREGISTERED",
        		altdpram_component.rdcontrol_aclr = "OFF",
        		altdpram_component.rdcontrol_reg = "UNREGISTERED",
        		altdpram_component.read_during_write_mode_mixed_ports = "CONSTRAINED_DONT_CARE",
        		altdpram_component.width = 16,
        		altdpram_component.widthad = l,
        		altdpram_component.width_byteena = 1,
        		altdpram_component.wraddress_aclr = "OFF",
        		altdpram_component.wraddress_reg = "INCLOCK",
        		altdpram_component.wrcontrol_aclr = "OFF",
        		altdpram_component.wrcontrol_reg = "INCLOCK";
        		
 6694916 	assign Q = NULL ? '0 : sub_wire0;
        
        endmodule
        
        module REF_VDP1_COL_TBL (
 8799623 	input         CLK,
 225749 	input	  [3:0] WRADDR,
 014044 	input	 [15:0] DATA,
 001072 	input	        WREN,
 010957 	input	  [3:0] RDADDR,
 009320 	output [15:0] Q
        );
        
 009320 	wire [15:0] sub_wire0;
        
        	altdpram	altdpram0 (
        				.data (DATA),
        				.inclock (CLK),
        				.rdaddress (RDADDR[3:0]),
        				.wraddress (WRADDR[3:0]),
        				.wren (WREN),
        				.q (sub_wire0),
        				.aclr (1'b0),
        				.byteena (1'b1),
        				.inclocken (1'b1),
        				.rdaddressstall (1'b0),
        				.rden (1'b1),
        				//.sclr (1'b0),
        				.wraddressstall (1'b0));
        	defparam
        		altdpram0.indata_aclr = "OFF",
        		altdpram0.indata_reg = "INCLOCK",
        		altdpram0.intended_device_family = "Cyclone V",
        		altdpram0.lpm_type = "altdpram",
        		altdpram0.outdata_aclr = "OFF",
        		altdpram0.outdata_reg = "UNREGISTERED",
        		altdpram0.ram_block_type = "MLAB",
        		altdpram0.rdaddress_aclr = "OFF",
        		altdpram0.rdaddress_reg = "UNREGISTERED",
        		altdpram0.rdcontrol_aclr = "OFF",
        		altdpram0.rdcontrol_reg = "UNREGISTERED",
        		altdpram0.read_during_write_mode_mixed_ports = "CONSTRAINED_DONT_CARE",
        		altdpram0.width = 16,
        		altdpram0.widthad = 4,
        		altdpram0.width_byteena = 1,
        		altdpram0.wraddress_aclr = "OFF",
        		altdpram0.wraddress_reg = "INCLOCK",
        		altdpram0.wrcontrol_aclr = "OFF",
        		altdpram0.wrcontrol_reg = "INCLOCK";
        
        	assign Q =  sub_wire0;
        
        endmodule
        
        module REF_VDP1_DIV_24_12 
        (
 26398869 	input         CLK,
~056784 	input	 [16:0] DVDNT,
~005379 	input	 [11:0] DVSR,
 273435 	input	        START,
 374941 	output [16:0] QUOT,
 273438 	output reg    DONE
        );
        	
 630287 	bit  [28: 0] D;
 628901 	bit          T;	
 21971744 	wire [28: 0] SUM = T ? $signed(D) - $unsigned({DVSR,17'h00000}) : $signed(D) + $unsigned({DVSR,17'h00000});
 26398869 	always @(posedge CLK) begin
 26398869 		bit  [ 4: 0] STEP;
        	
 273435 		if (START) begin
 273435 			D <= {12'h000,DVDNT};
 273435 			T <= ~(1'b0^DVSR[11]);
 273435 			STEP <= '0;
 273435 			DONE <= 0;
        		end
 21203550 		else if (!DONE) begin
 4921884 			D <= {SUM[27:0],~(SUM[28]^DVSR[11])};
 4921884 			T <= ~(SUM[28]^DVSR[11]);
 4921884 			STEP <= STEP + 5'd1;
 4648446 			if (STEP == 5'd17) DONE <= 1;
        		end
        	end
        	assign QUOT = D[16:0];
        
        endmodule
        
        
