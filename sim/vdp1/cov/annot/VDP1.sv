//      // verilator_coverage annotation
        module VDP1 (
 15286165 	input              CLK,
 000120 	input              RST_N,
 7643129 	input              CE_R,
 7643129 	input              CE_F,
%000001 	input              EN,
        	
 000012 	input              RES_N,
        
 047291 	input      [15: 0] DI,
 021265 	output     [15: 0] DO,
 043560 	input              CS_N,
 043560 	input              AD_N,
 019463 	input              DTEN_N,
 058392 	input              REQ_N,
 063952 	output             RDY_N,
        	
 000087 	output             IRQ_N,
        	
 3498974 	input              DCE_R,
 3499058 	input              DCE_F,
 069938 	input              HTIM_N,
 004433 	input              VTIM_N,
 3823234 	input      [15: 0] VOUTI,
 354241 	output     [15: 0] VOUTO,
        	
 485647 	output reg [18: 1] VRAM_A,
 005167 	output reg [15: 0] VRAM_D,
 032791 	input      [15: 0] VRAM_Q,
 020348 	output reg [ 1: 0] VRAM_WE,
 1162398 	output reg         VRAM_RD,
~005214 	output reg [ 8: 0] VRAM_BLEN,
 1182747 	input              VRAM_RDY,
        	
 858855 	output     [17: 1] FB0_A,
 016540 	output     [15: 0] FB0_D,
 212735 	input      [15: 0] FB0_Q,
 911732 	output     [ 1: 0] FB0_WE,
 110413 	output             FB0_RD,
        	
 890961 	output     [17: 1] FB1_A,
 009994 	output     [15: 0] FB1_D,
 212164 	input      [15: 0] FB1_Q,
 771785 	output     [ 1: 0] FB1_WE,
 076705 	output             FB1_RD,
 388512 	input              FB_RDY,
 000022 	output             FB_MODE3,
        	
 000027 	input              FAST,
 000023 	input              BLUR_MESH,
        	
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
        	import VDP1_PKG::*;
        	
~000047 	TVMR_t       TVMR;
~000108 	FBCR_t       FBCR;
~000091 	PTMR_t       PTMR;
 000041 	EWDR_t       EWDR;
~000063 	EWLR_t       EWLR;
~000077 	EWRR_t       EWRR;
~000086 	EDSR_t       EDSR;
~000535 	LOPR_t       LOPR;
~027129 	COPR_t       COPR;
~000062 	MODR_t       MODR;
 000032 	bit          DIE,DIL;
        
 000302 	bit          FRAME_START;
 000069 	bit          FRAME_ERASE;
 002292 	bit          VBLANK_ERASE;
 001445 	bit          FRAME_ERASE_EN;
 002292 	bit          VBLANK_ERASE_EN;
%000000 	bit          OUT_EN;
 000015 	bit          DRAW_TERMINATE;
 000086 	bit          DRAW_END;
 002184 	bit          FRAME_ODD;
        	
 028666 	bit  [15: 0] CLT_Q;
        	
        	//Frame buffers
 001153 	bit          FB_SEL;
 099220 	bit  [17: 1] FB_A;
 024539 	bit  [15: 0] FB_D;
 247314 	bit  [ 1: 0] FB_WE;
 187112 	bit          FB_RD;
 081946 	bit  [15: 0] FB_DRAW_Q;
 483495 	bit          FB_DRAW_WAIT;
 1345963 	bit  [17: 1] FB_DISP_A;
%000000 	bit          FB_DISP_WE;
 348045 	bit  [15: 0] FB_DISP_Q;
 1837264 	bit  [17: 1] FB_ERASE_A;
        //	bit          FRAME;
 1436203 	wire         FB_ERASE_WE = (FRAME_ERASE_EN & DCE_R) | (VBLANK_ERASE_EN & CE_R);
 12537731 	wire [17: 1] FB_OUT_A = VBLANK_ERASE_EN ? FB_ERASE_A : FB_DISP_A;
        	
 8090893 	assign FB0_A  = FB_SEL ? FB_A             : FB_OUT_A;
 8090893 	assign FB1_A  = FB_SEL ? FB_OUT_A         : FB_A;
 8017725 	assign FB0_D  = FB_SEL ? FB_D             : EWDR;
 8017725 	assign FB1_D  = FB_SEL ? EWDR             : FB_D;
 16035439 	assign FB0_WE = FB_SEL ? FB_WE /*& CE_R*/ : {2{FB_ERASE_WE}};
 16035439 	assign FB1_WE = FB_SEL ? {2{FB_ERASE_WE}} : FB_WE /*& CE_R*/;
 8017725 	assign FB0_RD = FB_SEL ? FB_RD            : 1'b0;
 8017725 	assign FB1_RD = FB_SEL ? 1'b0             : FB_RD;
        	
 8976749 	assign FB_DRAW_Q = FB_SEL ? FB0_Q : FB1_Q;
 8976749 	assign FB_DISP_Q = FB_SEL ? FB1_Q : FB0_Q;
        	
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
~512664 	CMDState_t CMD_ST;
~027191 	bit  [18: 5] CMD_ADDR_H;   // command tables are 16-word aligned: address bits [4:1] are always 0
~027191 	wire [18: 1] CMD_ADDR = {CMD_ADDR_H,4'b0000};
 054441 	bit          CMD_READ;
 108822 	bit          CMD_READ_DONE;
~003252 	bit  [18: 1] SPR_ADDR;
 062770 	bit          SPR_READ;
 055381 	bit  [15: 0] SPR_DATA;
 131317 	bit          SPR_DATA_READY;
 000098 	bit          CLT_READ;
 000196 	bit          CLT_READ_DONE;
 000411 	bit          GRD_READ;
 000822 	bit          GRD_READ_DONE;
 000112 	bit  [15: 0] GRD_TBL[4];
        	
~000688 	CMDTBL_t     CMD;
~000075 	Clip_t       SYS_CLIP;
~000102 	Clip_t       USR_CLIP;
 000051 	Coord_t      LOC_COORD;
 000315 	Vertex_t     VERTA,VERTB,VERTC,VERTD;
 055381 	Pattern_t    PAT;
~130460 	bit  [ 8: 0] TEXT_X;
~004579 	bit  [ 7: 0] TEXT_Y;
~002774 	bit  [16: 3] SPR_OFFSY;
~000116 	bit  [11: 0] POLY_LSX;
~000183 	bit  [11: 0] POLY_LSY;
~000116 	bit  [11: 0] POLY_RSX;
~000168 	bit  [11: 0] POLY_RSY;
 000095 	bit          POLY_LDIRX;
%000001 	bit          POLY_LDIRY;
 000102 	bit          POLY_RDIRX;
 000033 	bit          POLY_RDIRY;
 000174 	bit  [ 1: 0] POLY_S;
        	
 314255 	Coord_t      LINE_VERTA;
 010449 	Coord_t      LINE_VERTB;
 011144 	Vertex_t     LEFT_VERT;
 010531 	Vertex_t     RIGHT_VERT;
%000000 	Vertex_t     BOTTOM_VERT;
 000293 	bit          LINE_DIRX;
 000292 	bit          LINE_DIRY;
 000107 	bit          LINE_CLIP;
 000297 	bit          LINE_S;
~003685 	bit  [11: 0] ROW_WIDTH;
~000179 	bit  [11: 0] COL_HEIGHT,LEFT_HEIGHT,RIGHT_HEIGHT;
%000000 	bit          COL_DIRY;
%000000 	bit          SPR_COL_ENLARGE;
 005878 	bit          EC_FIND;
 159939 	bit  [11: 0] AA_X;
 072133 	bit  [11: 0] AA_Y;
 068500 	bit          AA;
 000448 	bit  [11: 0] AA_X_INC;
 000448 	bit  [11: 0] AA_Y_INC;
~000161 	bit  [ 1: 0] DIR;
 000023 	bit          HSS_EN;
 752109 	bit          DRAW_WAIT;
 674949 	bit          DRAW_ENABLE;
        	
 145463 	bit          LINE_DRAW_STEP;
 068502 	bit          LINE_AA_STEP;
 080048 	bit          COL_DRAW_STEP;
 138582 	bit          TEXT_X_READ_STEP;
~008145 	bit          TEXTY_READ_STEP, TEXT_Y_READ_STEP;
 021993 	bit          LEFT_COL_X_STEP, LEFT_COL_Y_STEP;
 020792 	bit          RIGHT_COL_X_STEP,RIGHT_COL_Y_STEP;
 1734696 	bit  [ 4: 0] GRD_CALC_STATE;
        	
~000395 	bit  [ 8: 0] ORIG_WIDTH;
 000378 	bit  [ 7: 0] ORIG_HEIGHT;
 000549 	wire         TEXT_DIRX = (CMD.CMDCTRL.DIR[0] ^ DIR[0]);
 000352 	wire         TEXT_DIRY = (CMD.CMDCTRL.DIR[1] ^ DIR[1]);
 011004 	wire         IS_PAT_EC = (CMD.CMDCTRL.COMM <= 4'h3 && !CMD.CMDPMOD.ECD && PAT.EC && !HSS_EN);
        	
 066448 	bit  [12: 0] COL_D;
~080074 	bit  [13: 0] NEXT_LEFT_COL_ERROR_X, NEXT_LEFT_COL_ERROR_Y, LEFT_COL_ERROR_X, LEFT_COL_ERROR_Y;
~080074 	bit  [13: 0] NEXT_RIGHT_COL_ERROR_X, NEXT_RIGHT_COL_ERROR_Y, RIGHT_COL_ERROR_X, RIGHT_COL_ERROR_Y;
~080074 	bit  [13: 0] NEXT_LEFT_D_ERROR, LEFT_D_ERROR;
~080074 	bit  [13: 0] NEXT_RIGHT_D_ERROR, RIGHT_D_ERROR;
        	// The edge-step increments and adjusts are fixed per command and equal to (twice) the edge extents captured in
        	// POLY_*S?, LEFT/RIGHT_HEIGHT and COL_HEIGHT, which are written only by the edge setup states; they are not stored again.
~000116 	wire [13: 0] LEFT_COL_ERROR_X_INC  = {1'b0,POLY_LSX,1'b0};
~000183 	wire [13: 0] LEFT_COL_ERROR_Y_INC  = {1'b0,POLY_LSY,1'b0};
~000116 	wire [13: 0] RIGHT_COL_ERROR_X_INC = {1'b0,POLY_RSX,1'b0};
~000168 	wire [13: 0] RIGHT_COL_ERROR_Y_INC = {1'b0,POLY_RSY,1'b0};
~000179 	wire [13: 0] LEFT_D_ERROR_INC      = {1'b0,LEFT_HEIGHT,1'b0};
~000171 	wire [13: 0] RIGHT_D_ERROR_INC     = {1'b0,RIGHT_HEIGHT,1'b0};
~000158 	wire [13: 0] LEFT_COL_ERROR_ADJ    = -{1'b0,LEFT_HEIGHT,1'b0};
~000169 	wire [13: 0] RIGHT_COL_ERROR_ADJ   = -{1'b0,RIGHT_HEIGHT,1'b0};
~000168 	wire [13: 0] COL_D_ERROR_ADJ       = -{1'b0,COL_HEIGHT,1'b0};
~000102 	bit          LEFT_D_ERROR_CMP, RIGHT_D_ERROR_CMP, LEFT_COL_ERROR_X_CMP, LEFT_COL_ERROR_Y_CMP, RIGHT_COL_ERROR_X_CMP, RIGHT_COL_ERROR_Y_CMP;
        					 
~123277 	bit  [13: 0] NEXT_LINE_ERROR, LINE_ERROR, LINE_ERROR_INC, LINE_ERROR_ADJ;
        	// Texture error set-up shared by the scaled-sprite and line row set-up states.
        	// W = texture width, R = row width in pixels; HSS half-size mode only applies below the texture width.
 000547 	wire        TX_F    = TEXT_DIRX && ORIG_WIDTH != 9'd1;
 000098 	wire        TX_HSS  = ROW_WIDTH < {3'b000,ORIG_WIDTH} && CMD.CMDPMOD.HSS && !CMD.CMDCTRL.COMM[2];
~15025237 	wire [ 8: 0] TX_X   = TX_HSS ? {1'b0,ORIG_WIDTH[8:1]} : ORIG_WIDTH;
 000443 	wire        TX_SMALL = ROW_WIDTH < {3'b000,TX_X};
~003685 	wire [13: 0] TX_R2  = {1'b0,ROW_WIDTH,1'b0};
~003685 	wire [13: 0] TX_RM1 = {2'b00,ROW_WIDTH} - 14'd1;
 15025237 	wire [ 8: 0] TX_XM1 = TX_HSS ? {1'b0,ORIG_WIDTH[8:1] - 8'd1} : ORIG_WIDTH - 9'd1;
~13785685 	wire [13: 0] TX_INC = TX_SMALL ? (TX_HSS ? {5'b00000,ORIG_WIDTH} : {4'b0000,ORIG_WIDTH,1'b0}) : {4'b0000,TX_XM1,1'b0};
~13785685 	wire [13: 0] TX_ADJ = TX_SMALL ? TX_R2 : {TX_RM1[12:0],1'b0};
 13785685 	wire [13: 0] TX_ERR = TX_SMALL ? {5'b00000,TX_X} - TX_R2 - {13'd0,TX_F} : {13'd0,TX_F} - {2'b00,ROW_WIDTH};
        
        	// Row texture error set-up (polygon set-up state): H = rows in the polygon, OH = texture height.
~000169 	wire [13: 0] TY_H1    = {2'b00,COL_HEIGHT} + 14'd1;
 000357 	wire        TY_F     = TEXT_DIRY && ORIG_HEIGHT != 8'd1;
 000292 	wire        TY_SMALL = TY_H1 <= {6'b000000,ORIG_HEIGHT - 8'd1};
~14365494 	wire [13: 0] TY_INC   = TY_SMALL ? {5'b00000,ORIG_HEIGHT,1'b0} : {5'b00000,ORIG_HEIGHT - 8'd1,1'b0};
~14365494 	wire [13: 0] TY_ADJ   = TY_SMALL ? {TY_H1[12:0],1'b0} : {1'b0,COL_HEIGHT,1'b0};
 14365494 	wire [13: 0] TY_ERR   = TY_SMALL ? {6'b000000,ORIG_HEIGHT} - {TY_H1[12:0],1'b0} - {13'd0,TY_F} : {13'd0,TY_F} - TY_H1;
        
 215041 	bit  [13: 0] NEXT_TEXT_ERROR, TEXT_ERROR;
        	// Increment and adjust of the row texture error follow from the row/texture sizes, which stay fixed while a row is drawn.
~000627 	wire [13: 0] TEXT_ERROR_INC = TX_INC;
~003852 	wire [13: 0] TEXT_ERROR_ADJ = TX_ADJ;
 064815 	bit  [13: 0] NEXT_TEXT_Y_ERROR, TEXT_Y_ERROR;
~000484 	wire [13: 0] TEXT_Y_ERROR_INC = TY_INC;
~000337 	wire [13: 0] TEXT_Y_ERROR_ADJ = TY_ADJ;
 15286285 	always_comb begin
 15286285 		bit COL_STEP;
 15286285 		bit  [13: 0] TEXT_ERROR_ADJUSTED,LINE_ERROR_ICREMENTED;
 15286285 		bit  [13: 0] TEXT_Y_ERROR_ADJUSTED;
 15286285 		bit  [13: 0] LEFT_D_ERROR_ICREMENTED,LEFT_COL_ERROR_X_ICREMENTED,LEFT_COL_ERROR_Y_ICREMENTED;
 15286285 		bit  [13: 0] RIGHT_D_ERROR_ICREMENTED,RIGHT_COL_ERROR_X_ICREMENTED,RIGHT_COL_ERROR_Y_ICREMENTED;
        		
 15286285 		LINE_DRAW_STEP = 0;
 15286285 		LINE_AA_STEP = 0;
 15286285 		COL_DRAW_STEP = 0;
 15286285 		TEXT_X_READ_STEP = 0;
 15286285 		TEXT_Y_READ_STEP = 0;
 15286285 		{LEFT_COL_X_STEP,LEFT_COL_Y_STEP} = '0;
 15286285 		{RIGHT_COL_X_STEP,RIGHT_COL_Y_STEP} = '0;
        		
        		
 15286285 		NEXT_TEXT_ERROR = '0;
 15286285 		NEXT_LINE_ERROR = '0;
 15286285 		NEXT_TEXT_Y_ERROR = '0;
 15286285 		NEXT_LEFT_D_ERROR = '0;
 15286285 		NEXT_LEFT_COL_ERROR_X = '0;
 15286285 		NEXT_LEFT_COL_ERROR_Y = '0;
 15286285 		NEXT_RIGHT_D_ERROR = '0;
 15286285 		NEXT_RIGHT_COL_ERROR_X = '0;
 15286285 		NEXT_RIGHT_COL_ERROR_Y = '0;
 15286285 		case (CMD_ST) 
 358385 			CMDS_NSPR_DRAW: begin		
 358385 				LINE_DRAW_STEP = 1;		
 358385 				TEXT_X_READ_STEP = 1;
        			end
        			
        			CMDS_PRE_DRAW,
        			CMDS_SSPR_DRAW,
 2587855 			CMDS_LINE_DRAW: begin
 1763410 				if (CMD.CMDCTRL.COMM >= 4'h4) begin
 824445 					LINE_DRAW_STEP = 1;
 824445 					TEXT_X_READ_STEP = 0;
 1763410 				end else begin
 1763410 					TEXT_ERROR_ADJUSTED = $signed(TEXT_ERROR) - (TEXT_ERROR[13] ? 14'sd0 : $signed(TEXT_ERROR_ADJ));
 1763410 					LINE_DRAW_STEP = TEXT_ERROR_ADJUSTED[13];
 1763410 					NEXT_TEXT_ERROR = $signed(TEXT_ERROR_ADJUSTED) + (LINE_DRAW_STEP ? $signed(TEXT_ERROR_INC) : 14'sd0);
        					
 1177380 					if (!NEXT_TEXT_ERROR[13]) begin
 586030 						TEXT_X_READ_STEP = 1;
        					end
        				end
        					
 1588376 				if (LINE_DRAW_STEP && CMD_ST == CMDS_LINE_DRAW) begin
 1588376 					LINE_ERROR_ICREMENTED = LINE_ERROR + LINE_ERROR_INC;
 1588376 					LINE_AA_STEP = $signed(LINE_ERROR_ICREMENTED) >= 14'sd1;
 1588376 					NEXT_LINE_ERROR = LINE_ERROR_ICREMENTED + (LINE_AA_STEP ? LINE_ERROR_ADJ : 14'd0);
        				end
        			end
        			
        			CMDS_AA_DRAW,
 305980 			CMDS_LINE_END: begin
 305980 				LINE_DRAW_STEP = AA;
        			end
        			
 080795 			CMDS_ROW_DRAW: begin
 074025 				if (CMD.CMDCTRL.COMM >= 4'h4) begin
 006770 					COL_DRAW_STEP = 1;
 074025 				end else begin
 074025 					TEXT_Y_ERROR_ADJUSTED = $signed(TEXT_Y_ERROR) - (TEXT_Y_ERROR[13] ? 14'sd0 : $signed(TEXT_Y_ERROR_ADJ));
 074025 					COL_DRAW_STEP = TEXT_Y_ERROR_ADJUSTED[13];
 074025 					NEXT_TEXT_Y_ERROR = $signed(TEXT_Y_ERROR_ADJUSTED) + (COL_DRAW_STEP ? $signed(TEXT_Y_ERROR_INC) : 14'sd0);
 074025 					TEXT_Y_READ_STEP = !TEXT_Y_ERROR[13];
        				end
        			end
        			
 080074 			CMDS_LINE_NEXT: begin
        				// Error accumulators: add the increment, subtract the extent when the compare hits (operand gating, one adder).
 080074 				LEFT_D_ERROR_ICREMENTED = LEFT_D_ERROR + LEFT_D_ERROR_INC;
 057932 				if ($signed(LEFT_D_ERROR_ICREMENTED) >= $signed({14{LEFT_D_ERROR_CMP}})) begin
 022142 					NEXT_LEFT_D_ERROR = LEFT_D_ERROR_ICREMENTED + COL_D_ERROR_ADJ;
        					
 022142 					LEFT_COL_ERROR_X_ICREMENTED = LEFT_COL_ERROR_X + LEFT_COL_ERROR_X_INC;
 022142 					LEFT_COL_X_STEP = $signed(LEFT_COL_ERROR_X_ICREMENTED) >= $signed({14{LEFT_COL_ERROR_X_CMP}});
 022142 					NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X_ICREMENTED + (LEFT_COL_X_STEP ? LEFT_COL_ERROR_ADJ : 14'd0);
        					
 022142 					LEFT_COL_ERROR_Y_ICREMENTED = LEFT_COL_ERROR_Y + LEFT_COL_ERROR_Y_INC;
 022142 					LEFT_COL_Y_STEP = $signed(LEFT_COL_ERROR_Y_ICREMENTED) >= $signed({14{LEFT_COL_ERROR_Y_CMP}});
 022142 					NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y_ICREMENTED + (LEFT_COL_Y_STEP ? LEFT_COL_ERROR_ADJ : 14'd0);
 057932 				end else begin
 057932 					NEXT_LEFT_D_ERROR = LEFT_D_ERROR_ICREMENTED;
 057932 					NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X;
 057932 					NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y;
        				end
        				
 080074 				RIGHT_D_ERROR_ICREMENTED = RIGHT_D_ERROR + RIGHT_D_ERROR_INC;
 056474 				if ($signed(RIGHT_D_ERROR_ICREMENTED) >= $signed({14{RIGHT_D_ERROR_CMP}})) begin
 023600 					NEXT_RIGHT_D_ERROR = RIGHT_D_ERROR_ICREMENTED + COL_D_ERROR_ADJ;
        					
 023600 					RIGHT_COL_ERROR_X_ICREMENTED = RIGHT_COL_ERROR_X + RIGHT_COL_ERROR_X_INC;
 023600 					RIGHT_COL_X_STEP = $signed(RIGHT_COL_ERROR_X_ICREMENTED) >= $signed({14{RIGHT_COL_ERROR_X_CMP}});
 023600 					NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X_ICREMENTED + (RIGHT_COL_X_STEP ? RIGHT_COL_ERROR_ADJ : 14'd0);
        					
 023600 					RIGHT_COL_ERROR_Y_ICREMENTED = RIGHT_COL_ERROR_Y + RIGHT_COL_ERROR_Y_INC;
 023600 					RIGHT_COL_Y_STEP = $signed(RIGHT_COL_ERROR_Y_ICREMENTED) >= $signed({14{RIGHT_COL_ERROR_Y_CMP}});
 023600 					NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y_ICREMENTED + (RIGHT_COL_Y_STEP ? RIGHT_COL_ERROR_ADJ : 14'd0);
 056474 				end else begin
 056474 					NEXT_RIGHT_D_ERROR = RIGHT_D_ERROR_ICREMENTED;
 056474 					NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X;
 056474 					NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y;
        				end
        			end
        
 11873196 			default:;
        		endcase
        	end
        	
        
 261907 	wire         DIV_R_QB,DIV_G_QB,DIV_B_QB,DIV_RUN;
 173493 	wire DIV_START = (CMD_ST == CMDS_GRD_CALC_LEFT || CMD_ST == CMDS_GRD_CALC_RIGHT || CMD_ST == CMDS_GRD_CALC_LINE) && GRD_CALC_STATE == 0;
        	
 067720 	RGB_t        GRD_CALC_1,GRD_CALC_2;
~007258 	wire [11: 0] GRD_CALC_S;
 15286285 	always_comb begin
 15286285 		case (CMD_ST)
 1125105 			CMDS_GRD_CALC_LEFT:  begin GRD_CALC_1 = GHCOLOR_A; GRD_CALC_2 = GHCOLOR_D; end
 1124862 			CMDS_GRD_CALC_RIGHT: begin GRD_CALC_1 = GHCOLOR_B; GRD_CALC_2 = GHCOLOR_C; end
 13036318 			default:             begin GRD_CALC_1 = RGBFtoI(LEFT_GHCOLOR); GRD_CALC_2 = RGBFtoI(RIGHT_GHCOLOR); end
        		endcase
        	end
 13893392 	assign GRD_CALC_S = CMD_ST == CMDS_GRD_CALC_LINE ? ROW_WIDTH : COL_HEIGHT + 12'd1;
 9517850 	wire [ 5: 0] DIV_A_R = GRD_CALC_2.R >= GRD_CALC_1.R ? {1'b0,GRD_CALC_2.R - GRD_CALC_1.R} : {1'b1,GRD_CALC_1.R - GRD_CALC_2.R};
 9503647 	wire [ 5: 0] DIV_A_G = GRD_CALC_2.G >= GRD_CALC_1.G ? {1'b0,GRD_CALC_2.G - GRD_CALC_1.G} : {1'b1,GRD_CALC_1.G - GRD_CALC_2.G};
 9505931 	wire [ 5: 0] DIV_A_B = GRD_CALC_2.B >= GRD_CALC_1.B ? {1'b0,GRD_CALC_2.B - GRD_CALC_1.B} : {1'b1,GRD_CALC_1.B - GRD_CALC_2.B};
        					
        	// The dividers hold their quotient from step 18 until the next START and GRD_CALC_1/2 do not change while a
        	// calculation runs, so the step is read straight from the dividers when it is stored (state 20).
        	
        	VDP1_DIV_STEP GRD_DIV_R(CLK, DIV_A_R[4:0], GRD_CALC_S, DIV_START, DIV_R_QB, DIV_RUN);
        	VDP1_DIV_STEP GRD_DIV_G(CLK, DIV_A_G[4:0], GRD_CALC_S, DIV_START, DIV_G_QB, );
        	VDP1_DIV_STEP GRD_DIV_B(CLK, DIV_A_B[4:0], GRD_CALC_S, DIV_START, DIV_B_QB, );
        	
 000112 	RGB_t        GHCOLOR_A,GHCOLOR_B,GHCOLOR_C,GHCOLOR_D;
        	assign {GHCOLOR_A,GHCOLOR_B,GHCOLOR_C,GHCOLOR_D} = {GRD_TBL[0][14:0],GRD_TBL[1][14:0],GRD_TBL[2][14:0],GRD_TBL[3][14:0]};
~150148 	RGBFP_t      LEFT_GHCOLOR,RIGHT_GHCOLOR,LINE_GHCOLOR;
        	// Gouraud steps: the quotient bits are shifted into the step registers of the running phase while the dividers
        	// iterate (see GRD_STEP_SHIFT); the direction bits are stored when the phase ends.
 112380 	RGBFP_t      LEFT_GHCOLOR_STEP,RIGHT_GHCOLOR_STEP,LINE_GHCOLOR_STEP;
 112380 	bit  [16: 0] LS_Q_R,LS_Q_G,LS_Q_B,RS_Q_R,RS_Q_G,RS_Q_B,NS_Q_R,NS_Q_G,NS_Q_B;
 000252 	bit  [ 2: 0] LS_DIR,RS_DIR,NS_DIR;
        	assign LEFT_GHCOLOR_STEP  = {{LS_DIR[2],LS_Q_B},{LS_DIR[1],LS_Q_G},{LS_DIR[0],LS_Q_R}};
        	assign RIGHT_GHCOLOR_STEP = {{RS_DIR[2],RS_Q_B},{RS_DIR[1],RS_Q_G},{RS_DIR[0],RS_Q_R}};
        	assign LINE_GHCOLOR_STEP  = {{NS_DIR[2],NS_Q_B},{NS_DIR[1],NS_Q_G},{NS_DIR[0],NS_Q_R}};
        	
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
        	// Clip window in command-local coordinates. Purely combinational: the inputs only change while a command
        	// table is being loaded, at least a dozen clocks before any drawing state reads the result.
 000295 	wire        CLIP_USR = CMD.CMDPMOD.CLIP && !CMD.CMDPMOD.CMOD;
 000049 	wire [12: 0] LOC_X13 = {LOC_COORD.X[10],LOC_COORD.X};
 000051 	wire [12: 0] LOC_Y13 = {LOC_COORD.Y[10],LOC_COORD.Y};
 000157 	wire [12: 0] SYS_CLIP_X1 = (CLIP_USR ? {{2{USR_CLIP.X1[10]}},USR_CLIP.X1} : 13'd0) - LOC_X13;
 000142 	wire [12: 0] SYS_CLIP_Y1 = (CLIP_USR ? {{2{USR_CLIP.Y1[10]}},USR_CLIP.Y1} : 13'd0) - LOC_Y13;
~000163 	wire [12: 0] SYS_CLIP_X2 = (CLIP_USR ? {{2{USR_CLIP.X2[10]}},USR_CLIP.X2} : {{2{SYS_CLIP.X2[10]}},SYS_CLIP.X2}) - LOC_X13;
~000156 	wire [12: 0] SYS_CLIP_Y2 = (CLIP_USR ? {{2{USR_CLIP.Y2[10]}},USR_CLIP.Y2} : {{2{SYS_CLIP.Y2[10]}},SYS_CLIP.Y2}) - LOC_Y13;
~317851 	bit  [ 8: 0] CMD_DELAY;
~002292 	bit  [ 9: 0] PENALTY_CNT;
 15286284 	always @(posedge CLK or negedge RST_N) begin
        //	   bit         FRAME_START_PEND;
 15286284 		bit [18: 5] NEXT_ADDR_H;
 15286284 		bit [18: 5] CMD_RET_ADDR_H;
 15286284 		bit         CMD_SUB_RUN;
 15286284 		bit [12: 0] NEW_LINE_SX;
 15286284 		bit [12: 0] NEW_LINE_SY;
 15286284 		bit [11: 0] NEW_LINE_ASX;
 15286284 		bit [11: 0] NEW_LINE_ASY;
 15286284 		bit [12: 0] NEW_POLY_LSX;
 15286284 		bit [12: 0] NEW_POLY_LSY;
 15286284 		bit [12: 0] NEW_POLY_RSX;
 15286284 		bit [12: 0] NEW_POLY_RSY;
 15286284 		bit         LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR;
 15286284 		bit         AA_DRAW;
 15286284 		bit         LINE_SWAP;
 15286284 		bit         CLP_EN,CLP_C1,CLP_C2,CLP_C3,CLP_C4,CLP_C5,CLP_C6;
 15286284 		bit         LN_Y_MAJOR;
 15286284 		bit [11: 0] LN_MAJ,LN_MIN;
 15286284 		bit [16: 3] SPR_OFFSY_NEXT;
 15286284 		bit         CLIP_H;
 15286284 		bit [12: 0] LINE_DIFF_LEFT_CLIPX1,LINE_DIFF_LEFT_CLIPX2,LINE_DIFF_RIGHT_CLIPX1,LINE_DIFF_RIGHT_CLIPX2;
 15286284 		bit         LINE_EQ_LEFT_CLIPX1,LINE_EQ_LEFT_CLIPX2,LINE_EQ_RIGHT_CLIPX1,LINE_EQ_RIGHT_CLIPX2;
 15286284 		bit         LINE_GT_LEFT_CLIPX1,LINE_GT_LEFT_CLIPX2,LINE_GT_RIGHT_CLIPX1,LINE_GT_RIGHT_CLIPX2;
 15286284 		bit         LINE_LT_LEFT_CLIPX1,LINE_LT_LEFT_CLIPX2,LINE_LT_RIGHT_CLIPX1,LINE_LT_RIGHT_CLIPX2;
 15286284 		bit         LINE_LEFT_OVER,LINE_RIGHT_OVER,LINE_TOP_OVER,LINE_BOTTOM_OVER;
 15286284 		bit [ 3: 0] CLIP_DELAY;
        `ifdef DEBUG
        		bit [ 7: 0] DBG_EXT_OLD;
        `endif
        		
 001199 		if (!RST_N) begin
 001199 			CMD_ST <= CMDS_IDLE;
 001199 			CMD_ADDR_H <= '0;
 001199 			CMD_READ <= 0;
 001199 			SPR_READ <= 0;
 001199 			CLT_READ <= 0;
 001199 			GRD_READ <= 0;
 001199 			CMD_SUB_RUN <= 0;
        			
        `ifdef DEBUG
        			CMD_SKIP <= '1;
        			
        			{CMD_SKIP_EN,CMD_PIX_EN,DBG_DRAW_EN} <= '0;
        `endif
 000302 		end else if (FRAME_START) begin
 000302 			CMD_ADDR_H <= '0;
 000302 			CMD_READ <= 1;
 000302 			SPR_READ <= 0;
 000302 			CLT_READ <= 0;
 000302 			GRD_READ <= 0;
 000302 			CMD_SUB_RUN <= 0;
 000302 			CMD_ST <= CMDS_READ;
 000015 		end else if (DRAW_TERMINATE) begin
 000015 			CMD_READ <= 0;
 000015 			SPR_READ <= 0;
 000015 			CLT_READ <= 0;
 000015 			GRD_READ <= 0;
 000015 			CMD_ST <= CMDS_IDLE;
~15284768 		end else if (EN) begin
 15284768 			SPR_OFFSY_NEXT = SPR_OFFSY + ({14{TEXT_DIRY}} ^ {8'd0,ORIG_WIDTH[8:3]}) + {13'd0,TEXT_DIRY};
        			
 15284768 			LINE_DIFF_LEFT_CLIPX1 = $signed(LEFT_VERT.X) - $signed(SYS_CLIP_X1);
 15284768 			LINE_DIFF_LEFT_CLIPX2 = $signed(LEFT_VERT.X) - $signed(SYS_CLIP_X2);
 15284768 			LINE_DIFF_RIGHT_CLIPX1 = $signed(RIGHT_VERT.X) - $signed(SYS_CLIP_X1);
 15284768 			LINE_DIFF_RIGHT_CLIPX2 = $signed(RIGHT_VERT.X) - $signed(SYS_CLIP_X2);
 15284768 			LINE_EQ_LEFT_CLIPX1 = !LINE_DIFF_LEFT_CLIPX1;
 15284768 			LINE_EQ_LEFT_CLIPX2 = !LINE_DIFF_LEFT_CLIPX2;
 15284768 			LINE_EQ_RIGHT_CLIPX1 = !LINE_DIFF_RIGHT_CLIPX1;
 15284768 			LINE_EQ_RIGHT_CLIPX2 = !LINE_DIFF_RIGHT_CLIPX2;
 15284768 			LINE_GT_LEFT_CLIPX1 = ~LINE_DIFF_LEFT_CLIPX1[12];
 15284768 			LINE_GT_LEFT_CLIPX2 = ~LINE_DIFF_LEFT_CLIPX2[12];
 15284768 			LINE_GT_RIGHT_CLIPX1 = ~LINE_DIFF_RIGHT_CLIPX1[12];
 15284768 			LINE_GT_RIGHT_CLIPX2 = ~LINE_DIFF_RIGHT_CLIPX2[12];
 15284768 			LINE_LT_LEFT_CLIPX1 = LINE_DIFF_LEFT_CLIPX1[12];
 15284768 			LINE_LT_LEFT_CLIPX2 = LINE_DIFF_LEFT_CLIPX2[12];
 15284768 			LINE_LT_RIGHT_CLIPX1 = LINE_DIFF_RIGHT_CLIPX1[12];
 15284768 			LINE_LT_RIGHT_CLIPX2 = LINE_DIFF_RIGHT_CLIPX2[12];
        																							  
 15284768 			LINE_LEFT_OVER <= ($signed(LEFT_VERT.X) < $signed(SYS_CLIP_X1) && $signed(RIGHT_VERT.X) < $signed(SYS_CLIP_X1));
 15284768 			LINE_RIGHT_OVER <= ($signed(LEFT_VERT.X) > $signed(SYS_CLIP_X2) && $signed(RIGHT_VERT.X) > $signed(SYS_CLIP_X2));
 15284768 			LINE_TOP_OVER <= ($signed(LEFT_VERT.Y) < $signed(SYS_CLIP_Y1) && $signed(RIGHT_VERT.Y) < $signed(SYS_CLIP_Y1));
 15284768 			LINE_BOTTOM_OVER <= ($signed(LEFT_VERT.Y) > $signed(SYS_CLIP_Y2) && $signed(RIGHT_VERT.Y) > $signed(SYS_CLIP_Y2));
        			
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
        			
 11641960 			if (CMD_ST == CMDS_GRD_CALC_LEFT || CMD_ST == CMDS_GRD_CALC_RIGHT || CMD_ST == CMDS_GRD_CALC_LINE) begin
 3642808 				GRD_CALC_STATE <= GRD_CALC_STATE + 5'd1;
        			end
        									
 7642465 			if (CE_R) DRAW_END <= 0;
 14603913 			if (FBD_ST == FBDS_WRITE) DRAW_ENABLE <= 0;
 15284768 			case (CMD_ST) 
 1463780 				CMDS_IDLE: begin
        `ifdef DEBUG
        					CMD_CURR <= '0;
        `endif
        				end
        					
 5088382 				CMDS_READ: begin
        `ifdef DEBUG
        					DBG_CMD_WAIT_CNT <= DBG_CMD_WAIT_CNT + 1'd1;
        `endif
 5088382 					CMD_READ <= 0;
        					
 5033974 					if (CMD_READ_DONE) begin
        `ifdef DEBUG
        						CMD_CURR <= CMD_CURR + 1'd1;
        						DBG_SKIP <= (CMD_CURR == CMD_SKIP);
        `endif
 054266 						if (!CMD.CMDCTRL.JP[2] && !CMD.CMDCTRL.END 
        `ifdef DEBUG
        						    && (CMD_CURR != CMD_SKIP || !CMD_SKIP_EN)
        `endif
 054266 						                                             ) begin
 054266 							case (CMD.CMDCTRL.COMM) 
 053112 								4'h0: begin	//normal sprite
 053031 									if (CMD.CMDPMOD.CCB[2]) begin
 000081 										GRD_READ <= 1;
 000081 										CMD_DELAY <= 8'd10;
 000081 										CMD_ST <= CMDS_GRD_LOAD;
 053031 									end else begin
 053031 										CMD_DELAY <= 8'd23;
 053031 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        							
 000169 								4'h1: begin	//scaled sprite
 000088 									if (CMD.CMDPMOD.CCB[2]) begin
 000088 										GRD_READ <= 1;
 000088 										CMD_DELAY <= 8'd10;
 000088 										CMD_ST <= CMDS_GRD_LOAD;
 000081 									end else begin
 000081 										CMD_DELAY <= 8'd23;
 000081 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
        								4'h2,
 000174 								4'h3: begin	//distored sprite
 000096 									if (CMD.CMDPMOD.CCB[2]) begin
 000096 										GRD_READ <= 1;
 000096 										CMD_DELAY <= 8'd10;
 000096 										CMD_ST <= CMDS_GRD_LOAD;
 000078 									end else begin
 000078 										CMD_DELAY <= 8'd23;
 000078 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
        								4'h4,			//polygon
        								4'h5,
 000226 								4'h7: begin	//polyline
 000115 									if (CMD.CMDPMOD.CCB[2]) begin
 000115 										GRD_READ <= 1;
 000115 										CMD_DELAY <= 8'd0;
 000115 										CMD_ST <= CMDS_GRD_LOAD;
 000111 									end else begin
 000111 										CMD_DELAY <= 8'd0;
 000111 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
 000082 								4'h6: begin	//line
 000051 									if (CMD.CMDPMOD.CCB[2]) begin
 000031 										GRD_READ <= 1;
 000031 										CMD_DELAY <= 8'd0;
 000031 										CMD_ST <= CMDS_GRD_LOAD;
 000051 									end else begin
 000051 										CMD_DELAY <= 8'd0;
 000051 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        							
        								4'h8,
        								4'hB,
        								4'h9,
        								4'hA,
 000503 								4'hB: begin	
 000503 									CMD_DELAY <= 8'd0;
 000503 									CMD_ST <= CMDS_EXEC;
        								end
        							
%000000 								default: begin	
%000000 									CMD_READ <= 1;
%000000 									CMD_ST <= CMDS_READ;
        								end
        							endcase
        						end
 000142 						else begin
 000142 							CMD_ST <= CMDS_END;
        						end
        						
 054408 						COPR <= CMD_ADDR[18:3];
        `ifdef DEBUG
        						DBG_CMD_WAIT_CNT <= '0;
        						DBG_CMD_ADDR_ERR <= (CMD_ADDR > 18'h09000);
        `endif
        					end
        				end
        				
 009046 				CMDS_GRD_LOAD: begin
 009046 					GRD_READ <= 0;
 008635 					if (GRD_READ_DONE) begin 
 000411 						CMD_ST <= CMDS_EXEC;
        					end
        				end
        				
 054265 				CMDS_EXEC: begin
 054265 						case (CMD.CMDCTRL.COMM)
        							4'h0,			//normal sprite
        							4'h1,			//scaled sprite
        							4'h2,
 053454 							4'h3: begin	//distored sprite
 053356 								if (CMD.CMDPMOD.CM == 3'b001) begin
 000098 									CLT_READ <= 1;
 000098 									CMD_ST <= CMDS_CLT_LOAD;
 053356 								end else begin
 035799 									if (PENALTY_CNT > CMDS_DELAY) CMD_DELAY <= '0;
 053356 									CMD_ST <= CMDS_DELAY;
        								end
        							end
        							
 000139 							4'h4: begin	//polygon
 000139 								CMD_ST <= CMDS_DELAY;
        							end
        							
        							4'h5,
 000087 							4'h7: begin	//polyline
 000087 								CMD_ST <= CMDS_DELAY;
        							end
        							
 000082 							4'h6: begin	//line
 000082 								CMD_ST <= CMDS_DELAY;
        							end
        							
        							4'h8,
 000097 							4'hB: begin	
 000097 								CMD_ST <= CMDS_END;
        							end
        							
 000201 							4'h9: begin	
 000201 								CMD_ST <= CMDS_END;
        							end
        							
 000205 							4'hA: begin	
 000205 								CMD_ST <= CMDS_END;
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
        				
 008771 				CMDS_CLT_LOAD: begin
 008771 					CLT_READ <= 0;
 008673 					if (CLT_READ_DONE) begin
 000098 						CMD_ST <= CMDS_DELAY;
        					end
        				end
        				
 893758 				CMDS_DELAY: if (CE_R) begin
 456542 					CMD_DELAY <= CMD_DELAY - 1'd1;
 402788 					if (!CMD_DELAY) begin
 053754 						case (CMD.CMDCTRL.COMM) 
 053106 							4'h0: CMD_ST <= CMDS_EDGE_INIT;
 000166 							4'h1: CMD_ST <= CMDS_EDGE_INIT;
        							4'h2,
 000174 							4'h3: CMD_ST <= CMDS_EDGE_INIT;
 000139 							4'h4: CMD_ST <= CMDS_EDGE_INIT;							
        							4'h5,
 000087 							4'h7: CMD_ST <= CMDS_LINE_INIT;							
 000082 							4'h6: CMD_ST <= CMDS_LINE_INIT;
        						endcase
 053754 						CMD_DELAY <= 9'd8;
        					end
        				end
        				
 053585 				CMDS_EDGE_INIT: begin
 053585 					LEFT_VERT <= VERTA;
 053585 					RIGHT_VERT <= VERTB;
 053585 					NEW_POLY_LSX = VERTD.X - VERTA.X;
 053585 					NEW_POLY_LSY = VERTD.Y - VERTA.Y;
 053585 					NEW_POLY_RSX = VERTC.X - VERTB.X;
 053585 					NEW_POLY_RSY = VERTC.Y - VERTB.Y;
        					
 053585 					POLY_LSX <= Abs(NEW_POLY_LSX);
 053585 					POLY_LSY <= Abs(NEW_POLY_LSY);
 053585 					POLY_RSX <= Abs(NEW_POLY_RSX);
 053585 					POLY_RSY <= Abs(NEW_POLY_RSY);
 053585 					POLY_LDIRX <= NEW_POLY_LSX[12];
 053585 					POLY_LDIRY <= NEW_POLY_LSY[12];
 053585 					POLY_RDIRX <= NEW_POLY_RSX[12];
 053585 					POLY_RDIRY <= NEW_POLY_RSY[12];
        					
 053585 					DIR <= '0;
        					
 053585 					CLIP_H <= 0;
 053296 					if (($signed(VERTA.X) < $signed(SYS_CLIP_X1) && $signed(VERTD.X) < $signed(SYS_CLIP_X1)) ||
        					    ($signed(VERTB.X) < $signed(SYS_CLIP_X1) && $signed(VERTC.X) < $signed(SYS_CLIP_X1)) ||
        						 ($signed(VERTA.X) > $signed(SYS_CLIP_X2) && $signed(VERTD.X) > $signed(SYS_CLIP_X2)) ||
 000289 						 ($signed(VERTB.X) > $signed(SYS_CLIP_X2) && $signed(VERTC.X) > $signed(SYS_CLIP_X2))) begin
 000289 						CLIP_H <= ~CMD.CMDPMOD.PCLP;
        					end
        							
 053585 					CMD_ST <= CMDS_POLYGON_CALCE;
        				end
        				
 000169 				CMDS_LINE_INIT: begin
 000169 					LEFT_VERT <= VERTA;
 000169 					RIGHT_VERT <= VERTB;
 000169 					POLY_S <= 2'b00;
 000169 					TEXT_X <= '0;
 000169 					LEFT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 000169 					RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_B);
 000169 					CMD_ST <= CMDS_LINE_CALC;
        				end
        				
 053585 				CMDS_POLYGON_CALCE: begin
 052977 					if (POLY_LSX >= POLY_LSY) begin
 052977 						LEFT_HEIGHT <= POLY_LSX;
 000608 					end else begin
 000608 						LEFT_HEIGHT <= POLY_LSY;
        					end
 053033 					if (POLY_RSX >= POLY_RSY) begin
 053033 						RIGHT_HEIGHT <= POLY_RSX;
 000552 					end else begin
 000552 						RIGHT_HEIGHT <= POLY_RSY;
        					end
        					
 053585 					CMD_ST <= CMDS_POLYGON_CALCH;
        				end
        				
 053585 				CMDS_POLYGON_CALCH: begin
 053414 					if (LEFT_HEIGHT >= RIGHT_HEIGHT) begin
 053414 						COL_HEIGHT <= LEFT_HEIGHT;
 000171 					end else begin
 000171 						COL_HEIGHT <= RIGHT_HEIGHT;
        					end
        					
 053585 					CMD_ST <= CMDS_POLYGON_CALCTY;
        				end
        				
 053583 				CMDS_POLYGON_CALCTY: begin
 053583 					TEXT_Y_ERROR <= TY_ERR;
        					
 053583 					LEFT_COL_ERROR_X <= ~LEFT_HEIGHT;
 053583 					LEFT_COL_ERROR_Y <= ~LEFT_HEIGHT;
 053583 					LEFT_COL_ERROR_X_CMP <= POLY_LDIRY;
 053583 					LEFT_COL_ERROR_Y_CMP <= POLY_LDIRX;
        					
 053583 					LEFT_D_ERROR <= ~COL_HEIGHT;
 053583 					LEFT_D_ERROR_CMP <= POLY_LSY > POLY_LSX ? POLY_LDIRY : POLY_LDIRX;
        					
 053583 					RIGHT_COL_ERROR_X <= ~RIGHT_HEIGHT;
 053583 					RIGHT_COL_ERROR_Y <= ~RIGHT_HEIGHT;
 053583 					RIGHT_COL_ERROR_X_CMP <= POLY_RDIRY;
 053583 					RIGHT_COL_ERROR_Y_CMP <= POLY_RDIRX;
        					
 053583 					RIGHT_D_ERROR <= ~COL_HEIGHT;
 053583 					RIGHT_D_ERROR_CMP <= POLY_RSY > POLY_RSX ? POLY_RDIRY : POLY_RDIRX;
        					
 053583 					COL_D <= COL_HEIGHT;
        					
 053583 					SPR_OFFSY <= TEXT_DIRY ? (ORIG_HEIGHT - 8'd1) * ORIG_WIDTH[8:3] : '0;
 053583 					TEXT_Y <= '0;
 053583 					TEXT_X <= '0;
        					
 053583 					CMD_ST <= CMDS_GRD_CALC_COL;
        				end
        				
 053583 				CMDS_GRD_CALC_COL: begin
 053583 					LEFT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 053583 					RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_B);
        					
 053583 					GRD_CALC_STATE <= '0;
 053583 					CMD_ST <= CMDS_GRD_CALC_LEFT;
        				end
        				
 1125093 				CMDS_GRD_CALC_LEFT: begin
 1071522 					if (GRD_CALC_STATE == 5'd20) begin
 053571 						GRD_CALC_STATE <= '0;
 053571 						LS_DIR <= {DIV_A_B[5],DIV_A_G[5],DIV_A_R[5]};
        						
 053571 						CMD_ST <= CMDS_GRD_CALC_RIGHT;
        					end
        				end
        				
 1124851 				CMDS_GRD_CALC_RIGHT: begin
 1071291 					if (GRD_CALC_STATE == 5'd20) begin
 053560 						GRD_CALC_STATE <= '0;
 053560 						RS_DIR <= {DIV_A_B[5],DIV_A_G[5],DIV_A_R[5]};
 053560 						CMD_ST <= CMDS_ROW_DRAW;
        					end
        				end
        				
 080794 				CMDS_ROW_DRAW: begin
 071902 					if (TEXT_Y_READ_STEP) begin
 008892 						TEXT_Y <= TEXT_Y + 8'd1;
 008892 						SPR_OFFSY <= SPR_OFFSY_NEXT;
        					end
        					
 080047 					if (COL_DRAW_STEP) begin
 080047 						case (CMD.CMDCTRL.COMM) 
 056348 							4'h0: CMD_ST <= CMDS_NSPR_CALCX;
 009189 							4'h1: CMD_ST <= CMDS_SSPR_CALCX;
 014510 							default: CMD_ST <= CMDS_LINE_CALC;
        						endcase
 000747 					end else begin
 000747 						CMD_ST <= CMDS_ROW_DRAW;
        					end
 080794 					TEXT_Y_ERROR <= NEXT_TEXT_Y_ERROR;
        				end
        				
        				// Row set-up for normal/scaled sprites and lines. A normal sprite never clips horizontally here; only lines
        				// have a vertical direction. The line error values are also written for sprites, where they are never read.
        				CMDS_NSPR_CALCX,
        				CMDS_SSPR_CALCX,
 080214 				CMDS_LINE_CALC: begin
 080214 					NEW_LINE_SX = RIGHT_VERT.X - LEFT_VERT.X;
 080214 					NEW_LINE_SY = RIGHT_VERT.Y - LEFT_VERT.Y;
 080214 					NEW_LINE_ASX = Abs(NEW_LINE_SX);
 080214 					NEW_LINE_ASY = Abs(NEW_LINE_SY);
 080214 					CLP_EN = CLIP_H && CMD_ST != CMDS_NSPR_CALCX;
 080214 					CLP_C1 = LINE_LT_LEFT_CLIPX1 && LINE_GT_RIGHT_CLIPX2 && CLP_EN;
 080214 					CLP_C2 = LINE_GT_LEFT_CLIPX2 && LINE_LT_RIGHT_CLIPX1 && CLP_EN;
 080214 					CLP_C3 = LINE_LT_LEFT_CLIPX1 && (LINE_LT_RIGHT_CLIPX2 || LINE_EQ_RIGHT_CLIPX2) && CLP_EN;
 080214 					CLP_C4 = (LINE_LT_LEFT_CLIPX2 || LINE_EQ_LEFT_CLIPX2) && LINE_GT_RIGHT_CLIPX1 && CLP_EN;
 080214 					CLP_C5 = LINE_GT_LEFT_CLIPX2 && (LINE_GT_RIGHT_CLIPX1 || LINE_EQ_RIGHT_CLIPX1) && CLP_EN;
 080214 					CLP_C6 = (LINE_GT_LEFT_CLIPX1 || LINE_EQ_LEFT_CLIPX1) && LINE_GT_RIGHT_CLIPX2 && CLP_EN;
        					// priority order of the original case list
 000396 					if (CLP_C1 || CLP_C2) begin CLP_C3 = 0; CLP_C4 = 0; CLP_C5 = 0; CLP_C6 = 0; end
 003345 					else if (CLP_C3) begin CLP_C4 = 0; CLP_C5 = 0; CLP_C6 = 0; end
 001136 					else if (CLP_C4) begin CLP_C5 = 0; CLP_C6 = 0; end
 070628 					else if (CLP_C5) begin CLP_C6 = 0; end
 079893 					if (CLP_C1) CLP_C2 = 0;
 080214 					LINE_SWAP = CLP_C3 || CLP_C5;
 080214 					LINE_VERTA.X <= LINE_SWAP ? RIGHT_VERT.X[11:0] : LEFT_VERT.X[11:0];
 080214 					LINE_VERTA.Y <= LINE_SWAP ? RIGHT_VERT.Y[11:0] : LEFT_VERT.Y[11:0];
 080214 					LINE_VERTB.X <= CLP_C1 ? SYS_CLIP_X2[11:0] : CLP_C2 ? SYS_CLIP_X1[11:0] : LINE_SWAP ? LEFT_VERT.X[11:0] : RIGHT_VERT.X[11:0];
 080214 					LINE_VERTB.Y <= LINE_SWAP ? LEFT_VERT.Y[11:0] : RIGHT_VERT.Y[11:0];
 080214 					LINE_DIRX <= CMD_ST == CMDS_NSPR_CALCX ? 1'b0 : NEW_LINE_SX[12] ^ LINE_SWAP;
 080214 					LINE_DIRY <= CMD_ST == CMDS_LINE_CALC ? NEW_LINE_SY[12] ^ LINE_SWAP : 1'b0;
 080214 					LINE_CLIP <= CLP_C3 || CLP_C4 || CLP_C5 || CLP_C6;
 080214 					DIR[0] <= LINE_SWAP;
 080214 					EC_FIND <= 0;
 056348 					if (CMD_ST == CMDS_NSPR_CALCX) HSS_EN <= 0;
        					
 080214 					LN_Y_MAJOR = NEW_LINE_ASY > NEW_LINE_ASX;
 080214 					LN_MAJ = LN_Y_MAJOR ? NEW_LINE_ASY : NEW_LINE_ASX;
 080214 					LN_MIN = LN_Y_MAJOR ? NEW_LINE_ASX : NEW_LINE_ASY;
        					// maj/min: the longer axis steps every pixel, the shorter one by error accumulation
 080214 					LINE_ERROR_INC <= {1'b0,LN_MIN,1'b0};
 080214 					LINE_ERROR_ADJ <= -{1'b0,LN_MAJ,1'b0};
 080214 					LINE_ERROR <= -{2'b00,LN_MAJ} - {1'b0,LN_MIN,1'b0};
 080214 					LINE_S <= LN_Y_MAJOR;
 074512 					if (LN_Y_MAJOR) begin
 005702 						AA_X_INC <= (NEW_LINE_SY[12]^LINE_SWAP) ? {12{(NEW_LINE_SX[12]^LINE_SWAP)}} : {{11{1'b0}},~(NEW_LINE_SX[12]^LINE_SWAP)};
 005702 						AA_Y_INC <= (NEW_LINE_SY[12]^LINE_SWAP) ? {{11{1'b0}},(NEW_LINE_SX[12]^LINE_SWAP)} : {12{~(NEW_LINE_SX[12]^LINE_SWAP)}};
 074512 					end else begin
 074512 						AA_X_INC <= (NEW_LINE_SX[12]^LINE_SWAP) ? {{11{1'b0}},~(NEW_LINE_SY[12]^LINE_SWAP)} : {12{(NEW_LINE_SY[12]^LINE_SWAP)}};
 074512 						AA_Y_INC <= (NEW_LINE_SX[12]^LINE_SWAP) ? {{11{1'b0}},~(NEW_LINE_SY[12]^LINE_SWAP)} : {12{(NEW_LINE_SY[12]^LINE_SWAP)}};
        					end
        					
 080214 					ROW_WIDTH <= (CMD_ST == CMDS_LINE_CALC ? LN_MAJ : NEW_LINE_ASX) + 12'd1;
        					
 080214 					CMD_ST <= CMD_ST == CMDS_LINE_CALC ? CMDS_LINE_CALCTX : CMDS_SSPR_CALCTX;
        				end
        				
        				CMDS_SSPR_CALCTX,
 080213 				CMDS_LINE_CALCTX: begin
 080213 					TEXT_ERROR <= TX_ERR;
 080213 					HSS_EN <= TX_HSS;
 065536 					if (CMD_ST == CMDS_LINE_CALCTX) begin
 014677 						EC_FIND <= 0;
 014677 						AA <= 0;
        					end
        
 066342 					if ((LINE_LEFT_OVER || LINE_RIGHT_OVER || LINE_TOP_OVER || LINE_BOTTOM_OVER) && !CMD.CMDPMOD.PCLP) begin
 013871 						CMD_ST <= CMDS_LINE_NEXT;
 066342 					end else begin
 066342 						SPR_READ <= CMD_ST == CMDS_SSPR_CALCTX ? 1'b1 : ~CMD.CMDCTRL.COMM[2];
 066342 						CMD_ST <= CMDS_PRE_DRAW;
        					end
        				end
        				
 066342 				CMDS_PRE_DRAW: begin
 066342 					TEXT_X <= '0;
 063715 					if (!TEXT_ERROR[12]) begin
 001787 						if (TEXT_X_READ_STEP) begin
 001787 							TEXT_X <= (HSS_EN ? 2'd2 : 2'd1);
        						end
 002627 						TEXT_ERROR <= NEXT_TEXT_ERROR;
        					end
 066342 					CMD_ST <= CMDS_GRD_CALC_ROW;
        				end
        				
 066342 				CMDS_GRD_CALC_ROW: begin
 066342 					LINE_GHCOLOR <= DIR[0] ? RIGHT_GHCOLOR : LEFT_GHCOLOR;
 066342 					CMD_ST <= CMDS_GRD_CALC_LINE;
        				end
        				
 1392864 				CMDS_GRD_CALC_LINE: begin
 1326551 					if (GRD_CALC_STATE == 5'd20) begin
 066313 						GRD_CALC_STATE <= '0;
 066313 						NS_DIR <= {DIV_A_B[5],DIV_A_G[5],DIV_A_R[5]};
        						
 066313 						case (CMD.CMDCTRL.COMM) 
 054663 							4'h0: CMD_ST <= CMDS_NSPR_DRAW;
 004102 							4'h1: CMD_ST <= CMDS_SSPR_DRAW;
 007548 							default: CMD_ST <= CMDS_LINE_DRAW;
        						endcase
        					end
        				end
        				
        				CMDS_NSPR_DRAW,
 1203779 				CMDS_SSPR_DRAW: if (!DRAW_WAIT && SPR_DATA_READY) begin
 254857 					DRAW_ENABLE <= LINE_DRAW_STEP;
        					
 131264 					if (TEXT_X_READ_STEP) begin
 131264 						TEXT_X <= TEXT_X + (HSS_EN ? 2'd2 : 2'd1);
 124493 						if (IS_PAT_EC) EC_FIND <= 1;
        					end
 254857 					TEXT_ERROR <= NEXT_TEXT_ERROR;
        					
 246726 					if (LINE_DRAW_STEP) begin
 246726 						LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
        						
 246726 						{LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} <= {LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} + ({LINE_GHCOLOR_STEP.R.INT,LINE_GHCOLOR_STEP.R.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.R.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.R.DIR);
 246726 						{LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} <= {LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} + ({LINE_GHCOLOR_STEP.G.INT,LINE_GHCOLOR_STEP.G.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.G.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.G.DIR);
 246726 						{LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} <= {LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} + ({LINE_GHCOLOR_STEP.B.INT,LINE_GHCOLOR_STEP.B.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.B.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.B.DIR);
        					end
        					  
 196141 					if ((LINE_VERTA.X == LINE_VERTB.X && LINE_DRAW_STEP) || (IS_PAT_EC && EC_FIND && TEXT_X_READ_STEP)) begin
 058716 						SPR_READ <= 0;
 058716 						CMD_ST <= CMDS_LINE_NEXT;
        					end
        				end
        				
 1676016 				CMDS_LINE_DRAW: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 413260 					DRAW_ENABLE <= LINE_DRAW_STEP;
        					
 334139 					if (TEXT_X_READ_STEP) begin
 079121 						TEXT_X <= TEXT_X + (HSS_EN ? 2'd2 : 2'd1);
 074692 						if (IS_PAT_EC) EC_FIND <= 1;
        					end
 413260 					TEXT_ERROR <= NEXT_TEXT_ERROR;
        					
 413260 					{LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR} = '0;
 413260 					AA_DRAW = 0;
 413260 					AA_X <= LINE_VERTA.X + AA_X_INC;
 413260 					AA_Y <= LINE_VERTA.Y + AA_Y_INC;
 396763 					if (LINE_DRAW_STEP) begin
 328263 						if (LINE_AA_STEP) begin
 049198 							if (!LINE_S) begin
 049198 								LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 019302 							end else begin
 019302 								LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
        							end
 068500 							AA <= 1;
 068500 							AA_DRAW = 1;
 328263 						end else begin
 252840 							if (!LINE_S) begin
 252840 								LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 252840 								LINE_VERTA_X_OVR = (LINE_VERTA.X == LINE_VERTB.X) || ($signed(LINE_VERTA.X) < $signed(SYS_CLIP_X1) && LINE_DIRX && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.X) > $signed(SYS_CLIP_X2) && !LINE_DIRX && !CMD.CMDPMOD.PCLP);
 252840 								LINE_VERTA_Y_OVR = ($signed(LINE_VERTA.Y) < $signed(SYS_CLIP_Y1) && LINE_DIRY && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.Y) > $signed(SYS_CLIP_Y2) && !LINE_DIRY && !CMD.CMDPMOD.PCLP);
 075423 							end else begin
 075423 								LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 075423 								LINE_VERTA_X_OVR = ($signed(LINE_VERTA.X) < $signed(SYS_CLIP_X1) && LINE_DIRX && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.X) > $signed(SYS_CLIP_X2) && !LINE_DIRX && !CMD.CMDPMOD.PCLP);
 075423 								LINE_VERTA_Y_OVR = (LINE_VERTA.Y == LINE_VERTB.Y) || ($signed(LINE_VERTA.Y) < $signed(SYS_CLIP_Y1) && LINE_DIRY && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.Y) > $signed(SYS_CLIP_Y2) && !LINE_DIRY && !CMD.CMDPMOD.PCLP);
        							end
        						end
 396763 						LINE_ERROR <= NEXT_LINE_ERROR;
        					
 396763 						{LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} <= {LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} + ({LINE_GHCOLOR_STEP.R.INT,LINE_GHCOLOR_STEP.R.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.R.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.R.DIR);
 396763 						{LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} <= {LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} + ({LINE_GHCOLOR_STEP.G.INT,LINE_GHCOLOR_STEP.G.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.G.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.G.DIR);
 396763 						{LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} <= {LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} + ({LINE_GHCOLOR_STEP.B.INT,LINE_GHCOLOR_STEP.B.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.B.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.B.DIR);
        					end
        
 002112 					if (IS_PAT_EC && EC_FIND && TEXT_X_READ_STEP) begin
 002112 						CMD_ST <= AA_DRAW ? CMDS_LINE_END : CMDS_LINE_NEXT;
 004068 					end else if ((LINE_VERTA_X_OVR || LINE_VERTA_Y_OVR) && LINE_DRAW_STEP) begin
~004068 						CMD_ST <= AA_DRAW ? CMDS_LINE_END : CMDS_LINE_NEXT;
 338959 					end else if (AA_DRAW) begin
 068121 						CMD_ST <= CMDS_AA_DRAW;
        					end
        				end
        				
 304269 				CMDS_AA_DRAW: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 068114 					DRAW_ENABLE <= 1;
 068114 					AA <= 0;
        					
 068114 					{LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR} = '0;
 048975 					if (!LINE_S) begin
 048975 						LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 048975 						LINE_VERTA_X_OVR = (LINE_VERTA.X == LINE_VERTB.X);
 019139 					end else begin
 019139 						LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 019139 						LINE_VERTA_Y_OVR = (LINE_VERTA.Y == LINE_VERTB.Y);
        					end
 066807 					if ((LINE_VERTA_X_OVR || LINE_VERTA_Y_OVR) && LINE_DRAW_STEP) 
 001307 						CMD_ST <= CMDS_LINE_NEXT;
        					else
 066807 						CMD_ST <= CMDS_LINE_DRAW;
        				end
        				
 001704 				CMDS_LINE_END: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 000379 					DRAW_ENABLE <= AA;
 000379 					AA <= 0;
 000379 					CMD_ST <= CMDS_LINE_NEXT;
        				end
        				
 080074 				CMDS_LINE_NEXT: begin
 080074 					SPR_READ <= 0;
 080074 					TEXT_X <= '0;
        					
 079648 					if (CMD.CMDCTRL.COMM == 4'h0 || CMD.CMDCTRL.COMM == 4'h1 || CMD.CMDCTRL.COMM == 4'h2 || CMD.CMDCTRL.COMM == 4'h3 || CMD.CMDCTRL.COMM == 4'h4) begin 
 078376 						if (LEFT_COL_X_STEP) begin
 001272 							LEFT_VERT.X <= LEFT_VERT.X + {{12{POLY_LDIRX}},1'b1};
        						end
 057954 						if (LEFT_COL_Y_STEP) begin
 021694 							LEFT_VERT.Y <= LEFT_VERT.Y + {{12{POLY_LDIRY}},1'b1};
        						end
 074623 						if (RIGHT_COL_X_STEP) begin
 005025 							RIGHT_VERT.X <= RIGHT_VERT.X + {{12{POLY_RDIRX}},1'b1};
        						end
 059152 						if (RIGHT_COL_Y_STEP) begin
 020496 							RIGHT_VERT.Y <= RIGHT_VERT.Y + {{12{POLY_RDIRY}},1'b1};
        						end
        						
 079648 						LEFT_D_ERROR <= NEXT_LEFT_D_ERROR;
 079648 						LEFT_COL_ERROR_X <= NEXT_LEFT_COL_ERROR_X;
 079648 						LEFT_COL_ERROR_Y <= NEXT_LEFT_COL_ERROR_Y;
 079648 						RIGHT_D_ERROR <= NEXT_RIGHT_D_ERROR;
 079648 						RIGHT_COL_ERROR_X <= NEXT_RIGHT_COL_ERROR_X;
 079648 						RIGHT_COL_ERROR_Y <= NEXT_RIGHT_COL_ERROR_Y;
        						
 079648 						{LEFT_GHCOLOR.R.INT, LEFT_GHCOLOR.R.FRAC } <= {LEFT_GHCOLOR.R.INT, LEFT_GHCOLOR.R.FRAC } + ({LEFT_GHCOLOR_STEP.R.INT, LEFT_GHCOLOR_STEP.R.FRAC }^{17{LEFT_GHCOLOR_STEP.R.DIR }}) + LEFT_GHCOLOR_STEP.R.DIR;
 079648 						{LEFT_GHCOLOR.G.INT, LEFT_GHCOLOR.G.FRAC } <= {LEFT_GHCOLOR.G.INT, LEFT_GHCOLOR.G.FRAC } + ({LEFT_GHCOLOR_STEP.G.INT, LEFT_GHCOLOR_STEP.G.FRAC }^{17{LEFT_GHCOLOR_STEP.G.DIR }}) + LEFT_GHCOLOR_STEP.G.DIR;
 079648 						{LEFT_GHCOLOR.B.INT, LEFT_GHCOLOR.B.FRAC } <= {LEFT_GHCOLOR.B.INT, LEFT_GHCOLOR.B.FRAC } + ({LEFT_GHCOLOR_STEP.B.INT, LEFT_GHCOLOR_STEP.B.FRAC }^{17{LEFT_GHCOLOR_STEP.B.DIR }}) + LEFT_GHCOLOR_STEP.B.DIR;
 079648 						{RIGHT_GHCOLOR.R.INT,RIGHT_GHCOLOR.R.FRAC} <= {RIGHT_GHCOLOR.R.INT,RIGHT_GHCOLOR.R.FRAC} + ({RIGHT_GHCOLOR_STEP.R.INT,RIGHT_GHCOLOR_STEP.R.FRAC}^{17{RIGHT_GHCOLOR_STEP.R.DIR}}) + RIGHT_GHCOLOR_STEP.R.DIR;
 079648 						{RIGHT_GHCOLOR.G.INT,RIGHT_GHCOLOR.G.FRAC} <= {RIGHT_GHCOLOR.G.INT,RIGHT_GHCOLOR.G.FRAC} + ({RIGHT_GHCOLOR_STEP.G.INT,RIGHT_GHCOLOR_STEP.G.FRAC}^{17{RIGHT_GHCOLOR_STEP.G.DIR}}) + RIGHT_GHCOLOR_STEP.G.DIR;
 079648 						{RIGHT_GHCOLOR.B.INT,RIGHT_GHCOLOR.B.FRAC} <= {RIGHT_GHCOLOR.B.INT,RIGHT_GHCOLOR.B.FRAC} + ({RIGHT_GHCOLOR_STEP.B.INT,RIGHT_GHCOLOR_STEP.B.FRAC}^{17{RIGHT_GHCOLOR_STEP.B.DIR}}) + RIGHT_GHCOLOR_STEP.B.DIR;
        						
 079648 						CMD_ST <= !CMD.CMDPMOD.PCLP && !FAST ? CMDS_ROW_CLIP : CMDS_ROW_DRAW;
 079648 						COL_D <= COL_D - 12'd1;
 053418 						if (COL_D == 12'd0) begin
 053418 							CMD_ST <= CMDS_END;
        						end
 000348 					end else if (CMD.CMDCTRL.COMM == 4'h5 || CMD.CMDCTRL.COMM == 4'h7) begin
        						// Each polyline segment starts where the previous one ended: the right point/colour moves to the left;
        						// RIGHT_VERT/RIGHT_GHCOLOR are not stepped for polylines, so they still hold the previous segment end.
 000348 						LEFT_VERT <= RIGHT_VERT;
 000348 						LEFT_GHCOLOR <= RIGHT_GHCOLOR;
 000348 						case (POLY_S)
 000087 							2'd0: begin
 000087 								RIGHT_VERT <= VERTC;
 000087 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_C);
 000087 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000087 							2'd1: begin
 000087 								RIGHT_VERT <= VERTD;
 000087 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_D);
 000087 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000087 							2'd2: begin
 000087 								RIGHT_VERT <= VERTA;
 000087 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 000087 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000087 							2'd3: begin
 000087 								CMD_ST <= CMDS_END;
        							end
        						endcase
 000348 						POLY_S <= POLY_S + 2'd01;
~000078 					end else if (CMD.CMDCTRL.COMM == 4'h6) begin
 000078 						CMD_ST <= CMDS_END;
%000000 					end else begin
%000000 						CMD_ST <= CMDS_END;
        					end
        				end
        				
 161896 				CMDS_ROW_CLIP: begin
 161896 					CMD_DELAY <= CMD_DELAY - 9'd1;
 143878 					if (!CMD_DELAY || PENALTY_CNT >= CMD_DELAY) begin
 018018 						CMD_DELAY <= 9'd8;
 018018 						CMD_ST <= CMDS_ROW_DRAW;
        					end
        				end
        				
 054225 				CMDS_END: begin
 054225 					NEXT_ADDR_H = CMD_ADDR_H + 14'd1;
 054225 					case (CMD.CMDCTRL.JP[1:0])
 054143 						2'b00: begin CMD_ADDR_H <= NEXT_ADDR_H; end
 000025 						2'b01: begin CMD_ADDR_H <= CMD.CMDLINK[15:2]; end
~000016 						2'b10: begin CMD_ADDR_H <= CMD.CMDLINK[15:2]; if (!CMD_SUB_RUN) CMD_RET_ADDR_H <= NEXT_ADDR_H; CMD_SUB_RUN <= 1; end
~000041 						2'b11: begin CMD_ADDR_H <= CMD_SUB_RUN ? CMD_RET_ADDR_H : NEXT_ADDR_H; CMD_SUB_RUN <= 0; end
        					endcase
        					
 054139 					if (CMD.CMDCTRL.END) begin
 000086 						DRAW_END <= 1;
 000086 						CMD_ST <= CMDS_IDLE;
        `ifdef DEBUG
        						DBG_CMD_CNT <= '0;
        `endif
 054139 					end else begin
 054139 						CMD_READ <= 1;
 054139 						CMD_ST <= CMDS_READ;
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
 1240306 	FBDrawState_t FBD_ST;
        	
 019793 	bit          CPU_VRAM_BUSY;
        	
 265298 	bit  [11: 0] DRAW_X;
 098590 	bit  [11: 0] DRAW_Y;
 033376 	Pattern_t    DRAW_PAT;
 034355 	RGB_t        DRAW_GHCOLOR;
 027778 	bit  [15: 0] DRAW_BACK_C;
 674178 	bit          FB_DRAW_PEND;
 372823 	bit          FB_READ_PEND;
 210390 	bit          PAT_NEXT;
 15286284 	always @(posedge CLK or negedge RST_N) begin
 15286284 		bit  [ 1: 0] RAS_DELAY;
        		
 15285085 		if (!RST_N) begin
 001199 			FBD_ST <= FBDS_IDLE;
 001199 			FB_DRAW_PEND <= 0;
 001199 			FB_READ_PEND <= 0;
 001199 			PAT_NEXT <= 0;
 001199 			RAS_DELAY <= '0;
 001199 			FBD_RAS <= 0;
        		end
 15285085 		else begin
 15285085 			PAT_NEXT <= 0;
 15285085 			case (FBD_ST)
 12854192 				FBDS_IDLE: begin
 503678 					if (CPU_VRAM_BUSY) begin
 503678 						FBD_ST <= FBDS_SKIP;
 10124903 					end else if (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4) begin
 1488980 						if ((CMD_ST == CMDS_NSPR_DRAW || CMD_ST == CMDS_SSPR_DRAW || CMD_ST == CMDS_LINE_DRAW || CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END)) begin
        							// AA pixels use the pre-computed neighbour; otherwise the line position, advanced by one on the minor axis after an AA step
 736631 							DRAW_X <= LOC_COORD.X + ((CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) ? AA_X : LINE_VERTA.X) +
 736631 							          ((!(CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) && LINE_AA_STEP && LINE_S) ? {{11{LINE_DIRX}},1'b1} : 12'd0);
 736631 							DRAW_Y <= LOC_COORD.Y + ((CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) ? AA_Y : LINE_VERTA.Y) +
 736631 							          ((!(CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) && LINE_AA_STEP && !LINE_S) ? {{11{LINE_DIRY}},1'b1} : 12'd0);
 668136 							if (!(CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END)) begin
 662814 								if (!(TEXT_X_READ_STEP && EC_FIND && IS_PAT_EC)) begin
 662814 									DRAW_PAT <= PAT;
 662814 									DRAW_GHCOLOR <= RGBFtoI(LINE_GHCOLOR);
        								end
 668136 								FBD_RAS <= LINE_DRAW_STEP && (CMD.CMDCTRL.COMM <= 4'h1) && &LINE_VERTA.X[3:0];
        							end
        							
        							
 674181 							if (LINE_DRAW_STEP && !IS_PAT_EC) begin
 372823 								if (CMD.CMDPMOD.CCB[0] || CMD.CMDPMOD.MON) begin
 372823 									FB_READ_PEND <= 1;
 372823 									FBD_ST <= FBDS_READ;
 301358 								end else begin
 301358 									FB_DRAW_PEND <= 1;
 301358 									FBD_ST <= FBDS_WRITE;
        								end
 062450 							end else begin
 062450 								FBD_ST <= FBDS_SKIP;
        							end
        						end
 2219375 						if (CMD_ST == CMDS_ROW_DRAW) begin
 006236 							FBD_RAS <= 1;
        						end
 2225611 						PAT_NEXT <= TEXT_X_READ_STEP;
        					end
        					
        				end
        				
 375943 				FBDS_READ: begin
 372821 					if (!FB_DRAW_WAIT) begin
 372821 						FB_READ_PEND <= 0;
 372821 						FBD_ST <= FBDS_READWAIT;
        					end
        				end
        			
 372820 				FBDS_READWAIT: begin
 372820 					FBD_ST <= FBDS_READBACK;
        				end
        			
 372820 				FBDS_READBACK: begin
 372820 					DRAW_BACK_C <= FB_DRAW_Q;
 372820 					FB_DRAW_PEND <= 1;
 372820 					FBD_ST <= FBDS_WRITE;
        				end
        				
 680872 				FBDS_WRITE: begin
 674173 					if (!FB_DRAW_WAIT) begin
 674173 						FB_DRAW_PEND <= 0;
 663344 						if (FBD_RAS)
 010768 							if (PENALTY_CNT < 10'd3) begin
 010768 								FBD_ST <= FBDS_RAS;
 000061 							end else begin
 000061 								FBD_ST <= FBDS_IDLE;
        							end
        						else
 663344 							FBD_ST <= FBDS_IDLE;
        					end
        				end
        				
 062311 				FBDS_RAS: if (CE_R) begin
 032302 					RAS_DELAY <= RAS_DELAY + 2'd1;
 021535 					if (RAS_DELAY == 2'd2) begin
 010767 						RAS_DELAY <= 2'd0;
 010767 						FBD_RAS <= 0;
 010767 						FBD_ST <= FBDS_IDLE;
        					end
        				end
        				
 566127 				FBDS_SKIP: begin
 566127 					FBD_ST <= FBDS_IDLE;
        				end
        			endcase
        			
        			// One adder updates the penalty counter: +1 per pattern wait, -3 per RAS-delayed write, -CMD_DELAY when a row delay is absorbed
 15280439 			if (PEN_INC || PEN_ABSORB || PEN_RAS) PENALTY_CNT <= PENALTY_CNT + (PEN_ABSORB ? -CMD_DELAY : PEN_INC ? 10'd1 : -10'd3);
        		end
        	end
 015096 	bit          FBD_RAS;
 005145 	wire PEN_INC    = ((CMD_ST == CMDS_LINE_DRAW && CMD.CMDCTRL.COMM <= 4'h3) || CMD_ST == CMDS_NSPR_DRAW || CMD_ST == CMDS_SSPR_DRAW) && PAT_PREREAD_WAIT && !CPU_VRAM_BUSY && CE_R;
 000292 	wire PEN_ABSORB = (CMD_ST == CMDS_EXEC || CMD_ST == CMDS_ROW_CLIP) && CMD_DELAY && PENALTY_CNT >= CMD_DELAY;
 000061 	wire PEN_RAS    = FBD_ST == FBDS_WRITE && !FB_DRAW_WAIT && FBD_RAS && PENALTY_CNT >= 10'd3;
        	assign DRAW_WAIT = (FBD_ST != FBDS_IDLE) || CPU_VRAM_BUSY;
        	
        `ifdef DEBUG
        	assign DBG_PENALTY_OVER = (PENALTY_CNT >= 10'd256);
        `endif
        
        	// Pattern read address. SPR_READ is never set for COMM >= 4, so no line/polygon special case is needed.
        	// CM 0,1: texel addresses advance every 4 pixels; CM 2-4: every 2; others: every pixel.
 11978910 	wire [ 1: 0] PAT_SH = (CMD.CMDPMOD.CM[2:1] == 2'b00) ? 2'd2 : (CMD.CMDPMOD.CM[2:1] == 2'b01 || CMD.CMDPMOD.CM == 3'b100) ? 2'd1 : 2'd0;
~11978910 	wire [ 8: 0] PAT_W = PAT_SH == 2'd2 ? {2'b00,ORIG_WIDTH[8:2]} : PAT_SH == 2'd1 ? {1'b0,ORIG_WIDTH[8:1]} : ORIG_WIDTH;
~11978910 	wire [ 8: 0] PAT_P = PAT_SH == 2'd2 ? {2'b00,PAT_CNT[8:2]}    : PAT_SH == 2'd1 ? {1'b0,PAT_CNT[8:1]}    : PAT_CNT;
 041327 	wire [ 9: 0] PAT_REV = {1'b0,PAT_W} - {1'b0,PAT_P} - 10'd1;   // may go negative: sign-extended below
 11972336 	wire [17: 0] PAT_OFF = PAT_PREREAD ? 18'd0 : !TEXT_DIRX ? {9'd0,PAT_P} : {{8{PAT_REV[9]}},PAT_REV};
~11978910 	wire [17: 0] PAT_BASE = (CMD.CMDPMOD.CM[2:1] == 2'b00) ? {CMD.CMDSRCA,2'b00} + {3'b000,SPR_OFFSY,1'b0} :
 2017434 	                        (CMD.CMDPMOD.CM[2:1] == 2'b01 || CMD.CMDPMOD.CM == 3'b100) ? {CMD.CMDSRCA,2'b00} + {2'b00,SPR_OFFSY,2'b00} :
 1289941 	                                                                                      {CMD.CMDSRCA[15:1],3'b000} + {1'b0,SPR_OFFSY,3'b000};
 044108 	wire [18: 1] PAT_VRAM_A = PAT_BASE + PAT_OFF;
        	assign SPR_ADDR = PAT_BASE;
        	
 037064 	bit  [15: 0] FB_DRAW_D;
 066953 	bit          FB_DRAW_WE;
 001887 	bit          SCLIP;
 002164 	bit          UCLIP;
 032760 		bit [15: 0] ORIG_C;
 019973 		bit         TP;
 15286332 	always_comb begin
 15286332 		bit [15: 0] CALC_C;
 15286332 		bit         EC;
 15286332 		bit         MESH;
 15286332 		bit         IDRAW;
        		
 13649768 		if (!CMD.CMDCTRL.COMM[2]) begin
 13649768 			case (CMD.CMDPMOD.CM)
 10860435 				3'b000: ORIG_C = {CMD.CMDCOLR[15:4],DRAW_PAT.C[3:0]};
 688458 				3'b001: ORIG_C = CLT_Q;
 387591 				3'b010: ORIG_C = {CMD.CMDCOLR[15:6],DRAW_PAT.C[5:0]};
 442381 				3'b011: ORIG_C = {CMD.CMDCOLR[15:7],DRAW_PAT.C[6:0]};
 481562 				3'b100: ORIG_C = {CMD.CMDCOLR[15:8],DRAW_PAT.C[7:0]};
 789341 				default: ORIG_C = DRAW_PAT.C;
        			endcase
 13649768 			TP = DRAW_PAT.TP;
 13649768 			EC = DRAW_PAT.EC;
 1636564 		end else begin
 1636564 			ORIG_C = CMD.CMDCOLR;
 1636564 			TP = 0;
 1636564 			EC = 0;
        		end
 15286332 		CALC_C = CMD.CMDPMOD.MON ? DRAW_BACK_C : !TVMR.TVM[0] ? ColorCalc(ORIG_C, DRAW_BACK_C, DRAW_GHCOLOR, CMD.CMDPMOD.CCB) : ORIG_C;
        			
 15286332 		SCLIP = !DRAW_X[11:10]                                    && DRAW_X[9:0] <= SYS_CLIP.X2[9:0] && !DRAW_Y[11:10]                                    && DRAW_Y[9:0] <= SYS_CLIP.Y2[9:0];
 15286332 		UCLIP = !DRAW_X[11:10] && DRAW_X[9:0] >= USR_CLIP.X1[9:0] && DRAW_X[9:0] <= USR_CLIP.X2[9:0] && !DRAW_Y[11:10] && DRAW_Y[9:0] >= USR_CLIP.Y1[9:0] && DRAW_Y[9:0] <= USR_CLIP.Y2[9:0];
 15286332 		MESH = ~(DRAW_X[0] ^ DRAW_Y[0]) ^ (FRAME_ODD&BLUR_MESH);
 15286332 		IDRAW = ~(DIL ^ DRAW_Y[0]);
 15286332 		FB_DRAW_D = CALC_C;
 15286332 		FB_DRAW_WE = (~TP | CMD.CMDPMOD.SPD) & (~EC | CMD.CMDPMOD.ECD) & SCLIP & ((UCLIP^CMD.CMDPMOD.CMOD) | ~CMD.CMDPMOD.CLIP) & (MESH | ~CMD.CMDPMOD.MESH) & (IDRAW | ~DIE);
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
 017625 	ScrnStart_t  RP_Xst;
 017622 	ScrnStart_t  RP_Yst;
 017622 	ScrnInc_t    RP_DXst;
 017702 	ScrnInc_t    RP_DYst;
 017662 	ScrnInc_t    RP_DX;
 017645 	ScrnInc_t    RP_DY;
 017570 	RotCoord_t   RXst,RYst;
 879186 	RotCoord_t   OUT_RX,OUT_RY;
 1837264 	bit  [ 8: 0] OUT_X;
 034001 	bit  [ 8: 0] OUT_Y;
%000000 	bit          FRAME_ERASE_HIT;
%000000 	bit  [ 8: 0] ERASE_X;
%000000 	bit  [ 8: 0] ERASE_Y;
 004845 	bit          ERASE_HIT;
 069938 	bit  [15: 0] HTIM_PIPE;
 15286284 	always @(posedge CLK or negedge RST_N) begin
 15286284 		bit          HTIM_N_OLD;
 15286284 		bit          VTIM_N_OLD;
 15286284 		bit  [ 2: 0] RP_POS;
 15286284 		bit          RP_FIRST;
        		
 15285085 		if (!RST_N) begin
 001199 			OUT_X <= '0;
 001199 			OUT_Y <= '0;
        		end
 15285085 		else begin
 15285085 			HTIM_N_OLD <= HTIM_N;
 15285085 			VTIM_N_OLD <= VTIM_N;
        			
 11786321 			if (DCE_R) begin
 3498764 				HTIM_PIPE <= {HTIM_PIPE[14:0],HTIM_N};
        			end
        			
 11786321 			if (DCE_R) begin
 3009198 				if (RP_POS != 3'd7) RP_POS <= RP_POS + 3'd1;
        			end
 15215148 			if (!HTIM_N && HTIM_N_OLD) begin
 069937 				RP_POS <= '0;
        			end
 15280717 			if (VTIM_N && !VTIM_N_OLD) begin
 004368 				RP_FIRST <= 1;
        			end
 15215147 			if (HTIM_N && !HTIM_N_OLD) begin
 069938 				RP_FIRST <= 0;
        			end
        			
 11786261 			if (DCE_F) begin
 3498824 				case (RP_POS)
 069938 					3'd0: RP_Xst[31:16] <= VOUTI;	//0x18C/0x1A8
 069940 					3'd1: RP_Yst[31:16] <= VOUTI;	//0x18D/0x1A9
 069939 					3'd2: RP_DXst[31:16] <= VOUTI;//0x18E/0x1AA
 069939 					3'd3: RP_DYst[31:16] <= VOUTI;//0x18F/0x1AB
 069939 					3'd4: RP_DX[31:16] <= VOUTI;	//0x190/0x1AC
 069939 					3'd5: RP_DY[31:16] <= VOUTI;	//0x191/0x1AD
        				endcase
        			end
 11786321 			if (DCE_R) begin
 3498764 				case (RP_POS)
 069938 					3'd0: RP_Xst[15:0] <= VOUTI;
 069938 					3'd1: RP_Yst[15:0] <= VOUTI;
 069938 					3'd2: RP_DXst[15:0] <= VOUTI;
 069938 					3'd3: RP_DYst[15:0] <= VOUTI;
 069938 					3'd4: RP_DX[15:0] <= VOUTI;
 069938 					3'd5: RP_DY[15:0] <= VOUTI;
 069938 					3'd6: begin
 069938 						RXst <= $signed(RXst) + $signed(ScrnIncToRC(RP_DXst));
 069938 						RYst <= $signed(RYst) + $signed(ScrnIncToRC(RP_DYst));
 069894 						if (RP_FIRST) begin
 000044 							RXst <= ScrnStartToRC(RP_Xst);
 000044 							RYst <= ScrnStartToRC(RP_Yst);
        						end
        					end
        				endcase
        			end
        			
 11786321 			if (DCE_R) begin
 3498764 				OUT_RX <= $signed(OUT_RX) + $signed(ScrnIncToRC(RP_DX));
 3498764 				OUT_RY <= $signed(OUT_RY) + $signed(ScrnIncToRC(RP_DY));
 3428826 				if (HTIM_PIPE[8:7] == 2'b01) begin
 069938 					OUT_RX <= $signed(RXst);
 069938 					OUT_RY <= $signed(RYst);
        				end
        			end
        			
 13086748 			if (VTIM_N && DCE_R) begin
 043913 				if (HTIM_PIPE[8:7] == 2'b01) begin
 043913 					OUT_X <= '0;
 043913 					OUT_Y <= OUT_Y + 9'd1;
        				end
 2151068 				else if (OUT_X < 9'd352 + 8) begin
 2151068 					OUT_X <= OUT_X + 9'd1;
        				end
        			end
        			
 13805555 			if ((HTIM_N || |HTIM_PIPE) && VBLANK_ERASE && CE_R) begin
 1479530 				OUT_X <= OUT_X + 9'd1;
 1459741 				if ({1'b0,OUT_X} + 10'd1 == (!EWRR.X3[9] ? {EWRR.X3,3'b000} : 10'h200)) begin
 019789 					OUT_X <= {EWLR.X1,3'b000};
 019789 					OUT_Y <= OUT_Y + 9'd1;
        				end
        			end
 15280717 			if (!VTIM_N && VTIM_N_OLD) begin
 004368 				OUT_X <= {EWLR.X1,3'b000};
 004368 				OUT_Y <= EWLR.Y1;
        			end
 15280717 			if (VTIM_N && !VTIM_N_OLD) begin
 004368 				OUT_Y <= '1;
        			end
 7642556 			if (CE_F) begin
 7642556 				ERASE_HIT <= (OUT_X >= {EWLR.X1,3'b000}) && ({1'b0,OUT_X} < {EWRR.X3,3'b000}) && (OUT_Y >= EWLR.Y1) && (OUT_Y <= EWRR.Y3);
        			end
        		end
        	end
        	
        	assign FRAME_ERASE_EN = ERASE_HIT && FRAME_ERASE && VTIM_N;
        	assign VBLANK_ERASE_EN = ERASE_HIT && VBLANK_ERASE && (HTIM_N || |HTIM_PIPE);
        	
        	assign FB_ERASE_A = {OUT_Y[7:0],OUT_X[8:0]};
 13048309 	assign FB_DISP_A = TVMR.TVM[1:0] == 2'b10 ? {OUT_RY.INT[7:0],OUT_RX.INT[8:0]} : 
 9178023 	                   TVMR.TVM[1:0] == 2'b11 ? {OUT_RY.INT[8:0],OUT_RX.INT[8:1]} : 
 9178023 							                          {     OUT_Y[7:0],     OUT_X[8:0]};
 3498974 	bit DCLK;
 15286165 	always @(posedge CLK) begin
 3498974 		if      (DCE_R) DCLK <= 1;
 8288157 		else if (DCE_F) DCLK <= 0;
        		
 15286165 		VOUTO <= TVMR.TVM[1:0] == 2'b01 ? (DCLK ? {8'hFF,FB_DISP_Q[15:8]} : {8'hFF,FB_DISP_Q[7:0]}) :
 12017230 	            TVMR.TVM[1:0] == 2'b10 ? (OUT_RX.INT[10:9] || OUT_RY.INT[10:8] ? 16'h0000 : FB_DISP_Q) :
 8146963 					TVMR.TVM[1:0] == 2'b11 ? (OUT_RX.INT[10:9] || OUT_RY.INT[10:9] ? 16'h0000 : !OUT_X[0] ? {8'h00,FB_DISP_Q[15:8]} : {8'h00,FB_DISP_Q[7:0]}) :
 8146963 					FB_DISP_Q;
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
 1179534 	VRAMState_t VRAM_ST;
        	
        	typedef enum bit [2:0] {
        		FS_IDLE,  
        		FS_CPU_WRITE,
        		FS_CPU_WAIT,
        		FS_CPU_READ,
        		FS_DRAW
        	} FBState_t;
 470478 	FBState_t FB_ST;
        		
 027769 	wire CPU_VRAM_REQ = (A[20:19] == 2'b00) & ~AD_N & ~CS_N & ~REQ_N;	//000000-07FFFF
 021297 	wire CPU_FB_REQ = (A[20:19] == 2'b01) & ~AD_N & ~CS_N & ~REQ_N;	//080000-0FFFFF
        	
 035673 	bit  [20: 1] A;
 010448 	bit          WE_N;
 000120 	bit  [ 1: 0] DQM;
 003741 	bit          BURST;
 043561 	bit          READY;
 020405 	bit          VRAM_SEL,FBRAM_SEL,REG_SEL;
        	
 007421 	bit          CPU_VRAM_RRDY;
 008187 	bit          CPU_FB_RRDY;
 004539 	bit          CPU_VRAM_WRDY;
 000252 	bit          CPU_FB_WRDY;
 008186 	bit          CPU_FB_RPEND;
 013111 	bit          CPU_FB_WPEND;
        	
 051472 	wire [15: 0] PAT_FIFO_D = GetSprData(VRAM_Q, CMD.CMDPMOD.CM, PAT_CNT[1:0] ^ {2{CMD.CMDCTRL.DIR[0]}} ^ {2{DIR[0]}});
 433608 	wire         PAT_FIFO_WRREQ = VRAM_ST == VS_PAT_READ && !PAT_PREREAD && VRAM_RDY;
 210390 	wire         PAT_FIFO_RDREQ = PAT_NEXT && SPR_DATA_READY;
 055381 	bit  [15: 0] PAT_FIFO_Q;
 131317 	bit          PAT_FIFO_EMPTY;
 077999 	bit          PAT_FIFO_FULL;
 062771 	wire         PAT_FIFO_RST = !SPR_READ;
        	VDP1_PAT_FIFO PAT_FIFO(CLK, PAT_FIFO_RST, PAT_FIFO_D, PAT_FIFO_WRREQ, PAT_FIFO_RDREQ, PAT_FIFO_Q, PAT_FIFO_EMPTY, PAT_FIFO_FULL);
        	
        	assign SPR_DATA = PAT_FIFO_Q;
        	assign SPR_DATA_READY = !PAT_FIFO_EMPTY || PAT_CNT >= ORIG_WIDTH;
        	
 001890 	bit  [15: 0] MEM_DO;
~130997 	bit  [ 8: 0] PAT_CNT;
 062767 	bit          PAT_PREREAD;
 437013 	bit  [ 3: 0] VRAM_READ_POS;
 007420 	bit          CPU_VRAM_RPEND;
 020348 	bit          CPU_VRAM_WPEND;
 020705 	bit          CPU_VRAM_ACCESS;
 15286284 	always @(posedge CLK or negedge RST_N) begin
 15286284 		bit         CS_N_OLD;
 15286284 		bit         READY2,READY3;
        //		bit         VRAM_PAGE_BREAK;
        		// One write buffer (current + saved beat) serves both VRAM and framebuffer writes: the bus master does not
        		// start a new transaction's data beats before READY, and READY needs both pending flags clear, so only one
        		// region can hold pending write data at a time.
 15286284 		bit [18: 1] CPU_WA;
 15286284 		bit [15: 0] CPU_D;
 15286284 		bit [ 1: 0] CPU_WE;
 15286284 		bit [18: 1] SAVE_WA;
 15286284 		bit [15: 0] SAVE_D;
 15286284 		bit [ 1: 0] SAVE_WE;
 15286284 		bit         CMD_READ_PEND;
 15286284 		bit         CLT_READ_PEND;
 15286284 		bit         GRD_READ_PEND;
 15286284 		bit [ 8: 0] FB_Y;
 15286284 		bit         VRAM_FIFO_FULL,FB_FIFO_FULL,VRAM_FIFO_EMPTY,FB_FIFO_EMPTY;
 15286284 		bit [ 4: 0] CPU_ACCESS_WAIT,DRAW_ACCESS_WAIT;
 15286284 		bit [ 1: 0] CPU_VRAM_WDELAY;
        		
 15285085 		if (!RST_N) begin
 001199 			VRAM_ST <= VS_IDLE;
 001199 			VRAM_A <= '0;
 001199 			VRAM_D <= '0;
 001199 			VRAM_WE <= '0;
 001199 			VRAM_RD <= 0;
 001199 			FB_ST <= FS_IDLE;
 001199 			FB_A <= '0;
 001199 			FB_D <= '0;
 001199 			FB_WE <= '0;
 001199 			FB_RD <= 0;
 001199 			{CMD_READ_PEND,CLT_READ_PEND,GRD_READ_PEND} <= 0;
        			
 001199 			A <= '0;
 001199 			WE_N <= 1;
 001199 			DQM <= '1;
 001199 			BURST <= 0;
 001199 			READY <= 1;
 001199 			{CPU_VRAM_RPEND,CPU_VRAM_WPEND} <= '0;
 001199 			{CPU_VRAM_RRDY,CPU_VRAM_WRDY} <= '1;
 001199 			{CPU_FB_RPEND,CPU_FB_WPEND} <= '0;
 001199 			{CPU_FB_RRDY,CPU_FB_WRDY} <= '1;
 001199 			{VRAM_FIFO_FULL,FB_FIFO_FULL,VRAM_FIFO_EMPTY,FB_FIFO_EMPTY} <= '0;
        			
 001199 			CPU_ACCESS_WAIT <= '0;
 001199 			DRAW_ACCESS_WAIT <= '0;
        		end 
 15285085 		else begin
 15285085 			CS_N_OLD <= CS_N;
 7642556 			if (CE_F) begin				
 7642556 				READY2 <= 1;
 7471860 				if (VRAM_FIFO_EMPTY && FB_FIFO_EMPTY) begin
 7471860 					READY3 <= READY2; 
 7471860 					READY <= READY2 & READY3;	
        				end	
        			end		
 15241526 			if (!CS_N && CS_N_OLD) begin
 043559 				READY <= 0;
 043559 				READY2 <= 0;
 043559 				READY3 <= 0;
        			end
        			
 7642556 			if (CE_R) begin
 7417951 				if (!CS_N && DTEN_N && AD_N) begin
 181019 					if (!DI[15]) begin
 181019 						A[20:9] <= DI[11:0];
 181019 						WE_N <= DI[14];
 181019 						BURST <= DI[13];
 181019 						VRAM_SEL <= (DI[11:10] == 2'b00);
 181019 						FBRAM_SEL <= (DI[11:10] == 2'b01);
 181019 						REG_SEL <= DI[11];
 043559 					end else begin
 043559 						A[8:1] <= DI[7:0];
 043559 						DQM <= DI[13:12];
        					end
        				end
        			end
 15241525 			if (CS_N && !CS_N_OLD) begin
 043560 				BURST <= 0;
 043560 				VRAM_SEL <= 0;
 043560 				FBRAM_SEL <= 0;
 043560 				REG_SEL <= 0;
        			end
        			
 15230644 			if (CMD_READ && !CMD_READ_PEND) begin CMD_READ_PEND <= 1; VRAM_READ_POS <= '0; end
 15284987 			if (CLT_READ && !CLT_READ_PEND) begin CLT_READ_PEND <= 1; VRAM_READ_POS <= '0; end
 15284674 			if (GRD_READ && !GRD_READ_PEND) begin GRD_READ_PEND <= 1; VRAM_READ_POS <= '0; end
        
 11645335 			if (!SPR_READ) begin PAT_CNT <= {8'b00000000,HSS_EN&(FBCR.EOS^TEXT_DIRX)}; PAT_PREREAD <= 1; end
        			
 15269479 			if ((CPU_VRAM_REQ || CPU_FB_REQ) && WE_N && DTEN_N) begin 
 015606 				CPU_WA <= A[18:1];   // read and write beats never overlap (RDY_N), so one address register serves both
 008186 				if (CPU_VRAM_REQ) begin
 007420 					CPU_VRAM_RPEND <= 1;
 007420 					CPU_VRAM_RRDY <= 0;
        				end 
 008186 				if (CPU_FB_REQ) begin
 008186 					CPU_FB_RPEND <= 1;
 008186 					CPU_FB_RRDY <= 0;
        				end
 015606 				A <= A + 20'd1;
        			end
        			
 15251728 			if (CPU_VRAM_WDELAY && CE_F) CPU_VRAM_WDELAY <= CPU_VRAM_WDELAY - 2'd1;
 15264737 			if (CPU_VRAM_REQ && !WE_N && !DTEN_N) begin
 015810 				if (!CPU_VRAM_WPEND) begin
 015810 					CPU_WA <= A[18:1];
 015810 					CPU_D <= DI;
 015810 					CPU_WE <= ~{2{WE_N}} & ~DQM;
 015810 					CPU_VRAM_WPEND <= 1;
 015810 					VRAM_FIFO_EMPTY <= 0;
 004538 				end else begin
 004538 					SAVE_WA <= A[18:1];
 004538 					SAVE_D <= DI;
 004538 					SAVE_WE <= ~{2{WE_N}} & ~DQM;
 004538 					CPU_VRAM_WRDY <= 0;
 004538 					VRAM_FIFO_FULL <= 1;
        				end
 011119 				if (!BURST) CPU_VRAM_WDELAY <= 2'd3;
 020348 				A <= A + 20'd1;
        			end
 15280547 			if (!CPU_VRAM_WRDY && !CPU_VRAM_WPEND) begin
 004538 				CPU_WA <= SAVE_WA;
 004538 				CPU_D <= SAVE_D;
 004538 				CPU_WE <= SAVE_WE;
 004538 				CPU_VRAM_WPEND <= 1;
 004538 				CPU_VRAM_WRDY <= 1;
 004538 				VRAM_FIFO_EMPTY <= 0;
 004538 				VRAM_FIFO_FULL <= 0;
        			end
 15270537 			if (CPU_VRAM_WRDY && !CPU_VRAM_WPEND && !VRAM_FIFO_EMPTY) begin
 014548 				VRAM_FIFO_EMPTY <= 1;
        			end
        			
 15271974 			if (CPU_FB_REQ && !WE_N && !DTEN_N) begin
 012860 				if (CPU_FB_REQ && !CPU_FB_WPEND) begin
 012860 					CPU_WA <= A[18:1];
 012860 					CPU_D <= DI;
 012860 					CPU_WE <= ~{2{WE_N}} & ~DQM;
 012860 					CPU_FB_WPEND <= 1;
 012860 					FB_FIFO_EMPTY <= 0;
 000251 				end else begin
 000251 					SAVE_WA <= A[18:1];
 000251 					SAVE_D <= DI;
 000251 					SAVE_WE <= ~{2{WE_N}} & ~DQM;
 000251 					CPU_FB_WRDY <= 0;
 000251 					FB_FIFO_FULL <= 1;
        				end
 013111 				A <= A + 20'd1;
        			end
 15284834 			if (!CPU_FB_WRDY && !CPU_FB_WPEND) begin
 000251 				CPU_WA <= SAVE_WA;
 000251 				CPU_D <= SAVE_D;
 000251 				CPU_WE <= SAVE_WE;
 000251 				CPU_FB_WPEND <= 1;
 000251 				CPU_FB_WRDY <= 1;
 000251 				FB_FIFO_EMPTY <= 0;
 000251 				FB_FIFO_FULL <= 0;
        			end
 15276104 			if (CPU_FB_WRDY && !CPU_FB_WPEND && !FB_FIFO_EMPTY) begin
 008981 				FB_FIFO_EMPTY <= 1;
        			end
        			
 11132462 			if (CPU_ACCESS_WAIT && CE_R) CPU_ACCESS_WAIT <= CPU_ACCESS_WAIT - 5'd1;
 15064164 			if (DRAW_ACCESS_WAIT && CE_R) DRAW_ACCESS_WAIT <= DRAW_ACCESS_WAIT - 5'd1;
 15285085 			case (VRAM_ST)
 10127189 				VS_IDLE: if (VRAM_RDY) begin
 10079649 					CPU_VRAM_ACCESS <= 0;
 138344 					if (CPU_VRAM_WPEND && !CPU_VRAM_WDELAY) begin
 138344 						CPU_VRAM_ACCESS <= 1;
 105126 						if (!CPU_ACCESS_WAIT) begin
 033218 							VRAM_A <= CPU_WA;
 020348 							if (VRAM_A[18:9] != CPU_WA[18:9]) begin
 012870 								VRAM_ST <= VS_RAS0;
 020348 							end else begin
 020348 								VRAM_D <= CPU_D;
 020348 								VRAM_WE <= CPU_WE;
 020348 								VRAM_RD <= 0;
 020348 								VRAM_BLEN <= '0;
 020348 								CPU_VRAM_WPEND <= 0;
 020348 								VRAM_ST <= VS_CPU_WRITE;
        							end
        						end
 053233 					end else if (CPU_VRAM_RPEND) begin
 053233 						CPU_VRAM_ACCESS <= 1;
 045813 						if (!CPU_ACCESS_WAIT) begin
 007420 							VRAM_A <= CPU_WA;
 007420 							VRAM_WE <= '0;
 007420 							VRAM_RD <= 1;
 007420 							VRAM_BLEN <= '0;
 007420 							CPU_VRAM_RPEND <= 0;
 007420 							VRAM_ST <= VS_CPU_READ;
        						end
 352423 					end else if (DRAW_ACCESS_WAIT && !BURST) begin
 352423 						CPU_VRAM_ACCESS <= 1;
        //					end else if (VRAM_PAGE_BREAK) begin
        //						VRAM_ST <= VS_RAS;
 870823 					end else if (CMD_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 816411 						if (VRAM_READ_POS == 4'd15) CMD_READ_PEND <= 0;
 870823 						VRAM_A <= {CMD_ADDR_H,VRAM_READ_POS};
 870823 						VRAM_WE <= '0;
 870823 						VRAM_RD <= 1;
 870823 						VRAM_BLEN <= '0;
 870823 						VRAM_ST <= VS_CMD_READ;
 280943 					end else if (SPR_READ && !PAT_FIFO_FULL && PAT_CNT < ORIG_WIDTH && !FRAME_START && !BURST && !VRAM_SEL) begin
 280943 						VRAM_A <= PAT_VRAM_A;
 280943 						VRAM_BLEN <= PAT_PREREAD ? PAT_W : '0;
 280943 						VRAM_WE <= '0;
 280943 						VRAM_RD <= 1;
 280943 						VRAM_ST <= VS_PAT_READ;
 001568 					end else if (CLT_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 001470 						if (VRAM_READ_POS == 4'd15) CLT_READ_PEND <= 0;
 001568 						VRAM_A <= {CMD.CMDCOLR[15:2],VRAM_READ_POS};
 001568 						VRAM_WE <= '0;
 001568 						VRAM_RD <= 1;
 001568 						VRAM_BLEN <= '0;
 001568 						VRAM_ST <= VS_CLT_READ;
 8380671 					end else if (GRD_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 001233 						if (VRAM_READ_POS == 4'd3) GRD_READ_PEND <= 0;
 001644 						VRAM_A <= {CMD.CMDGRDA,VRAM_READ_POS[1:0]};
 001644 						VRAM_WE <= '0;
 001644 						VRAM_RD <= 1;
 001644 						VRAM_BLEN <= '0;
 001644 						VRAM_ST <= VS_GRD_READ;
        					end
        				end
        				
 019742 				VS_RAS0: if (CE_F) begin
 012870 					VRAM_ST <= VS_RAS1;
        				end
        				
 025740 				VS_RAS1: if (CE_F) begin
 012870 					VRAM_ST <= VS_RAS2;
        				end
        				
 025740 				VS_RAS2: if (CE_F) begin
 012870 					VRAM_ST <= VS_IDLE;
        				end
        				
 020348 				VS_CPU_WRITE: begin
 020348 					VRAM_WE <= '0;
        //					VRAM_PAGE_BREAK <= 1;
 020348 					DRAW_ACCESS_WAIT <= FAST ? 5'd5 : 5'd13;
 011364 					if (!VRAM_FIFO_FULL && !BURST) CPU_ACCESS_WAIT <= 5'd10;
 020348 					VRAM_ST <= VS_IDLE;
        				end
        				
 034098 				VS_CPU_READ: begin
 026678 					if (VRAM_RDY && CE_R) begin
 007420 						MEM_DO <= VRAM_Q;
 007420 						VRAM_RD <= 0;
        //						VRAM_PAGE_BREAK <= 1;
 007420 						DRAW_ACCESS_WAIT <= FAST ? 5'd5 : 5'd13;
 007420 						CPU_VRAM_RRDY <= 1;
 007420 						VRAM_ST <= VS_IDLE;
        					end
        				end
        					
 3830895 				VS_CMD_READ: begin
 3830895 					VRAM_RD <= 0;
 000021 					if (FRAME_START) begin
 000021 						VRAM_WE <= '0;
 000021 						VRAM_RD <= 0;
 000021 						VRAM_ST <= VS_IDLE;
 2960075 					end else if (VRAM_RDY) begin
 870799 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 870799 						CPU_ACCESS_WAIT <= 5'd10;
 870799 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 006798 				VS_CLT_READ: begin
 006798 					VRAM_RD <= 0;
%000000 					if (FRAME_START) begin
%000000 						VRAM_RD <= 0;
%000000 						VRAM_ST <= VS_IDLE;
 005230 					end else if (VRAM_RDY) begin
 001568 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 001568 						CPU_ACCESS_WAIT <= 5'd10;
 001568 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 1188240 				VS_PAT_READ: begin
 1188240 					VRAM_RD <= 0;
 003396 					if (FRAME_START || !SPR_READ) begin
 003396 						VRAM_WE <= '0;
 003396 						VRAM_RD <= 0;
 003396 						VRAM_ST <= VS_IDLE;
 907303 					end else if (VRAM_RDY) begin
 214775 						if (!PAT_PREREAD) begin
 214775 							PAT_CNT <= PAT_CNT + (HSS_EN ? 9'd2 : 9'd1);
 214775 							CPU_ACCESS_WAIT <= 5'd10;
        						end
 277541 						PAT_PREREAD <= 0;
 277541 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 006295 				VS_GRD_READ: begin
 006295 					VRAM_RD <= 0;
%000000 					if (FRAME_START) begin
%000000 						VRAM_RD <= 0;
%000000 						VRAM_ST <= VS_IDLE;
 004651 					end else if (VRAM_RDY) begin
 001644 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 001644 						CPU_ACCESS_WAIT <= 5'd10;
 001644 						VRAM_ST <= VS_IDLE;
        					end
        				end
        			endcase
        			
 15284783 			if (FRAME_START) begin
 000302 				CMD_READ_PEND <= 0;
 000302 				CLT_READ_PEND <= 0;
 000302 				GRD_READ_PEND <= 0;
        			end
        			
 15285085 			case (FB_ST)
 14783452 				FS_IDLE: begin
 013829 					if (CPU_FB_WPEND && !FB_WE) begin
 013111 						if (FB_RDY) begin
 013111 							FB_A <= CPU_WA[17:1];
 013111 							FB_D <= CPU_D;
 013111 							FB_WE <= CPU_WE;
 013111 							CPU_FB_WPEND <= 0;
 013111 							FB_ST <= FS_CPU_WRITE;
        						end
 008696 					end else if (CPU_FB_RPEND && !FB_RD) begin
 008186 						if (FB_RDY) begin
 008186 							FB_A <= CPU_WA[17:1];
 008186 							FB_RD <= 1;
 008186 							CPU_FB_RPEND <= 0;
 008186 							FB_ST <= FS_CPU_WAIT;
        						end
        					end
 14290449 					else if (((FB_READ_PEND && !FB_RD) || (FB_DRAW_PEND && !FB_WE)) && FB_DRAW_WE && !(FBRAM_SEL && BURST)) begin
 470478 						FB_Y = !DIE ? DRAW_Y[8:0] : DRAW_Y[9:1];
 470478 						casex (TVMR.TVM[1:0]) 
 260307 							2'bx0: begin
 260307 								FB_A <= {FB_Y[7:0],DRAW_X[8:0]};
 260307 								FB_D <= FB_DRAW_D | {CMD.CMDPMOD.MON,15'h0000};
 260307 								FB_WE <= {2{FB_DRAW_PEND}};
 260307 								FB_RD <= FB_READ_PEND;
        							end
 108233 							2'b01: begin
 108233 								FB_A <= {FB_Y[7:0],DRAW_X[9:1]};
 108233 								FB_D <= {FB_DRAW_D[7:0],FB_DRAW_D[7:0]} | {CMD.CMDPMOD.MON,15'h0000};
 108233 								FB_WE <= ({~DRAW_X[0],DRAW_X[0]} | {2{CMD.CMDPMOD.MON}}) & {2{FB_DRAW_PEND}};
 108233 								FB_RD <= FB_READ_PEND;
        							end
 101938 							2'b11: begin
 101938 								FB_A <= {FB_Y[8:0],DRAW_X[8:1]};
 101938 								FB_D <= {FB_DRAW_D[7:0],FB_DRAW_D[7:0]} | {CMD.CMDPMOD.MON,15'h0000};
 101938 								FB_WE <= ({~DRAW_X[0],DRAW_X[0]} | {2{CMD.CMDPMOD.MON}}) & {2{FB_DRAW_PEND}};
 101938 								FB_RD <= FB_READ_PEND;
        							end
        						endcase
 470478 						FB_ST <= FS_DRAW;
        					end
        				end
        				
 013111 				FS_CPU_WRITE: begin
 013111 					FB_WE <= '0;
 013111 					FB_ST <= FS_IDLE;
        				end
        				
 009860 				FS_CPU_WAIT: begin
 008186 					if (FB_RDY && CE_F) begin
 008186 						CPU_FB_RRDY <= 1;
 008186 						FB_ST <= FS_CPU_READ;
        					end
        				end
        				
 008186 				FS_CPU_READ: begin
 008186 					FB_RD <= 0;
 008186 					FB_ST <= FS_IDLE;
        				end
        				
 470476 				FS_DRAW: begin
 470476 					FB_WE <= '0;
 470476 					FB_RD <= 0;
 470476 					FB_ST <= FS_IDLE;
        				end
        			endcase
        		end
        	end
        	assign CPU_VRAM_BUSY = VRAM_SEL || CPU_VRAM_RPEND || CPU_VRAM_WPEND || CPU_VRAM_ACCESS;
        	assign FB_DRAW_WAIT = (FB_ST != FS_IDLE) || CPU_FB_WPEND || CPU_FB_RPEND;
 062769 	wire PAT_PREREAD_WAIT = (VRAM_ST == VS_PAT_READ) && PAT_PREREAD && !VRAM_RDY;
        	
        	// Vertex set-up arithmetic for the scaled-sprite zoom points and the normal-sprite far corner. X words
        	// (even CMD_POS) and Y words (odd) never meet in one cycle, so one set of adders serves both axes.
 437013 	wire         LD_Y     = CMD_POS[0];
 032791 	wire [12: 0] LD_D     = CMD_DAT[12:0];
 12748260 	wire [ 1: 0] LD_Z     = LD_Y ? CMD.CMDCTRL.ZP[3:2] : CMD.CMDCTRL.ZP[1:0];
 12748260 	wire [12: 0] LD_ABASE = LD_Y ? VERTA.Y : VERTA.X;
 035209 	wire [12: 0] LD_PLUS  = LD_ABASE + (LD_Z == 2'b01 ? LD_D : SDiv2(LD_D + 13'd1));
 039226 	wire [12: 0] LD_MINUS = LD_ABASE - (LD_Z == 2'b10 ? SDiv2(LD_D) : LD_D);
 038747 	wire [12: 0] LD_TEMP  = LD_D + (LD_Y ? {5'b00000,ORIG_HEIGHT} : {4'b0000,ORIG_WIDTH}) - 13'd1;
 437013 	bit [ 3: 0] CMD_POS;
 032791 	bit [15: 0] CMD_DAT;
~001568 	bit         CMD_WE,CLT_WE,GRD_WE;
 15286284 	always @(posedge CLK or negedge RST_N) begin
 15286284 		bit         CMD_WE,GRD_WE;
 15286284 		bit [12: 0] TEMP;
        		
 15285085 		if (!RST_N) begin
 001199 			CMD_WE <= 0;
 001199 			CLT_WE <= 0;
 001199 			GRD_WE <= 0;
 001199 			SYS_CLIP <= CLIP_NULL;
 001199 			USR_CLIP <= CLIP_NULL;
 001199 			LOC_COORD <= COORD_NULL;
 15285085 		end else begin
 15285085 			CMD_DAT <= VRAM_Q;
 15285085 			CMD_POS <= VRAM_READ_POS;
 15285085 			CMD_WE <= (VRAM_ST == VS_CMD_READ && VRAM_RDY);
 14414285 			if (CMD_WE) begin
 870800 				case (CMD_POS)
 054437 					4'h0: CMD.CMDCTRL <= CMD_DAT;
 054437 					4'h1: CMD.CMDLINK <= CMD_DAT;
 054435 					4'h2: CMD.CMDPMOD <= CMD_DAT;
 054434 					4'h3: CMD.CMDCOLR <= CMD_DAT;
 054433 					4'h4: CMD.CMDSRCA <= CMD_DAT;
        //					4'h5: CMD.CMDSIZE <= CMD_DAT;
        //					4'h6: CMD.CMDXA <= CMD_DAT;
        //					4'h7: CMD.CMDYA <= CMD_DAT;
        //					4'h8: CMD.CMDXB <= CMD_DAT;
        //					4'h9: CMD.CMDYB <= CMD_DAT;
        //					4'hA: CMD.CMDXC <= CMD_DAT;
        //					4'hB: CMD.CMDYC <= CMD_DAT;
        //					4'hC: CMD.CMDXD <= CMD_DAT;
        //					4'hD: CMD.CMDYD <= CMD_DAT;
 054412 					4'hE: CMD.CMDGRDA <= CMD_DAT;
        				endcase
        				
        				
 870800 				case (CMD_POS)
 054432 					4'h5: begin
 054432 						ORIG_WIDTH <= {CMD_DAT[13:8],3'b000} | ~|CMD_DAT[13:8];
 054432 						ORIG_HEIGHT <= CMD_DAT[7:0] | ~|CMD_DAT[7:0];
        					end
 054429 					4'h6: begin
 054429 						case (CMD.CMDCTRL.COMM)
 053155 							4'h0: begin
 053155 								TEMP = LD_TEMP;
 053155 								VERTA.X <= CMD_DAT[12:0];
 053155 								VERTB.X <= TEMP;
 053155 								VERTC.X <= TEMP;
 053155 								VERTD.X <= CMD_DAT[12:0];
        							end
 000208 							4'h1: begin
 000208 								VERTA.X <= CMD_DAT[12:0];
 000208 								VERTB.X <= CMD_DAT[12:0];
 000208 								VERTC.X <= CMD_DAT[12:0];
 000208 								VERTD.X <= CMD_DAT[12:0];
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTA.X <= CMD_DAT[12:0];
        							end
        							4'h8,
 000099 							4'hB: begin	
 000099 								USR_CLIP.X1 <= {1'b0,CMD_DAT[9:0]}; 
        							end
 000203 							4'h9: begin	
        							end
 000207 							4'hA: begin	
 000207 								LOC_COORD.X <= CMD_DAT[11:0]; 
        							end
        						endcase
        					end
 054427 					4'h7: begin
 054427 						case (CMD.CMDCTRL.COMM)
 053153 							4'h0: begin
 053153 								TEMP = LD_TEMP;
 053153 								VERTA.Y <= CMD_DAT[12:0];
 053153 								VERTB.Y <= CMD_DAT[12:0];
 053153 								VERTC.Y <= TEMP;
 053153 								VERTD.Y <= TEMP;
        							end
 000208 							4'h1: begin
 000208 								VERTA.Y <= CMD_DAT[12:0];
 000208 								VERTB.Y <= CMD_DAT[12:0];
 000208 								VERTC.Y <= CMD_DAT[12:0];
 000208 								VERTD.Y <= CMD_DAT[12:0];
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTA.Y <= CMD_DAT[12:0];
        							end
        							4'h8,
 000099 							4'hB: begin	
 000099 								USR_CLIP.Y1 <= {1'b0,CMD_DAT[9:0]}; 
        							end
 000203 							4'h9: begin	
        							end
 000207 							4'hA: begin	
 000207 								LOC_COORD.Y <= CMD_DAT[11:0];
        							end
        						endcase
        					end
 054427 					4'h8: begin
 054427 						case (CMD.CMDCTRL.COMM)
 000208 							4'h1: begin
 000208 								case (CMD.CMDCTRL.ZP[1:0])
 000056 									2'b00: begin 
        									end
 000053 									2'b01: begin 
 000053 										VERTB.X <= LD_PLUS;
 000053 										VERTC.X <= LD_PLUS;
        									end
 000049 									2'b10: begin 
 000049 										VERTA.X <= LD_MINUS;
 000049 										VERTB.X <= LD_PLUS;
 000049 										VERTC.X <= LD_PLUS;
 000049 										VERTD.X <= LD_MINUS;
        									end
 000050 									2'b11: begin 
 000050 										VERTA.X <= LD_MINUS;
 000050 										VERTD.X <= LD_MINUS;
        									end
        								endcase
        							end							
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTB.X <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 054423 					4'h9: begin
 054423 						case (CMD.CMDCTRL.COMM)
 000208 							4'h1: begin
 000208 								case (CMD.CMDCTRL.ZP[3:2])
 000052 									2'b00: begin 
        									end
 000077 									2'b01: begin 
 000077 										VERTC.Y <= LD_PLUS;
 000077 										VERTD.Y <= LD_PLUS;
        									end
 000039 									2'b10: begin 
 000039 										VERTA.Y <= LD_MINUS;
 000039 										VERTB.Y <= LD_MINUS;
 000039 										VERTC.Y <= LD_PLUS;
 000039 										VERTD.Y <= LD_PLUS;
        									end
 000040 									2'b11: begin 
 000040 										VERTA.Y <= LD_MINUS;
 000040 										VERTB.Y <= LD_MINUS;
        									end
        								endcase
        							end							
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTB.Y <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 054419 					4'hA: begin
 054419 						case (CMD.CMDCTRL.COMM) 
 000208 							4'h1: begin
 000208 								case (CMD.CMDCTRL.ZP[1:0])
 000056 									2'b00: begin 
 000056 										VERTB.X <= CMD_DAT[12:0];
 000056 										VERTC.X <= CMD_DAT[12:0];
        									end
 000053 									2'b01: begin 
        									end
 000049 									2'b10: begin 
        									end
 000050 									2'b11: begin 
        									end
        								endcase
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTC.X <= CMD_DAT[12:0];
        							end
        							4'h8,
 000099 							4'hB: begin	
 000099 								USR_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
        							end
 000203 							4'h9: begin	
 000203 								SYS_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
 000203 								USR_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
        							end
        						endcase
        					end
 054418 					4'hB: begin
 054418 						case (CMD.CMDCTRL.COMM) 
 000208 							4'h1: begin
 000208 								case (CMD.CMDCTRL.ZP[3:2])
 000052 									2'b00: begin 
 000052 										VERTC.Y <= CMD_DAT[12:0];
 000052 										VERTD.Y <= CMD_DAT[12:0];
        									end
 000077 									2'b01: begin 
        									end
 000039 									2'b10: begin 
        									end
 000040 									2'b11: begin 
        									end
        								endcase
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTC.Y <= CMD_DAT[12:0];
        							end
        							4'h8,
 000099 							4'hB: begin	
 000099 								USR_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
        							end
 000203 							4'h9: begin	
 000203 								SYS_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
 000203 								USR_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
        							end
        						endcase
        					end
 054415 					4'hC: begin
 054415 						case (CMD.CMDCTRL.COMM) 
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTD.X <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 054412 					4'hD: begin
 054412 						case (CMD.CMDCTRL.COMM) 
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000545 							4'h6: begin
 000545 								VERTD.Y <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 054412 					4'hE: begin
        					end
        				endcase
        			end
        			
 15285085 			CLT_WE <= (VRAM_ST == VS_CLT_READ) && VRAM_RDY;
        			
 15285085 			GRD_WE <= (VRAM_ST == VS_GRD_READ) && VRAM_RDY;
 15283441 			if (GRD_WE) begin
 001644 				GRD_TBL[CMD_POS[1:0]] <= CMD_DAT;
        			end
        		end
        	end
        	assign CMD_READ_DONE = (VRAM_ST == VS_CMD_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd15);
        	
 033376 	wire [ 3: 0] CLT_RA = DRAW_PAT.C[3:0];
        	VDP1_COL_TBL CLT(.CLK(CLK), .WRADDR(CMD_POS), .DATA(CMD_DAT), .WREN(CLT_WE), .RDADDR(CLT_RA), .Q(CLT_Q));
        	assign CLT_READ_DONE = (VRAM_ST == VS_CLT_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd15);
        	
        	assign GRD_READ_DONE = (VRAM_ST == VS_GRD_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd3);
        
        	//Registers
 009326 	wire REG_REQ = (A[20:19] == 2'b10) & ~AD_N & ~CS_N & ~REQ_N;
        	
        	assign MODR = {4'h1,3'b000,PTMR.PTM[1],FBCR.EOS,FBCR.DIE,FBCR.DIL,FBCR.FCM,TVMR.VBE,TVMR.TVM};
        	
 004368 	bit        VBOUT;
 15286284 	always @(posedge CLK or negedge RST_N) begin
 15286284 		bit        VTIM_N_OLD;
 15286284 		bit        FRAME_CHANGE;
 15286284 		bit        MANUAL_ERASECHANGE_PEND;
 15286284 		bit        START_DRAW_PEND;
 15286284 		bit        VBERASE_PEND;
        		
 001199 		if (!RST_N) begin
 001199 			TVMR <= '0;
 001199 			FBCR <= '0;
 001199 			PTMR <= '0;
 001199 			EWDR <= 16'h0000;
 001199 			EWLR <= 16'h0000;
 001199 			EWRR <= 16'h0000;
 001199 			EDSR <= '0;
 001199 			IRQ_N <= 1;
        			
 001199 			MANUAL_ERASECHANGE_PEND <= 0;
 001199 			FRAME_ERASE <= 0;
 001199 			VBLANK_ERASE <= 0;
 001199 			DRAW_TERMINATE <= 0;
 001199 			VBERASE_PEND <= 0;
 15285041 		end else if (!RES_N) begin
 000044 			TVMR <= '0;
 000044 			FBCR <= '0;
 000044 			PTMR <= '0;
 000044 			EDSR <= '0;
 15285041 		end else begin
 15285041 			START_DRAW_PEND <= 0;
 15285041 			DRAW_TERMINATE <= 0;
 15284206 			if (REG_REQ && !WE_N && !DTEN_N) begin
 000835 				case ({A[5:1],1'b0})
 000120 					5'h00: TVMR <= DI & TVMR_MASK;
 000220 					5'h02: FBCR <= DI & FBCR_MASK;
 000120 					5'h04: PTMR <= DI & PTMR_MASK;
 000120 					5'h06: EWDR <= DI & EWDR_MASK;
 000120 					5'h08: EWLR <= DI & EWLR_MASK;
 000120 					5'h0A: EWRR <= DI & EWRR_MASK;
 000015 					default:;
        				endcase
 000685 				if (A[5:1] == 5'h02>>1 && DI[1]) MANUAL_ERASECHANGE_PEND <= 1;
 000744 				if (A[5:1] == 5'h04>>1 && DI[1:0] == 2'b01) begin 
 000091 					START_DRAW_PEND <= 1; 
        `ifdef DEBUG
        					START_DRAW_CNT <= START_DRAW_CNT + 8'd1; 
        `endif
        				end
 000820 				if (A[5:1] == 5'h0C>>1 && DI[1]) DRAW_TERMINATE <= 1;
        			end
        			
 15284906 			if (DRAW_END) begin
 000135 				EDSR.CEF <= 1;
        			end
 7642534 			if (CE_R) begin
 7642507 				IRQ_N <= ~EDSR.CEF;
        			end
        
 15285041 			FRAME_START <= 0;
 15284950 			if (START_DRAW_PEND) begin
 000091 				FRAME_START <= 1;
 000091 				EDSR.CEF <= 0;
 000091 				DIE <= FBCR.DIE;
 000091 				DIL <= FBCR.DIL;
        			end
 15280673 			if (FRAME_CHANGE) begin
 004368 				FRAME_ERASE <= 0;
        `ifdef DEBUG
        				FRAMES_DBG <= FRAMES_DBG + 8'd1;
        `endif
 002235 				if (!FBCR.FCM) begin
 002235 					FB_SEL <= ~FB_SEL;
 002235 					FRAME_ERASE <= ~TVMR.TVM[1];
 002235 					VBERASE_PEND <= TVMR.TVM[1];
 002235 					EDSR.CEF <= 0;
 002235 					EDSR.BEF <= EDSR.CEF;
 002235 					LOPR <= COPR;
 002235 					DIE <= FBCR.DIE;
 002235 					DIL <= FBCR.DIL;
 002024 					if (PTMR.PTM[1]) begin
 000211 						FRAME_START <= 1;
        					end
 002235 					MANUAL_ERASECHANGE_PEND <= 0;
        `ifdef DEBUG
        					FRAMES_DBG <= 8'd0;
        `endif
 000070 				end else if (MANUAL_ERASECHANGE_PEND && FBCR.FCT) begin
 000070 					FB_SEL <= ~FB_SEL;
 000070 					EDSR.CEF <= 0;
 000070 					EDSR.BEF <= EDSR.CEF;
 000070 					LOPR <= COPR;
 000070 					DIE <= FBCR.DIE;
 000070 					DIL <= FBCR.DIL;
~000070 					if (PTMR.PTM[1]) begin
%000000 						FRAME_START <= 1;
        					end
 000070 					MANUAL_ERASECHANGE_PEND <= 0;
        `ifdef DEBUG
        					FRAMES_DBG <= 8'd0;
        `endif
 002036 				end else if (MANUAL_ERASECHANGE_PEND && !FBCR.FCT) begin
 000027 					FRAME_ERASE <= ~TVMR.TVM[1];
 000027 					VBERASE_PEND <= TVMR.TVM[1];
 000027 					MANUAL_ERASECHANGE_PEND <= 0;
        				end;
        			end
        			
 15285041 			FRAME_CHANGE <= 0;
 11786285 			if (DCE_R) begin
 3498756 				VTIM_N_OLD <= VTIM_N;
        				
 3494388 				if (VTIM_N && !VTIM_N_OLD) begin
 004368 					VBOUT <= 1;
        				end
 3494388 				if (VTIM_N && HTIM_PIPE[11:10] == 2'b10 && VBOUT) begin
 004368 					VBOUT <= 0;
 004368 					FRAME_CHANGE <= 1;
        				end
        				
 3494388 				if (!VTIM_N && VTIM_N_OLD) begin
 002702 					if (TVMR.VBE) begin
 001666 						VBLANK_ERASE <= 1;
        					end
 003480 					if (VBERASE_PEND) begin
 000888 						VBLANK_ERASE <= 1;
        					end
 004368 					VBERASE_PEND <= 0;
        				end
 3494388 				if (VTIM_N && !VTIM_N_OLD) begin
 004368 					VBLANK_ERASE <= 0;
 004368 					FRAME_ODD <= ~FRAME_ODD;
        				end
        			end
        		end
        	end
        	
~005899 	bit  [15: 0] REG_DO;
 15286285 	always_comb begin
 15286285 		case ({A[5:1],1'b0})
 807905 			5'h10: REG_DO <= EDSR & EDSR_MASK;
 837785 			5'h12: REG_DO <= LOPR & LOPR_MASK;
 799009 			5'h14: REG_DO <= COPR & COPR_MASK;
 1309606 			5'h16: REG_DO <= MODR & MODR_MASK;
 11531980 			default: REG_DO <= '0;
        		endcase
        	end
 16961431 	assign DO = REG_SEL ? REG_DO : FBRAM_SEL ? FB_DRAW_Q : MEM_DO;
        	assign RDY_N = ~CPU_VRAM_RRDY | ~CPU_VRAM_WRDY | ~CPU_FB_RRDY | ~CPU_FB_WRDY | ~READY;
        	
 9367317 	function automatic [16:0] SHQ(input [16:0] C, input B);
 9367317 		SHQ = {C[15:0],B};
        	endfunction
 15286165 	always @(posedge CLK) if (DIV_RUN) begin
 3122892 		case (CMD_ST)
 964376 			CMDS_GRD_CALC_LEFT: begin
 964376 				LS_Q_R <= SHQ(LS_Q_R,DIV_R_QB); LS_Q_G <= SHQ(LS_Q_G,DIV_G_QB); LS_Q_B <= SHQ(LS_Q_B,DIV_B_QB);
        			end
 964168 			CMDS_GRD_CALC_RIGHT: begin
 964168 				RS_Q_R <= SHQ(RS_Q_R,DIV_R_QB); RS_Q_G <= SHQ(RS_Q_G,DIV_G_QB); RS_Q_B <= SHQ(RS_Q_B,DIV_B_QB);
        			end
 1193895 			CMDS_GRD_CALC_LINE: begin
 1193895 				NS_Q_R <= SHQ(NS_Q_R,DIV_R_QB); NS_Q_G <= SHQ(NS_Q_G,DIV_G_QB); NS_Q_B <= SHQ(NS_Q_B,DIV_B_QB);
        			end
 000453 			default:;
        		endcase
        	end
        	
        endmodule
        
        
        module VDP1_PAT_FIFO #(parameter l = 1) (
 15286165 	input	         CLK,
 062771 	input          RST,
        	
 051472 	input	 [15: 0] DATA,
 433608 	input	         WRREQ,
 210390 	input	         RDREQ,
 055381 	output [15: 0] Q,
 131317 	output	      EMPTY,
 077999 	output	      FULL
        );
        
 052469 	wire [15: 0] sub_wire0;
 079381 	bit  [l-1: 0] RADDR;
 135202 	bit  [l-1: 0] WADDR;
 207854 	bit  [l: 0] AMOUNT;
 062761 	bit         NULL;
 15286165 	always @(posedge CLK) begin
 11646415 		if (RST) begin
 11646415 			AMOUNT <= '0;
 11646415 			RADDR <= '0;
 11646415 			WADDR <= '0;
 11646415 			NULL <= 1;
        		end
 3639750 		else begin
 3424970 			if (WRREQ && !AMOUNT[l]) begin
 214780 				WADDR <= WADDR + 1'd1;
 214780 				NULL <= 0;
        			end
 3487399 			if (RDREQ && AMOUNT) begin
 152351 				RADDR <= RADDR + 1'd1;
        			end
        			
 209315 			if (WRREQ && !RDREQ && !AMOUNT[l]) begin
 209315 				AMOUNT <= AMOUNT + 1'd1;
 3283549 			end else if (!WRREQ && RDREQ && AMOUNT) begin
 146886 				AMOUNT <= AMOUNT - 1'd1;
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
        		
 12332144 	assign Q = NULL ? '0 : sub_wire0;
        
        endmodule
        
        module VDP1_COL_TBL (
 15286165 	input         CLK,
 437013 	input	  [3:0] WRADDR,
 032791 	input	 [15:0] DATA,
 001568 	input	        WREN,
 033376 	input	  [3:0] RDADDR,
 028666 	output [15:0] Q
        );
        
 028666 	wire [15:0] sub_wire0;
        
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
        
        // Serial divider for the gouraud steps: (A << 12) / DVSR, A = 5-bit colour difference, 18 iterations of the
        // original 29-bit non-restoring divider. Only the 12-bit partial remainder is kept here; the dividend bits are
        // A[4:0] followed by zeros, and the quotient bits leave through QBIT (shifted into the destination register).
        module VDP1_DIV_STEP
        (
 45858495 	input         CLK,
 159372 	input  [ 4:0] A,
~021774 	input  [11:0] DVSR,
 520479 	input         START,
 774507 	output        QBIT,
 520482 	output        RUN
        );
 1254819 	bit  [11: 0] R;
 1251752 	bit          T;
 4684338 	bit  [ 4: 0] STEP;
 520482 	bit          DONE;
 38321494 	wire [11: 0] SUM = T ? R - DVSR : R + DVSR;
 43256433 	wire         DB = STEP < 5'd5 ? A[3'd4 - STEP[2:0]] : 1'b0;
        	assign QBIT = ~(SUM[11]^DVSR[11]);
        	assign RUN = !DONE && !START;
 45858495 	always @(posedge CLK) begin
 520479 		if (START) begin
 520479 			R <= '0;
 520479 			T <= ~DVSR[11];
 520479 			STEP <= '0;
 520479 			DONE <= 0;
        		end
 35969340 		else if (!DONE) begin
 9368676 			R <= {SUM[10:0],DB};
 9368676 			T <= QBIT;
 9368676 			STEP <= STEP + 5'd1;
 8848194 			if (STEP == 5'd17) DONE <= 1;
        		end
        	end
        endmodule
        
