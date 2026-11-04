// saturn_pocket.sv - the Sega Saturn system on the Analogue Pocket.
//
// Wires Saturn (src/fpga/saturn/Saturn/Saturn.sv) the way Saturn_MiSTer's board top does, with the
// MiSTer framework replaced by Pocket blocks: mem_pocket (SDRAM/PSRAM/SRAM), cdd_pocket (CD drive),
// pad_pocket, pocket_video, pocket_audio and a reconfigurable PLL. Pin tri-states stay in core_top.
// Owning doc: docs/integration.md.
//
// Switches for other branches (not implemented here):
//   POCKET_CUT_CD    the CD block no longer takes the SH-1 serial link: cdd_pocket and the CD_* ports are
//                    compiled out, edit the marked blocks for the new interface.
//   POCKET_CUT_SMPC  the SMPC no longer reads the PIO pads through PDR1I/PDR2I: pad_pocket is compiled out.

`default_nettype none

module saturn_pocket #(
	parameter bit LD_LITTLE = 1'b0                 // core_top: bridge_endian_little = 0
) (
	input  wire        clk_74a,
	input  wire        reset_n,                    // clk_74a: host reset, Reset action, BIOS loaded

	// interact.json settings (clk_74a)
	input  wire  [1:0] cfg_region,                 // 0 auto, 1 Japan, 2 USA, 3 Europe
	input  wire  [2:0] cfg_cart,                   // MiSTer cart_sel: 0 auto, 2 RAM 1M, 3 RAM 4M, 5 backup, 6 none

	input  wire [27:0] pad,                        // {pad2, pad1}, MiSTer joystick_0 bit order, clk_74a
	input  wire [31:0] rtc_date_bcd,
	input  wire [31:0] rtc_time_bcd,
	input  wire        rtc_valid,

	// bridge (clk_74a)
	input  wire        bridge_wr,
	input  wire [31:0] bridge_addr,
	input  wire [31:0] bridge_wr_data,
	input  wire        ld_wr,
	input  wire  [2:0] ld_sel,
	input  wire [23:0] ld_addr,
	input  wire [31:0] ld_data,

	// APF target commands for disc reads (clk_74a)
	output wire        target_dataslot_read,
	output wire [15:0] target_dataslot_id,
	output wire [31:0] target_dataslot_slotoffset,
	output wire [31:0] target_dataslot_bridgeaddr,
	output wire [31:0] target_dataslot_length,
	input  wire        target_dataslot_ack,
	input  wire        target_dataslot_done,
	input  wire  [2:0] target_dataslot_err,

	// SDRAM
	output wire [12:0] dram_a,
	output wire  [1:0] dram_ba,
	output wire [15:0] dram_dq_o,
	output wire        dram_dq_oe,
	input  wire [15:0] dram_dq_i,
	output wire  [1:0] dram_dqm,
	output wire        dram_clk,
	output wire        dram_cke,
	output wire        dram_ras_n,
	output wire        dram_cas_n,
	output wire        dram_we_n,

	// PSRAM
	output wire [21:16] cram0_a,  output wire [15:0] cram0_dq_o,  output wire cram0_dq_oe,  input wire [15:0] cram0_dq_i,
	output wire cram0_clk, cram0_adv_n, cram0_cre, cram0_ce0_n, cram0_ce1_n, cram0_oe_n, cram0_we_n, cram0_ub_n, cram0_lb_n,
	output wire [21:16] cram1_a,  output wire [15:0] cram1_dq_o,  output wire cram1_dq_oe,  input wire [15:0] cram1_dq_i,
	output wire cram1_clk, cram1_adv_n, cram1_cre, cram1_ce0_n, cram1_ce1_n, cram1_oe_n, cram1_we_n, cram1_ub_n, cram1_lb_n,

	// SRAM
	output wire [16:0] sram_a,
	output wire [15:0] sram_dq_o,
	output wire        sram_dq_oe,
	input  wire [15:0] sram_dq_i,
	output wire        sram_oe_n,
	output wire        sram_we_n,
	output wire        sram_ub_n,
	output wire        sram_lb_n,

	// video (clk_vid domain, from the PLL)
	output wire        clk_vid,
	output wire        clk_vid_90,
	output wire [23:0] video_rgb,
	output wire        video_de,
	output wire        video_hs,
	output wire        video_vs,
	output wire        video_skip,

	// audio, 48 kHz samples on clk_audio
	output wire        clk_audio,
	output wire signed [15:0] audio_l,
	output wire signed [15:0] audio_r,
	output wire        audio_stb,

	output wire        pll_locked_74a,             // clk_74a
	output wire        setup_ready_74a             // clk_74a: PLL locked and the RAM controllers initialised (APF setup done)
`ifdef POCKET_DEBUG_OVERLAY
	, input  wire      dbg_dac                     // core_top's audio_dac pin (I2S data, clk_audio), debug overlay square 3
`endif
);

// ---------------------------------------------------------------------------------- clocks
wire clk_sys, clk_ram, clk_ram_cap, pll_locked;
wire [63:0] rc_to, rc_from;

// compiled in NTSC 352; NTSC 320 under the build-only POCKET_PLL_COMPILE_320 (pll_sys/pll_sys_select.v)
pll_sys pll (
	.refclk(clk_74a), .rst(1'b0),
	.outclk_0(clk_sys), .outclk_1(clk_ram), .outclk_2(clk_vid), .outclk_3(clk_vid_90), .outclk_4(clk_ram_cap),
	.locked(pll_locked),
	.reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from)
);

`ifdef POCKET_PLL_LITE
wire PAL;
wire SMPC_DOTSEL;
`ifdef POCKET_FIXED_352
// diagnostic: PLL and CE mode stay at 352, CKCHG320/352 never relocks the PLL (docs/debug-overlay.md)
wire PLL_DOTSEL = 1'b1;
`else
wire PLL_DOTSEL = SMPC_DOTSEL;
`endif
`else
wire        cfg_waitrequest;
reg         cfg_write;
reg   [5:0] cfg_address;
reg  [31:0] cfg_data;

