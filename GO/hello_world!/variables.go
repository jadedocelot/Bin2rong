									Go Variables


		// A variable is a storage location, with specific type and an associated name.  

			package main

			import "fmt"

			func main(){

			var x string = "Hello, World!"

				fmt.Println("A Greeting in Go Appears Like So: ", x)

			}

			// OUTPUT: A Greeting In Go Appears Like So: Hello World!


			// The user doesnt need to  assign a value to a variable right off the bat. 
				// one can declare a variable and assign  a value down then road as well assign a new value at any given point:

			package main

			import "fmt"

			func main(){
			var x string
			x = "first"

				fmt.Println(x)

			x = "second"	

				fmt.Println(x)
			}

			// OUTPUT:
			// first
			// second