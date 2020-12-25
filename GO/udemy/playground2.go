package main

import (
	"fmt"
)

func main() {

	key := true
	int var_pi = 103107472059779211826284

	if key == false {
		fmt.Println("Access Denied!")
	} else if key == true {
		fmt.Println("Access Granted")
		fmt.Println(&var_pi)
	}


}
