--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:50:30 02/08/2015
-- Design Name:   
-- Module Name:   F:/CECS 440/Lab 1/Lab1_Register_File/register_file_tb.vhd
-- Project Name:  Lab1_Register_File
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_file
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY register_file_tb IS
END register_file_tb;
 
ARCHITECTURE behavior OF register_file_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT register_file
    PORT(
         clk : IN  std_logic;
         rstb : IN  std_logic;
         wr_e : IN  std_logic;
         wr_addr : IN  std_logic_vector(4 downto 0);
         wr_data : IN  std_logic_vector(31 downto 0);
         rd_addr1 : IN  std_logic_vector(4 downto 0);
         rd_addr2 : IN  std_logic_vector(4 downto 0);
         rd_data1 : OUT  std_logic_vector(31 downto 0);
         rd_data2 : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rstb : std_logic := '0';
   signal wr_e : std_logic := '0';
   signal wr_addr : std_logic_vector(4 downto 0) := (others => '0');
   signal wr_data : std_logic_vector(31 downto 0) := (others => '0');
   signal rd_addr1 : std_logic_vector(4 downto 0) := (others => '0');
   signal rd_addr2 : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal rd_data1 : std_logic_vector(31 downto 0);
   signal rd_data2 : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register_file PORT MAP (
          clk => clk,
          rstb => rstb,
          wr_e => wr_e,
          wr_addr => wr_addr,
          wr_data => wr_data,
          rd_addr1 => rd_addr1,
          rd_addr2 => rd_addr2,
          rd_data1 => rd_data1,
          rd_data2 => rd_data2
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