pll_sys_cfg pll_cfg (
	.mgmt_clk(clk_74a), .mgmt_reset(1'b0),
	.mgmt_waitrequest(cfg_waitrequest), .mgmt_read(1'b0), .mgmt_readdata(),
	.mgmt_write(cfg_write), .mgmt_address(cfg_address), .mgmt_writedata(cfg_data),
	.reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from)
);

`endif

assign clk_audio = clk_sys;

reg [1:0] lock_s;
reg       ever_locked = 1'b0;
always @(posedge clk_74a) begin
	lock_s <= {lock_s[0], pll_locked};
	if (lock_s[1]) ever_locked <= 1'b1;
end
assign pll_locked_74a = lock_s[1];

// The host pushes the BIOS right after setup is reported and the bridge has no back-pressure, so setup is
// reported only once the PSRAM accepts writes (the load FIFO holds 256 words); the timeout keeps a dead
// RAM from hanging the host.
reg [1:0]  rdy_s;
reg        ever_ready = 1'b0;
reg [17:0] rdy_to = 18'd0;
always @(posedge clk_74a) begin
	rdy_s <= {rdy_s[0], mem_ready};
	if (lock_s[1] && !rdy_to[17]) rdy_to <= rdy_to + 1'b1;
	if (rdy_s[1] || rdy_to[17]) ever_ready <= 1'b1;
end
assign setup_ready_74a = lock_s[1] & ever_ready;

`ifdef POCKET_PLL_LITE
wire rst_req_74 = ~reset_n | ~ever_locked;
`ifdef POCKET_PLL_NO_RECONFIG
// hardware test: the PLL keeps its compiled mode, no DPRIO access at all; the CE mode still follows SMPC_DOTSEL
// (docs/integration.md, hardware test macros)
pll_lite #(.NO_RECONFIG(1)) pll_cfg (.clk(clk_74a), .pal(PAL), .dotsel(PLL_DOTSEL), .reapply(rst_req_74), .reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from));
`else
// the mode is re-applied at every host reset, as the altera_pll_reconfig writer below does
pll_lite pll_cfg (.clk(clk_74a), .pal(PAL), .dotsel(PLL_DOTSEL), .reapply(rst_req_74), .reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from));
`endif
`else
// clk_sys = (VCO / 2) / 8: mode picks M (integer) and K (fraction) of the 74.25 MHz reference (tools/pllplan.py)
//   M reg: 0x20302 = 5, 0x303 = 6 (high count [15:8], low count [7:0], odd-division bit 17)
//   NTSC 320: M 5.7911 53.7482 MHz   NTSC 352: M 6.1708 57.2728 MHz
//   PAL  320: M 5.7508 53.3750 MHz   PAL  352: M 6.1279 56.8750 MHz
wire PAL;
wire SMPC_DOTSEL;
wire rst_req_74 = ~reset_n | ~ever_locked;

always @(posedge clk_74a) begin
	reg pald = 0, pald2 = 0;
	reg dotsel = 0, dotsel2 = 0;
	reg resd = 0, resd2 = 0;
	reg [2:0] state = 0;

	pald   <= PAL;
	pald2  <= pald;
	dotsel <= SMPC_DOTSEL;
	dotsel2 <= dotsel;
	resd   <= rst_req_74;
	resd2  <= resd;

	if (dotsel2 != dotsel || pald2 != pald || (resd && !resd2)) state <= 3'd1;

	cfg_write <= 1'b0;
	if (!cfg_waitrequest) begin
		if (state) state <= state + 3'd1;
		case (state)
		3'd1: begin cfg_address <= 6'd0; cfg_data <= 32'd0; cfg_write <= 1'b1; end
		3'd3: begin
			cfg_address <= 6'd4;
			cfg_data    <= !dotsel2 ? 32'h00020302 : 32'h00000303;
			cfg_write   <= 1'b1;
		end
		3'd5: begin
			cfg_address <= 6'd7;
			cfg_data    <= !pald2 ? (!dotsel2 ? 32'hCA825FC9 : 32'h2BB9FD78)
			                      : (!dotsel2 ? 32'hC0372A3C : 32'h20C113D3);
			cfg_write   <= 1'b1;
		end
		3'd7: begin cfg_address <= 6'd2; cfg_data <= 32'd0; cfg_write <= 1'b1; end
		default: ;
		endcase
	end
end

