                                                          C++ While loops                                    

// Loops can execute a block of code as long as a specified condition is reached
// Loops are handy becuase they save time, reduce errors, and they make code more readable
////////////
/////   ////
///     ////
//////  ///
///   ////
/////  ///
/////  ///
///   ///
///   ///
///  ///
//  ///
//  ///
//////


// The (while) loop loops through a block of code as long  as an specified condition is true:                                                           

while(condition) {
    // code block to be executed
 
 }
   #include <iostream>
   #include <string>
   #include <cmath>
   using namespace std;
  
   int main() {
   int i = 0;
       while(i < 6){ // Number of times the loop will repeat itself 
           cout << i << "\n";
          i++;
      }
       
  return 0; 

  } 

//OUTPUTL: 
// 0
// 1
// 2
// 3
// 4
// 5  





// NOTE: Do not forget to increase the variables and the condition, otherwise the loop will never end. 


 // We can now use --i to count down backwords 
    #include <iostream>
    #include <string>
    #include <cmath>
    using namespace std;
   
    int main(){
    int i = 5;
       while(i > 0){
            cout << i << "\n";
           i--;
       }
  
   return 0;
    }

 //OUTPUT:
  // 5
  // 4
  // 3
  // 2
  // 1
  

                                            C++ Do/WHILE Loop 
 
// The do/while loop is a variant of the (while) loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true
// do/ while = variant of (while) loop

do {
// code block to be executed
 }

while(condition); 


// The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested;
_________________________________
   #include <iostream>
   #include <string>
   #include <cmath>
  
    using namespace std;
       
    int main() {
    int i = 0;
       do {
         cout << i << "\n";
         i++;
        }
         while (i < 5);
    return 0;
  
  }  
     ////////////
    // OUTPUT: ///
    // 0  ///////
    // 1 ///
    // 2 ///
    // 3 ///
    // 4 ///
    // 5 ///  
    ///////

// Do not forget to increase the variable used in the condition, otherwise the loop will never end.1


