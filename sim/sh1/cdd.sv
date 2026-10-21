// Behavioural CD drive (CDD) serial side: sends a 12-byte status frame every FRAME_PERIOD clocks and
// captures the 12-byte command the SH-1 clocks back. The drive reports "no disc".
module cdd_model #(
	parameter FRAME_PERIOD = 400000,
	parameter [7:0] STATUS = 8'h06
) (
	input             CLK,
	input             RST_N,
	input             HDATA,
	input             COMCLK,
	output reg        CDATA,
	output reg        COMREQ_N,
	output reg        COMSYNC_N,
	output reg  [7:0] LAST_CMD_B0,
	output reg [31:0] FRAMES
);
	reg  [7:0] STAT [0:11];
	reg  [7:0] HOST_COMM [0:11];
	reg        IO_START, IO_DONE;
	reg  [7:0] HOST_DATA, CDD_DATA;
	reg  [3:0] BYTE_POS;
	reg  [2:0] BIT_POS;
	reg [10:0] DELAY_CNT;
	reg        NEXT_BYTE, COMCLK_OLD;
	reg [31:0] TIMER;
	integer    i;
	reg  [7:0] sum;
	reg  [7:0] chk_mode;

	initial begin
		chk_mode = 0;
		if ($value$plusargs("CHK=%d", chk_mode)) ;
		FRAMES = 0;
	end

	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			TIMER <= 0;
			IO_START <= 0;
			COMSYNC_N <= 1;
			COMREQ_N <= 1;
			CDATA <= 0;
			CDD_DATA <= 0;
			HOST_DATA <= 0;
			BYTE_POS <= 0;
			BIT_POS <= 0;
			DELAY_CNT <= 0;
			NEXT_BYTE <= 0;
			IO_DONE <= 0;
			COMCLK_OLD <= 0;
			LAST_CMD_B0 <= 0;
		end else begin
			IO_START <= 0;
			TIMER <= TIMER + 1;
			if (TIMER == FRAME_PERIOD) begin
				TIMER <= 0;
				IO_START <= 1;
				sum = 0;
				for (i = 0; i < 12; i = i + 1) STAT[i] = 8'h00;
				STAT[0] = STATUS;
				STAT[1] = FRAMES[7:0];
				for (i = 0; i < 11; i = i + 1) sum = sum + STAT[i];
				case (chk_mode)
					0: STAT[11] = ~sum;
					1: STAT[11] = ~sum & 8'h0F;
					2: STAT[11] = sum;
					default: STAT[11] = 8'h00;
				endcase
			end

			COMCLK_OLD <= COMCLK;
			IO_DONE <= 0;
			NEXT_BYTE <= 0;
			if (IO_START) COMREQ_N <= 1;
			if (NEXT_BYTE) COMREQ_N <= 0;

			if (IO_START) begin
				BIT_POS <= 0;
				CDD_DATA <= STAT[0];
				COMSYNC_N <= 0;
				BYTE_POS <= 0;
				DELAY_CNT <= 11'h3FF;
				FRAMES <= FRAMES + 1;
			end else begin
				if (!COMCLK && COMCLK_OLD) begin
					{CDD_DATA, CDATA} <= {1'b0, CDD_DATA};
				end else if (COMCLK && !COMCLK_OLD) begin
					HOST_DATA <= {HDATA, HOST_DATA[7:1]};
					COMREQ_N <= 1;
					BIT_POS <= BIT_POS + 3'd1;
					if (BIT_POS == 3'd7) IO_DONE <= 1;
				end
				if (IO_DONE) begin
					HOST_COMM[BYTE_POS] <= HOST_DATA;
					if (BYTE_POS == 0) LAST_CMD_B0 <= HOST_DATA;
					COMSYNC_N <= 1;
					BYTE_POS <= BYTE_POS + 4'd1;
					if (BYTE_POS < 4'd11) begin
						CDD_DATA <= STAT[BYTE_POS + 4'd1];
						DELAY_CNT <= 11'h3FF;
					end
				end
				if (DELAY_CNT != 0) begin
					DELAY_CNT <= DELAY_CNT - 11'h001;
					NEXT_BYTE <= (DELAY_CNT == 11'h001);
				end
			end
		end
	end
endmodule
