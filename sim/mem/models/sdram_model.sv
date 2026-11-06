// Behavioural AS4C32M16MSA-6BIN (512 Mbit, 4 banks, 13 row / 10 column) with datasheet timing checks.
// Simulation only. Memory is the used part of each bank: rows 0-511, 1024 columns, index {bank, row[8:0], col}.
// Timing: AS4C32M16MSA-6BIN datasheet rev 1.0 (Dec 2017), AC characteristics -6 (docs/memory.md section 3).
// CAS latency: a READ registered at edge n has its first word valid (tAC after edge n + CL - 1) by edge n + CL.
// Datasheet behaviour that the checks and the data path follow:
//  - DQM registered at edge d masks the read word sampled at edge d + 2 (tDQZ 2) and the write data at d (tDQM 0).
//  - A WRITE registered at edge w interrupts every read burst still in flight: words sampled after w are not
//    driven (the model drives POISON in their place, or X with +SD_POISON_X) and counted in n_trunc. A word due at
//    w itself is already on the bus: DQM must have been high at w - 2, or it is an error (bus contention).
//  - A READ interrupts an earlier burst CL later (the new word replaces the old one); a PRECHARGE at p leaves
//    CL - 1 words of the burst of its bank (samples up to p + 2).
//  - Auto precharge of a READ starts at READ + BL clocks, of a WRITE tWR after it; a READ or WRITE to another bank
//    before that starts it at that command (concurrent auto precharge; for a WRITE burst, tWR counts from it).
//    There is no tRAS lockout: ACTIVE to precharge start below tRAS is an error.
//  - tRP below SD_TRP_PS (default: tRP) is an error; between SD_TRP_PS and tRP it is counted in n_trp_short.

