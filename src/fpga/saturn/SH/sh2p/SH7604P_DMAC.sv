module SH7604P_DMAC (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	input             NMI_N,
	
	input             DREQ0,
	output            DACK0,
	input             DREQ1,
	output            DACK1,
	
	input             RXI_IRQ,
	input             TXI_IRQ,
	
	input      [31:0] IBUS_A,
	input      [31:0] IBUS_DI,
	output     [31:0] IBUS_DO,
	input       [3:0] IBUS_BA,
	input             IBUS_WE,
	input             IBUS_REQ,
	output            IBUS_ACT,
	
	output     [31:0] DBUS_A,
	input      [31:0] DBUS_DI,
	output     [31:0] DBUS_DO,
	output      [3:0] DBUS_BA,
	output            DBUS_WE,
	output            DBUS_REQ,
	output            DBUS_LOCK,
	output            DBUS_BURST,
	input             DBUS_WAIT,
	
	input             BSC_ACK,
	
	output            DMAC0_IRQ,
	output      [7:0] DMAC0_VEC,
	output            DMAC1_IRQ,
	output      [7:0] DMAC1_VEC
);

	import SH7604P_PKG::*;

	// CE_R and CE_F are never high in the same clk_sys.
	CHCRx_t     CHCR[2];
	bit  [23:0] TCR[2];
	bit   [1:0] DRCR_RS[2];
	bit   [7:0] VCRDMA0;
	bit   [7:0] VCRDMA1;
	DMAOR_t     DMAOR;

	function bit [3:0] BAFromAddr(input bit [1:0] addr, input bit [1:0] sz);
		bit [3:0] res;
		case (sz)
			2'b00: res = {~addr[1]&~addr[0],~addr[1]&addr[0],addr[1]&~addr[0],addr[1]&addr[0]};
			2'b01: res = {~addr[1]         ,~addr[1]        ,addr[1]                 ,addr[1]};
			default: res = 4'b1111;
		endcase
		return res;
	endfunction

	wire REG1_SEL = IBUS_A[31:2] == 30'h3FFFFF9C && (IBUS_A[1] ^ IBUS_A[0]);
	wire REG2_SEL = IBUS_A[31:6] == 26'h3FFFFFE && !(IBUS_A[5:4] == 2'b11 && IBUS_A[3:2] != 2'b00);
	wire [3:0] IA = IBUS_A[5:2];
	wire IB_RD = REG2_SEL & ~IBUS_WE & IBUS_REQ;
	wire IB_WR = REG2_SEL &  IBUS_WE & IBUS_REQ;

	wire CH_EN[2] = '{DMAOR.DME & CHCR[0].DE, DMAOR.DME & CHCR[1].DE};
	wire CH_AVAIL[2] = '{~CHCR[0].TE & ~DMAOR.NMIF & ~DMAOR.AE, ~CHCR[1].TE & ~DMAOR.NMIF & ~DMAOR.AE};

	bit         CH_REQ[2];
	bit         CH_REQ_CLR[2];
	always @(posedge CLK or negedge RST_N) begin
		bit         DREQ0_REQ;
		bit         DREQ1_REQ;
		bit         DREQ0_OLD;
		bit         DREQ1_OLD;
		
		if (!RST_N) begin
			DREQ0_REQ <= 0;
			DREQ1_REQ <= 0;
			DREQ0_OLD <= 0;
			DREQ1_OLD <= 0;
			CH_REQ <= '{0,0};
		end
		else if (CE_R) begin
			DREQ0_OLD <= DREQ0;
			if (!CHCR[0].DS) DREQ0_REQ <= ~DREQ0 ^ CHCR[0].DL;
			else DREQ0_REQ <= (~DREQ0 ^ CHCR[0].DL) & (DREQ0_OLD ^ CHCR[0].DL);
			
			if (!CH_REQ[0] && CH_EN[0] && CH_AVAIL[0]) begin
				if (CHCR[0].AR) CH_REQ[0] <= 1;
				else 
					case(DRCR_RS[0])
						2'b00: CH_REQ[0] <= DREQ0_REQ;
						2'b01: CH_REQ[0] <= RXI_IRQ;
						2'b10: CH_REQ[0] <= TXI_IRQ;
						2'b11: CH_REQ[0] <= 0;
					endcase
			end
			else if (CH_REQ_CLR[0] || !CH_EN[0]) begin
				CH_REQ[0] <= 0;
			end
			
			DREQ1_OLD <= DREQ1;
			if (!CHCR[1].DS) DREQ1_REQ <= ~DREQ1 ^ CHCR[1].DL;
			else DREQ1_REQ <= (~DREQ1 ^ CHCR[1].DL) & (DREQ1_OLD ^ CHCR[1].DL);
			
			if (!CH_REQ[1] && CH_EN[1] && CH_AVAIL[1]) begin
				if (CHCR[1].AR) CH_REQ[1] <= 1;
				else 
					case(DRCR_RS[1])
						2'b00: CH_REQ[1] <= DREQ1_REQ;
						2'b01: CH_REQ[1] <= RXI_IRQ;
						2'b10: CH_REQ[1] <= TXI_IRQ;
						2'b11: CH_REQ[1] <= 0;
					endcase
			end
			else if (CH_REQ_CLR[1] || !CH_EN[1]) begin
				CH_REQ[1] <= 0;
			end
		end
	end
	
	bit         DMA_REQ;
	bit         DMA_REQ_CLR;
	bit         DMA_CH;
	bit         RB_PRIO;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			DMA_REQ <= 0;
			DMA_CH <= 0;
			RB_PRIO <= 0;
		end
		else if (CE_R) begin
			if (!DMA_REQ) begin
				if ((CH_REQ[0] && CH_EN[0] && CH_AVAIL[0]) && 
				    (CH_REQ[1] && CH_EN[1] && CH_AVAIL[1]) && DMAOR.PR) begin
					DMA_REQ <= 1;
					DMA_CH <= RB_PRIO;
				end
				else if (CH_REQ[0] && CH_EN[0] && CH_AVAIL[0]) begin
					DMA_REQ <= 1;
					DMA_CH <= 0;
				end
				else if (CH_REQ[1] && CH_EN[1] && CH_AVAIL[1]) begin
					DMA_REQ <= 1;
					DMA_CH <= 1;
				end
			end
			else if (DMA_REQ_CLR) begin
				DMA_REQ <= 0;
				RB_PRIO <= ~RB_PRIO;
			end
		end
	end
	
	bit         DMA_WR;
	bit         DMA_RD;
	bit         DMA_BURST;
	bit         DMA_LOCK;
	bit   [1:0] LW_CNT;
	bit   [1:0] SA_BA;
	bit         RD_BUF_LATCH;
	bit         CHCR_TE_OLD[2];
	
	// Active channel view
	CHCRx_t CC;
	always_comb CC = CHCR[DMA_CH];
	wire [1:0] TS = CC.TS;
	wire       TS3 = &TS;
	wire [23:0] TCR_CUR = TCR[DMA_CH];
	wire [23:0] TCR_NEXT = TCR_CUR - 24'd1;
	wire        TCR_NEXT_0 = TCR_NEXT == 24'd0;
	wire        TCR_NEXT_1 = TCR_NEXT == 24'd1;
	
	// SAR/DAR of both channels: word {channel, DAR}; one copy follows the DMA datapath, one serves IBUS reads.
	// A word that was never written reads as 0.
	bit   [3:0] SV;
	wire  [1:0] ADDR_A = {DMA_CH, ~DMA_RD};
	wire  [1:0] ADDR_B = {IA[2], IA[0]};
	wire [31:0] QA, QB;
	wire        EV      = CE_F & ~DBUS_WAIT & (DMA_RD | DMA_WR);
	wire        AR_EN   = DMA_RD ? (TS3 | (CC.SM[1] ^ CC.SM[0])) : (CC.DM[1] ^ CC.DM[0]);
	wire        AR_SUB  = DMA_RD ? (CC.SM == 2'b10 && !TS3) : (CC.DM == 2'b10);
	wire  [2:0] AR_INC  = TS[1] ? 3'd4 : TS[0] ? 3'd2 : 3'd1;
	wire        AGATE   = SV[ADDR_A];
	wire [31:0] AVAL    = QA & {32{AGATE}};
	wire [31:0] ASUM    = AVAL + ({32{AR_SUB}} ^ {29'd0,AR_INC}) + {31'd0,AR_SUB};
	wire        MW_IB   = CE_R & IB_WR & ~IA[3] & ~IA[1];
	wire        MW_EV   = EV & AR_EN;
	wire        MW_EN   = MW_IB | MW_EV;
	wire  [1:0] MW_ADDR = MW_IB ? ADDR_B : ADDR_A;
	wire [31:0] MW_DATA = MW_IB ? IBUS_DI : ASUM;
	
	altdpram #(.width(32), .widthad(2), .width_byteena(1), .indata_aclr("OFF"), .indata_reg("INCLOCK"),
		.intended_device_family("Cyclone V"), .lpm_type("altdpram"), .outdata_aclr("OFF"), .outdata_reg("UNREGISTERED"),
		.power_up_uninitialized("FALSE"), .ram_block_type("MLAB"), .rdaddress_aclr("OFF"), .rdaddress_reg("UNREGISTERED"),
		.rdcontrol_aclr("OFF"), .rdcontrol_reg("UNREGISTERED"), .read_during_write_mode_mixed_ports("CONSTRAINED_DONT_CARE"),
		.wraddress_aclr("OFF"), .wraddress_reg("INCLOCK"), .wrcontrol_aclr("OFF"), .wrcontrol_reg("INCLOCK"))
	SARDAR_A (.data(MW_DATA), .inclock(CLK), .rdaddress(ADDR_A), .wraddress(MW_ADDR), .wren(MW_EN), .q(QA),
		.aclr(1'b0), .byteena(1'b1), .inclocken(1'b1), .rdaddressstall(1'b0), .rden(1'b1), .wraddressstall(1'b0));
	altdpram #(.width(32), .widthad(2), .width_byteena(1), .indata_aclr("OFF"), .indata_reg("INCLOCK"),
		.intended_device_family("Cyclone V"), .lpm_type("altdpram"), .outdata_aclr("OFF"), .outdata_reg("UNREGISTERED"),
		.power_up_uninitialized("FALSE"), .ram_block_type("MLAB"), .rdaddress_aclr("OFF"), .rdaddress_reg("UNREGISTERED"),
		.rdcontrol_aclr("OFF"), .rdcontrol_reg("UNREGISTERED"), .read_during_write_mode_mixed_ports("CONSTRAINED_DONT_CARE"),
		.wraddress_aclr("OFF"), .wraddress_reg("INCLOCK"), .wrcontrol_aclr("OFF"), .wrcontrol_reg("INCLOCK"))
	SARDAR_B (.data(MW_DATA), .inclock(CLK), .rdaddress(ADDR_B), .wraddress(MW_ADDR), .wren(MW_EN), .q(QB),
		.aclr(1'b0), .byteena(1'b1), .inclocken(1'b1), .rdaddressstall(1'b0), .rden(1'b1), .wraddressstall(1'b0));
	
	// RD_BUF[1..3] in a 4-word ring (newest at RP, RD_BUF[3] at RP+2), RD_BUF[0] in RD0.
	bit   [1:0] RP;
	bit  [31:0] RD0;
	wire [31:0] RD_BUF3;
	altdpram #(.width(32), .widthad(2), .width_byteena(1), .indata_aclr("OFF"), .indata_reg("INCLOCK"),
		.intended_device_family("Cyclone V"), .lpm_type("altdpram"), .outdata_aclr("OFF"), .outdata_reg("UNREGISTERED"),
		.power_up_uninitialized("FALSE"), .ram_block_type("MLAB"), .rdaddress_aclr("OFF"), .rdaddress_reg("UNREGISTERED"),
		.rdcontrol_aclr("OFF"), .rdcontrol_reg("UNREGISTERED"), .read_during_write_mode_mixed_ports("CONSTRAINED_DONT_CARE"),
		.wraddress_aclr("OFF"), .wraddress_reg("INCLOCK"), .wrcontrol_aclr("OFF"), .wrcontrol_reg("INCLOCK"))
	RDBUF (.data(RD0), .inclock(CLK), .rdaddress(RP + 2'd2), .wraddress(RP - 2'd1), .wren(EV), .q(RD_BUF3),
		.aclr(1'b0), .byteena(1'b1), .inclocken(1'b1), .rdaddressstall(1'b0), .rden(1'b1), .wraddressstall(1'b0));
	always @(posedge CLK) begin
		if (EV) RP <= RP - 2'd1;
		if (RD_BUF_LATCH && CE_R) RD0 <= DBUS_DI;
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			SV <= '0;
		end
		else if (MW_EN) begin
			SV[MW_ADDR] <= 1;
		end
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			TCR <= '{2{24'd0}};
			CHCR <= '{2{CHCRx_INIT}};
			CHCR_TE_OLD <= '{2{1'b0}};
			
			DMA_WR <= 0;
			DMA_RD <= 0;
			DMA_BURST <= 0;
			DMA_LOCK <= 0;
			CH_REQ_CLR <= '{0,0};
			DMA_REQ_CLR <= 0;
			LW_CNT <= '0;
			RD_BUF_LATCH <= 0;
		end
		else begin
			CH_REQ_CLR[0] <= 0;
			CH_REQ_CLR[1] <= 0;
			DMA_REQ_CLR <= 0;
			if (DMA_REQ && !DMA_RD && !DMA_WR && CE_F) begin
				if (!CC.TA || (CC.TA && !CC.AM)) begin
					DMA_RD <= 1;
					LW_CNT <= TS3 ? 2'd3 : 2'd0;
					CH_REQ_CLR[DMA_CH] <= CC.TA & ~CC.AM;
					DMA_BURST <= TS3;
					DMA_LOCK <= ~CC.TA | CC.TB | TS3;
				end
				else begin
					DMA_WR <= 1;
					LW_CNT <= TS3 ? 2'd3 : 2'd0;
					CH_REQ_CLR[DMA_CH] <= 1;
					DMA_BURST <= TS3;
					DMA_LOCK <= CC.TB | TS3;
				end
			end
			else if ((DMA_RD || DMA_WR) && !DBUS_WAIT && CE_F) begin
				if (DMA_RD) begin
					if (!CC.TA && (LW_CNT == 2'd0)) begin
						DMA_RD <= 0;
						DMA_WR <= 1;
						DMA_BURST <= TS3;
						DMA_LOCK <= CC.TB | TS3;
						LW_CNT <= TS3 ? 2'd3 : 2'd0;
						CH_REQ_CLR[DMA_CH] <= 1;
						if (TCR_NEXT_0) begin
							DMA_LOCK <= 0;
						end
					end
					else if (CC.TA && !CC.AM && (LW_CNT == 2'd0)) begin
						CH_REQ_CLR[DMA_CH] <= 1;
						DMA_REQ_CLR <= 1;
						LW_CNT <= TS3 ? 2'd3 : 2'd0;
						
						if (!CC.TB) DMA_RD <= 0;
						
						TCR[DMA_CH] <= TCR_NEXT;
						if (TCR_NEXT_0) begin
							CHCR[DMA_CH].TE <= 1;
							DMA_RD <= 0;
							DMA_BURST <= 0;
						end
					end
					RD_BUF_LATCH <= 1;
					SA_BA <= AVAL[1:0];
				end
				else if (DMA_WR) begin
					if (LW_CNT == 2'd1) begin
						if (!CC.TB) DMA_LOCK <= 0;
					end 
					if ((LW_CNT == 2'd0) || TCR_NEXT_0) begin
						if (!CC.TA) begin
							DMA_WR <= 0;
							if (CC.TB) begin
								DMA_RD <= 1;
								DMA_BURST <= TS3;
								DMA_LOCK <= 1;
								LW_CNT <= TS3 ? 2'd3 : 2'd0;
							end
						end 
						else if (CC.TA && CC.AM) begin
							CH_REQ_CLR[DMA_CH] <= 1;
							LW_CNT <= TS3 ? 2'd3 : 2'd0;
							
							if (!CC.TB) DMA_WR <= 0;
						end
						
						DMA_REQ_CLR <= 1;
					end
					
					TCR[DMA_CH] <= TCR_NEXT;
					if (TCR_NEXT_1) begin
						if (TS3) DMA_LOCK <= 0;
					end
					if (TCR_NEXT_0) begin
						CHCR[DMA_CH].TE <= 1;
						DMA_RD <= 0;
						DMA_WR <= 0;
						DMA_BURST <= 0;
					end
				end
				
				if (LW_CNT != 2'd0) LW_CNT <= LW_CNT - 2'd1;
				else LW_CNT <= TS3 ? 2'd3 : 2'd0;
			end
			
			if (RD_BUF_LATCH && CE_R) begin
				RD_BUF_LATCH <= 0;
			end
			
			if (CE_R) begin
				if (IB_WR) begin
					case (IA[3:0])
						4'h2: TCR[0]  <= IBUS_DI[23:0];
						4'h3: begin
							CHCR[0][31:2] <= IBUS_DI[31:2] & CHCRx_WMASK[31:2];
							if (!IBUS_DI[1] && CHCR_TE_OLD[0]) begin CHCR[0][1] <= 0; CHCR_TE_OLD[0] <= 0; end
							CHCR[0][0] <= IBUS_DI[0] & CHCRx_WMASK[0];
						end
						4'h6: TCR[1]  <= IBUS_DI[23:0];
						4'h7: begin
							CHCR[1][31:2] <= IBUS_DI[31:2] & CHCRx_WMASK[31:2];
							if (!IBUS_DI[1] && CHCR_TE_OLD[1]) begin CHCR[1][1] <= 0; CHCR_TE_OLD[1] <= 0; end
							CHCR[1][0] <= IBUS_DI[0] & CHCRx_WMASK[0];
						end
						default:;
					endcase
				end
			end
			if (CE_F) begin
				if (IB_RD) begin
					case (IA[3:0])
						4'h3: CHCR_TE_OLD[0] <= CHCR[0].TE;
						4'h7: CHCR_TE_OLD[1] <= CHCR[1].TE;
						default:;
					endcase
				end
			end
		end
	end
	
	wire DMA_ACCESS = DMA_RD | DMA_WR;
	
	bit [31:0] DBUS_DO_TEMP;
	always_comb begin
		case (TS)
			2'b00: 
				case (SA_BA)
					2'b00: DBUS_DO_TEMP = {4{DBUS_DI[31:24]}};
					2'b01: DBUS_DO_TEMP = {4{DBUS_DI[23:16]}};
					2'b10: DBUS_DO_TEMP = {4{DBUS_DI[15: 8]}};
					2'b11: DBUS_DO_TEMP = {4{DBUS_DI[ 7: 0]}};
				endcase
			2'b01: 
				case (SA_BA[1])
					1'b0: DBUS_DO_TEMP = {2{DBUS_DI[31:16]}};
					1'b1: DBUS_DO_TEMP = {2{DBUS_DI[15: 0]}};
				endcase
			2'b10: DBUS_DO_TEMP = DBUS_DI;
			2'b11: DBUS_DO_TEMP = RD_BUF3;
		endcase
	end
	
	assign DBUS_A = QA & {5'b00000,{27{DMA_ACCESS & AGATE}}};
	assign DBUS_DO = DBUS_DO_TEMP;
	assign DBUS_BA = DMA_ACCESS ? BAFromAddr(AVAL[1:0],TS) : '0;
	assign DBUS_WE = ~DMA_RD & DMA_WR;
	assign DBUS_REQ = DMA_ACCESS;
	assign DBUS_BURST = DMA_BURST;
	assign DBUS_LOCK  = DMA_LOCK;
	
	assign DACK0 = (BSC_ACK & !DMA_CH & ((DMA_RD & (~CHCR[0].AM | CHCR[0].TA)) | (DMA_WR & (CHCR[0].AM | CHCR[0].TA)))) ^ ~CHCR[0].AL;
	assign DACK1 = (BSC_ACK &  DMA_CH & ((DMA_RD & (~CHCR[1].AM | CHCR[1].TA)) | (DMA_WR & (CHCR[1].AM | CHCR[1].TA)))) ^ ~CHCR[1].AL;
	
	assign DMAC0_IRQ = CHCR[0].TE & CHCR[0].IE;
	assign DMAC0_VEC = VCRDMA0;
	assign DMAC1_IRQ = CHCR[1].TE & CHCR[1].IE;
	assign DMAC1_VEC = VCRDMA1;
	
	//Registers
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			DRCR_RS <= '{2'd0,2'd0};
			VCRDMA0 <= '0;
			VCRDMA1 <= '0;
			DMAOR <= DMAOR_INIT;
			// synopsys translate_off
			DMAOR.DME <= 1;
			// synopsys translate_on
		end
		else if (CE_R) begin
			if (!RES_N) begin
				DRCR_RS <= '{2'd0,2'd0};
				VCRDMA0 <= '0;
				VCRDMA1 <= '0;
				DMAOR <= DMAOR_INIT;
				// synopsys translate_off
				DMAOR.DME <= 1;
				// synopsys translate_on
			end
			else if (REG1_SEL && IBUS_WE && IBUS_REQ) begin
				if (IBUS_BA[2]) DRCR_RS[0] <= IBUS_DI[17:16];
				if (IBUS_BA[1]) DRCR_RS[1] <= IBUS_DI[9:8];
			end
			else if (IB_WR) begin
				case (IA)
					4'h8: VCRDMA0 <= IBUS_DI[7:0];
					4'hA: VCRDMA1 <= IBUS_DI[7:0];
					4'hC: begin
						DMAOR[31:3] <= IBUS_DI[31:3] & DMAOR_WMASK[31:3];
						DMAOR[2:1]  <= DMAOR[2:1] & IBUS_DI[2:1];
						DMAOR[0]    <= IBUS_DI[0] & DMAOR_WMASK[0];
					end
					default:;
				endcase
			end
			
			if (!NMI_N) DMAOR.NMIF <= 1;
		end
	end
	
	bit [31:0] REG_DO;
	wire [31:0] QBV = QB & {32{SV[ADDR_B]}};
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			REG_DO <= '0;
		end
		else if (CE_F) begin
			if (REG1_SEL && !IBUS_WE && IBUS_REQ) begin
				REG_DO <= {8'h00,6'd0,DRCR_RS[0],6'd0,DRCR_RS[1],8'h00};
			end
			else if (IB_RD) begin
				case (IA)
					4'h0,4'h1,4'h4,4'h5: REG_DO <= QBV;
					4'h2: REG_DO <= {8'h00,TCR[0]};
					4'h3: REG_DO <= {16'h0000,CHCR[0][15:0]};
					4'h6: REG_DO <= {8'h00,TCR[1]};
					4'h7: REG_DO <= {16'h0000,CHCR[1][15:0]};
					4'h8: REG_DO <= {24'h000000,VCRDMA0};
					4'hA: REG_DO <= {24'h000000,VCRDMA1};
					4'hC: REG_DO <= {28'h0000000,DMAOR[3:0]};
					default:REG_DO <= '0;
				endcase
			end
		end
	end
	
	assign IBUS_DO = REG1_SEL || REG2_SEL ? REG_DO : '0;
	assign IBUS_ACT = REG1_SEL | REG2_SEL;
	

endmodule
