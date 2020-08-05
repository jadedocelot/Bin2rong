/* UNDERSTAND C++ SYNTAX */
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!"; /* <-- OBJECT?*/ 
    return 0;
}

/* HEADER FILES */
/* LINE 2 */ 
    #include <iostream>
      /* This is the HEADER FILE for the (library)*/ 
        /* - This lets us work with input and output objects, like: */
            cout /*LINE 7*/ 
      /* Header files add functionality to C++ programs*/ 

/* LINE 3 */ 
    using namespace std;
     /*This means that names can be used for objects and varaiables from the standard library  */

/* NOTE that (#include <iostream>) & (using namespace std) will ALWAYS appear in your program */ 

/* LINE 4*
    /* Blank space, C++ ignores white space */ 

/* LINE 5*/ 
    int main(){

    }
        /* This is called a function, any code within the brackets({}) will be executed
        /* NOTE Another syntax that will always be included in your code*/ 

/* LINE 6 */
    cout /* Pronounced "see-out" */
        /* is an (object)used together with the (insertion) operator*/(<<)/* To output/print text. Like the following*/         
            Hello World!

                // You can add as many 
                cout
                // as you want. Note that it does not insert a new line at the end of the output; 
                #include <iostream>
                using namespace std;

                int main() {
                cout << "This is the first sentence that I'd like to present you with. ";
                cout << "And this the second that will follow the first";
                return 0;

                    //This is the first sentence that I'd like to present you with. And this the second that will follow the firs

                }
                    



/*NOTE that every C++ statement starts with a semicolon (;)/
    /* EXAMPLE: */ 
    cout << "Hello World!";
    return;

/* NOTE the body of */ 
    int main () {

    }
    /* can also be written out like so; */
        #include <iostream>
        using namespace std; 

        int main() { cout << "Hello ya Fucking Animal!"; return 0; }

/* NOTE that the compiler ignores whitespace. HOWEVER, mroe lines makes the code more readable */

/* LINE 7 */ 
return 0; 
/* This ends the main function */ ¡

/*NOTE never forget to use closing brackets*/

/* Omitting Namespace ANCHOR */
    /* You might see some C++ programs that runs without the standard namespace library*/ 
        using namespace std;
        /*The STD line can be omitted and replaced with the (std) keyword, followed by the*/ (::)/*operator for some objects. Like so:*/
        #include <iostream>

        int main() {
        std::cout << "Hey cunt!";
        return 0;
        }


/* ANCHOR C++ New Lines */
    \n
    // To insert a new line, you can use \n character
    #include <iostream>
    using namespace std;

    int main() {
    cout << "This is the first sentence that I'd like to present you with. \n";
    cout << "And this the second that will follow the first";
    return 0;

    }

    // NOTE that two /n/n will create a blank line

// Another way to insert a new line, is with the:
    end1 // Manipulator
    
    #include <iostream>
    using namespace std;

    int main() {
    cout << "Hello! My name is Edgar." << endl;
    cout << "And I am currently learning C++ and Python";
    return 0;
 }

// OUTPUT: Hello! My name is Edgar.
//         And I am currently learning C++ and Python

