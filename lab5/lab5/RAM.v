`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:39 04/24/2016 
// Design Name: 
// Module Name:    RAM 
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
module RAM(
	input clk,
   input [11:0] address,
	input MemWrite,
	input [31:0] Mem_write_data,
	output [31:0] Mem_read_data
    );
	reg [31:0] ram [127:0];

	assign Mem_read_data=ram[address];
	always@(posedge clk)
	begin
		if(MemWrite)	
			ram[address]=Mem_write_data;
	end

	integer i;
	initial
	begin
		for(i=0;i<128;i=i+1)
			ram[i]=32'b0;
		ram[20]=32'h14;ram[21]=32'h3;ram[22]=32'h3;
	end
endmodule