`timescale 1ps/1ps

module sdram_model #(
	parameter integer T_RCD = 18000,
	parameter integer T_RP  = 18000,
	parameter integer T_RAS = 48000,
	parameter integer T_RC  = 60000,
	parameter integer T_RRD = 12000,
	parameter integer T_RFC = 80000,
	parameter integer T_WR  = 15000,
	parameter integer T_MRD = 2,        // clocks
	parameter integer T_AC  = 5500,     // clock edge to valid data
	parameter integer T_OH  = 2500,     // data hold after the next edge
	parameter integer T_LZ  = 1000,
	parameter integer T_HZ  = 6000,
	parameter integer T_IS  = 2000,     // tCMS / tCAS
	parameter integer T_IH  = 1000,
	parameter [15:0]  POISON = 16'hBAD5
) (
	input  wire [63:0] t_ref,                    // retention limit, ps
	input  wire        clk,
	input  wire        cke,
	input  wire        ras_n,
	input  wire        cas_n,
	input  wire        we_n,
	input  wire  [1:0] ba,
	input  wire [12:0] a,
	input  wire  [1:0] dqm,
	inout  wire [15:0] dq,
	output reg  [31:0] errors,
	output reg         dq_drive,
	output reg  [31:0] n_act, n_rd, n_wr
);

localparam [2:0] NOP = 3'b111, ACT = 3'b011, RD = 3'b101, WR = 3'b100, PRE = 3'b010, REF = 3'b001, MRS = 3'b000;

reg [15:0] mem [0:(4<<19)-1];       // {bank, row[8:0], col[9:0]}
// +MEMRAND: power-up contents are random, as on the Pocket's chips (the sim otherwise starts them at 0)
initial if ($test$plusargs("MEMRAND")) for (int mi = 0; mi < (4<<19); mi++) mem[mi] = 16'($urandom);

// rows whose retention is checked: VDP2 rows 0-63 of every bank and the sound RAM rows
// (bank 3 rows 256-511; +SD_OLDMAP: banks 2/3 rows 128-255, the map of v0.2.4)
reg oldmap = 0;
initial if ($test$plusargs("SD_OLDMAP")) oldmap = 1;
function automatic integer row_valid(input integer bk, input integer rw);
	row_valid = (rw < 64) || (oldmap ? (bk >= 2 && rw >= 128 && rw < 256) : (bk == 3 && rw >= 256 && rw < 512));
endfunction

// ---- counters reported by the benches
reg [31:0] n_trunc = 0, n_rint = 0, n_trp_short = 0, n_pre = 0;
integer    trp_ok = T_RP;
reg        poison_x = 0;
integer    trunc_log = 0;
initial begin
	void'($value$plusargs("SD_TRP_PS=%d", trp_ok));
	if ($test$plusargs("SD_POISON_X")) poison_x = 1;
end

// ---- bank state
reg        bank_act   [0:3];
reg [12:0] bank_row   [0:3];
longint    bank_t_act [0:3];        // time of the last ACT
longint    bank_t_rdy [0:3];        // earliest next ACT (precharge start + tRP)
reg        ap_pend    [0:3];        // auto precharge scheduled, start time ap_t
longint    ap_t       [0:3];
reg        ap_wr      [0:3];        // the burst with auto precharge is a WRITE (tWR counts from an interrupt)
longint    burst_end  [0:3];        // a READ/WRITE to another bank before this time interrupts the burst
longint    last_act_any;
longint    last_ref_end;
longint    mrs_t;
longint    row_t [0:4*512-1];       // last restore time per {bank,row}

reg dbg = 0;
initial if ($test$plusargs("DBG")) dbg = 1;
integer cl = 0, bl = 0;
reg     wburst_single = 0;
reg     mrs_done = 0, emrs_done = 0, init_ok = 0;
integer n_ref_init = 0;
reg     pre_all_seen = 0;

reg [15:0] dq_out;
reg        dq_en;
assign dq = dq_en ? dq_out : 16'hzzzz;

// read data slots, indexed by the edge that starts driving the word (the word is sampled at the next edge)
integer    edge_n = 0;
reg        sl_v   [0:15];
reg        sl_c   [0:15];           // cancelled (interrupted by a WRITE or a PRECHARGE)
reg  [1:0] sl_b   [0:15];
reg [15:0] sl_d   [0:15];
reg  [1:0] dqm_h  [0:15];
reg        drove_prev = 0;          // a word was driven from the previous edge
reg        drv_now = 0;             // a word is on the bus for the sample at the current edge
integer    ei;
longint    tck = 8730, t_prev_edge = 0;

// ---- command stability
longint t_clk_rise = 0;
longint t_cmd_ch   = 0;
always @(ras_n or cas_n or we_n or ba or a or dqm) begin
	t_cmd_ch = $time;
	if ($time - t_clk_rise < T_IH && t_clk_rise != 0 && cke) begin
		errors = errors + 1; $display("%0t SDRAM: command hold violation (%0d ps)", $time, $time - t_clk_rise);
	end
end

integer b, r, k;
initial begin
	errors = 0; dq_en = 0; dq_out = 16'hxxxx; dq_drive = 0;
	n_act = 0; n_rd = 0; n_wr = 0;
	for (b = 0; b < 4; b = b + 1) begin
		bank_act[b] = 0; bank_t_rdy[b] = 0; bank_t_act[b] = -1000000000; ap_pend[b] = 0; ap_t[b] = 0; ap_wr[b] = 0;
		burst_end[b] = 0;
	end
	for (r = 0; r < 4*512; r = r + 1) row_t[r] = 0;
	for (k = 0; k < 16; k = k + 1) begin sl_v[k] = 0; sl_c[k] = 0; dqm_h[k] = 0; end
	last_act_any = -1000000000;
	last_ref_end = 0;
	mrs_t = -1000000000;
end

task automatic err(input [639:0] msg);
	begin
		errors = errors + 1;
		if (errors < 200) $display("%0t SDRAM ERROR: %0s", $time, msg);
	end
endtask

task automatic check_ret(input integer bk, input integer rw);
	begin
		if (row_valid(bk, rw) && ($time - row_t[bk*512 + rw]) > t_ref) begin
			errors = errors + 1;
			$display("%0t SDRAM ERROR: retention bank %0d row %0d not restored for %0d ps", $time, bk, rw, $time - row_t[bk*512+rw]);
		end
	end
endtask

// precharge of bank bk starts at t_pre: tRAS is checked here, tRP at the next ACT
task automatic start_pre(input integer bk, input longint t_pre);
	begin
		if (t_pre - bank_t_act[bk] < T_RAS) begin
			err("precharge before tRAS");
			if (errors < 200) $display("   bank %0d ACT to precharge %0d ps", bk, t_pre - bank_t_act[bk]);
		end
		bank_act[bk] = 0;
		ap_pend[bk] = 0;
		bank_t_rdy[bk] = t_pre + T_RP;
	end
endtask

// a READ or WRITE registered now to bank bk interrupts the bursts of the other banks
task automatic interrupt_others(input integer bk, input longint tnow);
	integer o;
	begin
		for (o = 0; o < 4; o = o + 1)
			if (o != bk && ap_pend[o] && tnow < burst_end[o]) begin
				// concurrent auto precharge: a READ burst precharges at the interrupt, a WRITE burst tWR after it
				ap_t[o] = ap_wr[o] ? tnow + T_WR : tnow;
				burst_end[o] = tnow;
			end
	end
endtask

// cancel the read words of bank bk (or of every bank when bk < 0) sampled at edge `from` or later
task automatic cancel_words(input integer bk, input integer from, input integer reason);
	integer e;
	begin
		for (e = from - 1; e < from + 7; e = e + 1)
			if (sl_v[e % 16] && !sl_c[e % 16] && (bk < 0 || sl_b[e % 16] == bk)) begin
				sl_c[e % 16] = 1;
				if (reason == 0) begin
					n_trunc = n_trunc + 1;
					if (trunc_log < 20) begin
						trunc_log = trunc_log + 1;
						$display("%0t SDRAM: read word of bank %0d (sample edge +%0d) cut by a WRITE", $time, sl_b[e % 16], e + 1 - edge_n);
					end
				end
			end
	end
endtask

reg [2:0] cmd;
integer   bk, rw, wslot;
longint   tnow;

always @(posedge clk) begin
	t_clk_rise = $time;
	tnow = $time;
	if (t_prev_edge != 0) tck = tnow - t_prev_edge;
	t_prev_edge = tnow;
	edge_n = edge_n + 1;
	ei = edge_n % 16;
	dqm_h[ei] = dqm;
	// auto precharges whose start time has passed
	for (k = 0; k < 4; k = k + 1) if (ap_pend[k] && tnow >= ap_t[k]) start_pre(k, ap_t[k]);
	if (cke) begin
		if (($time - t_cmd_ch) < T_IS && t_cmd_ch != 0) begin
			errors = errors + 1;
			$display("%0t SDRAM ERROR: command setup violation (%0d ps)", $time, $time - t_cmd_ch);
		end
		cmd = {ras_n, cas_n, we_n};
		bk = ba;
		if (dbg && cmd != NOP) $display("%0t CMD %b ba=%0d a=%h dqm=%b", $time, cmd, ba, a, dqm);
		if (cmd != NOP && cmd != MRS && cmd != REF && (tnow - mrs_t) < T_MRD * tck) err("command before tMRD");
		case (cmd)
		ACT: begin
			n_act = n_act + 1;
			if (!init_ok) begin
				if (!pre_all_seen || n_ref_init < 2 || !mrs_done || !emrs_done) err("ACT before the init sequence (PRECHARGE ALL, 2 REFRESH, MRS, EMRS)");
				init_ok = 1;
			end
			if (ap_pend[bk]) start_pre(bk, ap_t[bk]);
			if (bank_act[bk]) err("ACT to an active bank");
			if (tnow < bank_t_rdy[bk]) begin
				if (tnow >= bank_t_rdy[bk] - T_RP + trp_ok) n_trp_short = n_trp_short + 1;
				else begin err("ACT before tRP"); if (errors < 200) $display("   bank %0d precharge to ACT %0d ps", bk, tnow - (bank_t_rdy[bk] - T_RP)); end
			end
			if (tnow - bank_t_act[bk] < T_RC) begin err("ACT before tRC"); $display("   bank %0d dt %0d", bk, tnow - bank_t_act[bk]); end
			if (tnow - last_act_any < T_RRD) begin err("ACT before tRRD"); $display("   dt %0d", tnow - last_act_any); end
			if (tnow < last_ref_end) err("ACT during tRFC");
			if (a >= 13'd512) err("row out of modelled range");
			check_ret(bk, a[8:0]);
			row_t[bk*512 + a[8:0]] = tnow;
			bank_act[bk] = 1; bank_row[bk] = a; bank_t_act[bk] = tnow; last_act_any = tnow;
		end
		RD: begin
			n_rd = n_rd + 1;
			if (!bank_act[bk] || ap_pend[bk]) err("READ to a closed bank");
			else begin
				if (tnow - bank_t_act[bk] < T_RCD) begin err("READ before tRCD"); $display("   dt %0d", tnow - bank_t_act[bk]); end
				if (cl == 0) err("READ before mode register");
				interrupt_others(bk, tnow);
				for (k = 0; k < bl; k = k + 1) begin
					wslot = (edge_n + cl - 1 + k) % 16;   // word k is driven tAC after edge n + CL - 1 + k
					if (sl_v[wslot]) n_rint = n_rint + 1;   // a READ interrupts the earlier burst
					sl_v[wslot] = 1; sl_c[wslot] = 0; sl_b[wslot] = bk;
					// sequential burst, wrap inside the aligned block
					sl_d[wslot] = mem[{bk[1:0], bank_row[bk][8:0], a[9:1], a[0] ^ k[0]}];
				end
				burst_end[bk] = tnow + bl * tck;
				if (a[10]) begin
					ap_pend[bk] = 1; ap_wr[bk] = 0; ap_t[bk] = tnow + bl * tck;   // precharge starts at READ + BL
				end
			end
		end
		WR: begin
			n_wr = n_wr + 1;
			if (!bank_act[bk] || ap_pend[bk]) err("WRITE to a closed bank");
			else begin
				if (tnow - bank_t_act[bk] < T_RCD) begin err("WRITE before tRCD"); $display("   dt %0d", tnow - bank_t_act[bk]); end
				if (drv_now) err("WRITE while a read word is driven: DQM was not high 2 clocks before the WRITE");
				interrupt_others(bk, tnow);
				cancel_words(-1, edge_n + 1, 0);
				if (^(dq | {{8{dqm[1]}}, {8{dqm[0]}}}) === 1'bx) err("WRITE data is X");
				if (!dqm[0]) mem[{bk[1:0], bank_row[bk][8:0], a[9:0]}][7:0]  = dq[7:0];
				if (!dqm[1]) mem[{bk[1:0], bank_row[bk][8:0], a[9:0]}][15:8] = dq[15:8];
				burst_end[bk] = tnow + tck;
				if (a[10]) begin ap_pend[bk] = 1; ap_wr[bk] = 1; ap_t[bk] = tnow + T_WR; end
				// drop the bus at once: the WRITE puts the DQs in high impedance
				dq_en = 0; dq_drive = 0; drove_prev = 0;
			end
		end
		PRE: begin
			n_pre = n_pre + 1;
			for (k = 0; k < 4; k = k + 1)
				if ((a[10] || k == bk) && (bank_act[k] || ap_pend[k])) begin
					if (ap_pend[k]) err("PRECHARGE to a bank with auto precharge pending");
					if (tnow < burst_end[k] && ap_wr[k]) err("PRECHARGE inside tWR");
					cancel_words(k, edge_n + cl, 1);   // CL - 1 words of the burst survive
					start_pre(k, tnow);
				end else if (a[10] || k == bk) begin
					bank_t_rdy[k] = (tnow + T_RP > bank_t_rdy[k]) ? tnow + T_RP : bank_t_rdy[k];
				end
			if (a[10]) pre_all_seen = 1;
		end
		REF: begin
			for (k = 0; k < 4; k = k + 1) if (bank_act[k] || ap_pend[k]) err("REFRESH with an active bank");
			for (k = 0; k < 4; k = k + 1) if (tnow < bank_t_rdy[k]) err("REFRESH before tRP");
			if (tnow < last_ref_end) err("REFRESH during tRFC");
			last_ref_end = tnow + T_RFC;
			n_ref_init = n_ref_init + 1;
		end
		MRS: begin
			for (k = 0; k < 4; k = k + 1) if (bank_act[k] || ap_pend[k] || tnow < bank_t_rdy[k]) err("MRS with a bank not idle");
			if (tnow < last_ref_end) err("MRS during tRFC");
			mrs_t = tnow;
			if (ba == 2'b00) begin
				cl = a[6:4];
				bl = (a[2:0] == 3'd0) ? 1 : (a[2:0] == 3'd1) ? 2 : (a[2:0] == 3'd2) ? 4 : 8;
				wburst_single = a[9];
				mrs_done = 1;
				if (cl != 3 || bl != 2 || !wburst_single || a[12:10] != 0 || a[8:7] != 0) err("unexpected mode register");
			end else if (ba == 2'b10) begin
				emrs_done = 1;
				if (a[12:8] != 0 || a[4:3] != 0) err("extended mode register: reserved bits set");
			end else err("MRS to a reserved register");
		end
		default: ;
		endcase
	end

	// ---- read data drive (the word sampled at the next edge)
	ei = edge_n % 16;
	drv_now = 0;
	if (sl_v[ei]) begin
		sl_v[ei] = 0;
		if (sl_c[ei]) begin
			// interrupted word: the SDRAM does not drive it; the bus carries something undefined
			dq_drive = 1; dq_en = 1;
			dq_out <= #(T_AC) poison_x ? 16'hxxxx : POISON;
			dq_out <= #(tck + T_OH) 16'hxxxx;
			drove_prev = 1;
			drv_now = 1;
		end else if (&dqm_h[(edge_n + 15) % 16]) begin
			// both lanes masked by DQM two edges before the sample: high impedance
			if (drove_prev) begin dq_en <= #(T_HZ) 1'b0; dq_drive <= #(T_HZ) 1'b0; end
			drove_prev = 0;
		end else begin
			dq_drive = 1;
			dq_en = 1;
			// tLZ: the bus is driven (undefined) from T_LZ after the edge; inside a burst the previous word stays valid
			// until T_OH after this edge (below), so only the first word of a burst starts with the undefined phase
			if (!drove_prev) dq_out <= #(T_LZ) 16'hxxxx;
			dq_out <= #(T_AC) {dqm_h[(edge_n + 15) % 16][1] ? 8'hzz : sl_d[ei][15:8], dqm_h[(edge_n + 15) % 16][0] ? 8'hzz : sl_d[ei][7:0]};
			drove_prev = 1;
			drv_now = 1;
			// the data of this word is held until T_OH after the next edge
			dq_out <= #(tck + T_OH) 16'hxxxx;
		end
	end else if (drove_prev) begin
		drove_prev = 0;
		dq_en <= #(T_HZ) 1'b0;
		dq_drive <= #(T_HZ) 1'b0;
	end
end

// retention scan: any row not restored for T_REF
integer sb, sr;
task automatic final_check;
	begin
		for (sb = 0; sb < 4; sb = sb + 1)
			for (sr = 0; sr < 512; sr = sr + 1)
				if (row_valid(sb, sr) && ($time - row_t[sb*512 + sr]) > t_ref) begin
					errors = errors + 1;
					$display("%0t SDRAM ERROR: retention bank %0d row %0d (final scan, age %0d ps)", $time, sb, sr, $time - row_t[sb*512+sr]);
				end
	end
endtask

endmodule
