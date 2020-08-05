																				C++ Functions
// A (function) is a block of code which only runs when it is called
// You can pass data, known as parameters, into a (function)
// Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times

  --- Creating a function -- 
// C++ provides some pre-defined functions, such as the main(), which is used to execute code. 
  		// But you can also create your own (funtions) to perform certain actions
// To create (often refered to as to DELCLARE) a function, specify the name of the functionm followed by paranthese()

 void myPersonalFunc() {  

 	// code to be executed

  }

void: //Means that the function does not have a return value. 
myPersonalFunc: // is the name of the function




																				Call a Function 

// Declared functions are not executed immediately. They are "saved for later use" and will be executed later when they are called. 
// To call a function, write the functions name followed by two parantheses () followed by  a semicolon (;)
// In the following example, (myPersonalFunc()) is used to print a text (the action) wheb it is called

 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;

 void myPersonalFunc() {
 cout << "My First Custom Function in C++!" << endl;

 }

 int main() {

 myPersonalFunc();


 return 0;

  }


// You can call upon a function as many times as youd like

// As you can see in the example below, our new custom function is called several times

 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;

 void myPersonalFunc() {
 cout << "My First Custom Function in C++!" << endl;

 }

int main() {

 myPersonalFunc(); // output: My First Custom Function in C++!
 myPersonalFunc(); // output: My First Custom Function in C++!
 myPersonalFunc(); // output: My First Custom Function in C++!

return 0;

  }


  																		Function Declaration and Definition

// A C++ funtion consists of two parts: 

   * Declaration: the funtions name, return type, and parameters (if any)
   * Definnition: The body of the function (code to be executed)

   void myPersonalFunc() {  // declaration
   	// The body of the funtion (definition)

   }

// NOTE: If a user-defined function, such as myPersonalFunc() is declared after then main() function, an error will occur
   // Becuase C++ works from the top to bottom; which means that if the funtion is not declared above main(), the program of it: 


// Below you will find the error that will  appear

myPersonalFunc();
^
playground.cpp:10:1: error: use of undeclared identifier 'myPersonalFunc'
myPersonalFunc();
^
playground.cpp:11:1: error: use of undeclared identifier 'myPersonalFunc'
myPersonalFunc();
^
3 errors generated.


// However, it is possible to seperate the delaration and definition of the funtion - for code optimization

 #include <iostream>
 #include <cmath>
 #include <string>
 using namespace std;


 void chillFunc(); // Function declaration

 // Our main method
 int main() {
     chillFunc();

     return 0;
 }

 // Function definition
 void chillFunc() {
     cout << "Im just lazy." << endl;


  }


  																			C+ Funtion Paramters
// Parameters and Arguments
// Information can be passed to functions as a parameter. 
// Parameters act as variables inside the funtion
// Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just seperate them with a comma


void parFunc(par1, par2, par3) { 
	// Code to be executed

}  																			



//_ __ _. _ __ _ _ __ _ __ _ _ _ __ _ _ _ __ __ _ __ _ ____ __ _ __ _ ___ _//

// The following example has a funtuib

#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

void myFunction(string par2) { // the following (string) parameter will only allow (string) arguments
  cout << par2 << "Refsnes\n";

}

int main(){ 
  
myFunction("Edgar");
myFunction("Jamie");
myFunction("Thomas");
  

return 0; 
}

// When a parameter is passed to the function, it is called an argument. So, from the example above, (par2) is a parameter, while Edgar, Jamie, Thomas are arguments


    --------------------------

// The example below uses an INT as a parameter



#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

void myFunction(int myScore) {
  cout << "Winning Numbers: " << myScore << endl;

}


int main(){ 
  
myFunction(32);
myFunction(44);
myFunction(33);
  

return 0; 
}


                                                                  C++ Default Parameters
// DEFAULT PARAMETERS 
// You can also use a default parameter value, by using the equals sighn(=)  // not to be confused with (==) but the (=) sign used to create variables

#include <iostream>
#include <string> 
#include <cmath>
using namespace std; 

void basicBish(string arg = "But why?")  {
  cout << " " << arg << endl;
}

int main() { 
  cout <<  "Your wife left with the kids and is never coming back:";
  basicBish(); //Default Parameter Value: "But why?"
  cout <<  "Your baby is dead:";
  basicBish("Duh, who do you think killed the baby?"); // New argument Value: "Duh, who do you think killed the baby?"
  cout <<  "Have you filed your taxes yet:";
  basicBish(); // Default Parameter Value: "But why?"
return 0;
}

// A parameter with a default value is often known as an "optional parameter". 


                                    C++ Multiple Parameters
// Inside the function, you can add as many parameters

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

