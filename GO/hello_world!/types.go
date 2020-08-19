					TYPES


// Some would make a distinction between (types) and (tokens)
// For example:
	// Suppose you have a dog named Max, Max is the token (a particular instance member)
	// And DOG is the type (The general concept). 
	// Dog or dogness describes a set of properties that all dogs have in common. All dogs have four legs, Max is a dog, therefore Max has four legs

	// Types in programming languages work in similar way. All strings have a length, X is a string, therefore X has a length
	// GO is a statically typed programming language. Which means that variables always have a specific type and that type cannot change.
		// Types help us reason what our program is doing and catch a wide variety if common mistakes.

		// Go comes with several built-in data types whih we will now look at in more detail


		var a int
		var b bool

		a = 12
		b = false

		// We ll get more in depth 



	NUMBERS

	- Go has several different types of represent numbers. Generally, we split numbers into two different kinds: integers and floating-point numbers



	Integers

	// Integers, like their mathmatical counterpart - are numbers WITHOUT decimal components (-3, -2, -1, 0, 1, 2)
	// Computers use a base-2 binary system

	// Out system is made up of 10 different digits
		// Compters do the same but only have 2 digits instead of 10, so counting looks like this: 0, 1, 10, 11, 100, 101, 110, ,111 and so on. 


	// Go's integer types are uint8, uint16, uint32, uint64, int8, int16, int 32, and int64
			// 8, 16, 32, and 64 tell us how may bits each of the types use.


		// uint means "unsigned" 
			// Unsigned integers only contain positive numbers (or zero)
				// Their two alias types: (byte) which is the same as uint8 and (rune) which is the same as int32. 

				// Bytes are an extremely common unit of measurement use on computers.
					// 1 byte = 8 bits, 1,024 bytes = 1 kilobyte, 1,024 kilobytes = 1 megabyte

					//Go s byte data type is often used in in the definition of other types

					// There are also 3 machine dependent integer types: uint, int, and uintptr. 


	FLOATING-POINT NUMBERS

		// Floating point numbers are numbers that contain a decimal components (i.e real numbers)
			// For example, 1.234, 123.4, 0.000001234 and 12340000 are floating point numbers.

			// Go has two floating point types: (float32) and (float64) - often referred to a single precision, repectively.

				// We should stick with (float64) when working with floating point numbers

 // example 1:

		 package main

 		 import "fmt"
 		
 		 func main(){
 		     fmt.Println("1 + 1 =", 1 + 1)
 		
 		 }
 		
 		
 		 ///OUTPUT:
 		 // 1 + 1 = 2



 // example 2: 

 		 package main

 		 import "fmt"
 		
 		 func main(){
 		     fmt.Println("1 + 1 =", 12  * 22)
 		
 		 }
 		
 	

 	Strings


 	// Go strings are made of individual bytes
 	// String literals can be created using double quotes or backticks 'Hello, World'


 	len("Hello, World!") 
 		// Finds the length of a string

 	"Hello, World"[1]
 		// Access a particular character in the string (in this case, the second characters)

 	"Hello" + : "World"
 		// Concatenates two strings together


 	// Example 3:
 
  import "fmt"
 
  func main(){
 
      fmt.Println(len("Hello, World!"))
      	// 13
      fmt.Println("Hello, World!"[1])
      	// 101 // character is represented by byte
      fmt.Println("Hello, " + "World!")
 		// Hello, World!

  }	



		// Strings and numbers are both extremely useful. Most programs either represent mathmatical formulas or involve manipulation and transformation of data, 


		 BOOLEANS

		// A boolean value (named after George Boole) is a special 1-bit integer type used to represent True or False (or ON and Off)
			// 3 logical operators are used with boolean values: 


			&& = and 
			|| = or 
			! = not


	// Example 4

  package main
 
  import "fmt"
 
  func main(){
      fmt.Println(true && true)
      fmt.Println(true && false)
      fmt.Println(true || true)
      fmt.Println(true || false)
      fmt.Println(!true)
 
  }
	/*
		OUTPUT: 
		true
		false
		true
		true
		false
	*/











