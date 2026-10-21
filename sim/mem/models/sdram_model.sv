// Behavioural AS4C32M16MSA-6BIN (512 Mbit, 4 banks, 13 row / 10 column) with datasheet timing checks.
// Simulation only. Memory is the used part of each bank: rows 0-255, 1024 columns.
// Timing values are the -6 speed grade as used by the other Pocket cores (tRCD/tRP 18 ns, tRC 60 ns,
// tRAS 42 ns, tRRD 12 ns, tAC 5.5 ns at CL3); the datasheet was not re-read for this model.

`timescale 1ps/1ps

module sdram_model #(
	parameter integer T_RCD = 18000,
	parameter integer T_RP  = 18000,
	parameter integer T_RAS = 42000,
	parameter integer T_RC  = 60000,
	parameter integer T_RRD = 12000,
	parameter integer T_RFC = 72000,
	parameter integer T_AC  = 5500,     // clock edge to valid data
	parameter integer T_OH  = 2500,     // data hold after the next edge
	parameter integer T_LZ  = 1000,
	parameter integer T_HZ  = 5400,
	parameter integer T_IS  = 1500,
	parameter integer T_IH  = 1000,
	parameter integer CHECK_ROWS_A = 64,         // rows with data in banks 0/1
	parameter integer CHECK_ROWS_B = 192         // rows with data in banks 2/3
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

reg [15:0] mem [0:(4<<18)-1];       // {bank, row[7:0], col[9:0]}

// ---- state
reg        bank_act   [0:3];
reg [12:0] bank_row   [0:3];
longint    bank_t_act [0:3];        // time of last ACT
longint    bank_t_rdy [0:3];        // earliest next ACT (precharge complete)
longint    bank_t_pre [0:3];        // earliest precharge
longint    last_act_any;
longint    last_ref_end;
longint    row_t [0:4*256-1];       // last restore time per {bank,row}

reg dbg = 0;
initial if ($test$plusargs("DBG")) dbg = 1;
integer cl = 0, bl = 0;
reg     wburst_single = 0;
reg     mrs_done = 0;
integer n_ref_init = 0;
reg     pre_all_seen = 0;

reg [15:0] dq_out;
reg        dq_en;
assign dq = dq_en ? dq_out : 16'hzzzz;

// read data slots, indexed by edge number
integer    edge_n = 0;
reg        sl_v   [0:15];
reg [15:0] sl_d   [0:15];
reg  [1:0] dqm_h  [0:15];
reg        drove_prev = 0;
integer    ei;

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
	for (b = 0; b < 4; b = b + 1) begin bank_act[b] = 0; bank_t_rdy[b] = 0; bank_t_act[b] = -1000000000; bank_t_pre[b] = 0; end
	for (r = 0; r < 4*256; r = r + 1) row_t[r] = 0;
	for (k = 0; k < 16; k = k + 1) begin sl_v[k] = 0; dqm_h[k] = 0; end
	last_act_any = -1000000000;
	last_ref_end = 0;
end

task automatic err(input [255:0] msg);
	begin
		errors = errors + 1;
		$display("%0t SDRAM ERROR: %0s", $time, msg);
	end
endtask

function automatic integer row_valid(input integer bk, input integer rw);
	row_valid = (bk < 2) ? (rw < CHECK_ROWS_A) : (rw < CHECK_ROWS_B);
endfunction

task automatic check_ret(input integer bk, input integer rw);
	begin
		if (row_valid(bk, rw) && ($time - row_t[bk*256 + rw]) > t_ref) begin
			errors = errors + 1;
			$display("%0t SDRAM ERROR: retention bank %0d row %0d not restored for %0d ps", $time, bk, rw, $time - row_t[bk*256+rw]);
		end
	end
endtask

task automatic start_pre(input integer bk, input longint t_pre);
	begin
		bank_act[bk] = 0;
		bank_t_rdy[bk] = t_pre + T_RP;
	end
endtask

reg [2:0] cmd;
integer   bk, rw, cl_i;
longint   tnow;

always @(posedge clk) begin
	t_clk_rise = $time;
	tnow = $time;
	edge_n = edge_n + 1;
	ei = edge_n % 16;
	dqm_h[ei] = dqm;
	if (cke) begin
		if (($time - t_cmd_ch) < T_IS && t_cmd_ch != 0) begin
			errors = errors + 1;
			$display("%0t SDRAM ERROR: command setup violation (%0d ps)", $time, $time - t_cmd_ch);
		end
		cmd = {ras_n, cas_n, we_n};
		bk = ba;
		if (dbg && cmd != NOP) $display("%0t CMD %b ba=%0d a=%h dqm=%b", $time, cmd, ba, a, dqm);
		case (cmd)
		ACT: begin
			n_act = n_act + 1;
			if (!mrs_done) err("ACT before init");
			if (bank_act[bk]) err("ACT to an active bank");
			if (tnow < bank_t_rdy[bk]) err("ACT before tRP");
			if (tnow - bank_t_act[bk] < T_RC) begin err("ACT before tRC"); $display("   bank %0d dt %0d", bk, tnow - bank_t_act[bk]); end
			if (tnow - last_act_any < T_RRD) begin err("ACT before tRRD"); $display("   dt %0d", tnow - last_act_any); end
			if (tnow < last_ref_end) err("ACT during tRFC");
			if (a >= 13'd256) err("row out of modelled range");
			check_ret(bk, a[7:0]);
			row_t[bk*256 + a[7:0]] = tnow;
			bank_act[bk] = 1; bank_row[bk] = a; bank_t_act[bk] = tnow; last_act_any = tnow;
		end
		RD: begin
			n_rd = n_rd + 1;
			if (!bank_act[bk]) err("READ to a closed bank");
			else begin
				if (tnow - bank_t_act[bk] < T_RCD) begin err("READ before tRCD"); $display("   dt %0d", tnow - bank_t_act[bk]); end
				if (cl == 0) err("READ before mode register");
				for (k = 0; k < bl; k = k + 1) begin
					ei = (edge_n + cl + k) % 16;
					if (sl_v[ei]) err("read data collision");
					sl_v[ei] = 1;
					// sequential burst, wrap inside the aligned block
					sl_d[ei] = mem[{bk[1:0], bank_row[bk][7:0], a[9:1], a[0] ^ k[0]}];
				end
				if (a[10]) begin
					// auto precharge: later of tRAS and READ + BL
					start_pre(bk, (bank_t_act[bk] + T_RAS > tnow + bl * 8730) ? bank_t_act[bk] + T_RAS : tnow + bl * 8730);
				end
			end
		end
		WR: begin
			n_wr = n_wr + 1;
			if (!bank_act[bk]) err("WRITE to a closed bank");
			else begin
				if (tnow - bank_t_act[bk] < T_RCD) begin err("WRITE before tRCD"); $display("   dt %0d", tnow - bank_t_act[bk]); end
				if (^dq === 1'bx) err("WRITE data is X");
				if (dq_en) err("WRITE while the model drives DQ");
				if (!dqm[0]) mem[{bk[1:0], bank_row[bk][7:0], a[9:0]}][7:0]  = dq[7:0];
				if (!dqm[1]) mem[{bk[1:0], bank_row[bk][7:0], a[9:0]}][15:8] = dq[15:8];
				if (a[10]) start_pre(bk, (bank_t_act[bk] + T_RAS > tnow + 2*8730) ? bank_t_act[bk] + T_RAS : tnow + 2*8730);
			end
		end
		PRE: begin
			if (a[10]) for (k = 0; k < 4; k = k + 1) begin bank_act[k] = 0; bank_t_rdy[k] = tnow + T_RP; end
			else begin
				if (tnow - bank_t_act[bk] < T_RAS && bank_act[bk]) err("PRECHARGE before tRAS");
				bank_act[bk] = 0; bank_t_rdy[bk] = tnow + T_RP;
			end
			if (a[10]) pre_all_seen = 1;
		end
		REF: begin
			for (k = 0; k < 4; k = k + 1) if (bank_act[k]) err("REFRESH with an active bank");
			for (k = 0; k < 4; k = k + 1) if (tnow < bank_t_rdy[k]) err("REFRESH before tRP");
			if (tnow < last_ref_end) err("REFRESH during tRFC");
			last_ref_end = tnow + T_RFC;
			n_ref_init = n_ref_init + 1;
		end
		MRS: begin
			if (ba == 2'b00) begin
				cl = a[6:4];
				bl = (a[2:0] == 3'd0) ? 1 : (a[2:0] == 3'd1) ? 2 : (a[2:0] == 3'd2) ? 4 : 8;
				wburst_single = a[9];
				mrs_done = 1;
				if (!pre_all_seen) err("MRS before PRECHARGE ALL");
				if (n_ref_init < 2) err("MRS before two REFRESH");
				if (cl != 3 || bl != 2 || !wburst_single) err("unexpected mode register");
				last_ref_end = tnow + 2*8730;
			end
		end
		default: ;
		endcase
	end

	// ---- read data drive
	ei = edge_n % 16;
	if (sl_v[ei]) begin
		sl_v[ei] = 0;
		dq_drive = 1;
		dq_en = 1;
		dq_out <= #(T_LZ) 16'hxxxx;
		dq_out <= #(T_AC) {dqm_h[(edge_n + 14) % 16][1] ? 8'hzz : sl_d[ei][15:8], dqm_h[(edge_n + 14) % 16][0] ? 8'hzz : sl_d[ei][7:0]};
		drove_prev = 1;
		// the data of this word is held until T_OH after the next edge
		dq_out <= #(8730 + T_OH) 16'hxxxx;
	end else if (drove_prev) begin
		drove_prev = 0;
		dq_en <= #(T_HZ) 1'b0;
		dq_drive <= #(T_HZ) 1'b0;
	end
end

// retention scan: any row not restored for T_REF
longint scan_t;
integer sb, sr;
task automatic final_check;
	begin
		for (sb = 0; sb < 4; sb = sb + 1)
			for (sr = 0; sr < 256; sr = sr + 1)
				if (row_valid(sb, sr) && ($time - row_t[sb*256 + sr]) > t_ref) begin
					errors = errors + 1;
					$display("%0t SDRAM ERROR: retention bank %0d row %0d (final scan, age %0d ps)", $time, sb, sr, $time - row_t[sb*256+sr]);
				end
	end
endtask

endmodule
