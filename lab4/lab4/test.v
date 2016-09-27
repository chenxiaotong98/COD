`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:32:50 04/18/2016
// Design Name:   ctrl
// Module Name:   Y:/lab4/lab4/test.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ctrl
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
	reg rst_n;

	// Outputs
	wire [31:0] alu_in1;
	wire [31:0] alu_in2;
	wire [31:0] alu_out;

	// Instantiate the Unit Under Test (UUT)
	ctrl uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.alu_in1(alu_in1), 
		.alu_in2(alu_in2), 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rst_n = 1;
		forever #10 clk = ~clk;
		// Add stimulus here

	end
      
endmodule

