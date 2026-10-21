// CD block DRAM port driver: three clients (sector sink, transfer engine, CPU window) onto the
// CD_RAM_* port (ddram_pocket cdram: edge-triggered rd/wr, busy goes high two clocks after the edge).
// Client 0 has priority. Each client holds its request until `done[i]` pulses.
module cdb_dram (
	input  wire        clk,
	input  wire        rst_n,

	input  wire [2:0]  rq,
	input  wire [2:0]  rq_we,
	input  wire [17:0] rq_a0, rq_a1, rq_a2,
	input  wire [15:0] rq_d0, rq_d1, rq_d2,
	output reg  [2:0]  done = 3'd0,
	output reg  [15:0] q = 16'd0,

	output wire [18:1] RAM_A,          // the granted client's request (it holds it until done)
	output wire [15:0] RAM_D,
	output reg  [1:0]  RAM_WE = 2'd0,
	output reg         RAM_RD = 1'b0,
	output reg         RAM_CS = 1'b0,
	input  wire [15:0] RAM_Q,
	input  wire        RAM_RDY
);

reg [2:0] st = 3'd0;
reg [1:0] who = 2'd0;
reg       we_r = 1'b0;
assign RAM_A = who[1] ? rq_a2 : who[0] ? rq_a1 : rq_a0;
assign RAM_D = who[1] ? rq_d2 : who[0] ? rq_d1 : rq_d0;

always @(posedge clk) begin
	done <= 3'd0;
	if (!rst_n) begin
		st <= 3'd0; RAM_CS <= 1'b0; RAM_RD <= 1'b0; RAM_WE <= 2'd0;
	end else case (st)
	3'd0: begin
		if (rq[0]) begin who <= 2'd0; we_r <= rq_we[0]; RAM_WE <= {2{rq_we[0]}}; RAM_RD <= ~rq_we[0]; RAM_CS <= 1'b1; st <= 3'd1; end
		else if (rq[1]) begin who <= 2'd1; we_r <= rq_we[1]; RAM_WE <= {2{rq_we[1]}}; RAM_RD <= ~rq_we[1]; RAM_CS <= 1'b1; st <= 3'd1; end
		else if (rq[2]) begin who <= 2'd2; we_r <= rq_we[2]; RAM_WE <= {2{rq_we[2]}}; RAM_RD <= ~rq_we[2]; RAM_CS <= 1'b1; st <= 3'd1; end
	end
	3'd1: st <= 3'd2;            // busy rises two clocks after the edge
	3'd2: st <= 3'd3;
	3'd3: if (RAM_RDY) begin
		q <= RAM_Q;
		RAM_CS <= 1'b0; RAM_RD <= 1'b0; RAM_WE <= 2'd0;
		done[who] <= 1'b1;
		st <= 3'd4;
	end
	3'd4: st <= 3'd0;            // one idle clock so the next request is a new edge
	default: st <= 3'd0;
	endcase
end

endmodule
