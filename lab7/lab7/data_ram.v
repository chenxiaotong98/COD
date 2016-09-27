`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:06:58 05/28/2016 
// Design Name: 
// Module Name:    data_ram 
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
module data_ram(
	input	clk,
	input ce,
	input we,
	input [`DataAddrBus]	addr,
	input [3:0]	sel,
	input [`DataBus] data_i,
	output reg[`DataBus]	data_o
	
);
	reg[`DataBus] data_mem[0:`DataMemNum-1];

	always@(posedge clk) 
	begin
		if(ce==`ChipDisable) 
		begin
			data_o<=`ZeroWord;
		end 
		else if(we==`WriteEnable) 
		begin
			if(sel[3]==1'b1) 
			begin
				data_mem[addr[`DataMemNumLog2+1:2]][31:24]<=data_i[31:24];
		   end
			if(sel[2]==1'b1) 
			begin
				data_mem[addr[`DataMemNumLog2+1:2]][23:16]<=data_i[23:16];
		   end
		   if(sel[1]==1'b1) 
			begin
				data_mem[addr[`DataMemNumLog2+1:2]][15:8]<=data_i[15:8];
		   end
			if(sel[0]==1'b1) 
			begin
				data_mem[addr[`DataMemNumLog2+1:2]][7:0]<=data_i[7:0];
		   end			   	    
		end
	end
	
	always@(*) 
	begin
		if(ce==`ChipDisable) 
		begin
			data_o<=`ZeroWord;
		end 
		else if(we==`WriteDisable) 
		begin
		   data_o<=data_mem[addr[`DataMemNumLog2+1:2]];
		end 
		else 
		begin
			data_o<=`ZeroWord;
		end
	end		

endmodule
