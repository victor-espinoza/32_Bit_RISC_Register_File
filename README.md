Project Overview:  

Register File using Verilog.
  
The purpose of this lab was to create a (32x32) register file. This means that the register file contains 32 registers that are each 32-bits wide. This register file is capable of reading the data of two different registers at a time. In order to write data into the 32 different registers in this register file, I needed to have a specified address (wr_addr) and the data that the user wanted to write to that specific address (wr_data).    
  
I used a synchronous write enable port for this lab, meaning that if the write enable variable was a 1 on the active edge of the clock, then the register file wrote the desired data into the register referenced by wr_addr. If the write enable variable was not asserted, however, then the register disregarded the request to write the given data into the register. In other words, the only time that data was written into a register is if the write enable variable was asserted during the active edge of the clock.    
  
Apart from these variables, my register file also had a reset bit that, once activated, reset all of the data within the register to zero. Additionally, I had two address ports (rd_addr1 and rd_addr2) that determined which registers were going to have their data read. These two variables determined the reference registers and the data contained within those registers was what was displayed on my two asynchronous read ports, rd_data1 and rd_data2. The write address and read address variables needed to be 5 bits wide in order to accommodate the 32 different register addresses; 4 bits would simply not be enough. The data ports were 32 bits due to the fact that our register file is 32 bits wide. That is basically how the register file works. 
Here is a picture of the block diagram for this project:  
![ScreenShot](https://cloud.githubusercontent.com/assets/14812721/24938617/282c21ae-1eed-11e7-8524-bf31c6dcf8ed.jpg)
     
Dependencies:   
This project was created using the Xilinx ISE Project Navigator Version: 14.7.  
  
    
Project Verification:   
This project was verified using the register_file_tb module.  
  
For my test bench, after declaring all of the inputs, outputs, and local variables and instantiating the register file being tested, I first initialized all of my inputs to zero. After that, I then tried viewing the data on the register files, which was all zeros as expected. Then I set my write enable variable to high (in order to allow my register file to write data to the registers) and then I started writing data to each of the 32 registers in my register file.  
  
For my original data pattern, I chose to use the alternating values of 5555_5555h and AAAA_AAAAh to make sure that all of the 32 bits of data were being addressed in each register. Once I found this to be true, I then discarded this pattern and then chose a different pattern which consisted of writing down the register address as the actual data within that register. This made it extremely easy to make sure that each register that I was writing to / reading from had the correct data stored within it. I used my rd_data1 port to display the first 16 register values and I used my rd_data2 port to display the last 16 register values. This format ended up working rather well for me.     
  
After I verified the correctness of this pattern, I then made sure that my reset input worked as desired by asserting the input and making sure that this caused all of the data in the register file to revert to zeros. Then I simply reversed the order of the previous pattern and verified that the registers were working correctly once more. After verifying that all of the waveforms contained the values that I was expecting, I was convinced that my register file was working correctly and that I had successfully finished the project.
