// untitled.cpp 
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std; 

int main(){

ofstream myFile("fstream.txt");

myFile << "Finally, accessing and creating files through C++ syntax.....wicked";

myFile.close();

}