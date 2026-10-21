// Saturn-like environment around the MSH/SSH pair: bus model, interrupts, MSH<->SSH signalling.
// Everything is a deterministic function of CLK, RST_N and plusargs, so two instances see identical stimulus.
module REF_sh2_env #(parameter bit RAMH_SLOW = 0) (
	input         CLK,
	input         RST_N,
	output [255:0] obs
);
	bit  [31:0] lfsr;
	reg         MCLK_DIV;
	wire        CE_R =  MCLK_DIV;
	wire        CE_F = ~MCLK_DIV;
	wire        EN = 1'b1;
	wire        FAST = FAST_R;
	reg         FAST_R;
	reg  [31:0] cyc;

	//MSH
	bit  [26:0] MSHA;
	bit  [31:0] MSHDO;
	bit  [31:0] MSHDI;
	bit         MSHBS_N, MSHCS0_N, MSHCS1_N, MSHCS2_N, MSHCS3_N, MSHRD_WR_N, MSHRD_N, MSHWAIT_N, MSHIVECF_N;
	bit   [3:0] MSHDQM_N;
	bit   [3:0] MSHIRL_N;
	bit         MSHRES_N, MSHNMI_N, MSHBGR_N, MSHBRLS_N, MSRFS;
	//SSH
	bit  [26:0] SSHA;
	bit  [31:0] SSHDO;
	bit  [31:0] SSHDI;
	bit         SSHBS_N, SSHCS0_N, SSHCS1_N, SSHCS2_N, SSHCS3_N, SSHRD_WR_N, SSHRD_N, SSHWAIT_N;
	bit   [3:0] SSHDQM_N;
	bit   [3:0] SSHIRL_N;
	bit         SSHRES_N, SSHNMI_N, SSHBREQ_N, SSHBACK_N;
	bit         MFTI, SFTI;
	//external master port of the SSH (SCU side): idle
	bit  [24:0] ECA = '0;
	bit  [31:0] ECDI;
	bit  [31:0] ECDO = '0;
	bit   [3:0] ECDQM_N = 4'hF;
	bit         ECRD_WR_N = 1, ECCS3_N = 1, ECRD_N = 1;

	REF_SH7604 #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({RAMH_SLOW,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) MSH
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
	
	REF_SH7604 #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({RAMH_SLOW,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) SSH
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
	);


	//---------------------------------------------------------------- stimulus
	int wait_mode;
	reg [2:0] wait_mode_r;
	int irq_mode;
	int fast_mode;
	string prog;
	initial begin
		wait_mode = 0; irq_mode = 0; fast_mode = 0; lfsr = 32'h1234ABCD;
		if (!$value$plusargs("wait=%d", wait_mode)) wait_mode = 0;
		if (!$value$plusargs("irq=%d", irq_mode)) irq_mode = 0;
		if (!$value$plusargs("fast=%d", fast_mode)) fast_mode = 0;
		if (!$value$plusargs("seed=%h", lfsr)) lfsr = 32'h1234ABCD;
		FAST_R = fast_mode[0];
	end

	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			MCLK_DIV <= 0;
			cyc <= 0;
		end else begin
			MCLK_DIV <= ~MCLK_DIV;
			cyc <= cyc + 1;
		end
	end
	always @(posedge CLK) lfsr <= {lfsr[30:0], lfsr[31]^lfsr[21]^lfsr[1]^lfsr[0]};

	// memories (32-bit words, big-endian byte lanes: DQM_N[3] = bits 31:24)
	reg [31:0] rom   [0:16383];
	reg [31:0] wraml [0:16383];
	reg [31:0] abus  [0:16383];
	reg [31:0] scr   [0:16383];
	reg [31:0] wramh [0:65535];
	initial begin
		for (int i = 0; i < 16384; i++) begin rom[i] = 0; wraml[i] = 0; abus[i] = 0; scr[i] = 0; end
		for (int i = 0; i < 65536; i++) wramh[i] = 0;
		if (!$value$plusargs("prog=%s", prog)) prog = "prog.hex";
		$readmemh(prog, rom);
	end

	wire       bus_cs   = ~(MSHCS0_N & MSHCS1_N & MSHCS2_N & MSHCS3_N);
	wire       own_ssh  = ~SSHBACK_N;
	wire [26:0] A = MSHA;
	wire       wr = ~MSHRD_WR_N;
	wire       tbr = ~MSHCS2_N && A[15:12] == 4'hF;
	wire       is_rom  = ~MSHCS0_N && A[24:16] == 9'h000;
	wire       is_wraml= ~MSHCS0_N && A[24:20] == 5'h02;
	wire       is_minit= ~MSHCS0_N && A[24:23] == 2'b10;
	wire       is_sinit= ~MSHCS0_N && A[24:23] == 2'b11;

	reg  [3:0] lvlM, lvlS;
	reg  [9:0] ageM, ageS;
	reg  [3:0] nmi_cnt, snmi_cnt;
	reg  [3:0] mfti_cnt, sfti_cnt;
	reg        ssh_rel;
	reg  [7:0] ssh_rel_dly;
	reg  [15:0] wait_lvl;

	wire [31:0] tb_rd = A[7:2] == 6'h00 ? {31'b0, own_ssh} :
	                    A[7:2] == 6'h05 ? lfsr :
	                    A[7:2] == 6'h06 ? cyc :
	                    A[7:2] == 6'h0A ? {28'b0, lvlM} :
	                    A[7:2] == 6'h0B ? {28'b0, lvlS} :
	                    scr[A[15:2]];
	wire [7:0]  vec = own_ssh ? 8'h45 : (8'h40 + {4'b0, lvlM});
	wire [31:0] rdata = !MSHIVECF_N ? {24'b0, vec} :
	                    is_rom ? rom[A[15:2]] :
	                    is_wraml ? wraml[A[15:2]] :
	                    ~MSHCS1_N ? abus[A[15:2]] :
	                    tbr ? tb_rd :
	                    ~MSHCS2_N ? scr[A[15:2]] :
	                    ~MSHCS3_N ? wramh[A[17:2]] :
	                    32'hA5A5A5A5 ^ {cyc[7:0], cyc[7:0], cyc[7:0], cyc[7:0]};
	// area 0 is a 16-bit device (MD pins): data on D15:0, halfword picked by A1
	wire [31:0] cs0w = is_rom ? rom[A[15:2]] : wraml[A[15:2]];
	wire [15:0] cs0h = A[1] ? cs0w[15:0] : cs0w[31:16];
	wire [31:0] rdata_f = (is_rom | is_wraml) ? {16'h0, cs0h} : rdata;
	assign MSHDI = rdata_f;
	assign SSHDI = rdata_f;   // SSH.DI is wired to MSH.EDI = MSH.DI

	// write path
	function automatic [31:0] merge(input [31:0] old, input [31:0] d, input [3:0] n);
		merge = {n[3] ? old[31:24] : d[31:24], n[2] ? old[23:16] : d[23:16],
		         n[1] ? old[15: 8] : d[15: 8], n[0] ? old[ 7: 0] : d[ 7: 0]};
	endfunction
	always @(posedge CLK) begin
		if (wr && bus_cs && !(&MSHDQM_N)) begin
			if (is_wraml) wraml[A[15:2]] <= A[1] ? merge(wraml[A[15:2]], {16'b0, MSHDO[15:0]}, {2'b11, MSHDQM_N[1:0]})
			                                    : merge(wraml[A[15:2]], {MSHDO[15:0], 16'b0}, {MSHDQM_N[1:0], 2'b11});
			else if (~MSHCS1_N) abus[A[15:2]] <= merge(abus[A[15:2]], MSHDO, MSHDQM_N);
			else if (tbr) begin
				case (A[7:2])
					6'h01: if (MSHDO[0]) ssh_rel <= 1;
					6'h02: lvlM <= MSHDO[3:0];
					6'h03: lvlS <= MSHDO[3:0];
					6'h04: nmi_cnt <= 4'd8;
					6'h07: snmi_cnt <= 4'd8;
					6'h08: wait_mode_r <= MSHDO[2:0];
					6'h0A: lvlM <= MSHDO[3:0];
					6'h0B: lvlS <= MSHDO[3:0];
					default: scr[A[15:2]] <= merge(scr[A[15:2]], MSHDO, MSHDQM_N);
				endcase
			end
			else if (~MSHCS2_N) scr[A[15:2]] <= merge(scr[A[15:2]], MSHDO, MSHDQM_N);
			else if (~MSHCS3_N) wramh[A[17:2]] <= merge(wramh[A[17:2]], MSHDO, MSHDQM_N);
		end
		if (wr && bus_cs && !(&MSHDQM_N) && is_minit) mfti_cnt <= 4'd6;
		if (wr && bus_cs && !(&MSHDQM_N) && is_sinit) sfti_cnt <= 4'd6;
		if (!RST_N) begin
			wait_mode_r <= wait_mode[2:0];
			lvlM <= 0; lvlS <= 0; ageM <= 0; ageS <= 0; nmi_cnt <= 0; snmi_cnt <= 0; mfti_cnt <= 0; sfti_cnt <= 0; ssh_rel <= 0;
		end else begin
			if (nmi_cnt != 0) nmi_cnt <= nmi_cnt - 1;
			if (snmi_cnt != 0) snmi_cnt <= snmi_cnt - 1;
			if (mfti_cnt != 0) mfti_cnt <= mfti_cnt - 1;
			if (sfti_cnt != 0) sfti_cnt <= sfti_cnt - 1;
			// a request that nobody acknowledged expires (device-side pulse), a new level restarts the timer
			ageM <= (lvlM == 0) ? 10'd0 : ageM + 10'd1;
			ageS <= (lvlS == 0) ? 10'd0 : ageS + 10'd1;
			if (ageM == 10'd600) lvlM <= 0;
			if (ageS == 10'd600) lvlS <= 0;
			// vector fetch consumes the pending request
			if (!MSHIVECF_N && CE_F) begin
				if (own_ssh) lvlS <= 0; else lvlM <= 0;
			end
			// random interrupt generator
			if (irq_mode != 0 && cyc[11:0] == 12'h000 + {4'b0, lfsr[7:0]} && lfsr[15:12] < irq_mode[3:0]) begin
				if (lfsr[16]) lvlM <= lfsr[20:17] | 4'd1; else lvlS <= {3'b0, lfsr[17]} | 4'd1;
			end
		end
	end

	// reset sequencing: MSH released first, SSH on request
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin MSHRES_N <= 0; SSHRES_N <= 0; ssh_rel_dly <= 0; end
		else begin
			`ifdef POCKET_CUT_SH2_PURGE
			if (cyc > 200) MSHRES_N <= 1;   // the epoch cache needs 128 clk after RST_N to clear its stamps
`else
			if (cyc > 32) MSHRES_N <= 1;
`endif
			if (ssh_rel) begin
				if (ssh_rel_dly != 8'd40) ssh_rel_dly <= ssh_rel_dly + 1;
				else SSHRES_N <= 1;
			end
		end
	end

	assign MSHIRL_N = lvlM == 0 ? 4'hF : ~lvlM;
	assign SSHIRL_N = lvlS == 0 ? 4'hF : ~lvlS;
	assign MSHNMI_N = (nmi_cnt == 0);
	assign SSHNMI_N = (snmi_cnt == 0);
	assign MFTI = (mfti_cnt == 0);
	assign SFTI = (sfti_cnt == 0);

	// bus request path (what the SCU does): SSH request -> MSH BRLS, MSH grant -> SSH BACK
	assign MSHBRLS_N = SSHBREQ_N;
	assign SSHBACK_N = MSHBGR_N;

	// wait states
	wire wait_now = (wait_mode_r == 0) ? 1'b0 :
	                (wait_mode_r == 1) ? (lfsr[3:0] == 0) :
	                (wait_mode_r == 2) ? lfsr[0] :
	                (wait_mode_r == 3) ? (lfsr[1:0] != 0) : lfsr[5];
	assign MSHWAIT_N = ~(wait_now & (bus_cs | ~MSHIVECF_N));
	assign SSHWAIT_N = MSHWAIT_N;

	// observation vector (everything Saturn.sv connects)
	assign obs = {
		MSHA, MSHDO, MSHBS_N, MSHCS0_N, MSHCS1_N, MSHCS2_N, MSHCS3_N, MSHRD_WR_N, MSHDQM_N, MSHRD_N, MSHIVECF_N, MSRFS, MSHBGR_N,
		SSHA, SSHDO, SSHBS_N, SSHCS0_N, SSHCS1_N, SSHCS2_N, SSHCS3_N, SSHRD_WR_N, SSHDQM_N, SSHRD_N, SSHBREQ_N,
		ECDI[0]
	};
endmodule
