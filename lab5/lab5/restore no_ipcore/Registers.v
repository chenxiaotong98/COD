`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:31:54 04/22/2016 
// Design Name: 
// Module Name:    Registers 
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
module Registers(
	input clk,
	input	[4:0] read_address1,
	input	[4:0] read_address2,
	input [4:0] write_address,
	input [31:0] write_data,
	input	write_enable,
	output [31:0] read_data1,
	output [31:0] read_data2
    );
	reg [31:0] registers [31:0];
	
	initial
	begin
		registers[0]=32'b0;
	end
	assign read_data1=registers[read_address1];
	assign read_data2=registers[read_address2];
	always@(posedge clk)
		begin
		if(write_enable)
			registers[write_address]=write_data;
		
		end
endmodule
