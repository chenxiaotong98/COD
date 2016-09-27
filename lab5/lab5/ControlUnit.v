`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:16 04/22/2016 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
	input [5:0] opcode,
	output bgtz,
	output j,
	output RegDst,
	output ALUSrc,
	output MemtoReg,
	output MemWrite,
	output RegWrite
    );
	
	wire add,lw,sw,addi;
	assign bgtz=(opcode==6'd7);
	assign j=(opcode==6'd2);
	assign add=(opcode==6'b0);
	assign lw=(opcode==6'd35);
	assign sw=(opcode==6'd43);
	assign addi=(opcode==6'd8);
	
	assign RegDst=add;
	assign ALUSrc=lw+sw+addi;
	assign MemWrite=sw;
	assign MemtoReg=lw;
	assign RegWrite=add+lw+addi;
	
endmodule
