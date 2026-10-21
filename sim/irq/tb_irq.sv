// SH7604P + DCC + SMPC_SERV + SCUP2 wired as in Saturn.sv (Pocket build macros), with ROM and WRAM-H models.
// The SH-2 runs gen_prog.py's program: SMPC SNDON with the SF handshake over the real bus, then SCU interrupts
// (IMS unmask, ICR.VECMD=1 as the BIOS, SR.I = 0) from a VBLANK source; the handler counts in WRAM-H.
module tb_irq #(parameter bit RAMH_SLOW = 1) ();
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg MCLK_DIV = 0;
	always @(posedge CLK) MCLK_DIV <= ~MCLK_DIV;
	wire CE_R = MCLK_DIV, CE_F = ~MCLK_DIV;
	reg [31:0] cyc = 0;
	always @(posedge CLK) cyc <= cyc + 1;

	always @(posedge CLK) if (cyc == 300) RST_N <= 1;

	// 4 MHz SMPC tick and MRES_N as in Saturn.sv
	reg [3:0] smpc_div = 0; reg SMPC_CE = 0; reg MRES_N = 0;
	always @(posedge CLK) begin
		SMPC_CE <= (smpc_div == 12); smpc_div <= smpc_div == 12 ? 0 : smpc_div + 1;
		if (!RST_N) MRES_N <= 0; else if (SMPC_CE) MRES_N <= 1;
	end

	wire [26:0] MSHA; wire [31:0] MSHDO; wire [31:0] MSHDI;
	wire MSHBS_N, MSHCS0_N, MSHCS1_N, MSHCS2_N, MSHCS3_N, MSHRD_WR_N, MSHRD_N, MSHIVECF_N;
	wire [3:0] MSHDQM_N;
	wire [3:0] CIRL_N;
	wire CWAIT_N, CWATIN_N;
	wire [31:0] SCU_DO;
	wire [7:0] SMPC_DO;
	wire SMPCCE_N, ROMCE_N, SRAMCE_N, DRAMCE_N, MWR_N;
	wire MSHRES_N, MSHNMI_N, SSHRES_N, SSHNMI_N, SYSRES_N, SNDRES_N, CDRES_N, MIRQ_N, EXL_N;
	wire [6:0] PDR1O, DDR1, PDR2O, DDR2;
	wire MSH_WAIT_N = CWAIT_N;

	// VDP2 vertical blank: IRQV_N low for 3000 clk every 20000 clk
	wire IRQV_N = !((cyc % 20000) < 3000 && cyc > 2000);

	// IVECF_UNDRIVEN: MSHIVECF_N left without a driver (a tool that takes the second of two .IVECF_N connections)
`ifdef IVECF_UNDRIVEN
	wire IVECF_SCU = 1'b0;
`else
	wire IVECF_SCU = MSHIVECF_N;
