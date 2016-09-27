`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:41 05/28/2016 
// Design Name: 
// Module Name:    inst_rom 
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
module inst_rom(
	input ce,
	input [`InstAddrBus]	addr,
	output reg [`InstBus] inst
);

	reg[`InstBus] inst_mem [0:`InstMemNum-1];
	initial $readmemh ("inst_rom.data",inst_mem);
	always@(*)
	begin
		if(ce==`ChipDisable)
		begin
			inst<=`ZeroWord;
	   end
		else
		begin
			inst<=inst_mem[addr[`InstMemNumLog2+1:2]];
		end
	end

endmodule
