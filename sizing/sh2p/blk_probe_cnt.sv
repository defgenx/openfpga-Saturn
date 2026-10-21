// Counter-with-load coding styles (16-bit FRC-like and 8-bit WTCNT-like).
module mc_f0 (input CLK, RST_N, CE_R, CLR, LD, INC, input [15:0] D, output reg [15:0] q);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) q <= 0;
		else if (CE_R) begin
			if (INC) q <= q + 16'd1;
			if (CLR) q <= 0;
			else if (LD) q <= D;
		end
	end
endmodule
module mc_f1 (input CLK, RST_N, CE_R, CLR, LD, INC, input [15:0] D, output reg [15:0] q);
	wire [15:0] base = LD ? D : q;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) q <= 0;
		else if (CE_R) q <= CLR ? 16'h0000 : base + {15'd0, INC & ~LD};
	end
endmodule
module mc_f2 (input CLK, RST_N, CE_R, CLR, LD, INC, input [15:0] D, output reg [15:0] q);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) q <= 0;
		else if (CE_R & CLR) q <= 0;
		else if (CE_R & LD) q <= D;
		else if (CE_R & INC) q <= q + 16'd1;
	end
endmodule
module mc_f3 (input CLK, RST_N, CE_R, CLR, LD, INC, input [15:0] D, output reg [15:0] q);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) q <= 0;
		else if (CE_R & (CLR | LD | INC)) q <= CLR ? 16'h0000 : LD ? D : q + 16'd1;
	end
endmodule
module probe_cnt (input CLK, RST_N, CE_R, CLR, LD, INC, input [15:0] D, output [15:0] q0, q1, q2, q3);
	mc_f0 u0 (.q(q0), .*);
	mc_f1 u1 (.q(q1), .*);
	mc_f2 u2 (.q(q2), .*);
	mc_f3 u3 (.q(q3), .*);
endmodule
