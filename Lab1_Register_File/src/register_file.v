`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// 
// Author:        Victor Espinoza
// Email:         victor.alfonso94@gmail.com
// Project #:     Project 1 - Register File
// Course:        CECS 440
// Create Date:   11:05:58 2/1/2015
//
// Module Name:   register_file
// File Name:     register_file.v
//
// Description:   This module creates a register file that is capable of writing
//                to and reading from an array of 32 different registers. Which 
//                registers get written to and which registers have their values
//                read from depend on the various 5-bit data address inputs. In 
//                order to write a value into a register, three conditions must 
//                be met: 1) A register address must be provided, 2) Data to 
//                store into the register must be provided, and most importantly,
//                3) The wr_e input must be asserted on the active edge of the 
//                clock. If the write enable input is not asseted, then the 
//                register file does not write data into any register. Only once
//                this input is asserted is the register file allowed to write
//                data into one of its registers. The reset input clears all of 
//                the data within the register file and the rd_data1 and rd_data2
//                output ports display the data values of the register referenced
//                by their respective addresses (rd_addr1 and rd_addr2). 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module register_file(clk, rstb, wr_e, wr_addr, wr_data, rd_addr1, rd_addr2, 
 rd_data1, rd_data2);

   //Initialize Inputs
   input          clk; 
   input          rstb;
   input          wr_e;
   input [4:0]    wr_addr;
   input [31:0]   wr_data;
   input [4:0]    rd_addr1;
   input [4:0]    rd_addr2;
   
   
   //Initialize Outputs
   output [31:0]  rd_data1;
   output [31:0]  rd_data2;
   
   //Initialize local variables
   reg [31:0]     REG [0:31];
   
   //assign the output data to its respective register   
   assign   rd_data1 = REG[rd_addr1];
   assign   rd_data2 = REG[rd_addr2];
   
   //Behavioral section for writing to the register 
   integer i;
   always @(posedge clk, negedge rstb) begin
      if(rstb) 
         begin
            //if the reset bit is asserted, then go
            //through the register file and clear all
            //of the data that was written to the 
            //individual registers.
            for(i=0; i<32; i=i+1)
               REG[i] <= 0;
         end
      else 
         begin         
            if(wr_e)
               //write the data into the desired register
               //if and only if wr_e is asserted.
               REG[wr_addr] <= wr_data;
         end
   end
   
endmodule
