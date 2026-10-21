//      // verilator_coverage annotation
        module VDP1 (
 9876514 	input              CLK,
 000080 	input              RST_N,
 4938290 	input              CE_R,
 4938290 	input              CE_F,
%000001 	input              EN,
        	
%000001 	input              RES_N,
        
 032343 	input      [15: 0] DI,
 014224 	output     [15: 0] DO,
 029779 	input              CS_N,
 029779 	input              AD_N,
 013191 	input              DTEN_N,
 039962 	input              REQ_N,
 043790 	output             RDY_N,
        	
 000062 	output             IRQ_N,
        	
 2252222 	input              DCE_R,
 2252281 	input              DCE_F,
 045017 	input              HTIM_N,
 002853 	input              VTIM_N,
 2470411 	input      [15: 0] VOUTI,
 258984 	output     [15: 0] VOUTO,
        	
 311142 	output reg [18: 1] VRAM_A,
 003571 	output reg [15: 0] VRAM_D,
 020187 	input      [15: 0] VRAM_Q,
 014089 	output reg [ 1: 0] VRAM_WE,
 752629 	output reg         VRAM_RD,
~003001 	output reg [ 8: 0] VRAM_BLEN,
 766719 	input              VRAM_RDY,
        	
 609527 	output     [17: 1] FB0_A,
 012430 	output     [15: 0] FB0_D,
 134044 	input      [15: 0] FB0_Q,
 681104 	output     [ 1: 0] FB0_WE,
 085145 	output             FB0_RD,
        	
 544892 	output     [17: 1] FB1_A,
 013525 	output     [15: 0] FB1_D,
 142081 	input      [15: 0] FB1_Q,
 542451 	output     [ 1: 0] FB1_WE,
 108371 	output             FB1_RD,
 265694 	input              FB_RDY,
 000016 	output             FB_MODE3,
        	
 000016 	input              FAST,
 000020 	input              BLUR_MESH,
        	
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
        	
~000033 	TVMR_t       TVMR;
~000068 	FBCR_t       FBCR;
~000065 	PTMR_t       PTMR;
 000035 	EWDR_t       EWDR;
~000046 	EWLR_t       EWLR;
~000047 	EWRR_t       EWRR;
~000061 	EDSR_t       EDSR;
~000363 	LOPR_t       LOPR;
~016257 	COPR_t       COPR;
~000040 	MODR_t       MODR;
 000021 	bit          DIE,DIL;
        
 000185 	bit          FRAME_START;
 000033 	bit          FRAME_ERASE;
 001723 	bit          VBLANK_ERASE;
 001014 	bit          FRAME_ERASE_EN;
 001713 	bit          VBLANK_ERASE_EN;
%000000 	bit          OUT_EN;
 000011 	bit          DRAW_TERMINATE;
 000061 	bit          DRAW_END;
 001406 	bit          FRAME_ODD;
        	
 015172 	bit  [15: 0] CLT_Q;
        	
        	//Frame buffers
 000834 	bit          FB_SEL;
 093015 	bit  [17: 1] FB_A;
 025086 	bit  [15: 0] FB_D;
 261608 	bit  [ 1: 0] FB_WE;
 193514 	bit          FB_RD;
 078367 	bit  [15: 0] FB_DRAW_Q;
 481985 	bit          FB_DRAW_WAIT;
 841593 	bit  [17: 1] FB_DISP_A;
%000000 	bit          FB_DISP_WE;
 201226 	bit  [15: 0] FB_DISP_Q;
 1256295 	bit  [17: 1] FB_ERASE_A;
        //	bit          FRAME;
 961947 	wire         FB_ERASE_WE = (FRAME_ERASE_EN & DCE_R) | (VBLANK_ERASE_EN & CE_R);
 8028366 	wire [17: 1] FB_OUT_A = VBLANK_ERASE_EN ? FB_ERASE_A : FB_DISP_A;
        	
 5074749 	assign FB0_A  = FB_SEL ? FB_A             : FB_OUT_A;
 5074749 	assign FB1_A  = FB_SEL ? FB_OUT_A         : FB_A;
 5028905 	assign FB0_D  = FB_SEL ? FB_D             : EWDR;
 5028905 	assign FB1_D  = FB_SEL ? EWDR             : FB_D;
 10057807 	assign FB0_WE = FB_SEL ? FB_WE /*& CE_R*/ : {2{FB_ERASE_WE}};
 10057807 	assign FB1_WE = FB_SEL ? {2{FB_ERASE_WE}} : FB_WE /*& CE_R*/;
 5028905 	assign FB0_RD = FB_SEL ? FB_RD            : 1'b0;
 5028905 	assign FB1_RD = FB_SEL ? 1'b0             : FB_RD;
        	
 5607100 	assign FB_DRAW_Q = FB_SEL ? FB0_Q : FB1_Q;
 5607100 	assign FB_DISP_Q = FB_SEL ? FB1_Q : FB0_Q;
        	
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
~354411 	CMDState_t CMD_ST;
~016294 	bit  [18: 5] CMD_ADDR_H;   // command tables are 16-word aligned: address bits [4:1] are always 0
~016294 	wire [18: 1] CMD_ADDR = {CMD_ADDR_H,4'b0000};
 032637 	bit          CMD_READ;
 065227 	bit          CMD_READ_DONE;
~002130 	bit  [18: 1] SPR_ADDR;
 037644 	bit          SPR_READ;
 031514 	bit  [15: 0] SPR_DATA;
 101079 	bit          SPR_DATA_READY;
 000050 	bit          CLT_READ;
 000100 	bit          CLT_READ_DONE;
 000306 	bit          GRD_READ;
 000610 	bit          GRD_READ_DONE;
 000089 	bit  [15: 0] GRD_TBL[4];
        	
~000487 	CMDTBL_t     CMD;
~000054 	Clip_t       SYS_CLIP;
~000094 	Clip_t       USR_CLIP;
 000045 	Coord_t      LOC_COORD;
 000197 	Vertex_t     VERTA,VERTB,VERTC,VERTD;
 031514 	Pattern_t    PAT;
 103914 	bit  [ 8: 0] TEXT_X;
~002923 	bit  [ 7: 0] TEXT_Y;
~001931 	bit  [16: 3] SPR_OFFSY;
~000083 	bit  [11: 0] POLY_LSX;
~000109 	bit  [11: 0] POLY_LSY;
~000084 	bit  [11: 0] POLY_RSX;
~000106 	bit  [11: 0] POLY_RSY;
 000080 	bit          POLY_LDIRX;
%000001 	bit          POLY_LDIRY;
 000095 	bit          POLY_RDIRX;
 000015 	bit          POLY_RDIRY;
 000197 	bit  [ 1: 0] POLY_S;
        	
 264769 	Coord_t      LINE_VERTA;
 006691 	Coord_t      LINE_VERTB;
 006988 	Vertex_t     LEFT_VERT;
 006689 	Vertex_t     RIGHT_VERT;
%000000 	Vertex_t     BOTTOM_VERT;
 000250 	bit          LINE_DIRX;
 000256 	bit          LINE_DIRY;
 000092 	bit          LINE_CLIP;
 000274 	bit          LINE_S;
~002477 	bit  [11: 0] ROW_WIDTH;
~000109 	bit  [11: 0] COL_HEIGHT,LEFT_HEIGHT,RIGHT_HEIGHT;
%000000 	bit          COL_DIRY;
%000000 	bit          SPR_COL_ENLARGE;
 003608 	bit          EC_FIND;
 143490 	bit  [11: 0] AA_X;
 069800 	bit  [11: 0] AA_Y;
 085052 	bit          AA;
 000352 	bit  [11: 0] AA_X_INC;
 000352 	bit  [11: 0] AA_Y_INC;
~000137 	bit  [ 1: 0] DIR;
 000016 	bit          HSS_EN;
 654853 	bit          DRAW_WAIT;
 608690 	bit          DRAW_ENABLE;
        	
 089552 	bit          LINE_DRAW_STEP;
 085062 	bit          LINE_AA_STEP;
 049045 	bit          COL_DRAW_STEP;
 071221 	bit          TEXT_X_READ_STEP;
~005194 	bit          TEXTY_READ_STEP, TEXT_Y_READ_STEP;
 013849 	bit          LEFT_COL_X_STEP, LEFT_COL_Y_STEP;
 013204 	bit          RIGHT_COL_X_STEP,RIGHT_COL_Y_STEP;
 1057491 	bit  [ 4: 0] GRD_CALC_STATE;
        	
~000281 	bit  [ 8: 0] ORIG_WIDTH;
~000273 	bit  [ 7: 0] ORIG_HEIGHT;
 000396 	wire         TEXT_DIRX = (CMD.CMDCTRL.DIR[0] ^ DIR[0]);
 000253 	wire         TEXT_DIRY = (CMD.CMDCTRL.DIR[1] ^ DIR[1]);
 007101 	wire         IS_PAT_EC = (CMD.CMDCTRL.COMM <= 4'h3 && !CMD.CMDPMOD.ECD && PAT.EC && !HSS_EN);
        	
 040217 	bit  [12: 0] COL_D;
~049138 	bit  [13: 0] NEXT_LEFT_COL_ERROR_X, NEXT_LEFT_COL_ERROR_Y, LEFT_COL_ERROR_X, LEFT_COL_ERROR_Y;
~049138 	bit  [13: 0] NEXT_RIGHT_COL_ERROR_X, NEXT_RIGHT_COL_ERROR_Y, RIGHT_COL_ERROR_X, RIGHT_COL_ERROR_Y;
~049138 	bit  [13: 0] NEXT_LEFT_D_ERROR, LEFT_D_ERROR;
~049138 	bit  [13: 0] NEXT_RIGHT_D_ERROR, RIGHT_D_ERROR;
        	// The edge-step increments and adjusts are fixed per command and equal to (twice) the edge extents captured in
        	// POLY_*S?, LEFT/RIGHT_HEIGHT and COL_HEIGHT, which are written only by the edge setup states; they are not stored again.
~000083 	wire [13: 0] LEFT_COL_ERROR_X_INC  = {1'b0,POLY_LSX,1'b0};
~000109 	wire [13: 0] LEFT_COL_ERROR_Y_INC  = {1'b0,POLY_LSY,1'b0};
~000084 	wire [13: 0] RIGHT_COL_ERROR_X_INC = {1'b0,POLY_RSX,1'b0};
~000106 	wire [13: 0] RIGHT_COL_ERROR_Y_INC = {1'b0,POLY_RSY,1'b0};
~000109 	wire [13: 0] LEFT_D_ERROR_INC      = {1'b0,LEFT_HEIGHT,1'b0};
~000107 	wire [13: 0] RIGHT_D_ERROR_INC     = {1'b0,RIGHT_HEIGHT,1'b0};
~000099 	wire [13: 0] LEFT_COL_ERROR_ADJ    = -{1'b0,LEFT_HEIGHT,1'b0};
~000097 	wire [13: 0] RIGHT_COL_ERROR_ADJ   = -{1'b0,RIGHT_HEIGHT,1'b0};
~000107 	wire [13: 0] COL_D_ERROR_ADJ       = -{1'b0,COL_HEIGHT,1'b0};
~000095 	bit          LEFT_D_ERROR_CMP, RIGHT_D_ERROR_CMP, LEFT_COL_ERROR_X_CMP, LEFT_COL_ERROR_Y_CMP, RIGHT_COL_ERROR_X_CMP, RIGHT_COL_ERROR_Y_CMP;
        					 
~111471 	bit  [13: 0] NEXT_LINE_ERROR, LINE_ERROR, LINE_ERROR_INC, LINE_ERROR_ADJ;
        	// Texture error set-up shared by the scaled-sprite and line row set-up states.
        	// W = texture width, R = row width in pixels; HSS half-size mode only applies below the texture width.
 000396 	wire        TX_F    = TEXT_DIRX && ORIG_WIDTH != 9'd1;
 000054 	wire        TX_HSS  = ROW_WIDTH < {3'b000,ORIG_WIDTH} && CMD.CMDPMOD.HSS && !CMD.CMDCTRL.COMM[2];
~9730093 	wire [ 8: 0] TX_X   = TX_HSS ? {1'b0,ORIG_WIDTH[8:1]} : ORIG_WIDTH;
 000320 	wire        TX_SMALL = ROW_WIDTH < {3'b000,TX_X};
~002477 	wire [13: 0] TX_R2  = {1'b0,ROW_WIDTH,1'b0};
~002477 	wire [13: 0] TX_RM1 = {2'b00,ROW_WIDTH} - 14'd1;
~9730093 	wire [ 8: 0] TX_XM1 = TX_HSS ? {1'b0,ORIG_WIDTH[8:1] - 8'd1} : ORIG_WIDTH - 9'd1;
~8925211 	wire [13: 0] TX_INC = TX_SMALL ? (TX_HSS ? {5'b00000,ORIG_WIDTH} : {4'b0000,ORIG_WIDTH,1'b0}) : {4'b0000,TX_XM1,1'b0};
~8925211 	wire [13: 0] TX_ADJ = TX_SMALL ? TX_R2 : {TX_RM1[12:0],1'b0};
 8925211 	wire [13: 0] TX_ERR = TX_SMALL ? {5'b00000,TX_X} - TX_R2 - {13'd0,TX_F} : {13'd0,TX_F} - {2'b00,ROW_WIDTH};
        
        	// Row texture error set-up (polygon set-up state): H = rows in the polygon, OH = texture height.
~000099 	wire [13: 0] TY_H1    = {2'b00,COL_HEIGHT} + 14'd1;
 000255 	wire        TY_F     = TEXT_DIRY && ORIG_HEIGHT != 8'd1;
 000177 	wire        TY_SMALL = TY_H1 <= {6'b000000,ORIG_HEIGHT - 8'd1};
~9388478 	wire [13: 0] TY_INC   = TY_SMALL ? {5'b00000,ORIG_HEIGHT,1'b0} : {5'b00000,ORIG_HEIGHT - 8'd1,1'b0};
~9388478 	wire [13: 0] TY_ADJ   = TY_SMALL ? {TY_H1[12:0],1'b0} : {1'b0,COL_HEIGHT,1'b0};
 9388478 	wire [13: 0] TY_ERR   = TY_SMALL ? {6'b000000,ORIG_HEIGHT} - {TY_H1[12:0],1'b0} - {13'd0,TY_F} : {13'd0,TY_F} - TY_H1;
        
 116922 	bit  [13: 0] NEXT_TEXT_ERROR, TEXT_ERROR;
        	// Increment and adjust of the row texture error follow from the row/texture sizes, which stay fixed while a row is drawn.
~000436 	wire [13: 0] TEXT_ERROR_INC = TX_INC;
~002612 	wire [13: 0] TEXT_ERROR_ADJ = TX_ADJ;
 037614 	bit  [13: 0] NEXT_TEXT_Y_ERROR, TEXT_Y_ERROR;
~000347 	wire [13: 0] TEXT_Y_ERROR_INC = TY_INC;
~000206 	wire [13: 0] TEXT_Y_ERROR_ADJ = TY_ADJ;
 9876594 	always_comb begin
 9876594 		bit COL_STEP;
 9876594 		bit  [13: 0] TEXT_ERROR_ADJUSTED,LINE_ERROR_ICREMENTED;
 9876594 		bit  [13: 0] TEXT_Y_ERROR_ADJUSTED;
 9876594 		bit  [13: 0] LEFT_D_ERROR_ICREMENTED,LEFT_COL_ERROR_X_ICREMENTED,LEFT_COL_ERROR_Y_ICREMENTED;
 9876594 		bit  [13: 0] RIGHT_D_ERROR_ICREMENTED,RIGHT_COL_ERROR_X_ICREMENTED,RIGHT_COL_ERROR_Y_ICREMENTED;
        		
 9876594 		LINE_DRAW_STEP = 0;
 9876594 		LINE_AA_STEP = 0;
 9876594 		COL_DRAW_STEP = 0;
 9876594 		TEXT_X_READ_STEP = 0;
 9876594 		TEXT_Y_READ_STEP = 0;
 9876594 		{LEFT_COL_X_STEP,LEFT_COL_Y_STEP} = '0;
 9876594 		{RIGHT_COL_X_STEP,RIGHT_COL_Y_STEP} = '0;
        		
        		
 9876594 		NEXT_TEXT_ERROR = '0;
 9876594 		NEXT_LINE_ERROR = '0;
 9876594 		NEXT_TEXT_Y_ERROR = '0;
 9876594 		NEXT_LEFT_D_ERROR = '0;
 9876594 		NEXT_LEFT_COL_ERROR_X = '0;
 9876594 		NEXT_LEFT_COL_ERROR_Y = '0;
 9876594 		NEXT_RIGHT_D_ERROR = '0;
 9876594 		NEXT_RIGHT_COL_ERROR_X = '0;
 9876594 		NEXT_RIGHT_COL_ERROR_Y = '0;
 9876594 		case (CMD_ST) 
 601181 			CMDS_NSPR_DRAW: begin		
 601181 				LINE_DRAW_STEP = 1;		
 601181 				TEXT_X_READ_STEP = 1;
        			end
        			
        			CMDS_PRE_DRAW,
        			CMDS_SSPR_DRAW,
 1938176 			CMDS_LINE_DRAW: begin
 980275 				if (CMD.CMDCTRL.COMM >= 4'h4) begin
 957901 					LINE_DRAW_STEP = 1;
 957901 					TEXT_X_READ_STEP = 0;
 980275 				end else begin
 980275 					TEXT_ERROR_ADJUSTED = $signed(TEXT_ERROR) - (TEXT_ERROR[13] ? 14'sd0 : $signed(TEXT_ERROR_ADJ));
 980275 					LINE_DRAW_STEP = TEXT_ERROR_ADJUSTED[13];
 980275 					NEXT_TEXT_ERROR = $signed(TEXT_ERROR_ADJUSTED) + (LINE_DRAW_STEP ? $signed(TEXT_ERROR_INC) : 14'sd0);
        					
 597219 					if (!NEXT_TEXT_ERROR[13]) begin
 383056 						TEXT_X_READ_STEP = 1;
        					end
        				end
        					
 1381687 				if (LINE_DRAW_STEP && CMD_ST == CMDS_LINE_DRAW) begin
 1381687 					LINE_ERROR_ICREMENTED = LINE_ERROR + LINE_ERROR_INC;
 1381687 					LINE_AA_STEP = $signed(LINE_ERROR_ICREMENTED) >= 14'sd1;
 1381687 					NEXT_LINE_ERROR = LINE_ERROR_ICREMENTED + (LINE_AA_STEP ? LINE_ERROR_ADJ : 14'd0);
        				end
        			end
        			
        			CMDS_AA_DRAW,
 357085 			CMDS_LINE_END: begin
 357085 				LINE_DRAW_STEP = AA;
        			end
        			
 049567 			CMDS_ROW_DRAW: begin
 043037 				if (CMD.CMDCTRL.COMM >= 4'h4) begin
 006530 					COL_DRAW_STEP = 1;
 043037 				end else begin
 043037 					TEXT_Y_ERROR_ADJUSTED = $signed(TEXT_Y_ERROR) - (TEXT_Y_ERROR[13] ? 14'sd0 : $signed(TEXT_Y_ERROR_ADJ));
 043037 					COL_DRAW_STEP = TEXT_Y_ERROR_ADJUSTED[13];
 043037 					NEXT_TEXT_Y_ERROR = $signed(TEXT_Y_ERROR_ADJUSTED) + (COL_DRAW_STEP ? $signed(TEXT_Y_ERROR_INC) : 14'sd0);
 043037 					TEXT_Y_READ_STEP = !TEXT_Y_ERROR[13];
        				end
        			end
        			
 049138 			CMDS_LINE_NEXT: begin
        				// Error accumulators: add the increment, subtract the extent when the compare hits (operand gating, one adder).
 049138 				LEFT_D_ERROR_ICREMENTED = LEFT_D_ERROR + LEFT_D_ERROR_INC;
 035226 				if ($signed(LEFT_D_ERROR_ICREMENTED) >= $signed({14{LEFT_D_ERROR_CMP}})) begin
 013912 					NEXT_LEFT_D_ERROR = LEFT_D_ERROR_ICREMENTED + COL_D_ERROR_ADJ;
        					
 013912 					LEFT_COL_ERROR_X_ICREMENTED = LEFT_COL_ERROR_X + LEFT_COL_ERROR_X_INC;
 013912 					LEFT_COL_X_STEP = $signed(LEFT_COL_ERROR_X_ICREMENTED) >= $signed({14{LEFT_COL_ERROR_X_CMP}});
 013912 					NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X_ICREMENTED + (LEFT_COL_X_STEP ? LEFT_COL_ERROR_ADJ : 14'd0);
        					
 013912 					LEFT_COL_ERROR_Y_ICREMENTED = LEFT_COL_ERROR_Y + LEFT_COL_ERROR_Y_INC;
 013912 					LEFT_COL_Y_STEP = $signed(LEFT_COL_ERROR_Y_ICREMENTED) >= $signed({14{LEFT_COL_ERROR_Y_CMP}});
 013912 					NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y_ICREMENTED + (LEFT_COL_Y_STEP ? LEFT_COL_ERROR_ADJ : 14'd0);
 035226 				end else begin
 035226 					NEXT_LEFT_D_ERROR = LEFT_D_ERROR_ICREMENTED;
 035226 					NEXT_LEFT_COL_ERROR_X = LEFT_COL_ERROR_X;
 035226 					NEXT_LEFT_COL_ERROR_Y = LEFT_COL_ERROR_Y;
        				end
        				
 049138 				RIGHT_D_ERROR_ICREMENTED = RIGHT_D_ERROR + RIGHT_D_ERROR_INC;
 034331 				if ($signed(RIGHT_D_ERROR_ICREMENTED) >= $signed({14{RIGHT_D_ERROR_CMP}})) begin
 014807 					NEXT_RIGHT_D_ERROR = RIGHT_D_ERROR_ICREMENTED + COL_D_ERROR_ADJ;
        					
 014807 					RIGHT_COL_ERROR_X_ICREMENTED = RIGHT_COL_ERROR_X + RIGHT_COL_ERROR_X_INC;
 014807 					RIGHT_COL_X_STEP = $signed(RIGHT_COL_ERROR_X_ICREMENTED) >= $signed({14{RIGHT_COL_ERROR_X_CMP}});
 014807 					NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X_ICREMENTED + (RIGHT_COL_X_STEP ? RIGHT_COL_ERROR_ADJ : 14'd0);
        					
 014807 					RIGHT_COL_ERROR_Y_ICREMENTED = RIGHT_COL_ERROR_Y + RIGHT_COL_ERROR_Y_INC;
 014807 					RIGHT_COL_Y_STEP = $signed(RIGHT_COL_ERROR_Y_ICREMENTED) >= $signed({14{RIGHT_COL_ERROR_Y_CMP}});
 014807 					NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y_ICREMENTED + (RIGHT_COL_Y_STEP ? RIGHT_COL_ERROR_ADJ : 14'd0);
 034331 				end else begin
 034331 					NEXT_RIGHT_D_ERROR = RIGHT_D_ERROR_ICREMENTED;
 034331 					NEXT_RIGHT_COL_ERROR_X = RIGHT_COL_ERROR_X;
 034331 					NEXT_RIGHT_COL_ERROR_Y = RIGHT_COL_ERROR_Y;
        				end
        			end
        
 6881447 			default:;
        		endcase
        	end
        	
        
 214597 	bit  [16: 0] DIV_R_Q,DIV_G_Q,DIV_B_Q;//5.12
 105763 	wire DIV_START = (CMD_ST == CMDS_GRD_CALC_LEFT || CMD_ST == CMDS_GRD_CALC_RIGHT || CMD_ST == CMDS_GRD_CALC_LINE) && GRD_CALC_STATE == 0;
        	
 051152 	RGB_t        GRD_CALC_1,GRD_CALC_2;
~005840 	wire [11: 0] GRD_CALC_S;
 9876594 	always_comb begin
 9876594 		case (CMD_ST)
 671422 			CMDS_GRD_CALC_LEFT:  begin GRD_CALC_1 = GHCOLOR_A; GRD_CALC_2 = GHCOLOR_D; end
 671328 			CMDS_GRD_CALC_RIGHT: begin GRD_CALC_1 = GHCOLOR_B; GRD_CALC_2 = GHCOLOR_C; end
 8533844 			default:             begin GRD_CALC_1 = RGBFtoI(LEFT_GHCOLOR); GRD_CALC_2 = RGBFtoI(RIGHT_GHCOLOR); end
        		endcase
        	end
 8998611 	assign GRD_CALC_S = CMD_ST == CMDS_GRD_CALC_LINE ? ROW_WIDTH : COL_HEIGHT + 12'd1;
 6562385 	wire [ 5: 0] DIV_A_R = GRD_CALC_2.R >= GRD_CALC_1.R ? {1'b0,GRD_CALC_2.R - GRD_CALC_1.R} : {1'b1,GRD_CALC_1.R - GRD_CALC_2.R};
 5270941 	wire [ 5: 0] DIV_A_G = GRD_CALC_2.G >= GRD_CALC_1.G ? {1'b0,GRD_CALC_2.G - GRD_CALC_1.G} : {1'b1,GRD_CALC_1.G - GRD_CALC_2.G};
 5790827 	wire [ 5: 0] DIV_A_B = GRD_CALC_2.B >= GRD_CALC_1.B ? {1'b0,GRD_CALC_2.B - GRD_CALC_1.B} : {1'b1,GRD_CALC_1.B - GRD_CALC_2.B};
        					
        	// The dividers hold their quotient from step 18 until the next START and GRD_CALC_1/2 do not change while a
        	// calculation runs, so the step is read straight from the dividers when it is stored (state 20).
 214597 	RGBFP_t      GRD_CALC_STEP;
        	assign GRD_CALC_STEP = {{DIV_A_B[5],DIV_B_Q},{DIV_A_G[5],DIV_G_Q},{DIV_A_R[5],DIV_R_Q}};
        	
        	VDP1_DIV_24_12 GRD_DIV_R(CLK, {DIV_A_R[4:0],12'b000000000000}, GRD_CALC_S, DIV_START, DIV_R_Q);
        	VDP1_DIV_24_12 GRD_DIV_G(CLK, {DIV_A_G[4:0],12'b000000000000}, GRD_CALC_S, DIV_START, DIV_G_Q);
        	VDP1_DIV_24_12 GRD_DIV_B(CLK, {DIV_A_B[4:0],12'b000000000000}, GRD_CALC_S, DIV_START, DIV_B_Q);
        	
 000089 	RGB_t        GHCOLOR_A,GHCOLOR_B,GHCOLOR_C,GHCOLOR_D;
        	assign {GHCOLOR_A,GHCOLOR_B,GHCOLOR_C,GHCOLOR_D} = {GRD_TBL[0][14:0],GRD_TBL[1][14:0],GRD_TBL[2][14:0],GRD_TBL[3][14:0]};
~131009 	RGBFP_t      LEFT_GHCOLOR,RIGHT_GHCOLOR,LINE_GHCOLOR;
~001303 	RGBFP_t      LEFT_GHCOLOR_STEP,RIGHT_GHCOLOR_STEP,LINE_GHCOLOR_STEP;
        	
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
 000235 	wire        CLIP_USR = CMD.CMDPMOD.CLIP && !CMD.CMDPMOD.CMOD;
 000045 	wire [12: 0] LOC_X13 = {LOC_COORD.X[10],LOC_COORD.X};
 000041 	wire [12: 0] LOC_Y13 = {LOC_COORD.Y[10],LOC_COORD.Y};
 000129 	wire [12: 0] SYS_CLIP_X1 = (CLIP_USR ? {{2{USR_CLIP.X1[10]}},USR_CLIP.X1} : 13'd0) - LOC_X13;
 000147 	wire [12: 0] SYS_CLIP_Y1 = (CLIP_USR ? {{2{USR_CLIP.Y1[10]}},USR_CLIP.Y1} : 13'd0) - LOC_Y13;
~000100 	wire [12: 0] SYS_CLIP_X2 = (CLIP_USR ? {{2{USR_CLIP.X2[10]}},USR_CLIP.X2} : {{2{SYS_CLIP.X2[10]}},SYS_CLIP.X2}) - LOC_X13;
~000128 	wire [12: 0] SYS_CLIP_Y2 = (CLIP_USR ? {{2{USR_CLIP.Y2[10]}},USR_CLIP.Y2} : {{2{SYS_CLIP.Y2[10]}},SYS_CLIP.Y2}) - LOC_Y13;
~190008 	bit  [ 8: 0] CMD_DELAY;
~001345 	bit  [ 9: 0] PENALTY_CNT;
 9876593 	always @(posedge CLK or negedge RST_N) begin
        //	   bit         FRAME_START_PEND;
 9876593 		bit [18: 5] NEXT_ADDR_H;
 9876593 		bit [18: 5] CMD_RET_ADDR_H;
 9876593 		bit         CMD_SUB_RUN;
 9876593 		bit [12: 0] NEW_LINE_SX;
 9876593 		bit [12: 0] NEW_LINE_SY;
 9876593 		bit [11: 0] NEW_LINE_ASX;
 9876593 		bit [11: 0] NEW_LINE_ASY;
 9876593 		bit [12: 0] NEW_POLY_LSX;
 9876593 		bit [12: 0] NEW_POLY_LSY;
 9876593 		bit [12: 0] NEW_POLY_RSX;
 9876593 		bit [12: 0] NEW_POLY_RSY;
 9876593 		bit         LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR;
 9876593 		bit         AA_DRAW;
 9876593 		bit         LINE_SWAP;
 9876593 		bit         CLP_EN,CLP_C1,CLP_C2,CLP_C3,CLP_C4,CLP_C5,CLP_C6;
 9876593 		bit         LN_Y_MAJOR;
 9876593 		bit [11: 0] LN_MAJ,LN_MIN;
 9876593 		bit [16: 3] SPR_OFFSY_NEXT;
 9876593 		bit         CLIP_H;
 9876593 		bit [12: 0] LINE_DIFF_LEFT_CLIPX1,LINE_DIFF_LEFT_CLIPX2,LINE_DIFF_RIGHT_CLIPX1,LINE_DIFF_RIGHT_CLIPX2;
 9876593 		bit         LINE_EQ_LEFT_CLIPX1,LINE_EQ_LEFT_CLIPX2,LINE_EQ_RIGHT_CLIPX1,LINE_EQ_RIGHT_CLIPX2;
 9876593 		bit         LINE_GT_LEFT_CLIPX1,LINE_GT_LEFT_CLIPX2,LINE_GT_RIGHT_CLIPX1,LINE_GT_RIGHT_CLIPX2;
 9876593 		bit         LINE_LT_LEFT_CLIPX1,LINE_LT_LEFT_CLIPX2,LINE_LT_RIGHT_CLIPX1,LINE_LT_RIGHT_CLIPX2;
 9876593 		bit         LINE_LEFT_OVER,LINE_RIGHT_OVER,LINE_TOP_OVER,LINE_BOTTOM_OVER;
 9876593 		bit [ 3: 0] CLIP_DELAY;
        `ifdef DEBUG
        		bit [ 7: 0] DBG_EXT_OLD;
        `endif
        		
 000799 		if (!RST_N) begin
 000799 			CMD_ST <= CMDS_IDLE;
 000799 			CMD_ADDR_H <= '0;
 000799 			CMD_READ <= 0;
 000799 			SPR_READ <= 0;
 000799 			CLT_READ <= 0;
 000799 			GRD_READ <= 0;
 000799 			CMD_SUB_RUN <= 0;
        			
        `ifdef DEBUG
        			CMD_SKIP <= '1;
        			
        			{CMD_SKIP_EN,CMD_PIX_EN,DBG_DRAW_EN} <= '0;
        `endif
 000185 		end else if (FRAME_START) begin
 000185 			CMD_ADDR_H <= '0;
 000185 			CMD_READ <= 1;
 000185 			SPR_READ <= 0;
 000185 			CLT_READ <= 0;
 000185 			GRD_READ <= 0;
 000185 			CMD_SUB_RUN <= 0;
 000185 			CMD_ST <= CMDS_READ;
 000011 		end else if (DRAW_TERMINATE) begin
 000011 			CMD_READ <= 0;
 000011 			SPR_READ <= 0;
 000011 			CLT_READ <= 0;
 000011 			GRD_READ <= 0;
 000011 			CMD_ST <= CMDS_IDLE;
~9875598 		end else if (EN) begin
 9875598 			SPR_OFFSY_NEXT = TEXT_DIRY ? SPR_OFFSY - ORIG_WIDTH[8:3] : SPR_OFFSY + ORIG_WIDTH[8:3];
        			
 9875598 			LINE_DIFF_LEFT_CLIPX1 = $signed(LEFT_VERT.X) - $signed(SYS_CLIP_X1);
 9875598 			LINE_DIFF_LEFT_CLIPX2 = $signed(LEFT_VERT.X) - $signed(SYS_CLIP_X2);
 9875598 			LINE_DIFF_RIGHT_CLIPX1 = $signed(RIGHT_VERT.X) - $signed(SYS_CLIP_X1);
 9875598 			LINE_DIFF_RIGHT_CLIPX2 = $signed(RIGHT_VERT.X) - $signed(SYS_CLIP_X2);
 9875598 			LINE_EQ_LEFT_CLIPX1 = !LINE_DIFF_LEFT_CLIPX1;
 9875598 			LINE_EQ_LEFT_CLIPX2 = !LINE_DIFF_LEFT_CLIPX2;
 9875598 			LINE_EQ_RIGHT_CLIPX1 = !LINE_DIFF_RIGHT_CLIPX1;
 9875598 			LINE_EQ_RIGHT_CLIPX2 = !LINE_DIFF_RIGHT_CLIPX2;
 9875598 			LINE_GT_LEFT_CLIPX1 = ~LINE_DIFF_LEFT_CLIPX1[12];
 9875598 			LINE_GT_LEFT_CLIPX2 = ~LINE_DIFF_LEFT_CLIPX2[12];
 9875598 			LINE_GT_RIGHT_CLIPX1 = ~LINE_DIFF_RIGHT_CLIPX1[12];
 9875598 			LINE_GT_RIGHT_CLIPX2 = ~LINE_DIFF_RIGHT_CLIPX2[12];
 9875598 			LINE_LT_LEFT_CLIPX1 = LINE_DIFF_LEFT_CLIPX1[12];
 9875598 			LINE_LT_LEFT_CLIPX2 = LINE_DIFF_LEFT_CLIPX2[12];
 9875598 			LINE_LT_RIGHT_CLIPX1 = LINE_DIFF_RIGHT_CLIPX1[12];
 9875598 			LINE_LT_RIGHT_CLIPX2 = LINE_DIFF_RIGHT_CLIPX2[12];
        																							  
 9875598 			LINE_LEFT_OVER <= ($signed(LEFT_VERT.X) < $signed(SYS_CLIP_X1) && $signed(RIGHT_VERT.X) < $signed(SYS_CLIP_X1));
 9875598 			LINE_RIGHT_OVER <= ($signed(LEFT_VERT.X) > $signed(SYS_CLIP_X2) && $signed(RIGHT_VERT.X) > $signed(SYS_CLIP_X2));
 9875598 			LINE_TOP_OVER <= ($signed(LEFT_VERT.Y) < $signed(SYS_CLIP_Y1) && $signed(RIGHT_VERT.Y) < $signed(SYS_CLIP_Y1));
 9875598 			LINE_BOTTOM_OVER <= ($signed(LEFT_VERT.Y) > $signed(SYS_CLIP_Y2) && $signed(RIGHT_VERT.Y) > $signed(SYS_CLIP_Y2));
        			
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
        			
 7654894 			if (CMD_ST == CMDS_GRD_CALC_LEFT || CMD_ST == CMDS_GRD_CALC_RIGHT || CMD_ST == CMDS_GRD_CALC_LINE) begin
 2220704 				GRD_CALC_STATE <= GRD_CALC_STATE + 5'd1;
        			end
        									
 4937839 			if (CE_R) DRAW_END <= 0;
 9263242 			if (FBD_ST == FBDS_WRITE) DRAW_ENABLE <= 0;
 9875598 			case (CMD_ST) 
 1059147 				CMDS_IDLE: begin
        `ifdef DEBUG
        					CMD_CURR <= '0;
        `endif
        				end
        					
 2584551 				CMDS_READ: begin
        `ifdef DEBUG
        					DBG_CMD_WAIT_CNT <= DBG_CMD_WAIT_CNT + 1'd1;
        `endif
 2584551 					CMD_READ <= 0;
        					
 2551940 					if (CMD_READ_DONE) begin
        `ifdef DEBUG
        						CMD_CURR <= CMD_CURR + 1'd1;
        						DBG_SKIP <= (CMD_CURR == CMD_SKIP);
        `endif
 032529 						if (!CMD.CMDCTRL.JP[2] && !CMD.CMDCTRL.END 
        `ifdef DEBUG
        						    && (CMD_CURR != CMD_SKIP || !CMD_SKIP_EN)
        `endif
 032529 						                                             ) begin
 032529 							case (CMD.CMDCTRL.COMM) 
 031662 								4'h0: begin	//normal sprite
 031632 									if (CMD.CMDPMOD.CCB[2]) begin
 000030 										GRD_READ <= 1;
 000030 										CMD_DELAY <= 8'd10;
 000030 										CMD_ST <= CMDS_GRD_LOAD;
 031632 									end else begin
 031632 										CMD_DELAY <= 8'd23;
 031632 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        							
 000067 								4'h1: begin	//scaled sprite
 000040 									if (CMD.CMDPMOD.CCB[2]) begin
 000040 										GRD_READ <= 1;
 000040 										CMD_DELAY <= 8'd10;
 000040 										CMD_ST <= CMDS_GRD_LOAD;
 000027 									end else begin
 000027 										CMD_DELAY <= 8'd23;
 000027 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
        								4'h2,
 000116 								4'h3: begin	//distored sprite
 000063 									if (CMD.CMDPMOD.CCB[2]) begin
 000063 										GRD_READ <= 1;
 000063 										CMD_DELAY <= 8'd10;
 000063 										CMD_ST <= CMDS_GRD_LOAD;
 000053 									end else begin
 000053 										CMD_DELAY <= 8'd23;
 000053 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
        								4'h4,			//polygon
        								4'h5,
 000243 								4'h7: begin	//polyline
 000143 									if (CMD.CMDPMOD.CCB[2]) begin
 000143 										GRD_READ <= 1;
 000143 										CMD_DELAY <= 8'd0;
 000143 										CMD_ST <= CMDS_GRD_LOAD;
 000100 									end else begin
 000100 										CMD_DELAY <= 8'd0;
 000100 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        								
 000064 								4'h6: begin	//line
 000034 									if (CMD.CMDPMOD.CCB[2]) begin
 000030 										GRD_READ <= 1;
 000030 										CMD_DELAY <= 8'd0;
 000030 										CMD_ST <= CMDS_GRD_LOAD;
 000034 									end else begin
 000034 										CMD_DELAY <= 8'd0;
 000034 										CMD_ST <= CMDS_EXEC;
        									end
        								end
        							
        								4'h8,
        								4'hB,
        								4'h9,
        								4'hA,
 000377 								4'hB: begin	
 000377 									CMD_DELAY <= 8'd0;
 000377 									CMD_ST <= CMDS_EXEC;
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
        						
 032611 						COPR <= CMD_ADDR[18:3];
        `ifdef DEBUG
        						DBG_CMD_WAIT_CNT <= '0;
        						DBG_CMD_ADDR_ERR <= (CMD_ADDR > 18'h09000);
        `endif
        					end
        				end
        				
 006898 				CMDS_GRD_LOAD: begin
 006898 					GRD_READ <= 0;
 006593 					if (GRD_READ_DONE) begin 
 000305 						CMD_ST <= CMDS_EXEC;
        					end
        				end
        				
 032528 				CMDS_EXEC: begin
 032528 						case (CMD.CMDCTRL.COMM)
        							4'h0,			//normal sprite
        							4'h1,			//scaled sprite
        							4'h2,
 031844 							4'h3: begin	//distored sprite
 031794 								if (CMD.CMDPMOD.CM == 3'b001) begin
 000050 									CLT_READ <= 1;
 000050 									CMD_ST <= CMDS_CLT_LOAD;
 031794 								end else begin
 020967 									if (PENALTY_CNT > CMDS_DELAY) CMD_DELAY <= '0;
 031794 									CMD_ST <= CMDS_DELAY;
        								end
        							end
        							
 000140 							4'h4: begin	//polygon
 000140 								CMD_ST <= CMDS_DELAY;
        							end
        							
        							4'h5,
 000103 							4'h7: begin	//polyline
 000103 								CMD_ST <= CMDS_DELAY;
        							end
        							
 000064 							4'h6: begin	//line
 000064 								CMD_ST <= CMDS_DELAY;
        							end
        							
        							4'h8,
 000111 							4'hB: begin	
 000111 								CMD_ST <= CMDS_END;
        							end
        							
 000130 							4'h9: begin	
 000130 								CMD_ST <= CMDS_END;
        							end
        							
 000136 							4'hA: begin	
 000136 								CMD_ST <= CMDS_END;
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
        				
 004291 				CMDS_CLT_LOAD: begin
 004291 					CLT_READ <= 0;
 004241 					if (CLT_READ_DONE) begin
 000050 						CMD_ST <= CMDS_DELAY;
        					end
        				end
        				
 550836 				CMDS_DELAY: if (CE_R) begin
 280582 					CMD_DELAY <= CMD_DELAY - 1'd1;
 248435 					if (!CMD_DELAY) begin
 032147 						case (CMD.CMDCTRL.COMM) 
 031658 							4'h0: CMD_ST <= CMDS_EDGE_INIT;
 000066 							4'h1: CMD_ST <= CMDS_EDGE_INIT;
        							4'h2,
 000116 							4'h3: CMD_ST <= CMDS_EDGE_INIT;
 000140 							4'h4: CMD_ST <= CMDS_EDGE_INIT;							
        							4'h5,
 000103 							4'h7: CMD_ST <= CMDS_LINE_INIT;							
 000064 							4'h6: CMD_ST <= CMDS_LINE_INIT;
        						endcase
 032147 						CMD_DELAY <= 9'd8;
        					end
        				end
        				
 031980 				CMDS_EDGE_INIT: begin
 031980 					LEFT_VERT <= VERTA;
 031980 					RIGHT_VERT <= VERTB;
 031980 					NEW_POLY_LSX = VERTD.X - VERTA.X;
 031980 					NEW_POLY_LSY = VERTD.Y - VERTA.Y;
 031980 					NEW_POLY_RSX = VERTC.X - VERTB.X;
 031980 					NEW_POLY_RSY = VERTC.Y - VERTB.Y;
        					
 031980 					POLY_LSX <= Abs(NEW_POLY_LSX);
 031980 					POLY_LSY <= Abs(NEW_POLY_LSY);
 031980 					POLY_RSX <= Abs(NEW_POLY_RSX);
 031980 					POLY_RSY <= Abs(NEW_POLY_RSY);
 031980 					POLY_LDIRX <= NEW_POLY_LSX[12];
 031980 					POLY_LDIRY <= NEW_POLY_LSY[12];
 031980 					POLY_RDIRX <= NEW_POLY_RSX[12];
 031980 					POLY_RDIRY <= NEW_POLY_RSY[12];
        					
 031980 					DIR <= '0;
        					
 031980 					CLIP_H <= 0;
 031780 					if (($signed(VERTA.X) < $signed(SYS_CLIP_X1) && $signed(VERTD.X) < $signed(SYS_CLIP_X1)) ||
        					    ($signed(VERTB.X) < $signed(SYS_CLIP_X1) && $signed(VERTC.X) < $signed(SYS_CLIP_X1)) ||
        						 ($signed(VERTA.X) > $signed(SYS_CLIP_X2) && $signed(VERTD.X) > $signed(SYS_CLIP_X2)) ||
 000200 						 ($signed(VERTB.X) > $signed(SYS_CLIP_X2) && $signed(VERTC.X) > $signed(SYS_CLIP_X2))) begin
 000200 						CLIP_H <= ~CMD.CMDPMOD.PCLP;
        					end
        							
 031980 					CMD_ST <= CMDS_POLYGON_CALCE;
        				end
        				
 000167 				CMDS_LINE_INIT: begin
 000167 					LEFT_VERT <= VERTA;
 000167 					RIGHT_VERT <= VERTB;
 000167 					POLY_S <= 2'b00;
 000167 					TEXT_X <= '0;
 000167 					LEFT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 000167 					RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_B);
 000167 					CMD_ST <= CMDS_LINE_CALC;
        				end
        				
 031980 				CMDS_POLYGON_CALCE: begin
 031591 					if (POLY_LSX >= POLY_LSY) begin
 031591 						LEFT_HEIGHT <= POLY_LSX;
 000389 					end else begin
 000389 						LEFT_HEIGHT <= POLY_LSY;
        					end
 031638 					if (POLY_RSX >= POLY_RSY) begin
 031638 						RIGHT_HEIGHT <= POLY_RSX;
 000342 					end else begin
 000342 						RIGHT_HEIGHT <= POLY_RSY;
        					end
        					
 031980 					CMD_ST <= CMDS_POLYGON_CALCH;
        				end
        				
 031980 				CMDS_POLYGON_CALCH: begin
 031854 					if (LEFT_HEIGHT >= RIGHT_HEIGHT) begin
 031854 						COL_HEIGHT <= LEFT_HEIGHT;
 000126 					end else begin
 000126 						COL_HEIGHT <= RIGHT_HEIGHT;
        					end
        					
 031980 					CMD_ST <= CMDS_POLYGON_CALCTY;
        				end
        				
 031976 				CMDS_POLYGON_CALCTY: begin
 031976 					TEXT_Y_ERROR <= TY_ERR;
        					
 031976 					LEFT_COL_ERROR_X <= ~LEFT_HEIGHT;
 031976 					LEFT_COL_ERROR_Y <= ~LEFT_HEIGHT;
 031976 					LEFT_COL_ERROR_X_CMP <= POLY_LDIRY;
 031976 					LEFT_COL_ERROR_Y_CMP <= POLY_LDIRX;
        					
 031976 					LEFT_D_ERROR <= ~COL_HEIGHT;
 031976 					LEFT_D_ERROR_CMP <= POLY_LSY > POLY_LSX ? POLY_LDIRY : POLY_LDIRX;
        					
 031976 					RIGHT_COL_ERROR_X <= ~RIGHT_HEIGHT;
 031976 					RIGHT_COL_ERROR_Y <= ~RIGHT_HEIGHT;
 031976 					RIGHT_COL_ERROR_X_CMP <= POLY_RDIRY;
 031976 					RIGHT_COL_ERROR_Y_CMP <= POLY_RDIRX;
        					
 031976 					RIGHT_D_ERROR <= ~COL_HEIGHT;
 031976 					RIGHT_D_ERROR_CMP <= POLY_RSY > POLY_RSX ? POLY_RDIRY : POLY_RDIRX;
        					
 031976 					COL_D <= COL_HEIGHT;
        					
 031976 					SPR_OFFSY <= TEXT_DIRY ? (ORIG_HEIGHT - 8'd1) * ORIG_WIDTH[8:3] : '0;
 031976 					TEXT_Y <= '0;
 031976 					TEXT_X <= '0;
        					
 031976 					CMD_ST <= CMDS_GRD_CALC_COL;
        				end
        				
 031976 				CMDS_GRD_CALC_COL: begin
 031976 					LEFT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 031976 					RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_B);
        					
 031976 					GRD_CALC_STATE <= '0;
 031976 					CMD_ST <= CMDS_GRD_CALC_LEFT;
        				end
        				
 671416 				CMDS_GRD_CALC_LEFT: begin
 639446 					if (GRD_CALC_STATE == 5'd20) begin
 031970 						GRD_CALC_STATE <= '0;
 031970 						LEFT_GHCOLOR_STEP <= GRD_CALC_STEP;
        						
 031970 						CMD_ST <= CMDS_GRD_CALC_RIGHT;
        					end
        				end
        				
 671322 				CMDS_GRD_CALC_RIGHT: begin
 639358 					if (GRD_CALC_STATE == 5'd20) begin
 031964 						GRD_CALC_STATE <= '0;
 031964 						RIGHT_GHCOLOR_STEP <= GRD_CALC_STEP;
 031964 						CMD_ST <= CMDS_ROW_DRAW;
        					end
        				end
        				
 049566 				CMDS_ROW_DRAW: begin
 043850 					if (TEXT_Y_READ_STEP) begin
 005716 						TEXT_Y <= TEXT_Y + 8'd1;
 005716 						SPR_OFFSY <= SPR_OFFSY_NEXT;
        					end
        					
 049044 					if (COL_DRAW_STEP) begin
 049044 						case (CMD.CMDCTRL.COMM) 
 033595 							4'h0: CMD_ST <= CMDS_NSPR_CALCX;
 004081 							4'h1: CMD_ST <= CMDS_SSPR_CALCX;
 011368 							default: CMD_ST <= CMDS_LINE_CALC;
        						endcase
 000522 					end else begin
 000522 						CMD_ST <= CMDS_ROW_DRAW;
        					end
 049566 					TEXT_Y_ERROR <= NEXT_TEXT_Y_ERROR;
        				end
        				
        				// Row set-up for normal/scaled sprites and lines. A normal sprite never clips horizontally here; only lines
        				// have a vertical direction. The line error values are also written for sprites, where they are never read.
        				CMDS_NSPR_CALCX,
        				CMDS_SSPR_CALCX,
 049210 				CMDS_LINE_CALC: begin
 049210 					NEW_LINE_SX = RIGHT_VERT.X - LEFT_VERT.X;
 049210 					NEW_LINE_SY = RIGHT_VERT.Y - LEFT_VERT.Y;
 049210 					NEW_LINE_ASX = Abs(NEW_LINE_SX);
 049210 					NEW_LINE_ASY = Abs(NEW_LINE_SY);
 049210 					CLP_EN = CLIP_H && CMD_ST != CMDS_NSPR_CALCX;
 049210 					CLP_C1 = LINE_LT_LEFT_CLIPX1 && LINE_GT_RIGHT_CLIPX2 && CLP_EN;
 049210 					CLP_C2 = LINE_GT_LEFT_CLIPX2 && LINE_LT_RIGHT_CLIPX1 && CLP_EN;
 049210 					CLP_C3 = LINE_LT_LEFT_CLIPX1 && (LINE_LT_RIGHT_CLIPX2 || LINE_EQ_RIGHT_CLIPX2) && CLP_EN;
 049210 					CLP_C4 = (LINE_LT_LEFT_CLIPX2 || LINE_EQ_LEFT_CLIPX2) && LINE_GT_RIGHT_CLIPX1 && CLP_EN;
 049210 					CLP_C5 = LINE_GT_LEFT_CLIPX2 && (LINE_GT_RIGHT_CLIPX1 || LINE_EQ_RIGHT_CLIPX1) && CLP_EN;
 049210 					CLP_C6 = (LINE_GT_LEFT_CLIPX1 || LINE_EQ_LEFT_CLIPX1) && LINE_GT_RIGHT_CLIPX2 && CLP_EN;
        					// priority order of the original case list
 000184 					if (CLP_C1 || CLP_C2) begin CLP_C3 = 0; CLP_C4 = 0; CLP_C5 = 0; CLP_C6 = 0; end
 002528 					else if (CLP_C3) begin CLP_C4 = 0; CLP_C5 = 0; CLP_C6 = 0; end
 000251 					else if (CLP_C4) begin CLP_C5 = 0; CLP_C6 = 0; end
 043204 					else if (CLP_C5) begin CLP_C6 = 0; end
 049089 					if (CLP_C1) CLP_C2 = 0;
 049210 					LINE_SWAP = CLP_C3 || CLP_C5;
 049210 					LINE_VERTA.X <= LINE_SWAP ? RIGHT_VERT.X[11:0] : LEFT_VERT.X[11:0];
 049210 					LINE_VERTA.Y <= LINE_SWAP ? RIGHT_VERT.Y[11:0] : LEFT_VERT.Y[11:0];
 049210 					LINE_VERTB.X <= CLP_C1 ? SYS_CLIP_X2[11:0] : CLP_C2 ? SYS_CLIP_X1[11:0] : LINE_SWAP ? LEFT_VERT.X[11:0] : RIGHT_VERT.X[11:0];
 049210 					LINE_VERTB.Y <= LINE_SWAP ? LEFT_VERT.Y[11:0] : RIGHT_VERT.Y[11:0];
 049210 					LINE_DIRX <= CMD_ST == CMDS_NSPR_CALCX ? 1'b0 : NEW_LINE_SX[12] ^ LINE_SWAP;
 049210 					LINE_DIRY <= CMD_ST == CMDS_LINE_CALC ? NEW_LINE_SY[12] ^ LINE_SWAP : 1'b0;
 049210 					LINE_CLIP <= CLP_C3 || CLP_C4 || CLP_C5 || CLP_C6;
 049210 					DIR[0] <= LINE_SWAP;
 049210 					EC_FIND <= 0;
 033595 					if (CMD_ST == CMDS_NSPR_CALCX) HSS_EN <= 0;
        					
 049210 					LN_Y_MAJOR = NEW_LINE_ASY > NEW_LINE_ASX;
 049210 					LN_MAJ = LN_Y_MAJOR ? NEW_LINE_ASY : NEW_LINE_ASX;
 049210 					LN_MIN = LN_Y_MAJOR ? NEW_LINE_ASX : NEW_LINE_ASY;
        					// maj/min: the longer axis steps every pixel, the shorter one by error accumulation
 049210 					LINE_ERROR_INC <= {1'b0,LN_MIN,1'b0};
 049210 					LINE_ERROR_ADJ <= -{1'b0,LN_MAJ,1'b0};
 049210 					LINE_ERROR <= -{2'b00,LN_MAJ} - {1'b0,LN_MIN,1'b0};
 049210 					LINE_S <= LN_Y_MAJOR;
 045294 					if (LN_Y_MAJOR) begin
 003916 						AA_X_INC <= (NEW_LINE_SY[12]^LINE_SWAP) ? {12{(NEW_LINE_SX[12]^LINE_SWAP)}} : {{11{1'b0}},~(NEW_LINE_SX[12]^LINE_SWAP)};
 003916 						AA_Y_INC <= (NEW_LINE_SY[12]^LINE_SWAP) ? {{11{1'b0}},(NEW_LINE_SX[12]^LINE_SWAP)} : {12{~(NEW_LINE_SX[12]^LINE_SWAP)}};
 045294 					end else begin
 045294 						AA_X_INC <= (NEW_LINE_SX[12]^LINE_SWAP) ? {{11{1'b0}},~(NEW_LINE_SY[12]^LINE_SWAP)} : {12{(NEW_LINE_SY[12]^LINE_SWAP)}};
 045294 						AA_Y_INC <= (NEW_LINE_SX[12]^LINE_SWAP) ? {{11{1'b0}},~(NEW_LINE_SY[12]^LINE_SWAP)} : {12{(NEW_LINE_SY[12]^LINE_SWAP)}};
        					end
        					
 049210 					ROW_WIDTH <= (CMD_ST == CMDS_LINE_CALC ? LN_MAJ : NEW_LINE_ASX) + 12'd1;
        					
 049210 					CMD_ST <= CMD_ST == CMDS_LINE_CALC ? CMDS_LINE_CALCTX : CMDS_SSPR_CALCTX;
        				end
        				
        				CMDS_SSPR_CALCTX,
 049207 				CMDS_LINE_CALCTX: begin
 049207 					TEXT_ERROR <= TX_ERR;
 049207 					HSS_EN <= TX_HSS;
 037675 					if (CMD_ST == CMDS_LINE_CALCTX) begin
 011532 						EC_FIND <= 0;
 011532 						AA <= 0;
        					end
        
 041818 					if ((LINE_LEFT_OVER || LINE_RIGHT_OVER || LINE_TOP_OVER || LINE_BOTTOM_OVER) && !CMD.CMDPMOD.PCLP) begin
 007389 						CMD_ST <= CMDS_LINE_NEXT;
 041818 					end else begin
 041818 						SPR_READ <= CMD_ST == CMDS_SSPR_CALCTX ? 1'b1 : ~CMD.CMDCTRL.COMM[2];
 041818 						CMD_ST <= CMDS_PRE_DRAW;
        					end
        				end
        				
 041818 				CMDS_PRE_DRAW: begin
 041818 					TEXT_X <= '0;
 040329 					if (!TEXT_ERROR[12]) begin
 000918 						if (TEXT_X_READ_STEP) begin
 000571 							TEXT_X <= (HSS_EN ? 2'd2 : 2'd1);
        						end
 001489 						TEXT_ERROR <= NEXT_TEXT_ERROR;
        					end
 041818 					CMD_ST <= CMDS_GRD_CALC_ROW;
        				end
        				
 041818 				CMDS_GRD_CALC_ROW: begin
 041818 					LINE_GHCOLOR <= DIR[0] ? RIGHT_GHCOLOR : LEFT_GHCOLOR;
 041818 					CMD_ST <= CMDS_GRD_CALC_LINE;
        				end
        				
 877966 				CMDS_GRD_CALC_LINE: begin
 836165 					if (GRD_CALC_STATE == 5'd20) begin
 041801 						GRD_CALC_STATE <= '0;
 041801 						LINE_GHCOLOR_STEP <= GRD_CALC_STEP;
        						
 041801 						case (CMD.CMDCTRL.COMM) 
 032897 							4'h0: CMD_ST <= CMDS_NSPR_DRAW;
 001964 							4'h1: CMD_ST <= CMDS_SSPR_DRAW;
 006940 							default: CMD_ST <= CMDS_LINE_DRAW;
        						endcase
        					end
        				end
        				
        				CMDS_NSPR_DRAW,
 1082400 				CMDS_SSPR_DRAW: if (!DRAW_WAIT && SPR_DATA_READY) begin
 209399 					DRAW_ENABLE <= LINE_DRAW_STEP;
        					
 148675 					if (TEXT_X_READ_STEP) begin
 148675 						TEXT_X <= TEXT_X + (HSS_EN ? 2'd2 : 2'd1);
 145182 						if (IS_PAT_EC) EC_FIND <= 1;
        					end
 209399 					TEXT_ERROR <= NEXT_TEXT_ERROR;
        					
 203724 					if (LINE_DRAW_STEP) begin
 203724 						LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
        						
 203724 						{LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} <= {LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} + ({LINE_GHCOLOR_STEP.R.INT,LINE_GHCOLOR_STEP.R.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.R.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.R.DIR);
 203724 						{LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} <= {LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} + ({LINE_GHCOLOR_STEP.G.INT,LINE_GHCOLOR_STEP.G.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.G.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.G.DIR);
 203724 						{LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} <= {LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} + ({LINE_GHCOLOR_STEP.B.INT,LINE_GHCOLOR_STEP.B.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.B.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.B.DIR);
        					end
        					  
 174548 					if ((LINE_VERTA.X == LINE_VERTB.X && LINE_DRAW_STEP) || (IS_PAT_EC && EC_FIND && TEXT_X_READ_STEP)) begin
 034851 						SPR_READ <= 0;
 034851 						CMD_ST <= CMDS_LINE_NEXT;
        					end
        				end
        				
 1415093 				CMDS_LINE_DRAW: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 349628 					DRAW_ENABLE <= LINE_DRAW_STEP;
        					
 317689 					if (TEXT_X_READ_STEP) begin
 031939 						TEXT_X <= TEXT_X + (HSS_EN ? 2'd2 : 2'd1);
 028649 						if (IS_PAT_EC) EC_FIND <= 1;
        					end
 349628 					TEXT_ERROR <= NEXT_TEXT_ERROR;
        					
 349628 					{LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR} = '0;
 349628 					AA_DRAW = 0;
 349628 					AA_X <= LINE_VERTA.X + AA_X_INC;
 349628 					AA_Y <= LINE_VERTA.Y + AA_Y_INC;
 342801 					if (LINE_DRAW_STEP) begin
 257749 						if (LINE_AA_STEP) begin
 056918 							if (!LINE_S) begin
 056918 								LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 028134 							end else begin
 028134 								LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
        							end
 085052 							AA <= 1;
 085052 							AA_DRAW = 1;
 257749 						end else begin
 203401 							if (!LINE_S) begin
 203401 								LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 203401 								LINE_VERTA_X_OVR = (LINE_VERTA.X == LINE_VERTB.X) || ($signed(LINE_VERTA.X) < $signed(SYS_CLIP_X1) && LINE_DIRX && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.X) > $signed(SYS_CLIP_X2) && !LINE_DIRX && !CMD.CMDPMOD.PCLP);
 203401 								LINE_VERTA_Y_OVR = ($signed(LINE_VERTA.Y) < $signed(SYS_CLIP_Y1) && LINE_DIRY && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.Y) > $signed(SYS_CLIP_Y2) && !LINE_DIRY && !CMD.CMDPMOD.PCLP);
 054348 							end else begin
 054348 								LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 054348 								LINE_VERTA_X_OVR = ($signed(LINE_VERTA.X) < $signed(SYS_CLIP_X1) && LINE_DIRX && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.X) > $signed(SYS_CLIP_X2) && !LINE_DIRX && !CMD.CMDPMOD.PCLP);
 054348 								LINE_VERTA_Y_OVR = (LINE_VERTA.Y == LINE_VERTB.Y) || ($signed(LINE_VERTA.Y) < $signed(SYS_CLIP_Y1) && LINE_DIRY && !CMD.CMDPMOD.PCLP) || ($signed(LINE_VERTA.Y) > $signed(SYS_CLIP_Y2) && !LINE_DIRY && !CMD.CMDPMOD.PCLP);
        							end
        						end
 342801 						LINE_ERROR <= NEXT_LINE_ERROR;
        					
 342801 						{LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} <= {LINE_GHCOLOR.R.INT,LINE_GHCOLOR.R.FRAC} + ({LINE_GHCOLOR_STEP.R.INT,LINE_GHCOLOR_STEP.R.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.R.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.R.DIR);
 342801 						{LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} <= {LINE_GHCOLOR.G.INT,LINE_GHCOLOR.G.FRAC} + ({LINE_GHCOLOR_STEP.G.INT,LINE_GHCOLOR_STEP.G.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.G.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.G.DIR);
 342801 						{LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} <= {LINE_GHCOLOR.B.INT,LINE_GHCOLOR.B.FRAC} + ({LINE_GHCOLOR_STEP.B.INT,LINE_GHCOLOR_STEP.B.FRAC}^{17{DIR[0]^LINE_GHCOLOR_STEP.B.DIR}}) + (DIR[0]^LINE_GHCOLOR_STEP.B.DIR);
        					end
        
 001526 					if (IS_PAT_EC && EC_FIND && TEXT_X_READ_STEP) begin
 001526 						CMD_ST <= AA_DRAW ? CMDS_LINE_END : CMDS_LINE_NEXT;
 003962 					end else if ((LINE_VERTA_X_OVR || LINE_VERTA_Y_OVR) && LINE_DRAW_STEP) begin
~003962 						CMD_ST <= AA_DRAW ? CMDS_LINE_END : CMDS_LINE_NEXT;
 259379 					end else if (AA_DRAW) begin
 084761 						CMD_ST <= CMDS_AA_DRAW;
        					end
        				end
        				
 355902 				CMDS_AA_DRAW: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 084755 					DRAW_ENABLE <= 1;
 084755 					AA <= 0;
        					
 084755 					{LINE_VERTA_X_OVR,LINE_VERTA_Y_OVR} = '0;
 056700 					if (!LINE_S) begin
 056700 						LINE_VERTA.X <= LINE_VERTA.X + {{11{LINE_DIRX}},1'b1};
 056700 						LINE_VERTA_X_OVR = (LINE_VERTA.X == LINE_VERTB.X);
 028055 					end else begin
 028055 						LINE_VERTA.Y <= LINE_VERTA.Y + {{11{LINE_DIRY}},1'b1};
 028055 						LINE_VERTA_Y_OVR = (LINE_VERTA.Y == LINE_VERTB.Y);
        					end
 083345 					if ((LINE_VERTA_X_OVR || LINE_VERTA_Y_OVR) && LINE_DRAW_STEP) 
 001410 						CMD_ST <= CMDS_LINE_NEXT;
        					else
 083345 						CMD_ST <= CMDS_LINE_DRAW;
        				end
        				
 001177 				CMDS_LINE_END: if (!DRAW_WAIT && (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4)) begin
 000291 					DRAW_ENABLE <= AA;
 000291 					AA <= 0;
 000291 					CMD_ST <= CMDS_LINE_NEXT;
        				end
        				
 049138 				CMDS_LINE_NEXT: begin
 049138 					SPR_READ <= 0;
 049138 					TEXT_X <= '0;
        					
 048682 					if (CMD.CMDCTRL.COMM == 4'h0 || CMD.CMDCTRL.COMM == 4'h1 || CMD.CMDCTRL.COMM == 4'h2 || CMD.CMDCTRL.COMM == 4'h3 || CMD.CMDCTRL.COMM == 4'h4) begin 
 047646 						if (LEFT_COL_X_STEP) begin
 001036 							LEFT_VERT.X <= LEFT_VERT.X + {{12{POLY_LDIRX}},1'b1};
        						end
 035221 						if (LEFT_COL_Y_STEP) begin
 013461 							LEFT_VERT.Y <= LEFT_VERT.Y + {{12{POLY_LDIRY}},1'b1};
        						end
 045176 						if (RIGHT_COL_X_STEP) begin
 003506 							RIGHT_VERT.X <= RIGHT_VERT.X + {{12{POLY_RDIRX}},1'b1};
        						end
 035781 						if (RIGHT_COL_Y_STEP) begin
 012901 							RIGHT_VERT.Y <= RIGHT_VERT.Y + {{12{POLY_RDIRY}},1'b1};
        						end
        						
 048682 						LEFT_D_ERROR <= NEXT_LEFT_D_ERROR;
 048682 						LEFT_COL_ERROR_X <= NEXT_LEFT_COL_ERROR_X;
 048682 						LEFT_COL_ERROR_Y <= NEXT_LEFT_COL_ERROR_Y;
 048682 						RIGHT_D_ERROR <= NEXT_RIGHT_D_ERROR;
 048682 						RIGHT_COL_ERROR_X <= NEXT_RIGHT_COL_ERROR_X;
 048682 						RIGHT_COL_ERROR_Y <= NEXT_RIGHT_COL_ERROR_Y;
        						
 048682 						{LEFT_GHCOLOR.R.INT, LEFT_GHCOLOR.R.FRAC } <= {LEFT_GHCOLOR.R.INT, LEFT_GHCOLOR.R.FRAC } + ({LEFT_GHCOLOR_STEP.R.INT, LEFT_GHCOLOR_STEP.R.FRAC }^{17{LEFT_GHCOLOR_STEP.R.DIR }}) + LEFT_GHCOLOR_STEP.R.DIR;
 048682 						{LEFT_GHCOLOR.G.INT, LEFT_GHCOLOR.G.FRAC } <= {LEFT_GHCOLOR.G.INT, LEFT_GHCOLOR.G.FRAC } + ({LEFT_GHCOLOR_STEP.G.INT, LEFT_GHCOLOR_STEP.G.FRAC }^{17{LEFT_GHCOLOR_STEP.G.DIR }}) + LEFT_GHCOLOR_STEP.G.DIR;
 048682 						{LEFT_GHCOLOR.B.INT, LEFT_GHCOLOR.B.FRAC } <= {LEFT_GHCOLOR.B.INT, LEFT_GHCOLOR.B.FRAC } + ({LEFT_GHCOLOR_STEP.B.INT, LEFT_GHCOLOR_STEP.B.FRAC }^{17{LEFT_GHCOLOR_STEP.B.DIR }}) + LEFT_GHCOLOR_STEP.B.DIR;
 048682 						{RIGHT_GHCOLOR.R.INT,RIGHT_GHCOLOR.R.FRAC} <= {RIGHT_GHCOLOR.R.INT,RIGHT_GHCOLOR.R.FRAC} + ({RIGHT_GHCOLOR_STEP.R.INT,RIGHT_GHCOLOR_STEP.R.FRAC}^{17{RIGHT_GHCOLOR_STEP.R.DIR}}) + RIGHT_GHCOLOR_STEP.R.DIR;
 048682 						{RIGHT_GHCOLOR.G.INT,RIGHT_GHCOLOR.G.FRAC} <= {RIGHT_GHCOLOR.G.INT,RIGHT_GHCOLOR.G.FRAC} + ({RIGHT_GHCOLOR_STEP.G.INT,RIGHT_GHCOLOR_STEP.G.FRAC}^{17{RIGHT_GHCOLOR_STEP.G.DIR}}) + RIGHT_GHCOLOR_STEP.G.DIR;
 048682 						{RIGHT_GHCOLOR.B.INT,RIGHT_GHCOLOR.B.FRAC} <= {RIGHT_GHCOLOR.B.INT,RIGHT_GHCOLOR.B.FRAC} + ({RIGHT_GHCOLOR_STEP.B.INT,RIGHT_GHCOLOR_STEP.B.FRAC}^{17{RIGHT_GHCOLOR_STEP.B.DIR}}) + RIGHT_GHCOLOR_STEP.B.DIR;
        						
 048682 						CMD_ST <= !CMD.CMDPMOD.PCLP && !FAST ? CMDS_ROW_CLIP : CMDS_ROW_DRAW;
 048682 						COL_D <= COL_D - 12'd1;
 031895 						if (COL_D == 12'd0) begin
 031895 							CMD_ST <= CMDS_END;
        						end
 000392 					end else if (CMD.CMDCTRL.COMM == 4'h5 || CMD.CMDCTRL.COMM == 4'h7) begin
        						// Each polyline segment starts where the previous one ended: the right point/colour moves to the left;
        						// RIGHT_VERT/RIGHT_GHCOLOR are not stepped for polylines, so they still hold the previous segment end.
 000392 						LEFT_VERT <= RIGHT_VERT;
 000392 						LEFT_GHCOLOR <= RIGHT_GHCOLOR;
 000392 						case (POLY_S)
 000102 							2'd0: begin
 000102 								RIGHT_VERT <= VERTC;
 000102 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_C);
 000102 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000100 							2'd1: begin
 000100 								RIGHT_VERT <= VERTD;
 000100 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_D);
 000100 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000095 							2'd2: begin
 000095 								RIGHT_VERT <= VERTA;
 000095 								RIGHT_GHCOLOR <= RGBItoF(GHCOLOR_A);
 000095 								CMD_ST <= CMDS_ROW_DRAW;
        							end
 000095 							2'd3: begin
 000095 								CMD_ST <= CMDS_END;
        							end
        						endcase
 000392 						POLY_S <= POLY_S + 2'd01;
~000064 					end else if (CMD.CMDCTRL.COMM == 4'h6) begin
 000064 						CMD_ST <= CMDS_END;
%000000 					end else begin
%000000 						CMD_ST <= CMDS_END;
        					end
        				end
        				
 088742 				CMDS_ROW_CLIP: begin
 088742 					CMD_DELAY <= CMD_DELAY - 9'd1;
 078858 					if (!CMD_DELAY || PENALTY_CNT >= CMD_DELAY) begin
 009884 						CMD_DELAY <= 9'd8;
 009884 						CMD_ST <= CMDS_ROW_DRAW;
        					end
        				end
        				
 032513 				CMDS_END: begin
 032513 					NEXT_ADDR_H = CMD_ADDR_H + 14'd1;
 032513 					case (CMD.CMDCTRL.JP[1:0])
 032424 						2'b00: begin CMD_ADDR_H <= NEXT_ADDR_H; end
 000027 						2'b01: begin CMD_ADDR_H <= CMD.CMDLINK[15:2]; end
~000020 						2'b10: begin CMD_ADDR_H <= CMD.CMDLINK[15:2]; if (!CMD_SUB_RUN) CMD_RET_ADDR_H <= NEXT_ADDR_H; CMD_SUB_RUN <= 1; end
~000042 						2'b11: begin CMD_ADDR_H <= CMD_SUB_RUN ? CMD_RET_ADDR_H : NEXT_ADDR_H; CMD_SUB_RUN <= 0; end
        					endcase
        					
 032452 					if (CMD.CMDCTRL.END) begin
 000061 						DRAW_END <= 1;
 000061 						CMD_ST <= CMDS_IDLE;
        `ifdef DEBUG
        						DBG_CMD_CNT <= '0;
        `endif
 032452 					end else begin
 032452 						CMD_READ <= 1;
 032452 						CMD_ST <= CMDS_READ;
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
 1003408 	FBDrawState_t FBD_ST;
        	
 013661 	bit          CPU_VRAM_BUSY;
        	
 234234 	bit  [11: 0] DRAW_X;
 094365 	bit  [11: 0] DRAW_Y;
 017114 	Pattern_t    DRAW_PAT;
 029755 	RGB_t        DRAW_GHCOLOR;
 031292 	bit  [15: 0] DRAW_BACK_C;
 608213 	bit          FB_DRAW_PEND;
 365183 	bit          FB_READ_PEND;
 180615 	bit          PAT_NEXT;
 9876593 	always @(posedge CLK or negedge RST_N) begin
 9876593 		bit  [ 1: 0] RAS_DELAY;
 9876593 		bit          FBD_RAS;
        		
 9875794 		if (!RST_N) begin
 000799 			FBD_ST <= FBDS_IDLE;
 000799 			FB_DRAW_PEND <= 0;
 000799 			FB_READ_PEND <= 0;
 000799 			PAT_NEXT <= 0;
 000799 			RAS_DELAY <= '0;
 000799 			FBD_RAS <= 0;
        		end
 9875794 		else begin
 9875794 			PAT_NEXT <= 0;
 9875794 			case (FBD_ST)
 7712704 				FBDS_IDLE: begin
 359320 					if (CPU_VRAM_BUSY) begin
 359320 						FBD_ST <= FBDS_SKIP;
 5510296 					end else if (SPR_DATA_READY || CMD.CMDCTRL.COMM >= 4'h4) begin
 1199000 						if ((CMD_ST == CMDS_NSPR_DRAW || CMD_ST == CMDS_SSPR_DRAW || CMD_ST == CMDS_LINE_DRAW || CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END)) begin
        							// AA pixels use the pre-computed neighbour; otherwise the line position, advanced by one on the minor axis after an AA step
 644088 							DRAW_X <= LOC_COORD.X + ((CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) ? AA_X : LINE_VERTA.X) +
 644088 							          ((!(CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) && LINE_AA_STEP && LINE_S) ? {{11{LINE_DIRX}},1'b1} : 12'd0);
 644088 							DRAW_Y <= LOC_COORD.Y + ((CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) ? AA_Y : LINE_VERTA.Y) +
 644088 							          ((!(CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END) && LINE_AA_STEP && !LINE_S) ? {{11{LINE_DIRY}},1'b1} : 12'd0);
 559041 							if (!(CMD_ST == CMDS_AA_DRAW || CMD_ST == CMDS_LINE_END)) begin
 555866 								if (!(TEXT_X_READ_STEP && EC_FIND && IS_PAT_EC)) begin
 555866 									DRAW_PAT <= PAT;
 555866 									DRAW_GHCOLOR <= RGBFtoI(LINE_GHCOLOR);
        								end
 559041 								FBD_RAS <= LINE_DRAW_STEP && (CMD.CMDCTRL.COMM <= 4'h1) && &LINE_VERTA.X[3:0];
        							end
        							
        							
 608215 							if (LINE_DRAW_STEP && !IS_PAT_EC) begin
 365183 								if (CMD.CMDPMOD.CCB[0] || CMD.CMDPMOD.MON) begin
 365183 									FB_READ_PEND <= 1;
 365183 									FBD_ST <= FBDS_READ;
 243032 								end else begin
 243032 									FB_DRAW_PEND <= 1;
 243032 									FBD_ST <= FBDS_WRITE;
        								end
 035873 							end else begin
 035873 								FBD_ST <= FBDS_SKIP;
        							end
        						end
 1836759 						if (CMD_ST == CMDS_ROW_DRAW) begin
 006329 							FBD_RAS <= 1;
        						end
 1843088 						PAT_NEXT <= TEXT_X_READ_STEP;
        					end
        					
        				end
        				
 367016 				FBDS_READ: begin
 365183 					if (!FB_DRAW_WAIT) begin
 365183 						FB_READ_PEND <= 0;
 365183 						FBD_ST <= FBDS_READWAIT;
        					end
        				end
        			
 365183 				FBDS_READWAIT: begin
 365183 					FBD_ST <= FBDS_READBACK;
        				end
        			
 365181 				FBDS_READBACK: begin
 365181 					DRAW_BACK_C <= FB_DRAW_Q;
 365181 					FB_DRAW_PEND <= 1;
 365181 					FBD_ST <= FBDS_WRITE;
        				end
        				
 612362 				FBDS_WRITE: begin
 608213 					if (!FB_DRAW_WAIT) begin
 608213 						FB_DRAW_PEND <= 0;
 597998 						if (FBD_RAS)
 010139 							if (PENALTY_CNT < 10'd3) begin
 010139 								FBD_ST <= FBDS_RAS;
 000076 							end else begin
 000076 								PENALTY_CNT <= PENALTY_CNT - 10'd3;
 000076 								FBD_ST <= FBDS_IDLE;
        							end
        						else
 597998 							FBD_ST <= FBDS_IDLE;
        					end
        				end
        				
 058155 				FBDS_RAS: if (CE_R) begin
 030417 					RAS_DELAY <= RAS_DELAY + 2'd1;
 020278 					if (RAS_DELAY == 2'd2) begin
 010139 						RAS_DELAY <= 2'd0;
 010139 						FBD_RAS <= 0;
 010139 						FBD_ST <= FBDS_IDLE;
        					end
        				end
        				
 395193 				FBDS_SKIP: begin
 395193 					FBD_ST <= FBDS_IDLE;
        				end
        			endcase
        			
 9873309 			if (((CMD_ST == CMDS_LINE_DRAW && CMD.CMDCTRL.COMM <= 4'h3) || CMD_ST == CMDS_NSPR_DRAW || CMD_ST == CMDS_SSPR_DRAW) && PAT_PREREAD_WAIT && !CPU_VRAM_BUSY && CE_R) PENALTY_CNT <= PENALTY_CNT + 10'd1;
 9875623 			if ((CMD_ST == CMDS_EXEC || CMD_ST == CMDS_ROW_CLIP) && CMD_DELAY && PENALTY_CNT >= CMD_DELAY) PENALTY_CNT <= PENALTY_CNT - CMD_DELAY;
        		end
        	end
        	assign DRAW_WAIT = (FBD_ST != FBDS_IDLE) || CPU_VRAM_BUSY;
        	
        `ifdef DEBUG
        	assign DBG_PENALTY_OVER = (PENALTY_CNT >= 10'd256);
        `endif
        
        	// Pattern read address. SPR_READ is never set for COMM >= 4, so no line/polygon special case is needed.
        	// CM 0,1: texel addresses advance every 4 pixels; CM 2-4: every 2; others: every pixel.
 6889931 	wire [ 1: 0] PAT_SH = (CMD.CMDPMOD.CM[2:1] == 2'b00) ? 2'd2 : (CMD.CMDPMOD.CM[2:1] == 2'b01 || CMD.CMDPMOD.CM == 3'b100) ? 2'd1 : 2'd0;
~6889931 	wire [ 8: 0] PAT_W = PAT_SH == 2'd2 ? {2'b00,ORIG_WIDTH[8:2]} : PAT_SH == 2'd1 ? {1'b0,ORIG_WIDTH[8:1]} : ORIG_WIDTH;
 6889931 	wire [ 8: 0] PAT_P = PAT_SH == 2'd2 ? {2'b00,PAT_CNT[8:2]}    : PAT_SH == 2'd1 ? {1'b0,PAT_CNT[8:1]}    : PAT_CNT;
 043853 	wire [ 9: 0] PAT_REV = {1'b0,PAT_W} - {1'b0,PAT_P} - 10'd1;   // may go negative: sign-extended below
 7543284 	wire [17: 0] PAT_OFF = PAT_PREREAD ? 18'd0 : !TEXT_DIRX ? {9'd0,PAT_P} : {{8{PAT_REV[9]}},PAT_REV};
~6889931 	wire [17: 0] PAT_BASE = (CMD.CMDPMOD.CM[2:1] == 2'b00) ? {CMD.CMDSRCA,2'b00} + {3'b000,SPR_OFFSY,1'b0} :
 2096010 	                        (CMD.CMDPMOD.CM[2:1] == 2'b01 || CMD.CMDPMOD.CM == 3'b100) ? {CMD.CMDSRCA,2'b00} + {2'b00,SPR_OFFSY,2'b00} :
 890653 	                                                                                      {CMD.CMDSRCA[15:1],3'b000} + {1'b0,SPR_OFFSY,3'b000};
~045920 	wire [18: 1] PAT_VRAM_A = PAT_BASE + PAT_OFF;
        	assign SPR_ADDR = PAT_BASE;
        	
 032043 	bit  [15: 0] FB_DRAW_D;
 071678 	bit          FB_DRAW_WE;
 001912 	bit          SCLIP;
 001745 	bit          UCLIP;
 017041 		bit [15: 0] ORIG_C;
 011288 		bit         TP;
 9876635 	always_comb begin
 9876635 		bit [15: 0] CALC_C;
 9876635 		bit         EC;
 9876635 		bit         MESH;
 9876635 		bit         IDRAW;
        		
 8006471 		if (!CMD.CMDCTRL.COMM[2]) begin
 8006471 			case (CMD.CMDPMOD.CM)
 6196832 				3'b000: ORIG_C = {CMD.CMDCOLR[15:4],DRAW_PAT.C[3:0]};
 223582 				3'b001: ORIG_C = CLT_Q;
 296816 				3'b010: ORIG_C = {CMD.CMDCOLR[15:6],DRAW_PAT.C[5:0]};
 408182 				3'b011: ORIG_C = {CMD.CMDCOLR[15:7],DRAW_PAT.C[6:0]};
 257520 				3'b100: ORIG_C = {CMD.CMDCOLR[15:8],DRAW_PAT.C[7:0]};
 623539 				default: ORIG_C = DRAW_PAT.C;
        			endcase
 8006471 			TP = DRAW_PAT.TP;
 8006471 			EC = DRAW_PAT.EC;
 1870164 		end else begin
 1870164 			ORIG_C = CMD.CMDCOLR;
 1870164 			TP = 0;
 1870164 			EC = 0;
        		end
 9876635 		CALC_C = CMD.CMDPMOD.MON ? DRAW_BACK_C : !TVMR.TVM[0] ? ColorCalc(ORIG_C, DRAW_BACK_C, DRAW_GHCOLOR, CMD.CMDPMOD.CCB) : ORIG_C;
        			
 9876635 		SCLIP = !DRAW_X[11:10]                                    && DRAW_X[9:0] <= SYS_CLIP.X2[9:0] && !DRAW_Y[11:10]                                    && DRAW_Y[9:0] <= SYS_CLIP.Y2[9:0];
 9876635 		UCLIP = !DRAW_X[11:10] && DRAW_X[9:0] >= USR_CLIP.X1[9:0] && DRAW_X[9:0] <= USR_CLIP.X2[9:0] && !DRAW_Y[11:10] && DRAW_Y[9:0] >= USR_CLIP.Y1[9:0] && DRAW_Y[9:0] <= USR_CLIP.Y2[9:0];
 9876635 		MESH = ~(DRAW_X[0] ^ DRAW_Y[0]) ^ (FRAME_ODD&BLUR_MESH);
 9876635 		IDRAW = ~(DIL ^ DRAW_Y[0]);
 9876635 		FB_DRAW_D = CALC_C;
 9876635 		FB_DRAW_WE = (~TP | CMD.CMDPMOD.SPD) & (~EC | CMD.CMDPMOD.ECD) & SCLIP & ((UCLIP^CMD.CMDPMOD.CMOD) | ~CMD.CMDPMOD.CLIP) & (MESH | ~CMD.CMDPMOD.MESH) & (IDRAW | ~DIE);
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
 011464 	ScrnStart_t  RP_Xst;
 011324 	ScrnStart_t  RP_Yst;
 011389 	ScrnInc_t    RP_DXst;
 011358 	ScrnInc_t    RP_DYst;
 011347 	ScrnInc_t    RP_DX;
 011358 	ScrnInc_t    RP_DY;
 011315 	RotCoord_t   RXst,RYst;
 566284 	RotCoord_t   OUT_RX,OUT_RY;
 1256295 	bit  [ 8: 0] OUT_X;
 025478 	bit  [ 8: 0] OUT_Y;
%000000 	bit          FRAME_ERASE_HIT;
%000000 	bit  [ 8: 0] ERASE_X;
%000000 	bit  [ 8: 0] ERASE_Y;
 003104 	bit          ERASE_HIT;
 045017 	bit  [15: 0] HTIM_PIPE;
 9876593 	always @(posedge CLK or negedge RST_N) begin
 9876593 		bit          HTIM_N_OLD;
 9876593 		bit          VTIM_N_OLD;
 9876593 		bit  [ 2: 0] RP_POS;
 9876593 		bit          RP_FIRST;
        		
 9875794 		if (!RST_N) begin
 000799 			OUT_X <= '0;
 000799 			OUT_Y <= '0;
        		end
 9875794 		else begin
 9875794 			HTIM_N_OLD <= HTIM_N;
 9875794 			VTIM_N_OLD <= VTIM_N;
        			
 7623712 			if (DCE_R) begin
 2252082 				HTIM_PIPE <= {HTIM_PIPE[14:0],HTIM_N};
        			end
        			
 7623712 			if (DCE_R) begin
 1936963 				if (RP_POS != 3'd7) RP_POS <= RP_POS + 3'd1;
        			end
 9830778 			if (!HTIM_N && HTIM_N_OLD) begin
 045016 				RP_POS <= '0;
        			end
 9872983 			if (VTIM_N && !VTIM_N_OLD) begin
 002811 				RP_FIRST <= 1;
        			end
 9830777 			if (HTIM_N && !HTIM_N_OLD) begin
 045017 				RP_FIRST <= 0;
        			end
        			
 7623671 			if (DCE_F) begin
 2252123 				case (RP_POS)
 045017 					3'd0: RP_Xst[31:16] <= VOUTI;	//0x18C/0x1A8
 045017 					3'd1: RP_Yst[31:16] <= VOUTI;	//0x18D/0x1A9
 045019 					3'd2: RP_DXst[31:16] <= VOUTI;//0x18E/0x1AA
 045017 					3'd3: RP_DYst[31:16] <= VOUTI;//0x18F/0x1AB
 045018 					3'd4: RP_DX[31:16] <= VOUTI;	//0x190/0x1AC
 045017 					3'd5: RP_DY[31:16] <= VOUTI;	//0x191/0x1AD
        				endcase
        			end
 7623712 			if (DCE_R) begin
 2252082 				case (RP_POS)
 045017 					3'd0: RP_Xst[15:0] <= VOUTI;
 045017 					3'd1: RP_Yst[15:0] <= VOUTI;
 045017 					3'd2: RP_DXst[15:0] <= VOUTI;
 045017 					3'd3: RP_DYst[15:0] <= VOUTI;
 045017 					3'd4: RP_DX[15:0] <= VOUTI;
 045017 					3'd5: RP_DY[15:0] <= VOUTI;
 045017 					3'd6: begin
 045017 						RXst <= $signed(RXst) + $signed(ScrnIncToRC(RP_DXst));
 045017 						RYst <= $signed(RYst) + $signed(ScrnIncToRC(RP_DYst));
 044985 						if (RP_FIRST) begin
 000032 							RXst <= ScrnStartToRC(RP_Xst);
 000032 							RYst <= ScrnStartToRC(RP_Yst);
        						end
        					end
        				endcase
        			end
        			
 7623712 			if (DCE_R) begin
 2252082 				OUT_RX <= $signed(OUT_RX) + $signed(ScrnIncToRC(RP_DX));
 2252082 				OUT_RY <= $signed(OUT_RY) + $signed(ScrnIncToRC(RP_DY));
 2207065 				if (HTIM_PIPE[8:7] == 2'b01) begin
 045017 					OUT_RX <= $signed(RXst);
 045017 					OUT_RY <= $signed(RYst);
        				end
        			end
        			
 8460951 			if (VTIM_N && DCE_R) begin
 028259 				if (HTIM_PIPE[8:7] == 2'b01) begin
 028259 					OUT_X <= '0;
 028259 					OUT_Y <= OUT_Y + 9'd1;
        				end
 1385792 				else if (OUT_X < 9'd352 + 8) begin
 1385792 					OUT_X <= OUT_X + 9'd1;
        				end
        			end
        			
 8777282 			if ((HTIM_N || |HTIM_PIPE) && VBLANK_ERASE && CE_R) begin
 1098512 				OUT_X <= OUT_X + 9'd1;
 1078098 				if ({1'b0,OUT_X} + 10'd1 == (!EWRR.X3[9] ? {EWRR.X3,3'b000} : 10'h200)) begin
 020414 					OUT_X <= {EWLR.X1,3'b000};
 020414 					OUT_Y <= OUT_Y + 9'd1;
        				end
        			end
 9872983 			if (!VTIM_N && VTIM_N_OLD) begin
 002811 				OUT_X <= {EWLR.X1,3'b000};
 002811 				OUT_Y <= EWLR.Y1;
        			end
 9872983 			if (VTIM_N && !VTIM_N_OLD) begin
 002811 				OUT_Y <= '1;
        			end
 4937904 			if (CE_F) begin
 4937904 				ERASE_HIT <= (OUT_X >= {EWLR.X1,3'b000}) && ({1'b0,OUT_X} < {EWRR.X3,3'b000}) && (OUT_Y >= EWLR.Y1) && (OUT_Y <= EWRR.Y3);
        			end
        		end
        	end
        	
        	assign FRAME_ERASE_EN = ERASE_HIT && FRAME_ERASE && VTIM_N;
        	assign VBLANK_ERASE_EN = ERASE_HIT && VBLANK_ERASE && (HTIM_N || |HTIM_PIPE);
        	
        	assign FB_ERASE_A = {OUT_Y[7:0],OUT_X[8:0]};
 8462135 	assign FB_DISP_A = TVMR.TVM[1:0] == 2'b10 ? {OUT_RY.INT[7:0],OUT_RX.INT[8:0]} : 
 5802111 	                   TVMR.TVM[1:0] == 2'b11 ? {OUT_RY.INT[8:0],OUT_RX.INT[8:1]} : 
 5802111 							                          {     OUT_Y[7:0],     OUT_X[8:0]};
 2252222 	bit DCLK;
 9876514 	always @(posedge CLK) begin
 2252222 		if      (DCE_R) DCLK <= 1;
 5372029 		else if (DCE_F) DCLK <= 0;
        		
 9876514 		VOUTO <= TVMR.TVM[1:0] == 2'b01 ? (DCLK ? {8'hFF,FB_DISP_Q[15:8]} : {8'hFF,FB_DISP_Q[7:0]}) :
 6594186 	            TVMR.TVM[1:0] == 2'b10 ? (OUT_RX.INT[10:9] || OUT_RY.INT[10:8] ? 16'h0000 : FB_DISP_Q) :
 3934178 					TVMR.TVM[1:0] == 2'b11 ? (OUT_RX.INT[10:9] || OUT_RY.INT[10:9] ? 16'h0000 : !OUT_X[0] ? {8'h00,FB_DISP_Q[15:8]} : {8'h00,FB_DISP_Q[7:0]}) :
 3934178 					FB_DISP_Q;
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
 764695 	VRAMState_t VRAM_ST;
        	
        	typedef enum bit [2:0] {
        		FS_IDLE,  
        		FS_CPU_WRITE,
        		FS_CPU_WAIT,
        		FS_CPU_READ,
        		FS_DRAW
        	} FBState_t;
 473141 	FBState_t FB_ST;
        		
 019308 	wire CPU_VRAM_REQ = (A[20:19] == 2'b00) & ~AD_N & ~CS_N & ~REQ_N;	//000000-07FFFF
 014301 	wire CPU_FB_REQ = (A[20:19] == 2'b01) & ~AD_N & ~CS_N & ~REQ_N;	//080000-0FFFFF
        	
 024466 	bit  [20: 1] A;
 007126 	bit          WE_N;
 000080 	bit  [ 1: 0] DQM;
 002530 	bit          BURST;
 029780 	bit          READY;
 014053 	bit          VRAM_SEL,FBRAM_SEL,REG_SEL;
        	
 005219 	bit          CPU_VRAM_RRDY;
 005575 	bit          CPU_FB_RRDY;
 003033 	bit          CPU_VRAM_WRDY;
 000189 	bit          CPU_FB_WRDY;
 005574 	bit          CPU_FB_RPEND;
 008727 	bit          CPU_FB_WPEND;
        	
 028966 	wire [15: 0] PAT_FIFO_D = GetSprData(VRAM_Q, CMD.CMDPMOD.CM, PAT_CNT[1:0] ^ {2{CMD.CMDCTRL.DIR[0]}} ^ {2{DIR[0]}});
 369582 	wire         PAT_FIFO_WRREQ = VRAM_ST == VS_PAT_READ && !PAT_PREREAD && VRAM_RDY;
 180615 	wire         PAT_FIFO_RDREQ = PAT_NEXT && SPR_DATA_READY;
 031514 	bit  [15: 0] PAT_FIFO_Q;
 101079 	bit          PAT_FIFO_EMPTY;
 068844 	bit          PAT_FIFO_FULL;
 037645 	wire         PAT_FIFO_RST = !SPR_READ;
        	VDP1_PAT_FIFO PAT_FIFO(CLK, PAT_FIFO_RST, PAT_FIFO_D, PAT_FIFO_WRREQ, PAT_FIFO_RDREQ, PAT_FIFO_Q, PAT_FIFO_EMPTY, PAT_FIFO_FULL);
        	
        	assign SPR_DATA = PAT_FIFO_Q;
        	assign SPR_DATA_READY = !PAT_FIFO_EMPTY || PAT_CNT >= ORIG_WIDTH;
        	
 001361 	bit  [15: 0] MEM_DO;
 104746 	bit  [ 8: 0] PAT_CNT;
 037643 	bit          PAT_PREREAD;
 261998 	bit  [ 3: 0] VRAM_READ_POS;
 005218 	bit          CPU_VRAM_RPEND;
 014089 	bit          CPU_VRAM_WPEND;
 014315 	bit          CPU_VRAM_ACCESS;
 9876593 	always @(posedge CLK or negedge RST_N) begin
 9876593 		bit         CS_N_OLD;
 9876593 		bit         READY2,READY3;
        //		bit         VRAM_PAGE_BREAK;
 9876593 		bit [18: 1] CPU_RA;
        		// One write buffer (current + saved beat) serves both VRAM and framebuffer writes: the bus master does not
        		// start a new transaction's data beats before READY, and READY needs both pending flags clear, so only one
        		// region can hold pending write data at a time.
 9876593 		bit [18: 1] CPU_WA;
 9876593 		bit [15: 0] CPU_D;
 9876593 		bit [ 1: 0] CPU_WE;
 9876593 		bit [18: 1] SAVE_WA;
 9876593 		bit [15: 0] SAVE_D;
 9876593 		bit [ 1: 0] SAVE_WE;
 9876593 		bit         CMD_READ_PEND;
 9876593 		bit         CLT_READ_PEND;
 9876593 		bit         GRD_READ_PEND;
 9876593 		bit [ 8: 0] FB_Y;
 9876593 		bit         VRAM_FIFO_FULL,FB_FIFO_FULL,VRAM_FIFO_EMPTY,FB_FIFO_EMPTY;
 9876593 		bit [ 4: 0] CPU_ACCESS_WAIT,DRAW_ACCESS_WAIT;
 9876593 		bit [ 1: 0] CPU_VRAM_WDELAY;
        		
 9875794 		if (!RST_N) begin
 000799 			VRAM_ST <= VS_IDLE;
 000799 			VRAM_A <= '0;
 000799 			VRAM_D <= '0;
 000799 			VRAM_WE <= '0;
 000799 			VRAM_RD <= 0;
 000799 			FB_ST <= FS_IDLE;
 000799 			FB_A <= '0;
 000799 			FB_D <= '0;
 000799 			FB_WE <= '0;
 000799 			FB_RD <= 0;
 000799 			{CMD_READ_PEND,CLT_READ_PEND,GRD_READ_PEND} <= 0;
        			
 000799 			A <= '0;
 000799 			WE_N <= 1;
 000799 			DQM <= '1;
 000799 			BURST <= 0;
 000799 			READY <= 1;
 000799 			{CPU_VRAM_RPEND,CPU_VRAM_WPEND} <= '0;
 000799 			{CPU_VRAM_RRDY,CPU_VRAM_WRDY} <= '1;
 000799 			{CPU_FB_RPEND,CPU_FB_WPEND} <= '0;
 000799 			{CPU_FB_RRDY,CPU_FB_WRDY} <= '1;
 000799 			{VRAM_FIFO_FULL,FB_FIFO_FULL,VRAM_FIFO_EMPTY,FB_FIFO_EMPTY} <= '0;
        			
 000799 			CPU_ACCESS_WAIT <= '0;
 000799 			DRAW_ACCESS_WAIT <= '0;
        		end 
 9875794 		else begin
 9875794 			CS_N_OLD <= CS_N;
 4937904 			if (CE_F) begin				
 4937904 				READY2 <= 1;
 4822907 				if (VRAM_FIFO_EMPTY && FB_FIFO_EMPTY) begin
 4822907 					READY3 <= READY2; 
 4822907 					READY <= READY2 & READY3;	
        				end	
        			end		
 9846016 			if (!CS_N && CS_N_OLD) begin
 029778 				READY <= 0;
 029778 				READY2 <= 0;
 029778 				READY3 <= 0;
        			end
        			
 4937904 			if (CE_R) begin
 4785063 				if (!CS_N && DTEN_N && AD_N) begin
 123049 					if (!DI[15]) begin
 123049 						A[20:9] <= DI[11:0];
 123049 						WE_N <= DI[14];
 123049 						BURST <= DI[13];
 123049 						VRAM_SEL <= (DI[11:10] == 2'b00);
 123049 						FBRAM_SEL <= (DI[11:10] == 2'b01);
 123049 						REG_SEL <= DI[11];
 029778 					end else begin
 029778 						A[8:1] <= DI[7:0];
 029778 						DQM <= DI[13:12];
        					end
        				end
        			end
 9846015 			if (CS_N && !CS_N_OLD) begin
 029779 				BURST <= 0;
 029779 				VRAM_SEL <= 0;
 029779 				FBRAM_SEL <= 0;
 029779 				REG_SEL <= 0;
        			end
        			
 9843157 			if (CMD_READ && !CMD_READ_PEND) begin CMD_READ_PEND <= 1; VRAM_READ_POS <= '0; end
 9875744 			if (CLT_READ && !CLT_READ_PEND) begin CLT_READ_PEND <= 1; VRAM_READ_POS <= '0; end
 9875488 			if (GRD_READ && !GRD_READ_PEND) begin GRD_READ_PEND <= 1; VRAM_READ_POS <= '0; end
        
 7357897 			if (!SPR_READ) begin PAT_CNT <= {8'b00000000,HSS_EN&(FBCR.EOS^TEXT_DIRX)}; PAT_PREREAD <= 1; end
        			
 9865002 			if ((CPU_VRAM_REQ || CPU_FB_REQ) && WE_N && DTEN_N) begin 
 010792 				CPU_RA <= A[18:1];
 005574 				if (CPU_VRAM_REQ) begin
 005218 					CPU_VRAM_RPEND <= 1;
 005218 					CPU_VRAM_RRDY <= 0;
        				end 
 005574 				if (CPU_FB_REQ) begin
 005574 					CPU_FB_RPEND <= 1;
 005574 					CPU_FB_RRDY <= 0;
        				end
 010792 				A <= A + 20'd1;
        			end
        			
 9853171 			if (CPU_VRAM_WDELAY && CE_F) CPU_VRAM_WDELAY <= CPU_VRAM_WDELAY - 2'd1;
 9861705 			if (CPU_VRAM_REQ && !WE_N && !DTEN_N) begin
 011057 				if (!CPU_VRAM_WPEND) begin
 011057 					CPU_WA <= A[18:1];
 011057 					CPU_D <= DI;
 011057 					CPU_WE <= ~{2{WE_N}} & ~DQM;
 011057 					CPU_VRAM_WPEND <= 1;
 011057 					VRAM_FIFO_EMPTY <= 0;
 003032 				end else begin
 003032 					SAVE_WA <= A[18:1];
 003032 					SAVE_D <= DI;
 003032 					SAVE_WE <= ~{2{WE_N}} & ~DQM;
 003032 					CPU_VRAM_WRDY <= 0;
 003032 					VRAM_FIFO_FULL <= 1;
        				end
 007541 				if (!BURST) CPU_VRAM_WDELAY <= 2'd3;
 014089 				A <= A + 20'd1;
        			end
 9872762 			if (!CPU_VRAM_WRDY && !CPU_VRAM_WPEND) begin
 003032 				CPU_WA <= SAVE_WA;
 003032 				CPU_D <= SAVE_D;
 003032 				CPU_WE <= SAVE_WE;
 003032 				CPU_VRAM_WPEND <= 1;
 003032 				CPU_VRAM_WRDY <= 1;
 003032 				VRAM_FIFO_EMPTY <= 0;
 003032 				VRAM_FIFO_FULL <= 0;
        			end
 9865734 			if (CPU_VRAM_WRDY && !CPU_VRAM_WPEND && !VRAM_FIFO_EMPTY) begin
 010060 				VRAM_FIFO_EMPTY <= 1;
        			end
        			
 9867067 			if (CPU_FB_REQ && !WE_N && !DTEN_N) begin
 008539 				if (CPU_FB_REQ && !CPU_FB_WPEND) begin
 008539 					CPU_WA <= A[18:1];
 008539 					CPU_D <= DI;
 008539 					CPU_WE <= ~{2{WE_N}} & ~DQM;
 008539 					CPU_FB_WPEND <= 1;
 008539 					FB_FIFO_EMPTY <= 0;
 000188 				end else begin
 000188 					SAVE_WA <= A[18:1];
 000188 					SAVE_D <= DI;
 000188 					SAVE_WE <= ~{2{WE_N}} & ~DQM;
 000188 					CPU_FB_WRDY <= 0;
 000188 					FB_FIFO_FULL <= 1;
        				end
 008727 				A <= A + 20'd1;
        			end
 9875606 			if (!CPU_FB_WRDY && !CPU_FB_WPEND) begin
 000188 				CPU_WA <= SAVE_WA;
 000188 				CPU_D <= SAVE_D;
 000188 				CPU_WE <= SAVE_WE;
 000188 				CPU_FB_WPEND <= 1;
 000188 				CPU_FB_WRDY <= 1;
 000188 				FB_FIFO_EMPTY <= 0;
 000188 				FB_FIFO_FULL <= 0;
        			end
 9869821 			if (CPU_FB_WRDY && !CPU_FB_WPEND && !FB_FIFO_EMPTY) begin
 005973 				FB_FIFO_EMPTY <= 1;
        			end
        			
 7454080 			if (CPU_ACCESS_WAIT && CE_R) CPU_ACCESS_WAIT <= CPU_ACCESS_WAIT - 5'd1;
 9708576 			if (DRAW_ACCESS_WAIT && CE_R) DRAW_ACCESS_WAIT <= DRAW_ACCESS_WAIT - 5'd1;
 9875794 			case (VRAM_ST)
 7072598 				VS_IDLE: if (VRAM_RDY) begin
 7041239 					CPU_VRAM_ACCESS <= 0;
 095098 					if (CPU_VRAM_WPEND && !CPU_VRAM_WDELAY) begin
 095098 						CPU_VRAM_ACCESS <= 1;
 072234 						if (!CPU_ACCESS_WAIT) begin
 022864 							VRAM_A <= CPU_WA;
 014089 							if (VRAM_A[18:9] != CPU_WA[18:9]) begin
 008775 								VRAM_ST <= VS_RAS0;
 014089 							end else begin
 014089 								VRAM_D <= CPU_D;
 014089 								VRAM_WE <= CPU_WE;
 014089 								VRAM_RD <= 0;
 014089 								VRAM_BLEN <= '0;
 014089 								CPU_VRAM_WPEND <= 0;
 014089 								VRAM_ST <= VS_CPU_WRITE;
        							end
        						end
 037784 					end else if (CPU_VRAM_RPEND) begin
 037784 						CPU_VRAM_ACCESS <= 1;
 032566 						if (!CPU_ACCESS_WAIT) begin
 005218 							VRAM_A <= CPU_RA;
 005218 							VRAM_WE <= '0;
 005218 							VRAM_RD <= 1;
 005218 							VRAM_BLEN <= '0;
 005218 							CPU_VRAM_RPEND <= 0;
 005218 							VRAM_ST <= VS_CPU_READ;
        						end
 275281 					end else if (DRAW_ACCESS_WAIT && !BURST) begin
 275281 						CPU_VRAM_ACCESS <= 1;
        //					end else if (VRAM_PAGE_BREAK) begin
        //						VRAM_ST <= VS_RAS;
 521984 					end else if (CMD_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 489370 						if (VRAM_READ_POS == 4'd15) CMD_READ_PEND <= 0;
 521984 						VRAM_A <= {CMD_ADDR_H,VRAM_READ_POS};
 521984 						VRAM_WE <= '0;
 521984 						VRAM_RD <= 1;
 521984 						VRAM_BLEN <= '0;
 521984 						VRAM_ST <= VS_CMD_READ;
 223404 					end else if (SPR_READ && !PAT_FIFO_FULL && PAT_CNT < ORIG_WIDTH && !FRAME_START && !BURST && !VRAM_SEL) begin
 223404 						VRAM_A <= PAT_VRAM_A;
 223404 						VRAM_BLEN <= PAT_PREREAD ? PAT_W : '0;
 223404 						VRAM_WE <= '0;
 223404 						VRAM_RD <= 1;
 223404 						VRAM_ST <= VS_PAT_READ;
 000800 					end else if (CLT_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 000750 						if (VRAM_READ_POS == 4'd15) CLT_READ_PEND <= 0;
 000800 						VRAM_A <= {CMD.CMDCOLR[15:2],VRAM_READ_POS};
 000800 						VRAM_WE <= '0;
 000800 						VRAM_RD <= 1;
 000800 						VRAM_BLEN <= '0;
 000800 						VRAM_ST <= VS_CLT_READ;
 5885665 					end else if (GRD_READ_PEND && !FRAME_START && !BURST && !VRAM_SEL) begin
 000918 						if (VRAM_READ_POS == 4'd3) GRD_READ_PEND <= 0;
 001223 						VRAM_A <= {CMD.CMDGRDA,VRAM_READ_POS[1:0]};
 001223 						VRAM_WE <= '0;
 001223 						VRAM_RD <= 1;
 001223 						VRAM_BLEN <= '0;
 001223 						VRAM_ST <= VS_GRD_READ;
        					end
        				end
        				
 013515 				VS_RAS0: if (CE_F) begin
 008775 					VRAM_ST <= VS_RAS1;
        				end
        				
 017550 				VS_RAS1: if (CE_F) begin
 008775 					VRAM_ST <= VS_RAS2;
        				end
        				
 017550 				VS_RAS2: if (CE_F) begin
 008775 					VRAM_ST <= VS_IDLE;
        				end
        				
 014089 				VS_CPU_WRITE: begin
 014089 					VRAM_WE <= '0;
        //					VRAM_PAGE_BREAK <= 1;
 014089 					DRAW_ACCESS_WAIT <= FAST ? 5'd5 : 5'd13;
 007740 					if (!VRAM_FIFO_FULL && !BURST) CPU_ACCESS_WAIT <= 5'd10;
 014089 					VRAM_ST <= VS_IDLE;
        				end
        				
 022194 				VS_CPU_READ: begin
 016976 					if (VRAM_RDY && CE_R) begin
 005218 						MEM_DO <= VRAM_Q;
 005218 						VRAM_RD <= 0;
        //						VRAM_PAGE_BREAK <= 1;
 005218 						DRAW_ACCESS_WAIT <= FAST ? 5'd5 : 5'd13;
 005218 						CPU_VRAM_RRDY <= 1;
 005218 						VRAM_ST <= VS_IDLE;
        					end
        				end
        					
 1794838 				VS_CMD_READ: begin
 1794838 					VRAM_RD <= 0;
 000021 					if (FRAME_START) begin
 000021 						VRAM_WE <= '0;
 000021 						VRAM_RD <= 0;
 000021 						VRAM_ST <= VS_IDLE;
 1272855 					end else if (VRAM_RDY) begin
 521962 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 521962 						CPU_ACCESS_WAIT <= 5'd10;
 521962 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 003289 				VS_CLT_READ: begin
 003289 					VRAM_RD <= 0;
%000000 					if (FRAME_START) begin
%000000 						VRAM_RD <= 0;
%000000 						VRAM_ST <= VS_IDLE;
 002489 					end else if (VRAM_RDY) begin
 000800 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 000800 						CPU_ACCESS_WAIT <= 5'd10;
 000800 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 914983 				VS_PAT_READ: begin
 914983 					VRAM_RD <= 0;
 002437 					if (FRAME_START || !SPR_READ) begin
 002437 						VRAM_WE <= '0;
 002437 						VRAM_RD <= 0;
 002437 						VRAM_ST <= VS_IDLE;
 691581 					end else if (VRAM_RDY) begin
 183323 						if (!PAT_PREREAD) begin
 183323 							PAT_CNT <= PAT_CNT + (HSS_EN ? 9'd2 : 9'd1);
 183323 							CPU_ACCESS_WAIT <= 5'd10;
        						end
 220965 						PAT_PREREAD <= 0;
 220965 						VRAM_ST <= VS_IDLE;
        					end
        				end
        				
 005188 				VS_GRD_READ: begin
 005188 					VRAM_RD <= 0;
%000001 					if (FRAME_START) begin
%000001 						VRAM_RD <= 0;
%000001 						VRAM_ST <= VS_IDLE;
 003965 					end else if (VRAM_RDY) begin
 001222 						VRAM_READ_POS <= VRAM_READ_POS + 4'd1;
 001222 						CPU_ACCESS_WAIT <= 5'd10;
 001222 						VRAM_ST <= VS_IDLE;
        					end
        				end
        			endcase
        			
 9875609 			if (FRAME_START) begin
 000185 				CMD_READ_PEND <= 0;
 000185 				CLT_READ_PEND <= 0;
 000185 				GRD_READ_PEND <= 0;
        			end
        			
 9875794 			case (FB_ST)
 9381793 				FS_IDLE: begin
 009271 					if (CPU_FB_WPEND && !FB_WE) begin
 008727 						if (FB_RDY) begin
 008727 							FB_A <= CPU_WA[17:1];
 008727 							FB_D <= CPU_D;
 008727 							FB_WE <= CPU_WE;
 008727 							CPU_FB_WPEND <= 0;
 008727 							FB_ST <= FS_CPU_WRITE;
        						end
 005921 					end else if (CPU_FB_RPEND && !FB_RD) begin
 005574 						if (FB_RDY) begin
 005574 							FB_A <= CPU_RA[17:1];
 005574 							FB_RD <= 1;
 005574 							CPU_FB_RPEND <= 0;
 005574 							FB_ST <= FS_CPU_WAIT;
        						end
        					end
 8893460 					else if (((FB_READ_PEND && !FB_RD) || (FB_DRAW_PEND && !FB_WE)) && FB_DRAW_WE && !(FBRAM_SEL && BURST)) begin
 473141 						FB_Y = !DIE ? DRAW_Y[8:0] : DRAW_Y[9:1];
 473141 						casex (TVMR.TVM[1:0]) 
 246976 							2'bx0: begin
 246976 								FB_A <= {FB_Y[7:0],DRAW_X[8:0]};
 246976 								FB_D <= FB_DRAW_D | {CMD.CMDPMOD.MON,15'h0000};
 246976 								FB_WE <= {2{FB_DRAW_PEND}};
 246976 								FB_RD <= FB_READ_PEND;
        							end
 139459 							2'b01: begin
 139459 								FB_A <= {FB_Y[7:0],DRAW_X[9:1]};
 139459 								FB_D <= {FB_DRAW_D[7:0],FB_DRAW_D[7:0]} | {CMD.CMDPMOD.MON,15'h0000};
 139459 								FB_WE <= ({~DRAW_X[0],DRAW_X[0]} | {2{CMD.CMDPMOD.MON}}) & {2{FB_DRAW_PEND}};
 139459 								FB_RD <= FB_READ_PEND;
        							end
 086706 							2'b11: begin
 086706 								FB_A <= {FB_Y[8:0],DRAW_X[8:1]};
 086706 								FB_D <= {FB_DRAW_D[7:0],FB_DRAW_D[7:0]} | {CMD.CMDPMOD.MON,15'h0000};
 086706 								FB_WE <= ({~DRAW_X[0],DRAW_X[0]} | {2{CMD.CMDPMOD.MON}}) & {2{FB_DRAW_PEND}};
 086706 								FB_RD <= FB_READ_PEND;
        							end
        						endcase
 473141 						FB_ST <= FS_DRAW;
        					end
        				end
        				
 008727 				FS_CPU_WRITE: begin
 008727 					FB_WE <= '0;
 008727 					FB_ST <= FS_IDLE;
        				end
        				
 006560 				FS_CPU_WAIT: begin
 005574 					if (FB_RDY && CE_F) begin
 005574 						CPU_FB_RRDY <= 1;
 005574 						FB_ST <= FS_CPU_READ;
        					end
        				end
        				
 005574 				FS_CPU_READ: begin
 005574 					FB_RD <= 0;
 005574 					FB_ST <= FS_IDLE;
        				end
        				
 473140 				FS_DRAW: begin
 473140 					FB_WE <= '0;
 473140 					FB_RD <= 0;
 473140 					FB_ST <= FS_IDLE;
        				end
        			endcase
        		end
        	end
        	assign CPU_VRAM_BUSY = VRAM_SEL || CPU_VRAM_RPEND || CPU_VRAM_WPEND || CPU_VRAM_ACCESS;
        	assign FB_DRAW_WAIT = (FB_ST != FS_IDLE) || CPU_FB_WPEND || CPU_FB_RPEND;
 037643 	wire PAT_PREREAD_WAIT = (VRAM_ST == VS_PAT_READ) && PAT_PREREAD && !VRAM_RDY;
        	
        	// Vertex set-up arithmetic for the scaled-sprite zoom points and the normal-sprite far corner. X words
        	// (even CMD_POS) and Y words (odd) never meet in one cycle, so one set of adders serves both axes.
 261998 	wire         LD_Y     = CMD_POS[0];
 020186 	wire [12: 0] LD_D     = CMD_DAT[12:0];
 8582606 	wire [ 1: 0] LD_Z     = LD_Y ? CMD.CMDCTRL.ZP[3:2] : CMD.CMDCTRL.ZP[1:0];
 8582606 	wire [12: 0] LD_ABASE = LD_Y ? VERTA.Y : VERTA.X;
 022841 	wire [12: 0] LD_PLUS  = LD_ABASE + (LD_Z == 2'b01 ? LD_D : SDiv2(LD_D + 13'd1));
 025184 	wire [12: 0] LD_MINUS = LD_ABASE - (LD_Z == 2'b10 ? SDiv2(LD_D) : LD_D);
 024657 	wire [12: 0] LD_TEMP  = LD_D + (LD_Y ? {5'b00000,ORIG_HEIGHT} : {4'b0000,ORIG_WIDTH}) - 13'd1;
 261998 	bit [ 3: 0] CMD_POS;
 020186 	bit [15: 0] CMD_DAT;
~000800 	bit         CMD_WE,CLT_WE,GRD_WE;
 9876593 	always @(posedge CLK or negedge RST_N) begin
 9876593 		bit         CMD_WE,GRD_WE;
 9876593 		bit [12: 0] TEMP;
        		
 9875794 		if (!RST_N) begin
 000799 			CMD_WE <= 0;
 000799 			CLT_WE <= 0;
 000799 			GRD_WE <= 0;
 000799 			SYS_CLIP <= CLIP_NULL;
 000799 			USR_CLIP <= CLIP_NULL;
 000799 			LOC_COORD <= COORD_NULL;
 9875794 		end else begin
 9875794 			CMD_DAT <= VRAM_Q;
 9875794 			CMD_POS <= VRAM_READ_POS;
 9875794 			CMD_WE <= (VRAM_ST == VS_CMD_READ && VRAM_RDY);
 9353823 			if (CMD_WE) begin
 521971 				case (CMD_POS)
 032637 					4'h0: CMD.CMDCTRL <= CMD_DAT;
 032636 					4'h1: CMD.CMDLINK <= CMD_DAT;
 032632 					4'h2: CMD.CMDPMOD <= CMD_DAT;
 032631 					4'h3: CMD.CMDCOLR <= CMD_DAT;
 032630 					4'h4: CMD.CMDSRCA <= CMD_DAT;
        //					4'h5: CMD.CMDSIZE <= CMD_DAT;
        //					4'h6: CMD.CMDXA <= CMD_DAT;
        //					4'h7: CMD.CMDYA <= CMD_DAT;
        //					4'h8: CMD.CMDXB <= CMD_DAT;
        //					4'h9: CMD.CMDYB <= CMD_DAT;
        //					4'hA: CMD.CMDXC <= CMD_DAT;
        //					4'hB: CMD.CMDYC <= CMD_DAT;
        //					4'hC: CMD.CMDXD <= CMD_DAT;
        //					4'hD: CMD.CMDYD <= CMD_DAT;
 032615 					4'hE: CMD.CMDGRDA <= CMD_DAT;
        				endcase
        				
        				
 521971 				case (CMD_POS)
 032624 					4'h5: begin
 032624 						ORIG_WIDTH <= {CMD_DAT[13:8],3'b000} | ~|CMD_DAT[13:8];
 032624 						ORIG_HEIGHT <= CMD_DAT[7:0] | ~|CMD_DAT[7:0];
        					end
 032623 					4'h6: begin
 032623 						case (CMD.CMDCTRL.COMM)
 031695 							4'h0: begin
 031695 								TEMP = LD_TEMP;
 031695 								VERTA.X <= CMD_DAT[12:0];
 031695 								VERTB.X <= TEMP;
 031695 								VERTC.X <= TEMP;
 031695 								VERTD.X <= CMD_DAT[12:0];
        							end
 000078 							4'h1: begin
 000078 								VERTA.X <= CMD_DAT[12:0];
 000078 								VERTB.X <= CMD_DAT[12:0];
 000078 								VERTC.X <= CMD_DAT[12:0];
 000078 								VERTD.X <= CMD_DAT[12:0];
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTA.X <= CMD_DAT[12:0];
        							end
        							4'h8,
 000112 							4'hB: begin	
 000112 								USR_CLIP.X1 <= {1'b0,CMD_DAT[9:0]}; 
        							end
 000130 							4'h9: begin	
        							end
 000138 							4'hA: begin	
 000138 								LOC_COORD.X <= CMD_DAT[11:0]; 
        							end
        						endcase
        					end
 032620 					4'h7: begin
 032620 						case (CMD.CMDCTRL.COMM)
 031692 							4'h0: begin
 031692 								TEMP = LD_TEMP;
 031692 								VERTA.Y <= CMD_DAT[12:0];
 031692 								VERTB.Y <= CMD_DAT[12:0];
 031692 								VERTC.Y <= TEMP;
 031692 								VERTD.Y <= TEMP;
        							end
 000078 							4'h1: begin
 000078 								VERTA.Y <= CMD_DAT[12:0];
 000078 								VERTB.Y <= CMD_DAT[12:0];
 000078 								VERTC.Y <= CMD_DAT[12:0];
 000078 								VERTD.Y <= CMD_DAT[12:0];
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTA.Y <= CMD_DAT[12:0];
        							end
        							4'h8,
 000112 							4'hB: begin	
 000112 								USR_CLIP.Y1 <= {1'b0,CMD_DAT[9:0]}; 
        							end
 000130 							4'h9: begin	
        							end
 000138 							4'hA: begin	
 000138 								LOC_COORD.Y <= CMD_DAT[11:0];
        							end
        						endcase
        					end
 032620 					4'h8: begin
 032620 						case (CMD.CMDCTRL.COMM)
 000078 							4'h1: begin
 000078 								case (CMD.CMDCTRL.ZP[1:0])
 000015 									2'b00: begin 
        									end
 000020 									2'b01: begin 
 000020 										VERTB.X <= LD_PLUS;
 000020 										VERTC.X <= LD_PLUS;
        									end
 000021 									2'b10: begin 
 000021 										VERTA.X <= LD_MINUS;
 000021 										VERTB.X <= LD_PLUS;
 000021 										VERTC.X <= LD_PLUS;
 000021 										VERTD.X <= LD_MINUS;
        									end
 000022 									2'b11: begin 
 000022 										VERTA.X <= LD_MINUS;
 000022 										VERTD.X <= LD_MINUS;
        									end
        								endcase
        							end							
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTB.X <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 032619 					4'h9: begin
 032619 						case (CMD.CMDCTRL.COMM)
 000078 							4'h1: begin
 000078 								case (CMD.CMDCTRL.ZP[3:2])
 000029 									2'b00: begin 
        									end
 000012 									2'b01: begin 
 000012 										VERTC.Y <= LD_PLUS;
 000012 										VERTD.Y <= LD_PLUS;
        									end
 000021 									2'b10: begin 
 000021 										VERTA.Y <= LD_MINUS;
 000021 										VERTB.Y <= LD_MINUS;
 000021 										VERTC.Y <= LD_PLUS;
 000021 										VERTD.Y <= LD_PLUS;
        									end
 000016 									2'b11: begin 
 000016 										VERTA.Y <= LD_MINUS;
 000016 										VERTB.Y <= LD_MINUS;
        									end
        								endcase
        							end							
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTB.Y <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 032619 					4'hA: begin
 032619 						case (CMD.CMDCTRL.COMM) 
 000078 							4'h1: begin
 000078 								case (CMD.CMDCTRL.ZP[1:0])
 000015 									2'b00: begin 
 000015 										VERTB.X <= CMD_DAT[12:0];
 000015 										VERTC.X <= CMD_DAT[12:0];
        									end
 000020 									2'b01: begin 
        									end
 000021 									2'b10: begin 
        									end
 000022 									2'b11: begin 
        									end
        								endcase
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTC.X <= CMD_DAT[12:0];
        							end
        							4'h8,
 000112 							4'hB: begin	
 000112 								USR_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
        							end
 000130 							4'h9: begin	
 000130 								SYS_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
 000130 								USR_CLIP.X2 <= {1'b0,CMD_DAT[9:0]};
        							end
        						endcase
        					end
 032619 					4'hB: begin
 032619 						case (CMD.CMDCTRL.COMM) 
 000078 							4'h1: begin
 000078 								case (CMD.CMDCTRL.ZP[3:2])
 000029 									2'b00: begin 
 000029 										VERTC.Y <= CMD_DAT[12:0];
 000029 										VERTD.Y <= CMD_DAT[12:0];
        									end
 000012 									2'b01: begin 
        									end
 000021 									2'b10: begin 
        									end
 000016 									2'b11: begin 
        									end
        								endcase
        							end
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTC.Y <= CMD_DAT[12:0];
        							end
        							4'h8,
 000112 							4'hB: begin	
 000112 								USR_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
        							end
 000130 							4'h9: begin	
 000130 								SYS_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
 000130 								USR_CLIP.Y2 <= {1'b0,CMD_DAT[9:0]};
        							end
        						endcase
        					end
 032617 					4'hC: begin
 032617 						case (CMD.CMDCTRL.COMM) 
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTD.X <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 032616 					4'hD: begin
 032616 						case (CMD.CMDCTRL.COMM) 
        							4'h2,
        							4'h3,
        							4'h4,							
        							4'h5,
        							4'h7,						
 000464 							4'h6: begin
 000464 								VERTD.Y <= CMD_DAT[12:0];
        							end
        						endcase
        					end
 032615 					4'hE: begin
        					end
        				endcase
        			end
        			
 9875794 			CLT_WE <= (VRAM_ST == VS_CLT_READ) && VRAM_RDY;
        			
 9875794 			GRD_WE <= (VRAM_ST == VS_GRD_READ) && VRAM_RDY;
 9874571 			if (GRD_WE) begin
 001223 				GRD_TBL[CMD_POS[1:0]] <= CMD_DAT;
        			end
        		end
        	end
        	assign CMD_READ_DONE = (VRAM_ST == VS_CMD_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd15);
        	
 017114 	wire [ 3: 0] CLT_RA = DRAW_PAT.C[3:0];
        	VDP1_COL_TBL CLT(.CLK(CLK), .WRADDR(CMD_POS), .DATA(CMD_DAT), .WREN(CLT_WE), .RDADDR(CLT_RA), .Q(CLT_Q));
        	assign CLT_READ_DONE = (VRAM_ST == VS_CLT_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd15);
        	
        	assign GRD_READ_DONE = (VRAM_ST == VS_GRD_READ) && VRAM_RDY && (VRAM_READ_POS == 4'd3);
        
        	//Registers
 006353 	wire REG_REQ = (A[20:19] == 2'b10) & ~AD_N & ~CS_N & ~REQ_N;
        	
        	assign MODR = {4'h1,3'b000,PTMR.PTM[1],FBCR.EOS,FBCR.DIE,FBCR.DIL,FBCR.FCM,TVMR.VBE,TVMR.TVM};
        	
 002811 	bit        VBOUT;
 9876593 	always @(posedge CLK or negedge RST_N) begin
 9876593 		bit        VTIM_N_OLD;
 9876593 		bit        FRAME_CHANGE;
 9876593 		bit        MANUAL_ERASECHANGE_PEND;
 9876593 		bit        START_DRAW_PEND;
 9876593 		bit        VBERASE_PEND;
        		
 000799 		if (!RST_N) begin
 000799 			TVMR <= '0;
 000799 			FBCR <= '0;
 000799 			PTMR <= '0;
 000799 			EWDR <= 16'h0000;
 000799 			EWLR <= 16'h0000;
 000799 			EWRR <= 16'h0000;
 000799 			EDSR <= '0;
 000799 			IRQ_N <= 1;
        			
 000799 			MANUAL_ERASECHANGE_PEND <= 0;
 000799 			FRAME_ERASE <= 0;
 000799 			VBLANK_ERASE <= 0;
 000799 			DRAW_TERMINATE <= 0;
 000799 			VBERASE_PEND <= 0;
~9875794 		end else if (!RES_N) begin
%000000 			TVMR <= '0;
%000000 			FBCR <= '0;
%000000 			PTMR <= '0;
%000000 			EDSR <= '0;
 9875794 		end else begin
 9875794 			START_DRAW_PEND <= 0;
 9875794 			DRAW_TERMINATE <= 0;
 9875237 			if (REG_REQ && !WE_N && !DTEN_N) begin
 000557 				case ({A[5:1],1'b0})
 000080 					5'h00: TVMR <= DI & TVMR_MASK;
 000146 					5'h02: FBCR <= DI & FBCR_MASK;
 000080 					5'h04: PTMR <= DI & PTMR_MASK;
 000080 					5'h06: EWDR <= DI & EWDR_MASK;
 000080 					5'h08: EWLR <= DI & EWLR_MASK;
 000080 					5'h0A: EWRR <= DI & EWRR_MASK;
 000011 					default:;
        				endcase
 000458 				if (A[5:1] == 5'h02>>1 && DI[1]) MANUAL_ERASECHANGE_PEND <= 1;
 000492 				if (A[5:1] == 5'h04>>1 && DI[1:0] == 2'b01) begin 
 000065 					START_DRAW_PEND <= 1; 
        `ifdef DEBUG
        					START_DRAW_CNT <= START_DRAW_CNT + 8'd1; 
        `endif
        				end
 000546 				if (A[5:1] == 5'h0C>>1 && DI[1]) DRAW_TERMINATE <= 1;
        			end
        			
 9875702 			if (DRAW_END) begin
 000092 				EDSR.CEF <= 1;
        			end
 4937904 			if (CE_R) begin
 4937890 				IRQ_N <= ~EDSR.CEF;
        			end
        
 9875794 			FRAME_START <= 0;
 9875729 			if (START_DRAW_PEND) begin
 000065 				FRAME_START <= 1;
 000065 				EDSR.CEF <= 0;
 000065 				DIE <= FBCR.DIE;
 000065 				DIL <= FBCR.DIL;
        			end
 9872983 			if (FRAME_CHANGE) begin
 002811 				FRAME_ERASE <= 0;
        `ifdef DEBUG
        				FRAMES_DBG <= FRAMES_DBG + 8'd1;
        `endif
 001616 				if (!FBCR.FCM) begin
 001616 					FB_SEL <= ~FB_SEL;
 001616 					FRAME_ERASE <= ~TVMR.TVM[1];
 001616 					VBERASE_PEND <= TVMR.TVM[1];
 001616 					EDSR.CEF <= 0;
 001616 					EDSR.BEF <= EDSR.CEF;
 001616 					LOPR <= COPR;
 001616 					DIE <= FBCR.DIE;
 001616 					DIL <= FBCR.DIL;
 001496 					if (PTMR.PTM[1]) begin
 000120 						FRAME_START <= 1;
        					end
 001616 					MANUAL_ERASECHANGE_PEND <= 0;
        `ifdef DEBUG
        					FRAMES_DBG <= 8'd0;
        `endif
 000051 				end else if (MANUAL_ERASECHANGE_PEND && FBCR.FCT) begin
 000051 					FB_SEL <= ~FB_SEL;
 000051 					EDSR.CEF <= 0;
 000051 					EDSR.BEF <= EDSR.CEF;
 000051 					LOPR <= COPR;
 000051 					DIE <= FBCR.DIE;
 000051 					DIL <= FBCR.DIL;
~000051 					if (PTMR.PTM[1]) begin
%000000 						FRAME_START <= 1;
        					end
 000051 					MANUAL_ERASECHANGE_PEND <= 0;
        `ifdef DEBUG
        					FRAMES_DBG <= 8'd0;
        `endif
 001129 				end else if (MANUAL_ERASECHANGE_PEND && !FBCR.FCT) begin
 000015 					FRAME_ERASE <= ~TVMR.TVM[1];
 000015 					VBERASE_PEND <= TVMR.TVM[1];
 000015 					MANUAL_ERASECHANGE_PEND <= 0;
        				end;
        			end
        			
 9875794 			FRAME_CHANGE <= 0;
 7623712 			if (DCE_R) begin
 2252082 				VTIM_N_OLD <= VTIM_N;
        				
 2249271 				if (VTIM_N && !VTIM_N_OLD) begin
 002811 					VBOUT <= 1;
        				end
 2249271 				if (VTIM_N && HTIM_PIPE[11:10] == 2'b10 && VBOUT) begin
 002811 					VBOUT <= 0;
 002811 					FRAME_CHANGE <= 1;
        				end
        				
 2249271 				if (!VTIM_N && VTIM_N_OLD) begin
 001739 					if (TVMR.VBE) begin
 001072 						VBLANK_ERASE <= 1;
        					end
 002011 					if (VBERASE_PEND) begin
 000800 						VBLANK_ERASE <= 1;
        					end
 002811 					VBERASE_PEND <= 0;
        				end
 2249271 				if (VTIM_N && !VTIM_N_OLD) begin
 002811 					VBLANK_ERASE <= 0;
 002811 					FRAME_ODD <= ~FRAME_ODD;
        				end
        			end
        		end
        	end
        	
~004109 	bit  [15: 0] REG_DO;
 9876594 	always_comb begin
 9876594 		case ({A[5:1],1'b0})
 584825 			5'h10: REG_DO <= EDSR & EDSR_MASK;
 551866 			5'h12: REG_DO <= LOPR & LOPR_MASK;
 596559 			5'h14: REG_DO <= COPR & COPR_MASK;
 896693 			5'h16: REG_DO <= MODR & MODR_MASK;
 7246651 			default: REG_DO <= '0;
        		endcase
        	end
 10944123 	assign DO = REG_SEL ? REG_DO : FBRAM_SEL ? FB_DRAW_Q : MEM_DO;
        	assign RDY_N = ~CPU_VRAM_RRDY | ~CPU_VRAM_WRDY | ~CPU_FB_RRDY | ~CPU_FB_WRDY | ~READY;
        	
        endmodule
        
        
        module VDP1_PAT_FIFO #(parameter l = 1) (
 9876514 	input	         CLK,
 037645 	input          RST,
        	
 028966 	input	 [15: 0] DATA,
 369582 	input	         WRREQ,
 180615 	input	         RDREQ,
 031514 	output [15: 0] Q,
 101079 	output	      EMPTY,
 068844 	output	      FULL
        );
        
 029854 	wire [15: 0] sub_wire0;
 074885 	bit  [l-1: 0] RADDR;
 108325 	bit  [l-1: 0] WADDR;
 169201 	bit  [l: 0] AMOUNT;
 037642 	bit         NULL;
 9876514 	always @(posedge CLK) begin
 7358617 		if (RST) begin
 7358617 			AMOUNT <= '0;
 7358617 			RADDR <= '0;
 7358617 			WADDR <= '0;
 7358617 			NULL <= 1;
        		end
 2517897 		else begin
 2334572 			if (WRREQ && !AMOUNT[l]) begin
 183325 				WADDR <= WADDR + 1'd1;
 183325 				NULL <= 0;
        			end
 2371755 			if (RDREQ && AMOUNT) begin
 146142 				RADDR <= RADDR + 1'd1;
        			end
        			
 169922 			if (WRREQ && !RDREQ && !AMOUNT[l]) begin
 169922 				AMOUNT <= AMOUNT + 1'd1;
 2215236 			end else if (!WRREQ && RDREQ && AMOUNT) begin
 132739 				AMOUNT <= AMOUNT - 1'd1;
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
        		
 7734168 	assign Q = NULL ? '0 : sub_wire0;
        
        endmodule
        
        module VDP1_COL_TBL (
 9876514 	input         CLK,
 261998 	input	  [3:0] WRADDR,
 020186 	input	 [15:0] DATA,
 000800 	input	        WREN,
 017114 	input	  [3:0] RDADDR,
 015172 	output [15:0] Q
        );
        
 015172 	wire [15:0] sub_wire0;
        
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
        
        module VDP1_DIV_24_12 
        (
 29629542 	input         CLK,
~104063 	input	 [16:0] DVDNT,
~017520 	input	 [11:0] DVSR,
 317289 	input	        START,
 540919 	output [16:0] QUOT,
 317292 	output reg    DONE
        );
        	
 836168 	bit  [28: 0] D;
 833615 	bit          T;	
 23393470 	wire [28: 0] SUM = T ? $signed(D) - $unsigned({DVSR,17'h00000}) : $signed(D) + $unsigned({DVSR,17'h00000});
 29629542 	always @(posedge CLK) begin
 29629542 		bit  [ 4: 0] STEP;
        	
 317289 		if (START) begin
 317289 			D <= {12'h000,DVDNT};
 317289 			T <= ~(1'b0^DVSR[11]);
 317289 			STEP <= '0;
 317289 			DONE <= 0;
        		end
 23600997 		else if (!DONE) begin
 5711256 			D <= {SUM[27:0],~(SUM[28]^DVSR[11])};
 5711256 			T <= ~(SUM[28]^DVSR[11]);
 5711256 			STEP <= STEP + 5'd1;
 5393964 			if (STEP == 5'd17) DONE <= 1;
        		end
        	end
        	assign QUOT = D[16:0];
        
        endmodule
        
        
