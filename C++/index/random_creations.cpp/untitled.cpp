// untitled.cpp 

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){

string textScanner;

ifstream myReadFile("myFileTwo.cpp");

// Use then (While) loop together with the getline() function to read the file line 
    while (getline(myReadFile,textScanner)){
        cout << textScanner;    
    
    }

myReadFile.close();// Close the read file
// The sytax below creates a file
/*
    ofstream myFileTwo("myFileTwo.cpp");

    myFileTwo << "So I was able to create a C++ file with ofstream......Kinda cool" ;

    myFileTwo.close();
*/
} 
