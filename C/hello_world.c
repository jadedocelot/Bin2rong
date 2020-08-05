					C (99) Programming!
// C Programming is a general purpose programming language. Which  really relates to the way machines work
// C programming also understands how to truly utilize memory					
// A number of well known syntax was written in c, such as Windows, Python Interpreter, and git
// It was developed in 1972 by Dennis M Ritchie at Bell Labs Telephone Laboritories to develop the UNIX operating system


								Why Learn C 
	- Structured Language
	- It produces effecient programs
	- It can hanle low level activities
	- it can be compiled in a variety of coomputer platforms


																						Facts about C


    - C was a successor of B language which was introduced in the early 1970s
    - C was adopted as a system development langauge because it produces code that runs nearly as fast as the code written in assembly language

		
    																				The C compiler
    - The souce code file written by the user is the human readable source for your program which needs to be "compiled" into machine language so that the CPU can actually execute the program




						NOTE: WHEN COMPILING
							- gcc -o playgroun playgroun.c
							- ./playgroun

#include <stdio.h>

int main() {
	printf("\nGoodbye, World!\n");


return 0;	
}
							
																					Program Structures
			- C program basically consists of the following parts:
				* Preprocessors Commands
				* Functions
				* Variables
				* Statements & Expressions
				* Comments
			



// The above example prints out: 
	Goodbye, World!
// In the terminal
	// C Programming is also a langue that requires Compiling in order for the computer to understand what exacting the user is requesting, It is then translated into something called machine langue which soley consists of 0 and 1 
// In order to compile in termianl: 
	1. Locate c file in terminal and enter the following
	2. g++ -o <file name> <file name.c> 
	3 enter
	4 ./<file name> 
	5. enter

	// C program uses libraries, which give the ability to execute necessary functions such as:
	 			printf
	 			// which is defined in the following header 
					#include <stdio.h>
						// Which was used above 
	 					// To add the ability to run the (printf) command to your program, we must add the following (#include) directive to our first line
	 						-  /* #include <stdio.h> */ is a Preprocessor  command, which tells a C compiler to include stdio.h file before going into the actual compilation

// The second part of the code is the actual (code). The first (code) will reside in the main function

	 				int main() {              <--- is the main function where the execution begins
	 					<your code here> 

	 				return 0;
	 				}	