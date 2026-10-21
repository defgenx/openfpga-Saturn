// Sizing wrapper: the SMPC as Saturn.sv instantiates it (non-STV: HMCS400 + ROM; with POCKET_CUT_SMPC_HLE: SMPC_HLE).
module smpc_wrap (
	input CLK, input RST_N, input SMPC_CE, input TIME_SET, input [64:0] RTC,
	input SRES_N, input IRQV_N, input [3:0] SMPC_AREA,
	input [6:1] CA, input [7:0] CDI, input SMPCCE_N, input MWR_N,
	input [6:0] SMPC_PDR1I, input [6:0] SMPC_PDR2I, input EXL_PAD,
	output [7:0] SMPC_DO, output SMPC_DOTSEL,
	output [6:0] SMPC_PDR1O, output [6:0] SMPC_DDR1, output [6:0] SMPC_PDR2O, output [6:0] SMPC_DDR2,
	output MIRQ_N, output MSHRES_N, output MSHNMI_N, output SSHRES_N, output SSHNMI_N, output SYSRES_N, output SNDRES_N,
	output CDRES_N, output EXL_N
);
	bit MRES_N;
`ifndef POCKET_CUT_SMPC_HLE
	bit CE32K;
	always @(posedge CLK or negedge RST_N) begin
		bit  [ 7: 0] CLK_DIV;
		if (!RST_N) begin
			MRES_N <= 0;
			CLK_DIV <= '0;
		end else begin
			if (SMPC_CE) begin
				MRES_N <= 1;
				CE32K <= 0;
				CLK_DIV <= CLK_DIV + 8'd1;
				if (CLK_DIV == 8'd121) begin
					CLK_DIV <= '0;
					CE32K <= 1;
				end
			end
		end
	end
	SMPC #("smpc.mif") SMPC
	(
		.CLK(CLK), .RST_N(RST_N), .EN(1'b1), .CE(SMPC_CE), .CE32K(CE32K & SMPC_CE), .RESET_N(MRES_N),
		.A(CA), .DBI(CDI), .DBO(SMPC_DO), .CS_N(SMPCCE_N), .RW_N(MWR_N),
		.D0(MIRQ_N), .D1(1'b1), .D2(1'b0), .D3(SRES_N), .D4(SNDRES_N), .D5(SYSRES_N), .D6(MSHRES_N), .D7(MSHNMI_N),
		.D8(SSHRES_N), .D9(SSHNMI_N), .D10(SMPC_DOTSEL), .D13_INT0(1'b1),
		.R01_INT2(IRQV_N),
		.PIOA_I(SMPC_PDR1I), .PIOA_O(SMPC_PDR1O), .PIOA_D(SMPC_DDR1),
		.PIOB_I(SMPC_PDR2I), .PIOB_O(SMPC_PDR2O), .PIOB_D(SMPC_DDR2),
		.R5(SMPC_AREA),
		.R60_D(), .R60_O(), .R60_I(1'b0), .R61_D(), .R61_O(), .R61_I(1'b1), .R62_I(1'b0), .R63_I(1'b0),
		.R70_I(1'b0), .R71_I(1'b0), .R72_O(CDRES_N), .R73_O(),
		.EXL_N(EXL_N),
		.EXT_RTC(RTC),
		.DBG_EXT(8'h00)
	);
`else
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) MRES_N <= 0;
		else if (SMPC_CE) MRES_N <= 1;
	end
	SMPC_HLE SMPC
	(
		.CLK(CLK), .RST_N(RST_N), .CE(SMPC_CE), .MRES_N(MRES_N), .TIME_SET(TIME_SET), .EXT_RTC(RTC), .AC(SMPC_AREA),
		.A(CA), .DI(CDI), .DO(SMPC_DO), .CS_N(SMPCCE_N), .RW_N(MWR_N),
		.SRES_N(SRES_N), .IRQV_N(IRQV_N), .EXL_N(EXL_N),
		.MSHRES_N(MSHRES_N), .MSHNMI_N(MSHNMI_N), .SSHRES_N(SSHRES_N), .SSHNMI_N(SSHNMI_N), .SYSRES_N(SYSRES_N),
		.SNDRES_N(SNDRES_N), .CDRES_N(CDRES_N), .MIRQ_N(MIRQ_N), .DOTSEL(SMPC_DOTSEL),
		.PDR1I(SMPC_PDR1I), .PDR1O(SMPC_PDR1O), .DDR1(SMPC_DDR1), .PDR2I(SMPC_PDR2I), .PDR2O(SMPC_PDR2O), .DDR2(SMPC_DDR2)
	);
`endif
endmodule
