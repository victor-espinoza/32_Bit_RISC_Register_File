`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// 
// Author:        Victor Espinoza
// Email:         victor.alfonso94@gmail.com
// Project #:     Project 1 - Register File
// Course:        CECS 440
// Create Date:   11:05:58 2/1/2015
//
// Module Name:   register_file_tb
// File Name:     register_file_tb.v
//
// Description:   This module creates a test bench used to test the register 
//                file and make sure that it was working properly. I achieved
//                this by writing a RegDump task and multiple RegWrite tasks 
//                to read and write different values into the registers within
//                the register file. I first called the RegDump task to view the 
//                initial data in the registers, then I wrote data to the 
//                various registers using the RegWrite task. Finally, I called 
//                the RegDump task once more to verify that I was able to write 
//                the correct data to the registers in the register file.
//
// Verilog Test Fixture created by ISE for module: register_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module register_file_tb;

   //Inputs
   reg          clk;
   reg          rstb;
   reg          wr_e;
   reg [4:0]    wr_addr;
   reg [31:0]   wr_data;
   reg [4:0]    rd_addr1;
   reg [4:0]    rd_addr2;


   //Outputs
   wire [31:0] rd_data1;
   wire [31:0] rd_data2;
   
   //Local Variables
   integer i;

   // Instantiate the Unit Under Test (UUT)
   register_file uut (
      .clk(clk), 
      .rstb(rstb), 
      .wr_e(wr_e), 
      .wr_addr(wr_addr), 
      .wr_data(wr_data), 
      .rd_addr1(rd_addr1), 
      .rd_addr2(rd_addr2), 
      .rd_data1(rd_data1), 
      .rd_data2(rd_data2)
   );

   //Generate 10 ps Clock
   always 
      #5 clk = ~clk;
      
   initial begin
      //Initialize Inputs
      clk      = 0;
      rstb     = 0;
      wr_e     = 0;
      wr_addr  = 0;
      wr_data  = 0;
      rd_addr1 = 0;
      rd_addr2 = 0;

        
      //verify the correctness of the register file
      @(negedge clk)
         rstb = 1;
      @(posedge clk)
         rstb = 0;
      RegDump;
      @(posedge clk)
            //display the various data and address values
            #1 $display("rd_addr1=%h rd_data1=%h || rd_addr2=%h rd_data2=%h", 
            rd_addr1, rd_data1, rd_addr2, rd_data2);
      //write given data to the registers
      RegWrite;
      //verify that the registers had the correct data written to them
      RegDump;
      @(posedge clk)
            //display the various data and address values
            #1 $display("rd_addr1=%h rd_data1=%h || rd_addr2=%h rd_data2=%h", 
            rd_addr1, rd_data1, rd_addr2, rd_data2);
       
      //reverse the pattern and verify contents once more 
      
      //make sure rstb works correctly
      @(negedge clk)
         rstb = 1;
      @(posedge clk)
         rstb = 0; 
      RegDump;
      @(posedge clk)
            //display the various data and address values
            #1 $display("rd_addr1=%h rd_data1=%h || rd_addr2=%h rd_data2=%h", 
            rd_addr1, rd_data1, rd_addr2, rd_data2);
      //write given data to the registers
      RegWrite2;
      //verify that the registers had the correct data written to them
      RegDump;
      @(posedge clk)
            //display the various data and address values
            #1 $display("rd_addr1=%h rd_data1=%h || rd_addr2=%h rd_data2=%h", 
            rd_addr1, rd_data1, rd_addr2, rd_data2);
        
       
      $stop;

   end
   
   //this task declares the appropriate values for the
   //read addresses. For this lab, I decided to have
   //the first 16 registers' data be referenced by data1 and
   //the last 16 registers' data to be referenced by data2. 
   task RegDump; 
      for (i=0; i<16; i=i+1)begin
         @(negedge clk)
            rd_addr1 = i;
            rd_addr2 = i+16;
            wr_addr  = 0;
            wr_e     = 0;
            wr_data  = 0;
       end
   endtask

   //this task asserts the wr_e input and provides the
   //register file with a given register address and data
   //to write into the register. This effectively gives
   //the register file permission to start writing data
   //into the provided registers, which it starts doing.
   //For this particular pattern, I decided to write
   //the same value that I was using as the register address
   //to the register's data. For example, a register with an
   //address of 1Ah will have a data value of 1Ah written to 
   //it.
   task RegWrite;
      begin
            for (i=0; i<32; i=i+1)begin
               @(negedge clk)
                  {rd_addr1, rd_addr2} = 10'b0;
                  wr_addr              = i;
                  wr_data              = i;
                  wr_e                 = 1;
            end
      end
   endtask
      
      
   //this task asserts the wr_e input and provides the
   //register file with a given register address and data
   //to write into the register. This effectively gives
   //the register file permission to start writing data
   //into the provided registers, which it starts doing.
   //This pattern is simply the reverse of the pattern
   //described in the RegWrite task. For example, a register 
   //with an address of 01h will have a data value of 1Eh 
   //written to it.   
   task RegWrite2;
      begin
            for (i=0; i<32; i=i+1)begin
               @(negedge clk)
                  {rd_addr1, rd_addr2} = 10'b0;
                  wr_addr              = i;
                  wr_data              = (31-i);
                  wr_e                 = 1;
            end
      end
   endtask
   
   
endmodule
