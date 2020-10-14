package main

import (
	"fmt"
	"math/rand"
	"time"
)


func main(){

var userInput int
var secretNum int

rand.Seed(time.Now().Unix())
secretNum = rand.Intn(100)
	
	

	fmt.Println("Please enter a number: ")
	fmt.Scan(&userInput)
	//fmt.Println("Please verify your number: ", userInput)


if userInput == secretNum {
	fmt.Println("You Won Bish!")
	fmt.Println("The secret number is: ",secretNum)
} else if userInput < secretNum { 
	 fmt.Println("Too low.")
	 fmt.Println("The secret number is: ",secretNum)	
} else if userInput > secretNum {
	fmt.Println("Too High.")
	fmt.Println("The secret number is: ",secretNum)
}


} 

  