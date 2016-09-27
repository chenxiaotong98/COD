`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:08 05/28/2016 
// Design Name: 
// Module Name:    LLbit_reg 
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
`include "header.v"
module LLbit_reg(
	input	clk,
	input rst,
	input flush,
	input LLbit_i,
	input we,
	output reg LLbit_o	
);

	always@(posedge clk) 
	begin
		if (rst==`RstEnable) 
		begin
			LLbit_o<=1'b0;
		end 
		else if(flush==1'b1)
		begin
			LLbit_o<=1'b0;
		end 
		else if(we==`WriteEnable) 
		begin
			LLbit_o<=LLbit_i;
		end
	end

endmodule
