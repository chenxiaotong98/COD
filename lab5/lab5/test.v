`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:52:02 04/25/2016
// Design Name:   cpu
// Module Name:   E:/lab5/test.v
// Project Name:  lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;

	// Outputs
	wire [31:0] ALU_result;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk(clk), 
		.ALU_result(ALU_result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
      forever #5 clk=~clk;  
		// Add stimulus here

	end
      
endmodule

