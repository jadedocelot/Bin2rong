

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
