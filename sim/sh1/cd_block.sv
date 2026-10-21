// CD block as wired in Saturn.sv: SH-1 (golden REF_SH1 or pruned SH1) + YGR019 + external DRAM + CDD.
module cd_blk #(parameter bit REF = 0, parameter FRAME_PERIOD = 400000, parameter [7:0] CDD_STATUS = 8'h06) (
	input             CLK,
	input             RST_N,
	input             CD_CE,
	input             SYS_CE_R,
	input             SYS_CE_F,
	input             CDRES_N,
	input      [14:1] AA,
	input      [15:0] ADI,
	output     [15:0] ADO,
	input       [1:0] AFC,
	input             ACS2_N,
	input             ARD_N,
	input             AWRL_N,
	input             AWRU_N,
	output            AWAIT_N,
	output            ARQT_N,
	// observation
	output     [21:0] SA,
	output     [15:0] SDO,
	output            SWRL_N,
	output            SWRH_N,
	output            SRD_N,
	output            SCS1_N,
	output            SCS2_N,
	output            SCS6_N,
	output            DACK0,
	output            DACK1,
	output            HDATA,
	output            COMCLK,
	output            DEMP,
	output      [7:0] CDD_LAST_CMD,
	output     [31:0] CDD_FRAMES
);
	wire [15:0] SDI;
	wire [15:0] YGR_SDO;
	wire        DREQ0_N, DREQ1_N, SIRQL_N, SIRQH_N;
	wire        SHCE_R, SHCE_F;
	reg         SHCLK;
	reg         SWAIT_N;
	wire        CDATA, COMREQ_N, COMSYNC_N;

	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) SHCLK <= 0;
		else if (CD_CE) SHCLK <= ~SHCLK;
	end
	assign SHCE_R =  SHCLK & CD_CE;
	assign SHCE_F = ~SHCLK & CD_CE;

	// external DRAM (area 1): 512 KB, writes by SH-1 or by DMA from the YGR019 FIFO
	reg [15:0] ram [0:262143];
	integer k;
	initial for (k = 0; k < 262144; k = k + 1) ram[k] = 16'h0000;
	wire [15:0] RAM_Q = ram[SA[18:1]];
	wire [15:0] RAM_D = (!DACK0 || !DACK1) ? YGR_SDO : SDO;
	always @(posedge CLK) begin
		if (!SCS1_N && SHCE_R) begin
			if (!SWRL_N) ram[SA[18:1]][7:0]  <= RAM_D[7:0];
			if (!SWRH_N) ram[SA[18:1]][15:8] <= RAM_D[15:8];
		end
	end
	// pseudo-random wait states on DRAM accesses
	reg [15:0] lfsr;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) lfsr <= 16'hACE1;
		else lfsr <= {lfsr[14:0], lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10]};
	end
	reg fast_ram = 0;
	initial if ($test$plusargs("FAST")) fast_ram = 1;
	always @(*) SWAIT_N = SCS1_N ? 1'b1 : (fast_ram || lfsr[3:1] != 3'b000);

	assign SDI = !SCS1_N ? RAM_Q : YGR_SDO;

	generate if (REF) begin : g
		REF_SH1 #("rtl/cdb105m.mif") sh1 (
			.CLK(CLK), .RST_N(RST_N), .CE_R(SHCE_R), .CE_F(SHCE_F), .EN(1'b1), .RES_N(CDRES_N),
			.A(SA), .DI(SDI), .DO(SDO),
			.TIOCA0(1'b0), .TIOCA1(1'b0), .DREQ0N(DREQ0_N), .DREQ1N(DREQ1_N),
			.RASN(), .CS6N(SCS6_N), .WRLN(SWRL_N), .WRHN(SWRH_N), .RDN(SRD_N), .DACK0(DACK0), .DACK1(DACK1),
			.TIOCA2(1'b1), .TIOCB2(1'b1), .PB2I(COMSYNC_N), .TIOCB3(COMREQ_N), .RXD0(CDATA),
			.IRQ6N(SIRQL_N), .IRQ7N(SIRQH_N), .PB6O(DEMP), .TXD0(HDATA), .SCK0O(COMCLK),
			.CS1N_CASHN(SCS1_N), .CS2N(SCS2_N), .CASLN(), .WAITN(SWAIT_N));
	end else begin : g
		SH1 #("rtl/cdb105m.mif") sh1 (
			.CLK(CLK), .RST_N(RST_N), .CE_R(SHCE_R), .CE_F(SHCE_F), .EN(1'b1), .RES_N(CDRES_N),
			.A(SA), .DI(SDI), .DO(SDO),
			.TIOCA0(1'b0), .TIOCA1(1'b0), .DREQ0N(DREQ0_N), .DREQ1N(DREQ1_N),
			.RASN(), .CS6N(SCS6_N), .WRLN(SWRL_N), .WRHN(SWRH_N), .RDN(SRD_N), .DACK0(DACK0), .DACK1(DACK1),
			.TIOCA2(1'b1), .TIOCB2(1'b1), .PB2I(COMSYNC_N), .TIOCB3(COMREQ_N), .RXD0(CDATA),
			.IRQ6N(SIRQL_N), .IRQ7N(SIRQH_N), .PB6O(DEMP), .TXD0(HDATA), .SCK0O(COMCLK),
			.CS1N_CASHN(SCS1_N), .CS2N(SCS2_N), .CASLN(), .WAITN(SWAIT_N));
	end endgenerate

	YGR019 ygr (
		.CLK(CLK), .RST_N(RST_N), .RES_N(CDRES_N),
		.CE_R(SYS_CE_R), .CE_F(SYS_CE_F),
		.AA(AA), .ADI(ADI), .ADO(ADO), .AFC(AFC),
		.ACS2_N(ACS2_N), .ARD_N(ARD_N), .AWRL_N(AWRL_N), .AWRU_N(AWRU_N),
		.ATIM0_N(1'b1), .ATIM2_N(1'b1), .AWAIT_N(AWAIT_N), .ARQT_N(ARQT_N),
		.SHCE_R(SHCE_R), .SHCE_F(SHCE_F),
		.SA(SA[21:1]), .SDI(SDO), .SDO(YGR_SDO), .BDI(RAM_Q),
		.SWRL_N(SWRL_N), .SWRH_N(SWRH_N), .SRD_N(SRD_N), .SCS2_N(SCS2_N), .SCS6_N(SCS6_N),
		.SIRQL_N(SIRQL_N), .SIRQH_N(SIRQH_N),
		.DACK0(DACK0), .DACK1(DACK1), .DREQ0_N(DREQ0_N), .DREQ1_N(DREQ1_N),
		.CD_D(16'h0000), .CD_CK(1'b0), .CD_AUDIO(1'b0), .CD_SL(), .CD_SR(), .FAST(1'b0));

	cdd_model #(.FRAME_PERIOD(FRAME_PERIOD), .STATUS(CDD_STATUS)) cdd (
		.CLK(CLK), .RST_N(RST_N), .HDATA(HDATA), .COMCLK(COMCLK),
		.CDATA(CDATA), .COMREQ_N(COMREQ_N), .COMSYNC_N(COMSYNC_N),
		.LAST_CMD_B0(CDD_LAST_CMD), .FRAMES(CDD_FRAMES));
endmodule
