	//Dots data: RBG dot registers (the NBG cells are decoded when they arrive)
	bit [31:0] RxDC[2];
	CellParam_t RxCDP[2];
	assign RxDC[0] = {RBG_DC[0][3],RBG_DC[0][1],RBG_DC[0][2],RBG_DC[0][0]};
	assign RxCDP[0] = RBG_CDP[0];
	assign RxDC[1] = {RBG_DC[1][3],RBG_DC[1][1],RBG_DC[1][2],RBG_DC[1][0]};
	assign RxCDP[1] = RBG_CDP[1];
	bit [31:0] R0DOTDC;
	CellParam_t R0DOTCDP;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
		end
		else begin
			if (DOT_CE_R || (DOT_CE_F & HRES[1])) begin
				if (DOT_FETCH) begin
					MOSAIC_HCNT <= MOSAIC_HCNT + 4'd1;
					if (MOSAIC_HCNT == REGS.MZCTL.MZSZH) MOSAIC_HCNT <= '0;
				end
				if (!MOSAIC_HCNT || !RSxREG[0].MZE) begin R0DOTDC <= RxDC[0]; R0DOTCDP <= RxCDP[0]; end
			end
			if (DOT_CE_R && VA3.LS) MOSAIC_HCNT <= '0;
		end
	end
							 
