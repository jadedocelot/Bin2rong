package main 

import "fmt"

func main(){

	var firstName string
	var lastName string
	
	fmt.Println("What is Your First Name?")
	fmt.Scan(&firstName)
	
	fmt.Println("What is Your Last Name?")
	fmt.Scan(&lastName)
	
	fmt.Println("Please Confirm Your Full name:",firstName,lastName)

} 