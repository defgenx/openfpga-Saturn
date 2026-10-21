// Sizing wrapper: the MSH/SSH pair exactly as Saturn.sv instantiates it (same tie-offs). Not a functional top.
module sh2_pair_wrap (
	input CLK, input RST_N, input CE_R, input CE_F, input EN, input FAST,
	input MSHRES_N, input MSHNMI_N, input [3:0] MSHIRL_N, input MSHWAIT_N, input MSHBRLS_N, input MFTI,
	input SSHRES_N, input SSHNMI_N, input [3:0] SSHIRL_N, input SSHWAIT_N, input SSHBACK_N, input SFTI,
	input [31:0] MSHDI,
	input [24:0] ECA, input [31:0] ECDO, input ECCS3_N, input ECRD_WR_N, input [3:0] ECDQM_N, input ECRD_N,
	output [26:0] MSHA, output [31:0] MSHDO, output MSHBS_N, output MSHCS0_N, output MSHCS1_N, output MSHCS2_N, output MSHCS3_N,
	output MSHRD_WR_N, output [3:0] MSHDQM_N, output MSHRD_N, output MSHIVECF_N, output MSRFS, output MSHBGR_N,
	output [26:0] SSHA, output [31:0] SSHDO, output SSHBS_N, output SSHCS0_N, output SSHCS1_N, output SSHCS2_N, output SSHCS3_N,
	output SSHRD_WR_N, output [3:0] SSHDQM_N, output SSHRD_N, output SSHBREQ_N,
	output [31:0] ECDI
);
	wire [31:0] SSHDI;
	SH7604 #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({1'b0,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) MSH
	(
		.CLK(CLK),
		.RST_N(RST_N),
		.CE_R(CE_R),
		.CE_F(CE_F),
		.EN(EN),
		
		.RES_N(MSHRES_N),
		.NMI_N(MSHNMI_N),
		
		.IRL_N(MSHIRL_N),
		
		.A(MSHA),
		.DI(MSHDI),
		.DO(MSHDO),
		.BS_N(MSHBS_N),
		.CS0_N(MSHCS0_N),
		.CS1_N(MSHCS1_N),
		.CS2_N(MSHCS2_N),
		.CS3_N(MSHCS3_N),
		.RD_WR_N(MSHRD_WR_N),
		.WE_N(MSHDQM_N),
		.RD_N(MSHRD_N),
		.IVECF_N(MSHIVECF_N),
		.RFS(MSRFS),
		
		.EA(SSHA),
		.EDI(SSHDI),
		.EDO(SSHDO),
		.EBS_N(SSHBS_N),
		.ECS0_N(SSHCS0_N),
		.ECS1_N(SSHCS1_N),
		.ECS2_N(SSHCS2_N),
		.ECS3_N(SSHCS3_N),
		.ERD_WR_N(SSHRD_WR_N),
		.EWE_N(SSHDQM_N),
		.ERD_N(SSHRD_N),
		.ECE_N(1'b1),
		.EOE_N(1'b1),
		.EIVECF_N(1'b1),
		
		.WAIT_N(MSHWAIT_N),
		.IVECF_N(),
		.BRLS_N(MSHBRLS_N),
		.BGR_N(MSHBGR_N),
		
		.DREQ0(1'b1),
		.DREQ1(1'b1),
		
		.FTCI(1'b1),
		.FTI(MFTI),
		
		.RXD(1'b1),
		.TXD(),
		.SCKO(),
		.SCKI(1'b1),
		
		.MD(6'b001000),
		
		.FAST(FAST)
	);
	
	SH7604 #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({1'b0,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) SSH
	(
		.CLK(CLK),
		.RST_N(RST_N),
		.CE_R(CE_R),
		.CE_F(CE_F),
		.EN(EN),
		
		.RES_N(SSHRES_N),
		.NMI_N(SSHNMI_N),
		
		.IRL_N(SSHIRL_N),
		
		.A(SSHA),
		.DI(SSHDI),
		.DO(SSHDO),
		.BS_N(SSHBS_N),
		.CS0_N(SSHCS0_N),
		.CS1_N(SSHCS1_N),
		.CS2_N(SSHCS2_N),
		.CS3_N(SSHCS3_N),
		.RD_WR_N(SSHRD_WR_N),
		.WE_N(SSHDQM_N),
		.RD_N(SSHRD_N),
		.IVECF_N(),
		
		.EA({2'b00,ECA}),
		.EDI(ECDI),
		.EDO(ECDO),
		.EBS_N(1'b1),
		.ECS0_N(1'b1),
		.ECS1_N(1'b1),
		.ECS2_N(1'b1),
		.ECS3_N(ECCS3_N),
		.ERD_WR_N(ECRD_WR_N),
		.EWE_N(ECDQM_N),
		.ERD_N(ECRD_N),
		.ECE_N(1'b1),
		.EOE_N(1'b1),
		.EIVECF_N(1'b1),
		
		.WAIT_N(SSHWAIT_N),
		.BRLS_N(SSHBACK_N),
		.BGR_N(SSHBREQ_N),
		
		.DREQ0(1'b1),
		.DREQ1(1'b1),
		
		.FTCI(1'b1),
		.FTI(SFTI),
		
		.RXD(1'b1),
		.TXD(),
		.SCKO(),
		.SCKI(1'b1),
		
		.MD(6'b101000),
		
		.FAST(FAST)
`ifdef DEBUG
		,
		.DBG_REGN('0),
		.DBG_REGQ(),
		.DBG_RUN(1),
		.DBG_BREAK()
endmodule
