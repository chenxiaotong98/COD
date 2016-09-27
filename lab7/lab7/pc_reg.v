`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:52 05/28/2016 
// Design Name: 
// Module Name:    pc_reg 
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
module pc_reg( 
	input	clk,
	input rst,

	//来自控制模块的信息
	input [5:0] stall,

	//来自译码阶段的信息
	input branch_flag_i,
	input [`RegBus] branch_target_address_i,
	
	output reg [`InstAddrBus] pc,
	output reg ce
);

	always@(posedge clk)
	begin
		if(ce==`ChipDisable)
		begin
			pc<=32'h00000000;
		end
		else if(stall[0]==`NoStop)
		begin
		  	if(branch_flag_i==`Branch)
			begin
				pc<=branch_target_address_i;
			end
			else 
			begin
		  		pc<=pc+4'h4;
		  	end
		end
	end

	always@(posedge clk)
	begin
		if(rst==`RstEnable)
		begin
			ce<=`ChipDisable;
		end
		else
		begin
			ce<=`ChipEnable;
		end
	end

endmodule
