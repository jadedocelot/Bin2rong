 	 		C++ Files 

- fstream library allows us to with files (#include <fstream>)

- There are. three objects inluded in the fstream library, which are used to create, write or read files:

	<ofstream>  Creates and writes to files
	<ifstream> Reads from files
	<fstream> A combination of <ofstream> and <ifstream>: Creates, reads, and writes to files


	Create and write to a file: 

	- To create a file, use either the <ofstream> or <fstream> object, and specify  the name of the file
	- To write to the file, use the insertion operator (<<)

// untitled.cpp 
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std; 

int main(){
// Create and open txt file
ofstream myFile("fstream.txt");
// Write to the file
myFile << "Finally, accessing and creating files through C++ syntax.....wicked";
// close the file
myFile.close();

}


/// CONTINUE ON THIS