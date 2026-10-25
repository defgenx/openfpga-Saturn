// Register-update coding styles: how Quartus maps write-enable + synchronous clear + async reset.
module mb_v0 (input CLK, RST_N, CE_R, CLR, WR, input [3:0] A, input [31:0] DI, output reg [6:0] t, output reg [4:0] o);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin t <= 0; o <= 0; end
		else if (CE_R) begin
			if (CLR) begin t <= 0; o <= 0; end
			else if (WR) case (A)
				4'h0: t <= DI[31:25];
				4'h7: o <= DI[4:0];
				default:;
			endcase
		end
	end
endmodule
module mb_v1 (input CLK, RST_N, CE_R, CLR, WR, input [3:0] A, input [31:0] DI, output reg [6:0] t, output reg [4:0] o);
	wire clr = CE_R & CLR;
	wire wt = CE_R & WR & (A == 4'h0), wo = CE_R & WR & (A == 4'h7);
	always @(posedge CLK or negedge RST_N) if (!RST_N) t <= 0; else if (clr) t <= 0; else if (wt) t <= DI[31:25];
	always @(posedge CLK or negedge RST_N) if (!RST_N) o <= 0; else if (clr) o <= 0; else if (wo) o <= DI[4:0];
endmodule
module mb_v2 (input CLK, RST_N, CE_R, CLR, WR, input [3:0] A, input [31:0] DI, output reg [6:0] t, output reg [4:0] o);
	wire wt = CE_R & WR & (A == 4'h0), wo = CE_R & WR & (A == 4'h7);
	always @(posedge CLK or negedge RST_N) if (!RST_N) t <= 0; else if (wt | (CE_R & CLR)) t <= CLR ? 7'h00 : DI[31:25];
	always @(posedge CLK or negedge RST_N) if (!RST_N) o <= 0; else if (wo | (CE_R & CLR)) o <= CLR ? 5'h00 : DI[4:0];
endmodule
// clear priority below the write (as FRC/OCR: CLR dominates, written here as CLR first inside an enable block)
module mb_v3 (input CLK, RST_N, CE_R, CLR, WR, input [3:0] A, input [31:0] DI, output reg [6:0] t, output reg [4:0] o);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) t <= 0;
		else if (CE_R) begin
			if (CLR) t <= 0;
			else if (WR && A == 4'h0) t <= DI[31:25];
		end
	end
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) o <= 0;
		else if (CE_R) begin
			if (CLR) o <= 0;
			else if (WR && A == 4'h7) o <= DI[4:0];
		end
	end
endmodule
// reset to ones: data OR clear / inverted storage
module mb_o0 (input CLK, RST_N, CE_R, CLR, WR, input [15:0] D, output reg [15:0] a, b);
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin a <= 16'hFFFF; b <= 16'hFFFF; end
		else if (CE_R) begin
			if (CLR) begin a <= 16'hFFFF; b <= 16'hFFFF; end
			else if (WR) begin a <= D; end
		end
	end
endmodule
module mb_o1 (input CLK, RST_N, CE_R, CLR, WR, input [15:0] D, output [15:0] a, b);
	reg [15:0] an, bn;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin an <= 0; bn <= 0; end
		else if (CE_R) begin
			if (CLR) begin an <= 0; bn <= 0; end
			else if (WR) begin an <= ~D; end
		end
	end
	assign a = ~an; assign b = ~bn;
endmodule
module probe_regs (input CLK, RST_N, CE_R, CLR, WR, input [3:0] A, input [31:0] DI,
	output [6:0] t0, t1, t2, t3, output [4:0] o0, o1, o2, o3, output [15:0] a0, b0, a1, b1);
	mb_v0 u0 (.t(t0), .o(o0), .*);
	mb_v1 u1 (.t(t1), .o(o1), .*);
	mb_v2 u2 (.t(t2), .o(o2), .*);
	mb_v3 u3 (.t(t3), .o(o3), .*);
	mb_o0 w0 (.a(a0), .b(b0), .D(DI[15:0]), .*);
	mb_o1 w1 (.a(a1), .b(b1), .D(DI[15:0]), .*);
endmodule
