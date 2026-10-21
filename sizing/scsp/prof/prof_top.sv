// Per-function area probes (inputs/outputs registered) for the SCSP package functions.
import SCSP_PKG::*;
module p_pan(input CLK, input [15:0] a, input [4:0] p, output reg [15:0] l, output reg [15:0] r);
	reg [15:0] ar; reg [4:0] pr;
	always @(posedge CLK) begin ar<=a; pr<=p; l<=PanLCalc(ar,pr); r<=PanRCalc(ar,pr); end
endmodule
module p_lvl(input CLK, input [15:0] a, input [2:0] p, output reg [15:0] l);
	reg [15:0] ar; reg [2:0] pr;
	always @(posedge CLK) begin ar<=a; pr<=p; l<=LevelCalc(ar,pr); end
endmodule
module p_mvol(input CLK, input [17:0] a, input [3:0] p, input d, output reg [15:0] l);
	reg [17:0] ar; reg [3:0] pr; reg dr;
	always @(posedge CLK) begin ar<=a; pr<=p; dr<=d; l<=MVolCalc(ar,pr,dr); end
endmodule
module p_vol(input CLK, input [15:0] a, input [9:0] p, output reg [15:0] l);
	reg [15:0] ar; reg [9:0] pr;
	always @(posedge CLK) begin ar<=a; pr<=p; l<=VolCalc(ar,pr); end
endmodule
module p_snd(input CLK, input [15:0] a, input [15:0] b, input [15:0] n, input [1:0] s, input [1:0] sb, input [5:0] ph, output reg [15:0] l);
	reg [15:0] ar,br,nr; reg [1:0] sr,sbr; reg [5:0] pr;
	always @(posedge CLK) begin ar<=a; br<=b; nr<=n; sr<=s; sbr<=sb; pr<=ph; l<=SoundSel(ar,br,nr,sr,sbr,pr); end
endmodule
module p_md(input CLK, input [15:0] a, input [15:0] b, input [3:0] m, output reg [21:0] l);
	reg [15:0] ar,br; reg [3:0] mr;
	always @(posedge CLK) begin ar<=a; br<=b; mr<=m; l<=MDCalc(ar,br,mr); end
endmodule
module p_phase(input CLK, input [15:0] s5, input [7:0] d, input [7:0] n, input [1:0] ws, input [2:0] os, output reg [22:0] l);
	reg [15:0] sr; reg [7:0] dr,nr; reg [1:0] wr; reg [2:0] or_;
	always @(posedge CLK) begin sr<=s5; dr<=d; nr<=n; wr<=ws; or_<=os; l<=PhaseCalc(sr, PLFOCalc(dr,nr,wr,or_)); end
endmodule
module p_alfo(input CLK, input [7:0] d, input [7:0] n, input [1:0] ws, input [2:0] os, output reg [7:0] l);
	reg [7:0] dr,nr; reg [1:0] wr; reg [2:0] or_;
	always @(posedge CLK) begin dr<=d; nr<=n; wr<=ws; or_<=os; l<=ALFOCalc(dr,nr,wr,or_); end
endmodule
module p_eff(input CLK, input [4:0] r, input [3:0] k, input [3:0] o, output reg [5:0] e, output reg [3:0] b);
	reg [4:0] rr; reg [3:0] kr,orr;
	always @(posedge CLK) begin rr<=r; kr<=k; orr<=o; e<=EffRateCalc(rr,kr,orr); b<=EffRateBit(rr); end
endmodule
module p_dspmul(input CLK, input [23:0] x, input [12:0] y, output reg [25:0] l);
	reg [23:0] xr; reg [12:0] yr;
	always @(posedge CLK) begin xr<=x; yr<=y; l<=DSPMult(xr,yr); end
endmodule
module p_dspsft(input CLK, input [25:0] a, input [1:0] s, output reg [23:0] l, output reg [15:0] f);
	reg [25:0] ar; reg [1:0] sr;
	always @(posedge CLK) begin ar<=a; sr<=s; l<=DSPShifter(ar,sr); f<=DSPItoF(DSPShifter(ar,sr)); end
endmodule
module p_ftoi(input CLK, input [15:0] a, output reg [23:0] l);
	reg [15:0] ar;
	always @(posedge CLK) begin ar<=a; l<=DSPFtoI(ar); end
endmodule
module p_dsplvl(input CLK, input [19:0] a, input [2:0] s, output reg [19:0] l);
	reg [19:0] ar; reg [2:0] sr;
	always @(posedge CLK) begin ar<=a; sr<=s; l<=DSPLevelCalc(ar,sr); end
endmodule
module p_lfodiv(input CLK, input [4:0] a, output reg [9:0] l);
	reg [4:0] ar;
	always @(posedge CLK) begin ar<=a; l<=LFOFreqDiv(ar); end
endmodule
module p_sub(input CLK, input [15:0] a, input [2:0] s, input [4:0] p, input [17:0] acc, output reg [17:0] o);
	// level + pan + accumulate, as in the direct-out path
	reg [15:0] ar; reg [2:0] sr; reg [4:0] pr;
	always @(posedge CLK) begin ar<=a; sr<=s; pr<=p; o<=acc + {{2{PanLCalc(LevelCalc(ar,sr),pr)}}}; end
endmodule
module prof_top(input CLK, input [255:0] i, output [255:0] o);
	wire [15:0] o0,o1,o2,o3,o4,o5,o6,o7,o8,o9,o10;
	p_pan u0(CLK,i[15:0],i[20:16],o0,o1);
	p_lvl u1(CLK,i[15:0],i[22:20],o2);
	p_mvol u2(CLK,i[17:0],i[21:18],i[22],o3);
	p_vol u3(CLK,i[15:0],i[25:16],o4);
	p_snd u4(CLK,i[15:0],i[31:16],i[47:32],i[49:48],i[51:50],i[57:52],o5);
	wire [21:0] md; p_md u5(CLK,i[15:0],i[31:16],i[35:32],md);
	wire [22:0] ph; p_phase u6(CLK,i[15:0],i[23:16],i[31:24],i[33:32],i[36:34],ph);
	wire [7:0] al; p_alfo u7(CLK,i[7:0],i[15:8],i[17:16],i[20:18],al);
	wire [5:0] ef; wire [3:0] eb; p_eff u8(CLK,i[4:0],i[8:5],i[12:9],ef,eb);
	wire [25:0] dm; p_dspmul u9(CLK,i[23:0],i[36:24],dm);
	wire [23:0] sf; wire [15:0] fl; p_dspsft u10(CLK,i[25:0],i[27:26],sf,fl);
	wire [23:0] fi; p_ftoi u11(CLK,i[15:0],fi);
	wire [19:0] dl; p_dsplvl u12(CLK,i[19:0],i[22:20],dl);
	wire [9:0] lf; p_lfodiv u13(CLK,i[4:0],lf);
	wire [17:0] sb; p_sub u14(CLK,i[15:0],i[18:16],i[23:19],i[41:24],sb);
	assign o = {o0,o1,o2,o3,o4,o5,md,ph,al,ef,eb,dm,sf,fl,fi,dl,lf,sb} ;
endmodule
