`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:11:40 03/29/2016
// Design Name:   lab02_ctrl
// Module Name:   Z:/lab2/lab02_reg/lab02_test.v
// Project Name:  lab02_reg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab02_ctrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab02_test;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [31:0] a;
	wire [31:0] b;
	wire [31:0] sum;

	// Instantiate the Unit Under Test (UUT)
	lab02_ctrl uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.a(a), 
		.b(b), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst_n = 1;
		// Add stimulus here

	end
   
	always #10 clk = ~clk;   
endmodule

