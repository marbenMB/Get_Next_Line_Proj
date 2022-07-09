# Get_Next_Line_Proj
This project is about programming a function that returns a line read from a file descriptor. And it will also make you learn a highly interesting new concept in C programming: static variables.
----------------------------------------------------------------------------------
## To compile your code : 
first include the get_next_line header to your main file 

![include](imgs/Screen%20Shot%202022-07-09%20at%2004.20.52.png)

You should use these flags cc -Wall -Wextra -Werror -D BUFFER_SIZE=n main.c get_next_line.c get_next_line_utils.c (if bonus add use _bonus.c).
	- -D BUFFER_SIZE=n : It will define the buffer size for read().
	
![compiling](imgs/Screen%20Shot%202022-07-09%20at%2004.23.40.png)
	
## Difference between mandatory and bonus parts :
get_next_line_bonus can reads from multiple files without conflicting between these files content.
