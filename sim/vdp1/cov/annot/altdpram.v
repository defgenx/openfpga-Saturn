//      // verilator_coverage annotation
        // Simulation model of the altdpram megafunction as used by VDP1 (MLAB, async read, clocked write).
        module altdpram #(
        	parameter width = 16, parameter widthad = 4, parameter width_byteena = 1,
        	parameter indata_aclr = "OFF", parameter indata_reg = "INCLOCK", parameter intended_device_family = "",
        	parameter lpm_type = "", parameter outdata_aclr = "OFF", parameter outdata_reg = "UNREGISTERED",
        	parameter ram_block_type = "", parameter rdaddress_aclr = "OFF", parameter rdaddress_reg = "UNREGISTERED",
        	parameter rdcontrol_aclr = "OFF", parameter rdcontrol_reg = "UNREGISTERED",
        	parameter read_during_write_mode_mixed_ports = "", parameter wraddress_aclr = "OFF",
        	parameter wraddress_reg = "INCLOCK", parameter wrcontrol_aclr = "OFF", parameter wrcontrol_reg = "INCLOCK"
        ) (
 19753028 	input [width-1:0] data, input inclock, input [widthad-1:0] rdaddress, input [widthad-1:0] wraddress,
~739164 	input wren, output [width-1:0] q, input aclr, input byteena, input inclocken, input rdaddressstall,
%000002 	input rden, input wraddressstall
        );
~021408 	reg [width-1:0] mem [0:(1<<widthad)-1];
        	integer i;
~000032 	initial for (i = 0; i < (1<<widthad); i = i + 1) mem[i] = 0;
 19753028 	always @(posedge inclock) if (wren) mem[wraddress] <= data;
        	assign q = mem[rdaddress];
        endmodule
        
