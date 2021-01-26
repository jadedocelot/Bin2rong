# GO in Action


## Chapter 1 

- Languages like C and C++ offer fast execution, whereas languages like Ruby and Python offer development. GO bridges these competing worlds and offers a high performance language features that makes development fast.

- GO has a concise syntax

- GO has an UBER fast compiler

- GO also has a "garbage collector", so you dont have to manage your own memory 

Lets take quick look at some of the key featurs. 


~### Development Speed

- GO offers lightning quick compiles (unlike C and C++ which can take up a large amount of your time to compile a large program)

	* When you build a GO program, the compiler only needs to look at the libraries that you directly include, rather than traversing the dependencies of all the libraries that are included in the entire dependency chain (like Java, C and C++).

	THIS SHIT IS DYNAMIC!

- Writting applications in a dynamic language makes you more productive but the trade off is that dynamic languages dont offer the type of safety that static languages do and often need comprehensive test suite to avoid discovering incorrect type bugs at runtime.

### Cocurrency

* One of the hardest things to do as a programmer is to write an application that effectively uses the available resources of the hardware running it. 

- Goroutines are like threads, but use far less memory and require less code to use.

### GoRoutines

- Goroutines are functions that run concurrently with other goroutines

- Each inbound request automatically runs on its own GoRoutine 

- Goroutines use less memory than threads and the Go runtime will automatically schedule the execution of Goroutines against a set of configured logical processors. 
