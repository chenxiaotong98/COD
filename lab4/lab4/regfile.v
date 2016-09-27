`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:44 04/04/2016 
// Design Name: 
// Module Name:    reg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module regfile(
	input	clk,
	input	rst_n,
	input	[4:0]	r1_addr,
	input	[4:0]	r2_addr,
	input	[4:0]	r3_addr,
	input	[31:0] r3_din,
	input	r3_wr,
	output reg [31:0]	r1_dout,
	output reg [31:0]	r2_dout
    );
	reg [31:0] regfile [31:0];
	integer i;
always@(posedge clk or negedge rst_n)
	begin
		if(~rst_n)
		begin
			for(i=0;i<32;i=i+1)
				regfile[i]<=32'b0;
		end
		else
			if(r3_wr)			
				regfile[r3_addr]<=r3_din;	
	end

always@(negedge clk)
	begin
		r1_dout<=regfile[r1_addr];
		r2_dout<=regfile[r2_addr];
	end
endmodule