void multFunc(string usr_Name, int user_age){
int rand_Num = rand(); 

    cout << "user:" << " " <<  usr_Name << " " << "age:" << " " << user_age << " " << " " << "score:" << " " << rand_Num << "\n";

}

int main() {
    multFunc("Dan",23);
    multFunc("Mike",21);
    multFunc("Scotty",30);
    multFunc("Ron", 27);
    multFunc("Jason",22);

return 0;
} 

// OUTOUT: 
user: Dan age: 23  score: 16807
user: Mike age: 21  score: 282475249
user: Scotty age: 30  score: 1622650073
user: Ron age: 27  score: 984943658
user: Jason age: 22  score: 1144108930

// NOTE: That when you are working with multiple parameters, the function call must have the same number of arguments as the there are parameters, and the arguments must be passed in the same order



                                                                C++ The Return Keyword
// Return Values
// The (void) keyword, used in the in previous exmaples to creating a (function), indicates that the function should not return a value. If you want the function to return a value
// you can use a data type (such as (int),(string), etc) instead of (void), and use the (return) keyword inside the funtion 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;


int returnFunc(int x) {
    return 5 * x;

}

int rand_Num = rand(); // VAR will provide a RANDOM number

int main(){
  cout << returnFunc(rand_Num) << endl;


return 0;
} 

// OUTPUT: 84035


// The example below returns the sum of a function with (TWO) parameters


#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int returnFunc(int x, int y) {
    return x * y;

} 

int rand_Num = rand(); 

int main(){
    
    cout << returnFunc(rand_Num,rand_Num) << endl; 

return 0;
}

//output
282475249


// You can also store the result in a variable

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int multFunc(int x, int y){ 
    return x * y;
}


int randNum = rand();


int main(){ 
int answer = multFunc(randNum,randNum);

    cout << "And the winning number is: " << answer << endl;

return 0;
} 


// OUTPUT:
And the winning number is: 282475249
//



                                                                          C++ Functions - Pass by Reference
// Pass By Reference 

// In the examples below from the previous page, we used normal variables when we passed (parameters) to a function. You can also pass a (refernece) to the function
// This can be useful when you need to change the value of the arguments

#include <iostream>
#include <cmath> 
#include <string>
using namespace std; 

void swapFunc(int &x,/*z*/int &y){ // This function will swap the arguments presented
    
    int z = x;         //  Save value (first_Num) at address x 
    x = y;            //   x now stores y value (sec_Num)
    y = z;           //    y now strores the z value(x(first_Num))  

}

int main(){

int first_Num = 10; 
int sec_Num = 20;


    cout << "Before swap: " << "\n";
    cout << first_Num << sec_Num << "\n"; 

swapFunc(first_Num,sec_Num); // calling the the swapFunc to swap (first_Num) and (sec_Num)
 
    cout << "After the swap: " << "\n";
    cout << first_Num << sec_Num << "\n"; 


return 0;
}

//OUTPUT:
Before swap:
1020

After the swap:
2010
//



                                                                    C++ Functions Overloadingx



// Function Overloading
// with (function overloading), multiple functions can have the same name with the different parameters.
// (different data types)



#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int whole_Num_Func(int x, int y){
cout << "The following equation solely used WHOLE numbers:\n";
    return x + y;

}


float dec_Num_Func(float x, float y){
cout << "The following equation solely used numbers using decimals:\n";
      return x + y;

}


int main(){

cout << whole_Num_Func(5,5) << endl;
cout << dec_Num_Func(23.3,2.4) << endl;
    
cout << "\nIf only there was some way to use the same funtion name for multiple custom functions\n\n";


return 0;

}


// OUTPUT: 
The following equation solely used WHOLE numbers:
10
The following equation solely used numbers using decimals:
25.7

If only there was some way to use the same funtion name for multiple custom functions
//


// Now the above example uses 2 seperate funtions using 2 different names
// In the following example we will use the SAME funtion name in 2 seperate functions, and we will do this using data types

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int mul_Score(int x, int y) {
cout << "\nWhen subtracting the function (mul_Score) you end up with:\n";
    return x - y;
} 

double mul_Score(double x, double y){
cout << "\nWhen multiplyings the function (mul_Score) you end up with:\n";
    return x * y;

}

int rand_Num = rand();  
int rand_Num_Two = rand(); 


int main(){ 

    cout << mul_Score(rand_Num,rand_Num_Two);
    cout << "\n";
    cout << mul_Score(23.3,2.4) << endl;
    cout << "\n";

/// the two (int)variables below will output the values of (rand_Num) and (rand_Num_Two)
//cout << rand_Num << endl;// variable value: 16807
//cout << rand_Num_Two << endl;// variable value: 282475249
////


return 0;
}

/* NOTE: Multiple functions can have the same name as long as the NUMBER and/or TYPE of parameters are different





