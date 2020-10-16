package main

import "fmt"

func main() {

var age int
var lock bool = false

fmt.Println("Lock: ", lock)

if lock == false {
	lock = true
	fmt.Println("Please enter your age:")
	fmt.Scan(&age)
}


if lock == true {
	fmt.Println("your age is: ",age)
}


}