`endif
	wire [24:0] CA = MSHA[24:0];

	SH7604P #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({RAMH_SLOW,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) MSH (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1),
		.RES_N(MSHRES_N), .NMI_N(MSHNMI_N), .IRL_N(CIRL_N),
		.A(MSHA), .DI(MSHDI), .DO(MSHDO), .BS_N(MSHBS_N), .CS0_N(MSHCS0_N), .CS1_N(MSHCS1_N), .CS2_N(MSHCS2_N), .CS3_N(MSHCS3_N),
		.RD_WR_N(MSHRD_WR_N), .WE_N(MSHDQM_N), .RD_N(MSHRD_N), .IVECF_N(MSHIVECF_N), .RFS(),
		.EA('0), .EDI(), .EDO('0), .EBS_N(1'b1), .ECS0_N(1'b1), .ECS1_N(1'b1), .ECS2_N(1'b1), .ECS3_N(1'b1),
		.ERD_WR_N(1'b1), .EWE_N(4'hF), .ERD_N(1'b1), .ECE_N(1'b1), .EOE_N(1'b1), .EIVECF_N(1'b1),
		.WAIT_N(MSH_WAIT_N), .BRLS_N(1'b1), .BGR_N(),
		.DREQ0(1'b1), .DREQ1(1'b1), .FTCI(1'b1), .FTI(1'b1), .RXD(1'b1), .SCKI(1'b1),
		.MD(6'b001000), .FAST(1'b0));

	DCC DCC (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .RES_N(SYSRES_N),
		.A(CA[24:1]), .BS_N(MSHBS_N), .CS0_N(MSHCS0_N), .CS1_N(MSHCS1_N), .CS2_N(MSHCS2_N),
		.RD_WR_N(MSHRD_WR_N), .WE_N(MSHDQM_N[1:0]), .RD_N(MSHRD_N), .WAIT_N(CWAIT_N),
		.BRLS_N(), .BGR_N(1'b1), .BREQ_N(1'b1), .BACK_N(), .EXBREQ_N(1'b1), .EXBACK_N(),
		.WTIN_N(CWATIN_N), .IVECF_N(1'b1), .HINT_N(1'b1), .VINT_N(IRQV_N), .IREQ_N(),
		.MFTI(), .SFTI(), .DCE_N(DRAMCE_N), .DOE_N(), .DWE_N(), .DWAIT_N(1'b1),
		.ROMCE_N(ROMCE_N), .SRAMCE_N(SRAMCE_N), .SMPCCE_N(SMPCCE_N), .MOE_N(), .MWR_N(MWR_N), .FAST(1'b0));

	SMPC_SERV SMPC (
		.CLK(CLK), .RST_N(RST_N), .CE(SMPC_CE), .MRES_N(MRES_N), .TIME_SET(1'b0), .EXT_RTC(65'd0), .AC(4'h1),
		.A(CA[6:1]), .DI(MSHDO[7:0]), .DO(SMPC_DO), .CS_N(SMPCCE_N), .RW_N(MWR_N), .SRES_N(1'b1),
		.IRQV_N(IRQV_N), .EXL_N(EXL_N), .MSHRES_N(MSHRES_N), .MSHNMI_N(MSHNMI_N), .SSHRES_N(SSHRES_N), .SSHNMI_N(SSHNMI_N),
		.SYSRES_N(SYSRES_N), .SNDRES_N(SNDRES_N), .CDRES_N(CDRES_N), .MIRQ_N(MIRQ_N), .DOTSEL(),
		.PDR1I(7'h7F), .PDR1O(PDR1O), .DDR1(DDR1), .PDR2I(7'h7F), .PDR2O(PDR2O), .DDR2(DDR2));

	SCUP2 #(RAMH_SLOW) SCU (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .RES_N(SYSRES_N),
		.CA(CA), .CDI(MSHDO), .CDO(SCU_DO), .CCS1_N(MSHCS1_N), .CCS2_N(MSHCS2_N), .CCS3_N(MSHCS3_N),
		.CRD_WR_N(MSHRD_WR_N), .CDQM_N(MSHDQM_N), .CRD_N(MSHRD_N), .CWAIT_N(CWATIN_N),
		.CIVECF_N(IVECF_SCU), .CIRL_N(CIRL_N), .CBREQ_N(), .CBACK_N(1'b1),
		.ECA(), .ECDI(32'd0), .ECDO(), .ECDQM_N(), .ECRD_WR_N(), .ECCS3_N(), .ECRD_N(), .ECBURST(), .ECRFS(), .ECWAIT_N(1'b1),
		.AA(), .ADI(16'hFFFF), .ADO(), .AFC(), .AAS_N(), .ACS0_N(), .ACS1_N(), .ACS2_N(), .AWAIT_N(1'b1), .AIRQ_N(1'b1),
		.ARD_N(), .AWRL_N(), .AWRU_N(), .ATIM0_N(), .ATIM1_N(), .ATIM2_N(),
		.BDI(16'd0), .BDO(), .BADDT_N(), .BDTEN_N(), .BREQ_N(), .BCS1_N(), .BRDY1_N(1'b1), .IRQ1_N(1'b1),
		.BCS2_N(), .BRDY2_N(1'b1), .IRQV_N(IRQV_N), .IRQH_N(1'b1), .IRQL_N(EXL_N), .BCSS_N(), .BRDYS_N(1'b1), .IRQS_N(1'b1),
		.MIREQ_N(MIRQ_N), .FAST(1'b0));

	reg [31:0] rom [0:2047];
	reg [31:0] wramh [0:65535];
	initial begin
		for (int i = 0; i < 65536; i++) wramh[i] = 0;
		$readmemh("prog.hex", rom);
	end

	wire [31:0] cs0w = rom[MSHA[11:2]];
	wire [15:0] cs0h = MSHA[1] ? cs0w[15:0] : cs0w[31:16];
	assign MSHDI = !MSHCS3_N ? wramh[MSHA[17:2]] :
	               !ROMCE_N ? {16'h0, cs0h} :
	               !SMPCCE_N ? {16'h0000, 8'hFF, SMPC_DO} :
	               !IVECF_SCU || !MSHCS1_N || !MSHCS2_N ? SCU_DO : 32'hFFFFFFFF;
	function automatic [31:0] merge(input [31:0] old, input [31:0] d, input [3:0] n);
		merge = {n[3] ? old[31:24] : d[31:24], n[2] ? old[23:16] : d[23:16], n[1] ? old[15:8] : d[15:8], n[0] ? old[7:0] : d[7:0]};
	endfunction
	always @(posedge CLK) if (!MSHRD_WR_N && !MSHCS3_N && !(&MSHDQM_N)) wramh[MSHA[17:2]] <= merge(wramh[MSHA[17:2]], MSHDO, MSHDQM_N);

	reg snd_o = 0; int snd_t = 0;
	always @(posedge CLK) begin snd_o <= SNDRES_N; if (SNDRES_N && !snd_o) begin snd_t = cyc; $display("%0d SNDRES_N released", cyc); end end

	int irl_changes = 0, vecf = 0;
	reg [3:0] irl_o = 4'hF;
	reg vecf_o = 1;
	always @(posedge CLK) begin
		irl_o <= CIRL_N; vecf_o <= MSHIVECF_N;
		if (CIRL_N != irl_o) begin irl_changes++; if (irl_changes < 12) $display("%0d IRL_N=%h", cyc, CIRL_N); end
		if (!MSHIVECF_N && vecf_o) begin vecf++; if (vecf < 6) $display("%0d IVECF A=%h IRL_N=%h", cyc, MSHA, CIRL_N); end
	end
	initial begin
		#3000000;   // 300000 clk
		$display("sndon_flag=%0d snd_released=%0d irl_changes=%0d vector_fetches=%0d handler_count=%0d", wramh[4], snd_o, irl_changes, vecf, wramh[0]);
		if (wramh[4] == 1 && snd_o && wramh[0] >= 8) $display("PASS"); else $display("FAIL");
		$finish;
	end
endmodule
