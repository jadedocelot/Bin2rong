 ///////////////////////////////
 //		///
 // ///////   C++ Switch 
 ////	  /
 //////  ////////////
 /////  ///
     ///////
    //////////////////
   ///	 C++ Switch 
   /////
 //   ////////////////////
 //////

 // Use the (switch) statements to select one of many code blocks to be executed

switch (expression) {
case x; 
	 // code block
	break; 
case y;
	 // code block
	break; 
	default;
	// code block
}  

// This is how it works: 
	// The (switch) expression is evaluated once
    // The value of the expression is compared with the values of each (case)
	// If there is a match, the associated block of code is executed
    // The (break) and  (default) keywords are optional, and will be described later in this chapter


  #include <iostream>
   #include <string>
   #include <cmath>
  4 using namespace std;
  5
  6 int main() {
  7 int day;
  8 cout << "What day is it? ";
  9 cin >> day; // We have gone ahead and created a blank variable that will obtain info via (cinFriday)
 10
 11 switch (day) { // The switch expression will carry our (day) value and evaluate? Then compare it to each case and pull whichever block matches
             break;
 12     case 1:
 13         cout << "Monday";
 14         break; // This is used to break out of the switch, once match has been found then it will end the code
 15     case 2:
 16         cout << "Tuesday";
 17         break;
 18     case 3:
 19         cout << "Wednesday";
 20         break;
 21     case 4:
 22        cout << "Thursday";
 23         break;
 24      case 5:
 25        cout << "Friday";
 26         break;
 27      case 6: // Since 6 will be the int that has been entered in, this block of code will be pulled 
 28         cout << "Saturday";
 29         break;
 30     case 7:
 31         cout << "Sunday";
 32 }
 34 return 0;
 35  }


 The break keyword, it "breaks" out of the switch box 
 // but like, how can it break out if it doesnt have key! 
 // this will stop the execution of more code and case testing inside the block
 // When a match is found, and the job is done, it's time for a break. There is no need for more testing
///// NOTE: A break can save a lot of exectutions time becuase it "ignores" the execution of the rest of the code in the switch block.


                                                         
                    
                                                        The default Keyord

// The (default) keyword specifies some code to run if there is no case match; 
     #include <iostream>
     #include <string>
     #include <cmath>
  4 using namespace std;
  5
  6 int main() {
  7 int day;
  8 cout << "What day is it? ";
  9 cin >> day;
 10
 11 switch (day) {
 12     case 1:
 13         cout << "Monday";
 14         break;
 15     case 2:
 16         cout << "Tuesday";
 17         break;
 18     case 3:
 19         cout << "Wednesday";
 20         break;
 21     case 4:
 22        cout << "Thursday";
 23         break;
 24      case 5:
 25        cout << "Friday";
 26         break;
 27      case 6:
 28        cout << "Saturday";
 29         break;
 30     case 7:
 31        cout << "Sunday";
 32         break;
 33     default: // If a response does not match any of the cases then the response within the deafault will be pulled
 34        cout << "There is no match! sorry." << endl;
 35 }
 36
 37 return 0;
 38   T
 39 }


