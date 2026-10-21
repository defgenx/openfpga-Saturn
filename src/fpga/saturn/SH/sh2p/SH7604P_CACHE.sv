module SH7604P_CACHE (
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
	input             CBUS_ID,
	input             CBUS_TAS,
	output            CBUS_BUSY,
	
	output     [31:0] IBUS_A,
	input      [31:0] IBUS_DI,
	output     [31:0] IBUS_DO,
	output      [3:0] IBUS_BA,
	output            IBUS_WE,
	output            IBUS_REQ,
	output            IBUS_PREREQ,
	output            IBUS_BURST,
	output            IBUS_LOCK,
	input             IBUS_WAIT
);

	import SH7604P_PKG::*;
	
	// synopsys translate_off
	`define SIM
	// synopsys translate_on

	CCR_t CCR;
	
	bit  [31:0] IBADDR;
	bit  [31:0] IBDATA;
	bit   [3:0] IBBA;
	bit         IBWE;
	bit         IBREQ;
	bit         IBBURST;
	bit         IBLOCK;
	
	wire CCR_SEL = (CBUS_A == 32'hFFFFFE92);
	
	wire CACHE_AREA      = (CBUS_A[31:29] == 3'b000);
	wire NOCACHE_AREA    = (CBUS_A[31:29] == 3'b001);
	wire PURGE_AREA      = (CBUS_A[31:29] == 3'b010);
	wire CACHE_ADDR_AREA = (CBUS_A[31:29] == 3'b011);
	wire CACHE_DATA_AREA = (CBUS_A[31:29] == 3'b110 || CBUS_A[31:29] == 3'b100);
	wire IO_AREA         = (CBUS_A[31:29] == 3'b111) && !CCR_SEL;
	
	
	bit   [3:0] WAY_HIT;
	bit   [3:0] WAY_TAG;
	
	bit  [31:0] CACHE_DATA;
	bit  [28:2] CACHE_WR_ADDR;
	bit   [3:0] CACHE_WR_BA;
	bit   [3:0] CACHE_WR_WAY;
	bit         CACHE_UPDATE;
	bit         CACHE_WRITE;
	bit         CACHE_READ;
	bit         CACHE_LINE_PURGE;
	bit         CACHE_DATA_WRITE;
	bit         CACHE_ADDR_WRITE;
	bit         CACHE_PURGE;
	bit   [5:0] LRU_DATA;
	
	function bit [3:0] WayFromLRU(input bit [5:0] lru, input bit two_way);
		bit [3:0] res;
	
		if (two_way) begin
			res = lru[0] ? 4'b0100 : 4'b1000;
		end else begin
			casez (lru)
				6'b111???: res = 4'b0001;
				6'b0??11?: res = 4'b0010;
				6'b?0?0?1: res = 4'b0100;
				6'b??0?00: res = 4'b1000;
				default:   res = 4'b0000;
			endcase
		end
		return res;
	endfunction
	
	function bit [5:0] LRUSelect(input bit [3:0] way, input bit [5:0] lru);
		bit [5:0] res;

		res = way[3] ? {lru[5],lru[4],1'b1,  lru[2],1'b1,  1'b1  } :
		      way[2] ? {lru[5],1'b1  ,lru[3],1'b1  ,lru[1],1'b0  } :
		      way[1] ? {1'b1  ,lru[4],lru[3],1'b0  ,1'b0  ,lru[0]} :
				way[0] ? {1'b0  ,1'b0  ,1'b0  ,lru[2],lru[1],lru[0]} :
				         {lru[5],lru[4],lru[3],lru[2],lru[1],lru[0]};
		return res;
	endfunction
	
	function bit [1:0] WayToAddr(input bit [3:0] way);
		bit [1:0] res;

		res = way[0] ? 2'b00 :
		      way[1] ? 2'b01 :
		      way[2] ? 2'b10 :
		      way[3] ? 2'b11 : 
				         2'b00;
		return res;
	endfunction
	
	function bit [3:0] AddrToWay(input bit [1:0] a);
		bit [3:0] res;
	
		case (a) 
			2'b00: res = 4'b0001;
			2'b01: res = 4'b0010;
			2'b10: res = 4'b0100;
			2'b11: res = 4'b1000;
		endcase
		return res;
	endfunction
	

	wire  [1:0] CRAM_WRWAY = CACHE_DATA_WRITE ? CACHE_WR_ADDR[11:10] : WayToAddr(CACHE_WR_WAY);
	wire  [9:0] CRAM_WRADDR = {CRAM_WRWAY,CACHE_WR_ADDR[9:2]};
	wire [31:0] CRAM_D = CACHE_UPDATE ? IBUS_DI : CBUS_DI;
	wire  [3:0] CRAM_WE = {4{CACHE_UPDATE}} | (CACHE_WR_BA & {4{CACHE_WRITE | CACHE_DATA_WRITE}});
	
	wire  [1:0] CRAM_RDWAY = CACHE_DATA_AREA ? CBUS_A[11:10] : CACHE_ADDR_AREA ? CCR.W : WayToAddr(WAY_HIT);
	wire  [9:0] CRAM_RDADDR = {CRAM_RDWAY,CBUS_A[9:2]};
	
	bit  [31:0] CRAM_Q;
	SH2P_CACHE_RAM ram0(.wrclock(CLK), .wraddress(CRAM_WRADDR), .data(CRAM_D[ 7: 0]), .wren(CRAM_WE[0] & EN & CE_R), .rdclock(CLK), .rdaddress(CRAM_RDADDR), .q(CRAM_Q[ 7: 0]));
	SH2P_CACHE_RAM ram1(.wrclock(CLK), .wraddress(CRAM_WRADDR), .data(CRAM_D[15: 8]), .wren(CRAM_WE[1] & EN & CE_R), .rdclock(CLK), .rdaddress(CRAM_RDADDR), .q(CRAM_Q[15: 8]));
	SH2P_CACHE_RAM ram2(.wrclock(CLK), .wraddress(CRAM_WRADDR), .data(CRAM_D[23:16]), .wren(CRAM_WE[2] & EN & CE_R), .rdclock(CLK), .rdaddress(CRAM_RDADDR), .q(CRAM_Q[23:16]));
	SH2P_CACHE_RAM ram3(.wrclock(CLK), .wraddress(CRAM_WRADDR), .data(CRAM_D[31:24]), .wren(CRAM_WE[3] & EN & CE_R), .rdclock(CLK), .rdaddress(CRAM_RDADDR), .q(CRAM_Q[31:24]));
	
	
	wire [18:0] CTAG_D = CACHE_UPDATE ? CACHE_WR_ADDR[28:10] : CACHE_ADDR_WRITE ? CACHE_WR_ADDR[28:10] : '0;
	wire  [3:0] CTAG_WE = ({4{CACHE_UPDATE}} & CACHE_WR_WAY) | ({4{CACHE_ADDR_WRITE}} & AddrToWay(CCR.W));
	bit  [18:0] CTAG_Q[4];
	wire [37:0] CTAG_Q01, CTAG_Q23;
	SH2P_CACHE_TAG2 tag01(.clock(CLK), .wraddress(CACHE_WR_ADDR[9:4]), .data({2{CTAG_D}}), .wren(CTAG_WE[1:0] & {2{EN & CE_R}}), .rdaddress(CBUS_A[9:4]), .q(CTAG_Q01));
	SH2P_CACHE_TAG2 tag23(.clock(CLK), .wraddress(CACHE_WR_ADDR[9:4]), .data({2{CTAG_D}}), .wren(CTAG_WE[3:2] & {2{EN & CE_R}}), .rdaddress(CBUS_A[9:4]), .q(CTAG_Q23));
	assign CTAG_Q = '{CTAG_Q01[18:0], CTAG_Q01[37:19], CTAG_Q23[18:0], CTAG_Q23[37:19]};
	
	// Per-set state in one MLAB word {stamp[5:0], valid[3:0], lru[5:0]}. A set is live while stamp == EPOCH; a global
	// purge (CCR.CP) advances EPOCH, which invalidates every set at once. Port A is read at the write set (second
	// half of the SH-2 cycle) and by the scrubber (first half); port B at the lookup set.
	bit   [5:0] EPOCH;
	bit         INIT;
	bit   [5:0] SC_PTR;
	wire  [5:0] LV_A_RDADDR = CE_F ? SC_PTR : CACHE_WR_ADDR[9:4];
	wire [15:0] LV_A_Q, LV_B_Q;
	wire        SLA = (LV_A_Q[15:10] == EPOCH) & ~INIT;
	wire        SLB = (LV_B_Q[15:10] == EPOCH) & ~INIT;
	wire  [3:0] VA = LV_A_Q[9:6] & {4{SLA}};
	wire  [5:0] LRUA = LV_A_Q[5:0] & {6{SLA}};
	wire  [3:0] CVALID_Q = LV_B_Q[9:6] & {4{SLB}};
	
	wire  [3:0] ADDRWAY = AddrToWay(CCR.W);
	wire  [3:0] VN = CACHE_LINE_PURGE ? (LV_A_Q[9:6] & ~CACHE_WR_WAY) :
	                 CACHE_ADDR_WRITE ? ((VA & ~ADDRWAY) | (ADDRWAY & {4{CACHE_WR_ADDR[2]}})) :
	                 CACHE_UPDATE     ? (VA | CACHE_WR_WAY) : VA;
	wire  [5:0] LRUN = CACHE_LINE_PURGE ? LV_A_Q[5:0] : CACHE_ADDR_WRITE ? CBUS_DI[9:4] : LRUSelect(CACHE_WR_WAY, LRUA);
	wire        LV_FSM_WE = CACHE_UPDATE | CACHE_WRITE | CACHE_READ | CACHE_ADDR_WRITE | (CACHE_LINE_PURGE & SLA);
	wire        SC_WE = INIT | (LV_A_Q[15:10] != 6'd0 && LV_A_Q[15:10] != EPOCH);
	wire  [5:0] LV_WRADDR = CE_F ? SC_PTR : CACHE_WR_ADDR[9:4];
	wire [15:0] LV_D = CE_F ? {6'd0, LV_A_Q[9:0]} : {EPOCH, VN, LRUN};
	wire        LV_WE = EN & ((CE_R & LV_FSM_WE) | (CE_F & SC_WE));
	SH2P_CACHE_LV lv_a(.clock(CLK), .wraddress(LV_WRADDR), .data(LV_D), .wren(LV_WE), .rdaddress(LV_A_RDADDR), .q(LV_A_Q));
	SH2P_CACHE_LV lv_b(.clock(CLK), .wraddress(LV_WRADDR), .data(LV_D), .wren(LV_WE), .rdaddress(CBUS_A[9:4]), .q(LV_B_Q));
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			EPOCH <= 6'd1;
			INIT <= 1;
			SC_PTR <= '0;
		end
		else begin
			if (!(EN && CE_R) && CCR.CP) EPOCH <= (EPOCH == 6'd63) ? 6'd1 : EPOCH + 6'd1;
			if (EN && CE_F) begin
				SC_PTR <= SC_PTR + 6'd1;
				if (SC_PTR == 6'd63) INIT <= 0;
			end
		end
	end
	
	always_comb begin
		LRU_DATA = LV_B_Q[5:0] & {6{SLB}};
	end
	
	always_comb begin	
		bit [31: 0] CACHE_ADDR_AREA_DATA;
		
		WAY_TAG[0] = CTAG_Q[0] == CBUS_A[28:10];
		WAY_TAG[1] = CTAG_Q[1] == CBUS_A[28:10];
		WAY_TAG[2] = CTAG_Q[2] == CBUS_A[28:10];
		WAY_TAG[3] = CTAG_Q[3] == CBUS_A[28:10];
		
		WAY_HIT = WAY_TAG & CVALID_Q;
		
		if (CACHE_ADDR_AREA) begin
			case (CCR.W)
				2'b00: CACHE_ADDR_AREA_DATA = {3'b000, CTAG_Q[0], LRU_DATA, 1'b0, CVALID_Q[0], 2'b00};
				2'b01: CACHE_ADDR_AREA_DATA = {3'b000, CTAG_Q[1], LRU_DATA, 1'b0, CVALID_Q[1], 2'b00};
				2'b10: CACHE_ADDR_AREA_DATA = {3'b000, CTAG_Q[2], LRU_DATA, 1'b0, CVALID_Q[2], 2'b00};
				2'b11: CACHE_ADDR_AREA_DATA = {3'b000, CTAG_Q[3], LRU_DATA, 1'b0, CVALID_Q[3], 2'b00};
			endcase
			case (CBUS_BA)
				4'b1111: CACHE_DATA = CACHE_ADDR_AREA_DATA;
				default: CACHE_DATA = {2{CACHE_ADDR_AREA_DATA[15:0]}};
			endcase
		end
		else
			CACHE_DATA = CRAM_Q;
	end
	
	wire HIT = WAY_HIT[0] | WAY_HIT[1] | WAY_HIT[2] | WAY_HIT[3];
	
	bit         IBDATA_RDY;
	bit         IBUS_WRITE;
	bit         IBUS_WRITE_PEND;
	bit         IBUS_READ;
	bit         IBUS_READ_PEND;
	bit         IBUS_READARRAY;
	always @(posedge CLK or negedge RST_N) begin
		bit [ 1: 0] ARRAY_POS;
		
		if (!RST_N) begin
			IBADDR <= '0;
			IBDATA <= '0;
			IBBA <= '0;
			IBWE <= '0;
			IBREQ <= 0;
			IBBURST <= 0;
			IBLOCK <= 0;
			ARRAY_POS <= '0;
			CACHE_WR_ADDR <= '0;
			CACHE_WR_BA <= '0;
			CACHE_WR_WAY <= 0;
			CACHE_UPDATE <= 0;
			CACHE_WRITE <= 0;
			CACHE_READ <= 0;
			CACHE_LINE_PURGE <= 0;
			CACHE_DATA_WRITE <= 0;
			CACHE_ADDR_WRITE <= 0;
			
			IBDATA_RDY <= 0;
			IBUS_WRITE <= 0;
			IBUS_WRITE_PEND <= 0;
			IBUS_READ <= 0;
			IBUS_READARRAY <= 0;
			IBUS_READ_PEND <= 0;
		end
		else if (EN && CE_R) begin
			if (!RES_N) begin
				IBUS_WRITE_PEND <= 0;
			end
		end
		else if (EN && CE_F) begin
			CACHE_UPDATE <= 0;
			CACHE_WRITE <= 0;
			CACHE_READ <= 0;
			CACHE_LINE_PURGE <= 0;
			CACHE_DATA_WRITE <= 0;
			CACHE_ADDR_WRITE <= 0;
			
			IBDATA_RDY <= 0;
			if (!IBUS_WAIT) begin
				if (IBUS_WRITE) begin
					IBREQ <= 0;
					IBUS_WRITE <= 0;
				end
				else if (IBUS_READ) begin
					IBREQ <= 0;
					IBDATA_RDY <= 1;
					IBUS_READ <= 0;
				end
				else if (IBUS_READARRAY) begin
					IBADDR <= {IBADDR[31:4],IBADDR[3:2] + 2'd1,2'b00};
					if (IBADDR[3:2] == ARRAY_POS) begin
						IBREQ <= 0;
						IBDATA_RDY <= 1;
						IBUS_READARRAY <= 0;
					end
					if (IBADDR[3:2] == ARRAY_POS - 2'd1) begin
						IBLOCK <= 0;
					end
					CACHE_WR_ADDR <= IBADDR[28:2];
					CACHE_WR_BA <= 4'b1111;
					CACHE_UPDATE <= CBUS_ID ? ~CCR.ID : ~CCR.OD;
				end
			end
			
			if (CBUS_REQ) begin
				if (CBUS_WR) begin
					if ((CACHE_AREA || NOCACHE_AREA || IO_AREA)) begin
						if (!IBREQ) begin
							IBADDR <= CBUS_A;
							IBDATA <= CBUS_DI;
							IBBA <= CBUS_BA;
							IBWE <= 1;
							IBREQ <= 1;
							IBBURST <= 0;
							IBLOCK <= 0;
							IBUS_WRITE <= 1;
							IBUS_WRITE_PEND <= 0;
						end else if (!IBUS_WRITE_PEND) begin
							IBUS_WRITE_PEND <= 1;
						end
					end
					
					if (CACHE_AREA && HIT && CCR.CE && (!IBREQ)) begin
						CACHE_WR_ADDR <= CBUS_A[28:2];
						CACHE_WR_BA <= CBUS_BA;
						CACHE_WR_WAY <= WAY_HIT;
						CACHE_WRITE <= 1;
					end
					else if (PURGE_AREA) begin
						CACHE_WR_ADDR <= CBUS_A[28:2];
//						CACHE_WR_BA <= 4'b1111;
						CACHE_WR_WAY <= WAY_TAG;
						CACHE_LINE_PURGE <= 1;
					end
					else if (CACHE_DATA_AREA) begin
						CACHE_WR_ADDR <= CBUS_A[28:2];
						CACHE_WR_BA <= CBUS_BA;
						CACHE_DATA_WRITE <= 1;
					end
					else if (CACHE_ADDR_AREA) begin
						CACHE_WR_ADDR <= CBUS_A[28:2];
//						CACHE_WR_BA <= 4'b1111;
						CACHE_ADDR_WRITE <= 1;
					end
				end
				else begin
					if (((CACHE_AREA && (!CCR.CE || CBUS_TAS)) || NOCACHE_AREA || IO_AREA) && !IBUS_READ) begin
						if (!IBREQ) begin
							IBADDR <= CBUS_A;
							IBBA <= CBUS_BA;
							IBWE <= 0;
							IBREQ <= 1;
							IBBURST <= 0;
							IBLOCK <= CBUS_TAS;
							IBUS_READ <= 1;
							IBUS_READ_PEND <= 0;
						end else if (!IBUS_READ_PEND) begin
							IBUS_READ_PEND <= 1;
						end
					end
					else if (CACHE_AREA && CCR.CE && !CBUS_TAS && !IBUS_READARRAY) begin
						if (HIT) begin
							CACHE_WR_ADDR <= CBUS_A[28:2];
							CACHE_WR_WAY <= WAY_HIT;
							CACHE_READ <= 1;
						end
						else begin
							if (!IBREQ) begin
								IBADDR <= {CBUS_A[31:4],CBUS_A[3:2] + 2'd1,2'b00};
								IBBA <= 4'b1111;
								IBWE <= 0;
								IBREQ <= 1;
								IBBURST <= 1;
								IBLOCK <= 0;
								ARRAY_POS <= CBUS_A[3:2];
								CACHE_WR_WAY <= WayFromLRU(LRU_DATA, CCR.TW);
								IBUS_READARRAY <= 1;
								IBUS_READ_PEND <= 0;
							end else if (!IBUS_READ_PEND) begin
								IBUS_READ_PEND <= 1;
							end
						end
					end
					else if (PURGE_AREA) begin
						CACHE_WR_ADDR <= CBUS_A[28:2];
//						CACHE_WR_BA <= 4'b1111;
						CACHE_WR_WAY <= WAY_TAG;
						CACHE_LINE_PURGE <= 1;
					end
				end
			end
			
		end
	end
	
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			CCR <= '0;
			// synopsys translate_off
			CCR <= 8'h00;
			// synopsys translate_on
		end
		else if (!RES_N) begin
			CCR <= CCR_INIT;
		end
		else if (CE_R) begin
			if (CCR_SEL && CBUS_WR && CBUS_REQ) begin
				CCR <= CBUS_DI[7:0] & CCR_WMASK;
			end
			if (CCR.CP) CCR.CP <= 0;
		end
	end
	
	assign CBUS_DO = CCR_SEL ? {4{CCR & CCR_RMASK}} : 
	                 IBDATA_RDY ? IBUS_DI : 
						  CACHE_DATA;
	assign CBUS_BUSY = CBUS_REQ && (IBUS_READ || IBUS_READARRAY || IBUS_READ_PEND || IBUS_WRITE_PEND);
						  
	assign IBUS_A = IBADDR;
	assign IBUS_DO = IBDATA;
	assign IBUS_BA = IBBA;
	assign IBUS_WE = IBWE;
	assign IBUS_REQ = IBREQ;
	assign IBUS_PREREQ = CBUS_REQ && ((!CBUS_WR && ((CACHE_AREA && (!CCR.CE /*|| CBUS_TAS*/)) || (NOCACHE_AREA && !CBUS_TAS))) || (!CBUS_WR && CACHE_AREA && CCR.CE && !HIT)) && !IBREQ;
	assign IBUS_BURST = IBBURST; 
	assign IBUS_LOCK = IBLOCK;

endmodule
