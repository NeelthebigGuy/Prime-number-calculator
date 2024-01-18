# Prime-number-calculator
this small program will ask a user for a number, then will list all the prime numbers from 1 to the number passed.

# How to Build:
open a terminal or cmd window that is working in the same directory as the downloaded program files. 
to create an executable program for use, simply run "make" or "Make", this will let the makefile create the desiered executable.

# How to Run:
While the terminal or cmd window is still working in the same directory, simply run "./prime_numbers". this will start the program and ask you for the desired number to list prime numbers until. after entering the desired number, press enter. 

# How it works:
The program works by creating a process with a thread that will loop untill we reach the number passed. starting at 1 and incrementing every loop; every loop the thread checks if the number looping can be divied by any other number smaller then the current number were working on. If the number mod any number smaller then the number currently being looped doesnt resut in 0, we know it is not dividable. if looping and our number can be divided by a number more than twice, we know its not a prime number and will not be printing, increasing the loop number and relooping our algorithm. 

# How to Clean:
to clean up the executable files, simply run "make clean" or "Make clean", this will remove any executable that are not needed for build. 


