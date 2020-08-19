

package main

import "fmt"


func main(){
	fmt.Println("Hello World!")

} 

	// OUTPUT: Hello World!


// To run and compile your "Hello World!" file within your terminal, enter the following:

	// $ go run hello_world!.go

// In some cases youll want to build your program into binaries. This can be done. This can be done using "build"

	// $ go build hello_worl!.go

// We can the execute the built binary directly

	// $ ./hello_world


// Now lets GO over what this syntax actually means

______________________________________________________________________

	
	- package import

		// All GO files start with package <something>, 

		// "Package main" is required for a standalone executable
			// When you build resusable pieces of code, you will develop packages as a shared libary

		// Package main tells the GO compiler  that the package should compile as an executable program instead of a shared library

			// NOTE: when you build shared libraries, you will not have any main package and main function in the package

		// When a GO program is executed

	- import "fmt" // Implements formatted I/O

			 // Used to include code from packages
			 // "fmt" is shorthand for format

			 /* 
			 Notice that fmt is surrounded by double quotes. The use of double quotes like this is known as STRING LITERAL, which is a type of expression. In GO, strings represent a sequence of charaters (letters, numbers, symbols, etc) of a definite length.
			 */

			// import "fmt" says we need "fmt" in addition to main 
				// Package fmt implements formatted I/O with functions analogous to C's printf and scanf

							/* 
							 Formatted I/O
								There are a number of related functions used for formatted I/O, each one determining the format of the I/O from a format string. For output, the format string consists of plain text, which is output unchanged, and embedded format specifications which call for some special processing of one of the remaining arguments to the function. On input, the plain text must match what is seen in the input stream; the format specifications again specify what the meaning of remaining arguments is.
							*/


					// There are times in which the user will need to import multiple packages, this can be done in two ways, either we can write multiple lines or we can use or we can use factored import declaration (using multiple ImportSpec within a single import declaration.

						// NOTE: We will toch base on packages other that "fmt" down the road.

						import (
							"io"
							"bufio"
						)



		- func main(/*parameter placement*/) 

			// finally we call a function from the package "fmt" to print a string on the screen. The string is ecnlosed with "" and may contain non-ASCii characters

			// Functions are the building blocks of a GO program
				// They have inputs, outputs, and a series of steps called statements that are executed in order. All functions start with the keyword (func) followed by the name of the funtion (main, in this case), a list of zero or more parameters surrounded by parantheses, an optional return type and a body surrounded by curly brackets. 

				// This function has not parameters, it doesnt return anything and has only one statement. The name (main) is special because its the function that gets called when you execute a program



		- fmt.println("Hello, World")


			// This statement is made of 3 components

				// first, we access another funtion inside of the "fmt" package called 'println' (thats the fmt.println piece)

				// println means "print line". Then we create a new string that contains Hello, World and invoke (also known as call or execute) That funtion with the string as the first and only argument

				// Println formats using the default formats for its operands and writes to standard out‐ put. Spaces are always added between operands and a newline is appended. It returns the number of bytes written and any write error encountered.



		//Summary: 

			/*
				Create a new executable program that references the fmt library and contains one function called main. That function takes no arguments and doesn’t return anything. It accesses the Println function contained inside of the fmt package and invokes it using one argument—the string Hello, World
			*/

