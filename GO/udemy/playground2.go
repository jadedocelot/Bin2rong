package main

import (
	"fmt"
)

func main() {

	var user_input int

	key := false
	piCode := 1031042624842059779

	if key == false {
		fmt.Println("Access Denied!")
		fmt.Println("Please guess the number between 1-20 to gain access to the secret code")
		fmt.scan(user_input)
		if user_input == 13 {
			key := true
		}
	} else if key == true {
		fmt.Println("Access Granted")
		fmt.Println("Generated Discounted Code Is:", piCode)
	}
}
