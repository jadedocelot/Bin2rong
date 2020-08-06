//d C has several types of varibles, but there are FEW basic types:
    - Integers: Whole numbers which can either be negative or positive.
        * Defined using char, int, short, long, or long long
    - Unsigned Integers: Whole numbers whihc can only be positive.
        * Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long
    - Floating Point Numbers: real numbers (numbers wiht fractio
   

    - A char can range only from -128 to 127
        - whareas long can range from -2,147,483,648 to 2,147,483,647 (long and other numeric data types may have another range on different conputers)

- NOTE: C does not have a boolean type. Usually, its defined using the following notation.

        #define BOOL char 
        #define FALSE 0 
        #define TRUE 1
    
    - C uses arrays of chatacters to define strings, and will be explained in the Strings section




                                                                *Defining Variables*
-  for numbers we use int which is an integer (like C++), which an integer is the size of a "word".

    - To define a Variable, you need to use the following syntax: 
                    int foo; // variable with no value and is not initialized which means, that a value can be popped later down the road (the road of code that is)
                    int bar =  1; // variable with the value of (1)

                    EXAMPLE:
                    __________


                    #include <stdio.h> // Directory

                    int main(){
                    int a = 1, b = 32, c = 5, d = 12; // integer variable consisting of several valued keywords
                    a = a + c + b * d;  // variable with a mathmatic equation as its value
                    
                    printf("%d",a);
                    
                    return 0;   
                    }


                            NOTE: FORMAT SPECIFIERS within printf
                    


                        OUTPUT: 
                            
                            43.946003


                    __________
                            
                    EXAPLE 2:
                    __________

                    #include <stdio.h>

                    int main() {
                    
                    int a = 12; 
                    float b = 3.4;
                    double c = 5.11;
                    float sum;   /// You can also do the following:  float sum = (a - b) * c;
                    
                    sum = (a - b) * c;
                    
                        printf("%f\n",sum); // "%f is a FLOAT specifier"
                    
                    
                    return 0; 
                    } 
                    