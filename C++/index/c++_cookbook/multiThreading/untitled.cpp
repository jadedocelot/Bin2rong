			  // Multi Theading 
// In this project we will be writing multithreaded programs in c++ using the BOOST threads library
// Multi threading allows the user to perform parallel computing efficientlys

// Boost threads enables the use of multiple threads of execution with shared data in portable C++

//Multithreading iis the ability of a CPU (central processing unit) to provide multiple threads of execution concurrently, supported by the operating system

//You want to create a thread to perform some task while the main thread continues its work.

// C++ contains no NATIVE support for multithreading

// THREADS
 /* 
 - Threads share the parent process address space along with any other threads the process created
	
	* Threads are considered lightweight data structures compared to processes (They consume less memory than a process) 

	* The programmer has NO control over which thread accesses a variable in the process and when it accesses that variable
		- This is because the OS has "scheduler" schedules proccesses and schedulers accoring to its algorithm
		- So always remember that a scheduling algorithm is dependent on the OS
*/

/// AMAZON and FACEBOOK make it a priority to utilize multithreading, for if not that the user would have to wait for the server to respond to EVERY request from every visiter of the site.  

// MULTITHREADING SUMMARY
/*
 Multi-threading is a lightweight way of saying to the operating system these are the different things I want running on the computer, whether its part of one program or multiple threads through multiple programs and the operating systems choosing which one of them actually gets CPU times on any of the CPU calls
*/ 


#include<iostream>
#include<cmath>
#include<string>
using namespace std;


int main(){
// float ARMOR = 72.3f; - <- was working on pointers
// float* x = &ARMOR;  - <- was working on pointers

cout << x;


return 0;	
}
  