`endif

// ---------------------------------------------------------------------------------- settings into clk_sys
reg [1:0] region_s1, region_s2;
reg [2:0] cart_s1, cart_s2;
reg [27:0] pad_s1, pad_s2;
reg [2:0] rst_s;
always @(posedge clk_sys) begin
	region_s1 <= cfg_region;  region_s2 <= region_s1;
	cart_s1   <= cfg_cart;    cart_s2   <= cart_s1;
	pad_s1    <= pad;         pad_s2    <= pad_s1;
	rst_s     <= {rst_s[1:0], rst_req_74};
end
wire reset = rst_s[2];

// ---------------------------------------------------------------------------------- reset
wire rst_ram, download;
wire loading, mem_ready;
wire dbg_sdram_ready, dbg_psram_ready, dbg_ld_ovf, dbg_chk_done, dbg_chk_ok;
ram_reset ramrst (.clk(clk_sys), .reset(reset), .loading(loading), .rst_ram(rst_ram), .download(download));

wire boot_busy;
wire rst_sys = reset | download | rst_ram | boot_busy;

// ---------------------------------------------------------------------------------- disc header capture
wire        boot_wr;
wire  [8:0] boot_addr;
wire [15:0] boot_data;

reg [2:0]   cart_auto_pending = 3'd0;
reg [2:0]   cart_auto = 3'd0;
reg [3:0]   dz_ok;                      // game id characters 0..7 match "T-16804G", two per header word
reg [7:0]   cd_area_symbol;
reg         dezaemon2_hack = 1'b0;

always @(posedge clk_sys) begin
	if (reset && !boot_busy) cart_auto <= cart_auto_pending;
	if (boot_busy && boot_wr) begin
		case (boot_addr)
		9'h000: cart_auto_pending <= 3'd0;
		9'h100: cart_auto_pending <= (boot_data == 16'hA102) ? 3'd2 : (boot_data == 16'hA103) ? 3'd3 : 3'd0;
		9'h020: dz_ok[3] <= ({boot_data[7:0], boot_data[15:8]} == "T-");
		9'h022: dz_ok[2] <= ({boot_data[7:0], boot_data[15:8]} == "16");
		9'h024: dz_ok[1] <= ({boot_data[7:0], boot_data[15:8]} == "80");
		9'h026: dz_ok[0] <= ({boot_data[7:0], boot_data[15:8]} == "4G");
		9'h030: dezaemon2_hack   <= &dz_ok;
		9'h040: cd_area_symbol   <= boot_data[7:0];
		default: ;
		endcase
	end
end

wire [2:0] cart_sel  = cart_s2;
wire [2:0] cart_type = (cart_sel == 3'd0) ? cart_auto : (cart_sel < 3'd6) ? cart_sel : 3'd0;

wire [3:0] cd_area_code = cd_area_symbol == "J" ? 4'h1 :
                          cd_area_symbol == "T" ? 4'h2 :
                          cd_area_symbol == "U" ? 4'h4 :
                          cd_area_symbol == "B" ? 4'h5 :
                          cd_area_symbol == "K" ? 4'h6 :
                          cd_area_symbol == "A" ? 4'hA :
                          cd_area_symbol == "E" ? 4'hC :
                          cd_area_symbol == "L" ? 4'hD : 4'h1;

wire [3:0] area_code = region_s2 == 2'd1 ? 4'h1 :
                       region_s2 == 2'd2 ? 4'h4 :
                       region_s2 == 2'd3 ? 4'hC : cd_area_code;

assign PAL = (area_code >= 4'hA);

// ---------------------------------------------------------------------------------- RTC (clk_74a -> SMPC)
// The payload is the bridge's RTC registers (written once per RTC command, stable for the 2 clk_74a before the toggle flips).
// MSM6242B layout: sec, min, hour, day, month (4 + tens), year (2 BCD digits)
wire [47:0] rtc_pl = {rtc_date_bcd[23:16], 3'b000, rtc_date_bcd[12:8], rtc_date_bcd[7:0], rtc_time_bcd[23:0]};
reg        rtc_tog = 1'b0;
reg  [1:0] rtc_dly;
reg        rtc_valid_q;
always @(posedge clk_74a) begin
	rtc_valid_q <= rtc_valid;
	rtc_dly <= {rtc_dly[0], 1'b0};
	if (rtc_valid && !rtc_valid_q) rtc_dly <= 2'b01;   // the bridge holds rtc_valid high after the first RTC command
	if (rtc_dly[1]) rtc_tog <= ~rtc_tog;
end
reg [1:0] tog_s;
always @(posedge clk_sys) tog_s <= {tog_s[0], rtc_tog};
wire [64:0] RTC = {tog_s[1], 16'h0000, rtc_pl};

// ---------------------------------------------------------------------------------- clock enables
// in_clk = clk_sys in Hz for the PLL mode, one clock after PAL / SMPC_DOTSEL, 0 in the first clock (it was a register
// without reset). The accumulators take in_clk - k (threshold) and k - in_clk (negative step) for their step k as constants
// of the registered mode; in the first clock the threshold is 0 and the step k, which is what in_clk = 0 gave.
reg [2:0] clk_mode = 3'd0;     // {in_clk loaded, PAL, SMPC_DOTSEL}
`ifdef POCKET_FIXED_352
always @(posedge clk_sys) clk_mode <= {1'b1, PAL, 1'b1};
`else
always @(posedge clk_sys) clk_mode <= {1'b1, PAL, SMPC_DOTSEL};
`endif
// {PAL, DOTSEL} of the clock the PLL produces, for the pocket_video frame gate (it differs from clk_mode under
// POCKET_PLL_NO_RECONFIG, where the PLL keeps its compiled NTSC mode)
reg [1:0] pll_md = 2'b00;
`ifdef POCKET_PLL_NO_RECONFIG
`ifdef POCKET_PLL_COMPILE_320
always @(posedge clk_sys) pll_md <= 2'b00;
`else
always @(posedge clk_sys) pll_md <= 2'b01;
`endif
`elsif POCKET_PLL_LITE
always @(posedge clk_sys) pll_md <= {PAL, PLL_DOTSEL};
`else
always @(posedge clk_sys) pll_md <= {PAL, SMPC_DOTSEL};
`endif
function automatic [26:0] mode_sub(input [2:0] m, input [26:0] k, input neg);
	casez (m)
		3'b0??:  mode_sub = neg ? k : 27'd0;
		3'b100:  mode_sub = neg ? k - 27'd53748200 : 27'd53748200 - k;
		3'b101:  mode_sub = neg ? k - 27'd57272800 : 27'd57272800 - k;
		3'b110:  mode_sub = neg ? k - 27'd53375000 : 27'd53375000 - k;
		default: mode_sub = neg ? k - 27'd56875000 : 27'd56875000 - k;
	endcase
endfunction
wire [26:0] scsp_thr  = mode_sub(clk_mode, 27'd45158400, 1'b0), scsp_nstp  = mode_sub(clk_mode, 27'd45158400, 1'b1);
wire [26:0] audio_thr = mode_sub(clk_mode, 27'd48000, 1'b0),    audio_nstp = mode_sub(clk_mode, 27'd48000, 1'b1);

bit MCLK_DIV;
always @(posedge clk_sys) MCLK_DIV <= ~MCLK_DIV;
wire SYS_CE_R =  MCLK_DIV;
wire SYS_CE_F = ~MCLK_DIV;

wire SCSP_2X_CE;
ce_gent #(26) SCSP_CEGen (.clk(clk_sys), .thr(scsp_thr[25:0]), .nstep(scsp_nstp[25:0]), .out_clk(26'd45158400), .in_ce(1'b1), .ce(SCSP_2X_CE), .ev());

bit SCSP_DIV;
always @(posedge clk_sys) if (SCSP_2X_CE) SCSP_DIV <= ~SCSP_DIV;
wire SCSP_CE = SCSP_2X_CE & SCSP_DIV;

wire SMPC_CE;
wire CD_EV;   // SMPC (4 MHz) and CD (40 MHz) are 1/10 and 1 of the same ratio: every 10th CD enable
ce_div #(10) SMPC_CEGen (.clk(clk_sys), .ev(CD_EV), .ce(SMPC_CE));

wire CD_CE;
ce_gent #(12) CD_CEGen (.clk(clk_sys), .thr(12'd403), .nstep(12'd3125 - 12'd3528), .out_clk(12'd3125), .in_ce(SCSP_2X_CE), .ce(CD_CE), .ev(CD_EV));   // 40 MHz / 45.1584 MHz = 3125 / 3528

wire CDD_2X_CE;
ce_div #(256) CDD_CEGen (.clk(clk_sys), .ev(SCSP_2X_CE), .ce(CDD_2X_CE));   // 176.4 kHz = 45.1584 MHz / 256

// ---------------------------------------------------------------------------------- Saturn
wire [24: 0] MEM_A;
wire [31: 0] MEM_DI;
wire [31: 0] MEM_DO;
wire         ROM_CS_N, SRAM_CS_N, RAML_CS_N, RAMH_CS_N;
wire [ 3: 0] MEM_DQM_N;
wire         MEM_RD_N;
wire         MEM_WAIT_N;

wire [18: 1] VDP1_VRAM_A;
wire [15: 0] VDP1_VRAM_D, VDP1_VRAM_Q;
wire [ 1: 0] VDP1_VRAM_WE;
wire         VDP1_VRAM_RD;
wire [ 8: 0] VDP1_VRAM_BLEN;
wire         VDP1_VRAM_RDY;
wire [17: 1] VDP1_FB0_A, VDP1_FB1_A;
wire [15: 0] VDP1_FB0_D, VDP1_FB0_Q, VDP1_FB1_D, VDP1_FB1_Q;
wire [ 1: 0] VDP1_FB0_WE, VDP1_FB1_WE;
wire         VDP1_FB0_RD, VDP1_FB1_RD, VDP1_FB_RDY, VDP1_FB_MODE3;

wire [18: 1] VDP2_RA0_A, VDP2_RB0_A;
wire [16: 1] VDP2_RA1_A, VDP2_RB1_A;
wire [63: 0] VDP2_RA_D, VDP2_RB_D;
wire [ 7: 0] VDP2_RA_WE, VDP2_RB_WE;
wire         VDP2_RA_RD, VDP2_RB_RD;
wire [31: 0] VDP2_RA0_Q, VDP2_RA1_Q, VDP2_RB0_Q, VDP2_RB1_Q;

wire [18: 1] SCSP_RAM_A;
wire [15: 0] SCSP_RAM_D, SCSP_RAM_Q;
wire [ 1: 0] SCSP_RAM_WE;
wire         SCSP_RAM_RD, SCSP_RAM_CS, SCSP_RAM_RDY;

wire [ 6: 0] SMPC_PDR1I, SMPC_PDR1O, SMPC_DDR1, SMPC_PDR2I, SMPC_PDR2O, SMPC_DDR2;

wire         CD_CDATA, CD_HDATA, CD_COMCLK, CD_COMREQ_N, CD_COMSYNC_N, CD_CK, CD_AUDIO;
wire [17: 0] CD_DATA;
`ifdef POCKET_CUT_CDB_LLE
wire        disc_ok, disc_new;
wire  [6:0] ntracks, lk_track, lk_idx;
wire  [7:0] ntbcd, lk_tbcd, lk_idx1;
wire [23:0] toc_end, lk_start, sd_hdr, lk_x, pf_fad;
wire        lk_go, lk_byidx, lk_hold, lk_busy, eng_idle, lk_data, lk_s2048;
wire        pf_flush, pf_en, pf_ready, sd_go, sd_spd2, sd_synth, fd_busy;
wire  [1:0] sd_kind;
`endif
wire [18: 1] CD_RAM_A;
wire [15: 0] CD_RAM_D, CD_RAM_Q;
wire [ 1: 0] CD_RAM_WE;
wire         CD_RAM_RD, CD_RAM_CS, CD_RAM_RDY;

wire [25: 1] CART_MEM_A;
wire [15: 0] CART_MEM_D, CART_MEM_Q;
wire [ 1: 0] CART_MEM_WE;
wire         CART_MEM_RD, CART_MEM_RDY;

wire [ 7: 0] R, G, B;
wire         HS_N, VS_N, DCLK, HBL_N, VBL_N, FIELD, INTERLACE, DCE_R, DCE_F;
wire [ 1: 0] HRES, VRES;
`ifdef POCKET_DEBUG_OVERLAY
wire [ 6: 0] dbg_tap;
wire [99: 0] dbg_txt;
wire [28: 0] dbg_da;
wire [26: 0] dbg_68k;
wire [29: 0] dbg_serv;
wire [33: 0] dbg_snd;
`endif
wire [15: 0] SOUND_L, SOUND_R;

Saturn #(.RAMH_SLOW(1)) saturn (
	.CLK(clk_sys),
	.RST_N(~rst_sys),
	.EN(1'b1),

	.SYS_CE_F(SYS_CE_F),
	.SYS_CE_R(SYS_CE_R),

	.SRES_N(1'b1),

	.PAL(PAL),

	.MEM_A(MEM_A),
	.MEM_DI(MEM_DI),
	.MEM_DO(MEM_DO),
	.MEM_DQM_N(MEM_DQM_N),
	.ROM_CS_N(ROM_CS_N),
	.SRAM_CS_N(SRAM_CS_N),
	.RAML_CS_N(RAML_CS_N),
	.RAMH_CS_N(RAMH_CS_N),
	.RAMH_BURST(),
	.RAMH_RFS(),
	.MEM_RD_N(MEM_RD_N),
	.MEM_WAIT_N(MEM_WAIT_N),

	.VDP1_VRAM_A(VDP1_VRAM_A),
	.VDP1_VRAM_D(VDP1_VRAM_D),
	.VDP1_VRAM_WE(VDP1_VRAM_WE),
	.VDP1_VRAM_RD(VDP1_VRAM_RD),
	.VDP1_VRAM_BLEN(VDP1_VRAM_BLEN),
	.VDP1_VRAM_Q(VDP1_VRAM_Q),
	.VDP1_VRAM_RDY(VDP1_VRAM_RDY),
	.VDP1_FB0_A(VDP1_FB0_A),
	.VDP1_FB0_D(VDP1_FB0_D),
	.VDP1_FB0_WE(VDP1_FB0_WE),
	.VDP1_FB0_RD(VDP1_FB0_RD),
	.VDP1_FB0_Q(VDP1_FB0_Q),
	.VDP1_FB1_A(VDP1_FB1_A),
	.VDP1_FB1_D(VDP1_FB1_D),
	.VDP1_FB1_WE(VDP1_FB1_WE),
	.VDP1_FB1_RD(VDP1_FB1_RD),
	.VDP1_FB1_Q(VDP1_FB1_Q),
	.VDP1_FB_RDY(VDP1_FB_RDY),
	.VDP1_FB_MODE3(VDP1_FB_MODE3),

	.VDP2_RA0_A(VDP2_RA0_A),
	.VDP2_RA1_A(VDP2_RA1_A),
	.VDP2_RA_D(VDP2_RA_D),
	.VDP2_RA_WE(VDP2_RA_WE),
	.VDP2_RA_RD(VDP2_RA_RD),
	.VDP2_RA0_Q(VDP2_RA0_Q),
	.VDP2_RA1_Q(VDP2_RA1_Q),
	.VDP2_RB0_A(VDP2_RB0_A),
	.VDP2_RB1_A(VDP2_RB1_A),
	.VDP2_RB_D(VDP2_RB_D),
	.VDP2_RB_WE(VDP2_RB_WE),
	.VDP2_RB_RD(VDP2_RB_RD),
	.VDP2_RB0_Q(VDP2_RB0_Q),
	.VDP2_RB1_Q(VDP2_RB1_Q),

	.SCSP_CE(SCSP_CE),
	.SCSP_RAM_A(SCSP_RAM_A),
	.SCSP_RAM_D(SCSP_RAM_D),
	.SCSP_RAM_WE(SCSP_RAM_WE),
	.SCSP_RAM_RD(SCSP_RAM_RD),
	.SCSP_RAM_CS(SCSP_RAM_CS),
	.SCSP_RAM_Q(SCSP_RAM_Q),
	.SCSP_RAM_RFS(),
	.SCSP_RAM_RDY(SCSP_RAM_RDY),

	.SMPC_CE(SMPC_CE),
	.TIME_SET(1'b1),
	.RTC(RTC),
	.SMPC_AREA(area_code),
	.SMPC_DOTSEL(SMPC_DOTSEL),
	.SMPC_PDR1I(SMPC_PDR1I),
	.SMPC_PDR1O(SMPC_PDR1O),
	.SMPC_DDR1(SMPC_DDR1),
	.SMPC_PDR2I(SMPC_PDR2I),
	.SMPC_PDR2O(SMPC_PDR2O),
	.SMPC_DDR2(SMPC_DDR2),

`ifdef POCKET_CUT_CDB_LLE
	.CD_CE(CD_CE),
	.CD_CDATA(1'b1),
	.CD_HDATA(),
	.CD_COMCLK(),
	.CD_COMREQ_N(1'b1),
	.CD_COMSYNC_N(1'b1),
	.CD_DEMP(),
	.CD_D(CD_DATA[15:0]),
	.CD_CK(CD_CK),
	.CD_AUDIO(CD_AUDIO),
	.CD_RAM_A(CD_RAM_A),
	.CD_RAM_D(CD_RAM_D),
	.CD_RAM_WE(CD_RAM_WE),
	.CD_RAM_RD(CD_RAM_RD),
	.CD_RAM_CS(CD_RAM_CS),
	.CD_RAM_Q(CD_RAM_Q),
	.CD_RAM_RDY(CD_RAM_RDY),
	.CDD_CE(CDD_2X_CE),
	.DISC_OK(disc_ok), .DISC_NEW(disc_new), .TOC_NTRACKS(ntracks), .TOC_NTBCD(ntbcd), .TOC_END(toc_end),
	.LK_GO(lk_go), .LK_BYIDX(lk_byidx), .LK_X(lk_x), .LK_IDX(lk_idx), .LK_HOLD(lk_hold), .LK_BUSY(lk_busy),
	.LK_ENG_IDLE(eng_idle), .LK_TRACK(lk_track), .LK_TBCD(lk_tbcd), .LK_START(lk_start), .LK_IDX1(lk_idx1),
	.LK_DATA(lk_data), .LK_S2048(lk_s2048),
	.PF_FLUSH(pf_flush), .PF_FAD(pf_fad), .PF_EN(pf_en), .PF_READY(pf_ready),
	.SD_GO(sd_go), .SD_KIND(sd_kind), .SD_SYNTH(sd_synth), .SD_SPD2(sd_spd2), .SD_HDR(sd_hdr), .FD_BUSY(fd_busy),
	.CD_DATA18(CD_DATA),
`endif
`ifndef POCKET_CUT_CDB_LLE
`ifndef POCKET_CUT_CD
	.CD_CE(CD_CE),
	.CD_CDATA(CD_CDATA),
	.CD_HDATA(CD_HDATA),
	.CD_COMCLK(CD_COMCLK),
	.CD_COMREQ_N(CD_COMREQ_N),
	.CD_COMSYNC_N(CD_COMSYNC_N),
	.CD_DEMP(),
	.CD_D(CD_DATA[15:0]),
	.CD_CK(CD_CK),
	.CD_AUDIO(CD_AUDIO),
	.CD_RAM_A(CD_RAM_A),
	.CD_RAM_D(CD_RAM_D),
	.CD_RAM_WE(CD_RAM_WE),
	.CD_RAM_RD(CD_RAM_RD),
	.CD_RAM_CS(CD_RAM_CS),
	.CD_RAM_Q(CD_RAM_Q),
	.CD_RAM_RDY(CD_RAM_RDY),
`endif
`endif

	.CART_MODE(cart_type),
	.CART_MEM_A(CART_MEM_A),
	.CART_MEM_D(CART_MEM_D),
	.CART_MEM_WE(CART_MEM_WE),
	.CART_MEM_RD(CART_MEM_RD),
	.CART_MEM_Q(CART_MEM_Q),
	.CART_MEM_RDY(CART_MEM_RDY),

	.R(R),
	.G(G),
	.B(B),
	.DCLK(DCLK),
	.VS_N(VS_N),
	.HS_N(HS_N),
	.HBL_N(HBL_N),
	.VBL_N(VBL_N),

	.FIELD(FIELD),
	.INTERLACE(INTERLACE),
	.HRES(HRES),
	.VRES(VRES),
	.DCE_R(DCE_R),
	.DCE_F(DCE_F),

	.SOUND_L(SOUND_L),
	.SOUND_R(SOUND_R),

	.FAST(1'b0),
	.BLUR_MESH(1'b0),

	.SCRN_EN(8'hFF),
	.SND_EN(3'b111),
	.DBG_PAUSE(1'b0),
	.DBG_BREAK(1'b0),
	.DBG_RUN(1'b0),
	.DBG_EXT(8'h00)
`ifdef POCKET_DEBUG_OVERLAY
	, .DBG_TAP(dbg_tap), .DBG_TXT(dbg_txt), .DBG_DA(dbg_da), .DBG_68K(dbg_68k), .DBG_SERV(dbg_serv), .DBG_SND(dbg_snd)
`endif
);

// ---------------------------------------------------------------------------------- pads
// MiSTer joystick bits: [0] right [1] left [2] down [3] up [4] A [5] B [6] C [7] Start [8] R [9] X [10] Y [11] Z [12] L
function automatic [15:0] joy_word(input [13:0] j);
	joy_word = {~j[0]|j[1], ~j[1]|j[0], ~j[2]|j[3], ~j[3]|j[2], ~j[7], ~j[4], ~j[6], ~j[5],
	            ~j[8], ~j[9], ~j[10], ~j[11], ~j[12], 3'b111};
endfunction

`ifndef POCKET_CUT_SMPC
pad_pocket pads (
	.PDR1O(SMPC_PDR1O), .DDR1(SMPC_DDR1), .PDR2O(SMPC_PDR2O), .DDR2(SMPC_DDR2),
	.JOY1(joy_word(pad_s2[13:0])), .JOY2(joy_word(pad_s2[27:14])),
	.PDR1I(SMPC_PDR1I), .PDR2I(SMPC_PDR2I)
);
`endif

// ---------------------------------------------------------------------------------- CD drive
wire        rg_wr, rg_wbusy, rg_rd, rg_rbusy;
wire [12:0] rg_wa;
wire [31:0] rg_wd;
wire [13:0] rg_ra;
wire [15:0] rg_q;

`ifdef POCKET_CUT_CDB_LLE
// HLE CD block inside Saturn: cd_stream is the only CD client (no cdd_link / cdd_ctl). The disc
// header replay stays: area code, cartridge request and game id are needed before the BIOS runs.
cd_stream stream (
	.clk(clk_sys), .rst_n(~(reset | download | rst_ram)), .ce(CDD_2X_CE),
	.clk_74a(clk_74a), .bridge_wr(bridge_wr), .bridge_addr(bridge_addr), .bridge_wr_data(bridge_wr_data),
	.t_read(target_dataslot_read), .t_id(target_dataslot_id), .t_off(target_dataslot_slotoffset),
	.t_baddr(target_dataslot_bridgeaddr), .t_len(target_dataslot_length),
	.t_ack(target_dataslot_ack), .t_done(target_dataslot_done), .t_err(target_dataslot_err),
	.rg_wr(rg_wr), .rg_wa(rg_wa), .rg_wd(rg_wd), .rg_wbusy(rg_wbusy),
	.rg_rd(rg_rd), .rg_ra(rg_ra), .rg_q(rg_q), .rg_rbusy(rg_rbusy),
	.disc_ok(disc_ok), .disc_new(disc_new), .boot_busy(boot_busy), .boot_wr(boot_wr),
	.boot_addr(boot_addr), .boot_data(boot_data),
	.ntracks(ntracks), .ntbcd(ntbcd), .toc_end(toc_end), .hack_wwf(), .hack_rr(),
	.lk_go(lk_go), .lk_byidx(lk_byidx), .lk_x(lk_x), .lk_idx(lk_idx), .lk_hold(lk_hold),
	.lk_busy(lk_busy), .eng_idle(eng_idle), .lk_track(lk_track), .lk_tbcd(lk_tbcd),
	.lk_start(lk_start), .lk_idx1(lk_idx1), .lk_data(lk_data), .lk_s2048(lk_s2048),
	.pf_flush(pf_flush), .pf_fad(pf_fad), .pf_en(pf_en), .pf_ready(pf_ready),
	.sd_go(sd_go), .sd_kind(sd_kind), .sd_synth(sd_synth), .sd_spd2(sd_spd2), .sd_hdr(sd_hdr),
	.fd_busy(fd_busy), .cd_data(CD_DATA), .cd_ck(CD_CK), .cd_audio(CD_AUDIO),
	.err_cnt(), .ovf_cnt()
);
`endif
`ifndef POCKET_CUT_CDB_LLE
`ifndef POCKET_CUT_CD
cdd_pocket cdd (
	.CLK(clk_sys),
	.RST_N(~(reset | download | rst_ram)),
	.CDD_CE(CDD_2X_CE),
	.CD_CDATA(CD_CDATA),
	.CD_HDATA(CD_HDATA),
	.CD_COMCLK(CD_COMCLK),
	.CD_COMREQ_N(CD_COMREQ_N),
	.CD_COMSYNC_N(CD_COMSYNC_N),
	.CD_DATA(CD_DATA),
	.CD_CK(CD_CK),
	.CD_AUDIO(CD_AUDIO),
	.BOOT_BUSY(boot_busy),
	.BOOT_WR(boot_wr),
	.BOOT_ADDR(boot_addr),
	.BOOT_DATA(boot_data),
	.clk_74a(clk_74a),
	.bridge_wr(bridge_wr),
	.bridge_addr(bridge_addr),
	.bridge_wr_data(bridge_wr_data),
	.target_dataslot_read(target_dataslot_read),
	.target_dataslot_id(target_dataslot_id),
	.target_dataslot_slotoffset(target_dataslot_slotoffset),
	.target_dataslot_bridgeaddr(target_dataslot_bridgeaddr),
	.target_dataslot_length(target_dataslot_length),
	.target_dataslot_ack(target_dataslot_ack),
	.target_dataslot_done(target_dataslot_done),
	.target_dataslot_err(target_dataslot_err),
	.rg_wr(rg_wr), .rg_wa(rg_wa), .rg_wd(rg_wd), .rg_wbusy(rg_wbusy),
	.rg_rd(rg_rd), .rg_ra(rg_ra), .rg_q(rg_q), .rg_rbusy(rg_rbusy),
	.DISC_OK(),
	.DBG(),
	.STALL()
);
`else
assign boot_busy = 1'b0;
assign boot_wr = 1'b0;
assign boot_addr = 9'd0;
assign boot_data = 16'd0;
assign target_dataslot_read = 1'b0;
assign target_dataslot_id = 16'd0;
assign target_dataslot_slotoffset = 32'd0;
assign target_dataslot_bridgeaddr = 32'd0;
assign target_dataslot_length = 32'd0;
assign rg_wr = 1'b0;
assign rg_wa = 13'd0;
assign rg_wd = 32'd0;
assign rg_rd = 1'b0;
assign rg_ra = 14'd0;
assign CD_RAM_Q = 16'd0;
assign CD_RAM_RDY = 1'b1;
`endif
`endif

// ---------------------------------------------------------------------------------- memory
// WRAM-H write data and enables are registered on clk_ram as in the MiSTer top (and carry the one-game patch)
reg [31:0] ramh_din;
reg  [3:0] ramh_wr;
always @(posedge clk_ram) begin
	// the patch only sets bit 20 (5A01 5E01 -> 5A11 5E01)
	ramh_din <= {MEM_DO[31:21], MEM_DO[20] | (dezaemon2_hack && MEM_A[19:0] == 20'h1746C && MEM_DO == 32'h5A015E01), MEM_DO[19:0]};
	ramh_wr  <= {4{~RAMH_CS_N}} & ~MEM_DQM_N;
end
wire [21:1] raml_addr = {~RAML_CS_N, ~SRAM_CS_N, ROM_CS_N & SRAM_CS_N & MEM_A[19], MEM_A[18:1]};

wire [15:0] cdram_do, raml_do, vdp1vram_do, cart_do;
wire [31:0] ramh_do;
wire        cdram_busy, raml_busy, ramh_busy, vdp1vram_busy, cart_busy;

mem_pocket #(.LD_LITTLE(LD_LITTLE)) mem (
	.clk_ram(clk_ram), .clk_sys(clk_sys), .rst_ram(rst_ram),

	.dram_a(dram_a), .dram_ba(dram_ba), .dram_dq_o(dram_dq_o), .dram_dq_oe(dram_dq_oe), .dram_dq_i(dram_dq_i),
	.dram_dqm(dram_dqm), .dram_clk(dram_clk), .dram_cke(dram_cke),
	.dram_ras_n(dram_ras_n), .dram_cas_n(dram_cas_n), .dram_we_n(dram_we_n),

	.cram0_a(cram0_a), .cram0_dq_o(cram0_dq_o), .cram0_dq_oe(cram0_dq_oe), .cram0_dq_i(cram0_dq_i),
	.cram0_clk(cram0_clk), .cram0_adv_n(cram0_adv_n), .cram0_cre(cram0_cre), .cram0_ce0_n(cram0_ce0_n), .cram0_ce1_n(cram0_ce1_n),
	.cram0_oe_n(cram0_oe_n), .cram0_we_n(cram0_we_n), .cram0_ub_n(cram0_ub_n), .cram0_lb_n(cram0_lb_n),
	.cram1_a(cram1_a), .cram1_dq_o(cram1_dq_o), .cram1_dq_oe(cram1_dq_oe), .cram1_dq_i(cram1_dq_i),
	.cram1_clk(cram1_clk), .cram1_adv_n(cram1_adv_n), .cram1_cre(cram1_cre), .cram1_ce0_n(cram1_ce0_n), .cram1_ce1_n(cram1_ce1_n),
	.cram1_oe_n(cram1_oe_n), .cram1_we_n(cram1_we_n), .cram1_ub_n(cram1_ub_n), .cram1_lb_n(cram1_lb_n),

	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),

	.sync(DCE_R),
	.addr_a0(VDP2_RA0_A[17:1]), .addr_a1(VDP2_RA1_A[16:1]), .din_a(VDP2_RA_D), .wr_a(VDP2_RA_WE), .rd_a(VDP2_RA_RD),
	.dout_a0(VDP2_RA0_Q), .dout_a1(VDP2_RA1_Q),
	.addr_b0(VDP2_RB0_A[17:1]), .addr_b1(VDP2_RB1_A[16:1]), .din_b(VDP2_RB_D), .wr_b(VDP2_RB_WE), .rd_b(VDP2_RB_RD),
	.dout_b0(VDP2_RB0_Q), .dout_b1(VDP2_RB1_Q),
	.ch2addr({1'b0, SCSP_RAM_A}), .ch2din(SCSP_RAM_D), .ch2wr(SCSP_RAM_WE & {2{SCSP_RAM_CS}}),
	.ch2rd(SCSP_RAM_RD & SCSP_RAM_CS), .ch2dout(SCSP_RAM_Q), .ch2rdy(SCSP_RAM_RDY),

	.ramh_addr(MEM_A[19:2]), .ramh_dout(ramh_do), .ramh_din(ramh_din),
	.ramh_rd(~RAMH_CS_N & ~MEM_RD_N), .ramh_wr(ramh_wr), .ramh_busy(ramh_busy),
	.raml_addr(raml_addr), .raml_dout(raml_do), .raml_din(MEM_DO[15:0]),
	.raml_rd((~ROM_CS_N | ~SRAM_CS_N | ~RAML_CS_N) & ~MEM_RD_N),
	.raml_wr({2{~SRAM_CS_N | ~RAML_CS_N}} & ~MEM_DQM_N[1:0]), .raml_busy(raml_busy),
	.cdram_addr(CD_RAM_A), .cdram_dout(cdram_do), .cdram_din(CD_RAM_D),
	.cdram_rd(CD_RAM_RD & CD_RAM_CS), .cdram_wr(CD_RAM_WE & {2{CD_RAM_CS}}), .cdram_busy(cdram_busy),
	.vdp1vram_addr(VDP1_VRAM_A), .vdp1vram_dout(vdp1vram_do), .vdp1vram_din(VDP1_VRAM_D),
	.vdp1vram_rd(VDP1_VRAM_RD), .vdp1vram_wr(VDP1_VRAM_WE), .vdp1vram_blen(VDP1_VRAM_BLEN), .vdp1vram_busy(vdp1vram_busy),
	.cdbuf_addr(13'd0), .cdbuf_dout(), .cdbuf_rd(1'b0), .cdbuf_busy(),
	.cart_addr(CART_MEM_A), .cart_dout(cart_do), .cart_din(CART_MEM_D),
	.cart_rd(CART_MEM_RD), .cart_wr(CART_MEM_WE), .cart_busy(cart_busy),
	.bsram_addr(20'd0), .bsram_dout(), .bsram_din(16'd0), .bsram_rd(1'b0), .bsram_wr(2'b00), .bsram_busy(),
	.cdbuf_waddr(13'd0), .cdbuf_wdata(16'd0), .cdbuf_wwr(1'b0), .cdbuf_wbusy(),

	.FB_MODE3(VDP1_FB_MODE3),
	.FB0_A(VDP1_FB0_A), .FB0_D(VDP1_FB0_D), .FB0_WE(VDP1_FB0_WE), .FB0_RD(VDP1_FB0_RD), .FB0_Q(VDP1_FB0_Q),
	.FB1_A(VDP1_FB1_A), .FB1_D(VDP1_FB1_D), .FB1_WE(VDP1_FB1_WE), .FB1_RD(VDP1_FB1_RD), .FB1_Q(VDP1_FB1_Q),
	.FB_RDY(VDP1_FB_RDY),

	.ringw_addr(rg_wa), .ringw_data(rg_wd), .ringw_wr(rg_wr), .ringw_busy(rg_wbusy),
	.ring_addr(rg_ra), .ring_dout(rg_q), .ring_rd(rg_rd), .ring_busy(rg_rbusy),

	.clk_74a(clk_74a),
	.ld_wr(ld_wr), .ld_sel(ld_sel), .ld_addr(ld_addr), .ld_data(ld_data),
	.loading(loading),
	.mem_ready(mem_ready),
	.dbg_sdram_ready(dbg_sdram_ready), .dbg_psram_ready(dbg_psram_ready), .dbg_ld_ovf(dbg_ld_ovf), .dbg_chk_done(dbg_chk_done), .dbg_chk_ok(dbg_chk_ok)
);

assign VDP1_VRAM_Q   = vdp1vram_do;
assign VDP1_VRAM_RDY = ~vdp1vram_busy;
`ifndef POCKET_CUT_CD
assign CD_RAM_Q      = cdram_do;
assign CD_RAM_RDY    = ~cdram_busy;
`endif
assign CART_MEM_Q    = cart_do;
assign CART_MEM_RDY  = ~cart_busy;
assign MEM_DI        = !RAMH_CS_N ? ramh_do : {16'h0000, raml_do};
assign MEM_WAIT_N    = !RAMH_CS_N ? ~ramh_busy : ~raml_busy;

// ---------------------------------------------------------------------------------- video and audio
// ---------------------------------------------------------------------------------- debug overlay
// 16 status squares over the picture, legend in docs/debug-overlay.md
`ifdef POCKET_DEBUG_OVERLAY
reg [1:0]  dbg_pll_s;
reg  [1:0] dbg_chk_s;
reg        dbg_wramh = 1'b0;
reg [24:0] dbg_win = 25'd0;
always @(posedge clk_sys) begin
	dbg_pll_s  <= {dbg_pll_s[0], lock_s[1]};
	dbg_chk_s  <= {dbg_chk_s[0], dbg_chk_done & dbg_chk_ok};
	dbg_win    <= dbg_win + 25'd1;
	if (!RAMH_CS_N) dbg_wramh <= 1'b1;
end
wire dbg_tick = &dbg_win;
reg  [6:0] dbg_tap_q = 7'd0;                   // the Saturn taps, registered once before any overlay logic
always @(posedge clk_sys) dbg_tap_q <= dbg_tap;
reg        dbg_sndres_q = 1'b0, dbg_scas_q = 1'b1, dbg_vbl_q = 1'b1;   // DBG_68K = {SNDRES_N, M68K_RESO_N, SCCE_R, SCAS_N, SCA}
always @(posedge clk_sys) begin
	dbg_sndres_q <= dbg_68k[26];
	dbg_scas_q   <= dbg_68k[23];
	dbg_vbl_q    <= VBL_N;
end
wire a_irl, a_cd, a_vs, a_de, a_68k, a_vbl, a_scsp, a_dac;
// sound probes (squares 2-4): SCSP output parity (toggles when the mixed sample changes, so it was non-zero), the
// I2S data pin (toggles only with non-zero samples), sound RAM word 0 write vs next read (dbg_snd as debug6 took it,
// unregistered: event and data are valid in the same cycle; the compare result is registered)
reg        dbg_sp_q = 1'b0;
reg  [2:0] dbg_dac_s = 3'd0;
reg [15:0] dbg_sw = 16'd0;
reg        dbg_sw_v = 1'b0, dbg_sr_v = 1'b0, dbg_sr_ok = 1'b0;
always @(posedge clk_sys) begin
	dbg_sp_q  <= ^{SOUND_L, SOUND_R};
	dbg_dac_s <= {dbg_dac_s[1:0], dbg_dac};
	if (dbg_snd[33]) begin                     // {wr_ev, BDO, rd_ev, SCSP_DO}
		dbg_sw <= dbg_snd[32:17]; dbg_sw_v <= 1'b1; dbg_sr_v <= 1'b0;
	end else if (dbg_snd[16] && dbg_sw_v) begin
		dbg_sr_v <= 1'b1; dbg_sr_ok <= (dbg_snd[15:0] == dbg_sw);
	end
end
dbg_act d_scsp (.clk(clk_sys), .tick(dbg_tick), .s(dbg_sp_q), .y(a_scsp));
dbg_act d_dac  (.clk(clk_sys), .tick(dbg_tick), .s(dbg_dac_s[2]), .y(a_dac));
dbg_act d_68k  (.clk(clk_sys), .tick(dbg_tick), .s(dbg_scas_q), .y(a_68k));
dbg_act d_vbl  (.clk(clk_sys), .tick(dbg_tick), .s(dbg_vbl_q), .y(a_vbl));
dbg_act d_irl  (.clk(clk_sys), .tick(dbg_tick), .s(dbg_tap_q[3]), .y(a_irl));
dbg_act d_cd   (.clk(clk_sys), .tick(dbg_tick), .s(dbg_tap_q[4]), .y(a_cd));
dbg_act d_vs   (.clk(clk_sys), .tick(dbg_tick), .s(VS_N), .y(a_vs));
dbg_act d_de   (.clk(clk_sys), .tick(dbg_tick), .s(HBL_N & VBL_N), .y(a_de));
`ifdef POCKET_CUT_CDB_LLE
wire dbg_toc = disc_ok;
`else
wire dbg_toc = 1'b0;
`endif
wire [15:0] dbg_g = {
	dbg_toc,                                           // 16 TOC loaded
	dbg_chk_s[1],                                      // 15 SDRAM self-check OK (sound RAM write/read-back)
	dbg_tap_q[5],                                        // 14 SMPC released MSH
	1'b0,                                              // 13 CD block (activity)
	1'b0,                                              // 12 SCU irq (activity)
	1'b0,                                              // 11 VBL_N (activity)
	dbg_tap_q[6],                                        // 10 VDP2 DISP
	dbg_wramh,                                         //  9 WRAM-H reached
	1'b0,                                              //  8 68K bus (activity)
	dbg_sndres_q,                                      //  7 68K out of reset (SNDRES_N)
	dbg_psram_ready,                                   //  6 PSRAM init
	dbg_sdram_ready,                                   //  5 SDRAM init
	dbg_sr_v & dbg_sr_ok,                              //  4 sound RAM word 0 read back as written (off: no read yet)
	1'b0,                                              //  3 I2S data pin (activity)
	1'b0,                                              //  2 SCSP output (activity)
	dbg_pll_s[1]                                       //  1 PLL locked
};
wire [15:0] dbg_y = {2'b00, 1'b0, a_cd, a_irl, a_vbl, 2'b00, a_68k, 1'b0, 3'b000, a_dac, a_scsp, 1'b0};   // yellow: 13 CD, 12 SCU irq, 11 VBL_N, 8 68K bus, 3 I2S, 2 SCSP
wire [15:0] dbg_o = {12'd0, ~dbg_sr_v, 3'b000};                                       // square not drawn: 4 before the first read
wire dbg_alive = a_vs & a_de;

`ifdef POCKET_DEBUG_SNDROW
// hex text row (docs/debug-overlay.md, debug6): data of the last SH-2 write and read of sound RAM word 0
wire        dbg_wa = dbg_snd[16];                                  // word 1 = read data
wire [15:0] dbg_wd = dbg_snd[16] ? dbg_snd[15:0] : dbg_snd[32:17];
wire        dbg_we = dbg_snd[33] | dbg_snd[16];
`else
// hex text row (docs/debug-overlay.md): MSH PC, sampled once per window; the two words are rewritten alternately
reg  [31:0] dbg_pc = 32'd0;
reg         dbg_wa = 1'b0;
always @(posedge clk_sys) begin
	if (dbg_tick) dbg_pc <= dbg_txt[99:68];
	dbg_wa <= ~dbg_wa;
end
wire [15:0] dbg_wd = dbg_wa ? dbg_pc[15:0] : dbg_pc[31:16];
wire        dbg_we = 1'b1;
`endif
`endif

pocket_video video (
	.clk_sys(clk_sys), .clk_vid(clk_vid),
	.R(R), .G(G), .B(B), .DCLK(DCLK), .HS_N(HS_N), .VS_N(VS_N), .HBL_N(HBL_N), .VBL_N(VBL_N),
	.HRES(HRES), .VRES(VRES), .clk_md(pll_md),
	.video_rgb(video_rgb), .video_de(video_de), .video_hs(video_hs), .video_vs(video_vs), .video_skip(video_skip)
`ifdef POCKET_DEBUG_OVERLAY
	, .dbg_g(dbg_g), .dbg_y(dbg_y), .dbg_o(dbg_o), .dbg_alive(dbg_alive), .dbg_wd(dbg_wd), .dbg_wa(dbg_wa), .dbg_we(dbg_we)
`endif
);

pocket_audio audio (
	.clk(clk_sys), .rst(rst_sys), .scsp_ce(SCSP_CE), .out_thr(audio_thr), .out_nstep(audio_nstp),
	.in_l($signed(SOUND_L)), .in_r($signed(SOUND_R)),
	.out_l(audio_l), .out_r(audio_r), .out_stb(audio_stb)
);

endmodule

`default_nettype wire
