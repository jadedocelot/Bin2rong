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


										

									Read a File

- To read from a file, use  either the (ifstrea) or (fstream) object, and the name of the file. 

- NOTE: that we also use a (while) loop together with the getline() function (which belongs to the (ifstream) object) to read the file line by line, and to print the content of the file.

// Create a text string, which is used to output the text file
string myText;


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

//OUTPUT: //So I was able to create a C++ file with ofstream......Kinda cool#include <iostream>#include <string>using namespace std;int main(){string myGreet = "Hello CPP";cout << myGreet;return 0;} %   


// The sytax below creates a file
/*
    ofstream myFileTwo("myFileTwo.cpp");

    myFileTwo << "So I was able to create a C++ file with ofstream......Kinda cool" ;

    myFileTwo.close();
*/
} 
