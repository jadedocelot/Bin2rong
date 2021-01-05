// Is it possible to have a nested if statement

package main

import "fmt"

func main() {

	const TEST_KEY = 182122
	var user_input_one int
	var user_input_two string
	var age int
	var firstName string
	var lastName string
	var weight float64

	var lock bool = false

	fmt.Println("Please enter your personal test key: ")
	fmt.Scan(&user_input_one)

	if user_input_one == TEST_KEY {
		fmt.Println("\nPlease enter the following information\n")
		fmt.Println("What is Your First Name:\n")
		fmt.Scan(&firstName)
		fmt.Println("What is Your Last Name:\n")
		fmt.Scan(&lastName)
		fmt.Println("What is Your Weight:\n")
		fmt.Scan(&weight)
		fmt.Println("What is Your Age:\n")
		fmt.Scan(&age)
	}

	fmt.Println("Please verify that the information below is correct:\n")
	fmt.Println("First Name: ", firstName)
	fmt.Println("Last Name:", lastName)
	fmt.Println("Weight: ", weight)
	fmt.Println("Age: ", age)

	fmt.Println("\n\n If the information provided is correct, please enter either yes to end the session or no to edit your information")
	fmt.Scan(&user_input_two)

	if user_input_two == "yes" {
		fmt.Println("Thank you! Your information has been securely saved and your session will now end")
		lock = true
	} else if user_input_two == "no" {
		fmt.Println("\nPlease enter the following information\n")
		fmt.Println("What is Your First Name:\n")
		fmt.Scan(&firstName)
		fmt.Println("What is Your Last Name:\n")
		fmt.Scan(&lastName)
		fmt.Println("What is Your Weight:\n")
		fmt.Scan(&weight)
		fmt.Println("What is Your Age:\n")
		fmt.Scan(&age)

	}

	fmt.Println("Personal information lock activated: ", lock)

}

//fmt.Println("Lock: ", lock)

/*
if lock == true {
	fmt.Println("your age is: ",age)
}
*/

/*
Please enter your personal test key:
182122

Please enter the following information

What is Your First Name:

Edgar
What is Your Last Name:

Ortega
What is Your Weight:

145.4
What is Your Age:

29
Please verify that the information below is correct:

First Name:  Edgar
Last Name: Ortega
Weight:  145.4
Age:  29


 If the information provided is correct, please enter either yes to end the session or no to edit your information
yes
Thank you! Your information has been securely saved and your session will now end
Personal information lock activated:  true
*/
