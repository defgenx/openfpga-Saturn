// SMPC with the command, INTBACK, pad and RTC behaviour as firmware on a SERV core (firmware/smpc).
// Same ports as SMPC_HLE. Hardware: SH-2 register interface, output pins, 4 MHz tick counter, event flags,
// IREG/OREG storage. See docs/smpc-serv.md.
module SMPC_SERV #(parameter FW_FILE = "smpc_fw.hex", parameter ROM_AW = 9, parameter RAM_AW = 5) (
	input              CLK,
	input              RST_N,
	input              CE,
	
	input              MRES_N,
	input              TIME_SET,
	
	input      [64: 0] EXT_RTC,
	
	input      [ 3: 0] AC,
	
	input      [ 6: 1] A,
	input      [ 7: 0] DI,
	output     [ 7: 0] DO,
	input              CS_N,
	input              RW_N,
	
	input              SRES_N,
	
	input              IRQV_N,
	output             EXL_N,
	
	output             MSHRES_N,
	output             MSHNMI_N,
	output             SSHRES_N,
	output             SSHNMI_N,
	output             SYSRES_N,
	output             SNDRES_N,
	output             CDRES_N,
	
	output             MIRQ_N,

	output             DOTSEL,
	
	input      [ 6: 0] PDR1I,
	output     [ 6: 0] PDR1O,
	output     [ 6: 0] DDR1,
	input      [ 6: 0] PDR2I,
	output     [ 6: 0] PDR2O,
	output     [ 6: 0] DDR2
);

	// ---------------------------------------------------------------- SH-2 side registers
	reg  [ 7:0] COMREG, SR, IO_BUF, REG_DO;
	reg         SF;
	reg  [ 7:0] PDR_O [2];
	reg  [ 6:0] DDR [2];
	reg  [ 1:0] IOSEL, EXLE;
	reg  [23:0] DL;
	reg  [15:0] TS;
	reg         RESD, i0_en;
	wire [23:0] dl_diff = TICKS - DL;
	reg         dl_arm;
	reg  [ 8:0] PINS;
	reg  [23:0] TICKS;
	reg         RW_N_OLD, CS_N_OLD, IRQV_N_OLD, RTC64_OLD;
	reg         ev_cmd, ev_vbin, ev_vbout, ev_rtc, ev_i0, ev_tmr;

	(* ramstyle = "MLAB, no_rw_check" *) reg [7:0] oreg_m [32];
	(* ramstyle = "MLAB, no_rw_check" *) reg [7:0] ireg_m [8];
	wire [ 6:0] ba     = {A, 1'b1};
	wire        bus_wr = !RW_N && RW_N_OLD && !CS_N && MRES_N;
	wire        bus_rd = !CS_N && CS_N_OLD && RW_N;
	wire [ 7:0] oreg_q = oreg_m[A - 6'h10];

	// ---------------------------------------------------------------- CPU, ROM, RAM
	wire [31:0] ia, da, dd;
	wire        ic, dc, dwe;
	wire [ 3:0] dsel;
	wire [31:0] drd;
	reg  [31:0] ird_r = 32'd0, rom_d = 32'd0;
	reg         iack = 1'b0, dack = 1'b0;

`ifdef SMPC_RF_M10K
	serv_rf_top
`else
	smpc_rf_top
`endif
	#(.COMPRESSED(1), .WITH_CSR(0), .RESET_STRATEGY("MINI")) cpu (
		.clk(CLK), .i_rst(!RST_N || !MRES_N), .i_timer_irq(1'b0),
		.o_ibus_adr(ia), .o_ibus_cyc(ic), .i_ibus_rdt(ird_r), .i_ibus_ack(iack),
		.o_dbus_adr(da), .o_dbus_dat(dd), .o_dbus_sel(dsel), .o_dbus_we(dwe), .o_dbus_cyc(dc),
		.i_dbus_rdt(drd), .i_dbus_ack(dack),
		.o_ext_rs1(), .o_ext_rs2(), .o_ext_funct3(), .i_ext_rd(32'd0), .i_ext_ready(1'b0), .o_mdu_valid());

	(* ramstyle = "M10K" *) reg [31:0] rom [0:(1<<ROM_AW)-1];
	initial $readmemh(FW_FILE, rom);
	always @(posedge CLK) begin
		ird_r <= rom[ia[ROM_AW+1:2]];
		rom_d <= rom[da[ROM_AW+1:2]];
		iack  <= ic && !iack;
	end

	(* ramstyle = "MLAB, no_rw_check" *) reg [7:0] ram0 [0:(1<<RAM_AW)-1];
	(* ramstyle = "MLAB, no_rw_check" *) reg [7:0] ram1 [0:(1<<RAM_AW)-1];
	(* ramstyle = "MLAB, no_rw_check" *) reg [7:0] ram2 [0:(1<<RAM_AW)-1];
	(* ramstyle = "MLAB, no_rw_check" *) reg [7:0] ram3 [0:(1<<RAM_AW)-1];
	wire        sel_ram = da[31:30] == 2'b10;
	wire        sel_mm  = da[31:30] == 2'b01;
	wire        sel_rom = da[31:30] == 2'b00;
	wire        dgo     = dc && !dack;
	wire [RAM_AW-1:0] ra = da[RAM_AW+1:2];
	wire [ 7:0] mi      = da[9:2];        // MMIO word index
	always @(posedge CLK) if (dgo && dwe && sel_ram) begin
		if (dsel[0]) ram0[ra] <= dd[ 7: 0];
		if (dsel[1]) ram1[ra] <= dd[15: 8];
		if (dsel[2]) ram2[ra] <= dd[23:16];
		if (dsel[3]) ram3[ra] <= dd[31:24];
	end

	reg [31:0] mm_q;
	always @* begin
		case (mi[5:0])
			6'h00: mm_q = {26'd0, ev_tmr, ev_i0, ev_rtc, ev_vbout, ev_vbin, ev_cmd};
			6'h01: mm_q = {8'd0, TICKS};
			6'h02: mm_q = {24'd0, COMREG};
			6'h03: mm_q = {21'd0, RESD, IOSEL, TIME_SET, 1'b0, IRQV_N, SRES_N, AC};
			6'h04: mm_q = {17'd0, PDR2I, 1'b0, PDR1I};
			6'h05: mm_q = {23'd0, PINS};
			6'h0C: mm_q = {16'd0, TS};
			6'h08: mm_q = EXT_RTC[31:0];
			6'h09: mm_q = EXT_RTC[63:32];
			6'h10, 6'h11, 6'h12, 6'h13, 6'h14, 6'h15, 6'h16: mm_q = {24'd0, ireg_m[mi[2:0]]};
			default: mm_q = 32'd0;
		endcase
	end

	assign drd = sel_ram ? {ram3[ra], ram2[ra], ram1[ra], ram0[ra]} : sel_mm ? mm_q : rom_d;

	// ---------------------------------------------------------------- state
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			COMREG <= 8'd0; SR <= 8'd0; IO_BUF <= 8'd0; REG_DO <= 8'd0; SF <= 1'b0;
			PDR_O[0] <= 8'hFF; PDR_O[1] <= 8'hFF; DDR[0] <= 7'd0; DDR[1] <= 7'd0; IOSEL <= 2'd0; EXLE <= 2'd0;
			DL <= 24'd0; dl_arm <= 1'b0; RESD <= 1'b1; i0_en <= 1'b0; TS <= 16'd0; PINS <= 9'h100; TICKS <= 24'd0;
			RW_N_OLD <= 1'b1; CS_N_OLD <= 1'b1; IRQV_N_OLD <= 1'b1; RTC64_OLD <= 1'b0;
			ev_cmd <= 1'b0; ev_vbin <= 1'b0; ev_vbout <= 1'b0; ev_rtc <= 1'b0; ev_i0 <= 1'b0; ev_tmr <= 1'b0;
			dack <= 1'b0;
		end else begin
			dack <= dgo;
			if (CE) TICKS <= TICKS + 24'd1;
			RW_N_OLD <= RW_N; CS_N_OLD <= CS_N;
			IRQV_N_OLD <= IRQV_N; RTC64_OLD <= EXT_RTC[64];
			if (EXT_RTC[64] != RTC64_OLD) ev_rtc <= 1'b1;
			if (!MRES_N) begin
				// pins as released by the reset of SMPC_HLE
				PINS <= 9'h15B; SR <= 8'd0; RESD <= 1'b1; ev_cmd <= 1'b0; ev_vbin <= 1'b0; ev_vbout <= 1'b0; ev_i0 <= 1'b0;
			end else begin
				if (!IRQV_N && IRQV_N_OLD) ev_vbin <= 1'b1;
				if (IRQV_N && !IRQV_N_OLD) ev_vbout <= 1'b1;
				if (dl_arm && !dl_diff[23]) begin ev_tmr <= 1'b1; dl_arm <= 1'b0;
`ifdef SMPC_TRACE
					if (!ev_tmr) $display("TRACE tmr ticks=%0d", TICKS);
`endif
				end
			end
			if (bus_wr) begin
				IO_BUF <= DI;
				case (ba)
					7'h01: ev_i0 <= i0_en;
					7'h1F: begin
`ifdef SMPC_TRACE
						$display("TRACE comreg ticks=%0d ev=%b", TICKS, {ev_tmr, ev_i0, ev_rtc, ev_vbout, ev_vbin, ev_cmd});
`endif
						COMREG <= DI; ev_cmd <= 1'b1; TS <= TICKS[15:0];
						if (DI == 8'h19) RESD <= 1'b0; else if (DI == 8'h1A) RESD <= 1'b1; end
					7'h63: SF <= 1'b1;
					7'h75: if (IOSEL[0]) PDR_O[0] <= DI;
					7'h77: if (IOSEL[1]) PDR_O[1] <= DI;
					7'h79: DDR[0] <= DI[6:0];
					7'h7B: DDR[1] <= DI[6:0];
					7'h7D: IOSEL <= DI[1:0];
					7'h7F: EXLE <= DI[1:0];
					default: ;
				endcase
			end
			if (bus_rd) begin
				if (ba >= 7'h21 && ba <= 7'h5F) REG_DO <= oreg_q;
				else case (ba)
					7'h61: REG_DO <= SR;
					7'h63: REG_DO <= {IO_BUF[7:1], SF};
					7'h75: REG_DO <= {IO_BUF[7], PDR1I};
					7'h77: REG_DO <= {IO_BUF[7], PDR2I};
					default: REG_DO <= IO_BUF;
				endcase
			end
			if (dgo && dwe && sel_mm && MRES_N) begin
				case (mi[5:0])
					6'h00: begin
						if (dd[0]) ev_cmd <= 1'b0;
						if (dd[1]) ev_vbin <= 1'b0;
						if (dd[2]) ev_vbout <= 1'b0;
						if (dd[3]) ev_rtc <= 1'b0;
						if (dd[4]) ev_i0 <= 1'b0;
						if (dd[5]) ev_tmr <= 1'b0;
					end
					6'h04: begin
						DDR[dd[0]][6:5] <= dd[2:1];
						PDR_O[dd[0]][6:5] <= dd[4:3];
					end
					6'h05: begin PINS <= PINS | dd[8:0];
`ifdef SMPC_TRACE
						$display("TRACE pins ticks=%0d ev=%b", TICKS, {ev_tmr, ev_i0, ev_rtc, ev_vbout, ev_vbin, ev_cmd});
`endif
					end
					6'h0B: PINS <= PINS & ~dd[8:0];
					6'h06: SR <= dd[7:0];
					6'h07: begin SF <= dd[0]; i0_en <= dd[1]; end
					6'h08: begin
`ifdef SMPC_TRACE
						$display("TRACE arm ticks=%0d dl=%0d", TICKS, dd[23:0]);
`endif
						DL <= dd[23:0]; dl_arm <= dd[24]; ev_tmr <= 1'b0; end
					default: ;
				endcase
			end
		end
	end

	always @(posedge CLK) begin
		if (bus_wr && ba == 7'h1F && DI[7:5] == 3'd0) oreg_m[31] <= DI;     // command echo
		else if (dgo && dwe && sel_mm && mi[5]) oreg_m[mi[4:0]] <= dd[7:0];
		if (bus_wr && ba[0] && ba[6:4] == 3'd0 && ba[3:1] != 3'd7) ireg_m[ba[3:1]] <= DI;
	end

	assign DO = REG_DO;
	assign {MIRQ_N, DOTSEL, CDRES_N, SNDRES_N, SYSRES_N, SSHNMI_N, SSHRES_N, MSHNMI_N, MSHRES_N} = PINS;
	assign PDR1O = PDR_O[0][6:0];
	assign PDR2O = PDR_O[1][6:0];
	assign DDR1 = DDR[0];
	assign DDR2 = DDR[1];
	assign EXL_N = (~EXLE[0] | PDR1I[6]) & (~EXLE[1] | PDR2I[6]);
endmodule
