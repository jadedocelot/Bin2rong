	__-__--____----___---_____- -_--__ -

		   	  File Handling

	  	 ____-___--______-_---__-_


- A file is a collection of related records. It is used ti store data, information, commands, setting, etc.

- There are different types of computer files, designed for different purposes. It can store Python code, picture, video, text, or any kind of data

- Python has a built in support for file handeling	       

-------------------------------

file_one = open("abc.txt ")


--------------------------------

	- Int the fuction above we are using the open() function

	file_one = open(<path>,mode)

		-  The 1st parameter is the path of the file we are attempting to open 
		- the 2nf parameter is the mode, this will allow us to read "r", write "w", or append "a", and for reading and writing we can use "r+w". There ar different kinds of modes


file_one = open("abc.txt ", "w")
# "file_one" variable will open file "abc.txt" and "w"

file_one.write("This is python programming")
# This will open "abc.txt" and write the following string "This is python programming"



		__-___-___--_---__-__-_________-_-_-_----___-_-


							WITH


		__-___-___--_---__-__-_________-_-_-_----___-_-



		- How to open a file WITH



file_two = open("asshole_count.txt","w")
sumHole = 0

with open ("find_the_asshole.txt") as myfile:
	for x in myfile:
		for word in x.split():
			if word == "asshole":
				sumHole +=1

results ="There are ",sumHole," assholes in your text."

file_two.write(str(results))

file_two.close()

print("file 1 closed: ",myfile.closed)
print("file 2 closed: ",file_two.closed)





file_two = open("asshole_count.txt","w")
sumHole = 0

with open ("find_the_asshole.txt") as myfile:
	// We are opeing the "find_the_asshole.txt" with (WITH), and we may refer to this file in our syntax as 'myfile'.
	// This is the prefered method to opening files for it will always close said file at the end


	for x in myfile:
		for word in x.split():
			if word == "asshole":
				sumHole +=1

results ="There are ",sumHole," assholes in your text."

file_two.write(str(results))

file_two.close()

print("file 1 closed: ",myfile.closed)
print("file 2 closed: ",file_two.closed)



			__-___-___--_---__-__-_________-_-_-_----___-_-
			
			
						Writing text to a file 
			
			
			__-___-___--_---__-__-_________-_-_-_----___-_-



file_two = open("asshole_count.txt","w")
sumHole = 0

with open ("find_the_asshole.txt",'r') as myfile:
	for x in myfile:
		for word in x.split():
			if word == "asshole":
				sumHole +=1

str_int = str(sumHole)
results = ["There are ",str_int," assholes in your text."]

file_two.writelines(results)

file_two.close()

print("file 1 closed: ",myfile.closed)
print("file 2 closed: ",file_two.closed)
 




 			__-___-___--_---__-__-_________-_-_-_----___-_-
			
			
							reading from file 
			
			__-___-___--_---__-__-_________-_-_-_----___-_-


- In this segment we will focus on reading files;

with open("asshole_count.txt") as myfile:
	*  going forward we may refer to the open file above as "myfile"

- The first function we will soley read the file;
	print(myfile.read() 

OUTPUT:
There are 4 assholes in your text.
[Finished in 0.0s]


- The next one funtion will read out a specific number of characters within a read file

print(myfile.read(5))
 
OUTPUT:

There

	* If you were to enter in a larger number within the parameters like so, then you will the get everything within the file; 

		print(myfile.read(5000))


OUTPUT:

There are 4 assholes in your text


- The next file will read the LINE of the file;readline(size=-1, /) method of _io.TextIOWrapper instance
Read until newline or EOF.

Returns an empty string if EOF is hit immediately.


print(myfile.readline())

 	* now with the readline() method we can specify the number of characters we would like to read

 		print(myfile.readline(5))


 		OUTPUT:
 			There  


- The following reads multiple line as a list; 

	print(myfile.readlines())


	OUTPUT:

		['There are 4 assholes in your text.']
 

- The prefered method of printing each line (which I tunked of before the teacher taught me .........good grief)

	for line in myfile.readlines(): 
		print(line



 			__-___-___--_---__-__-_________-_-_-_----___-_-
			
			
						Tell and Seek Function
			
			__-___-___--_---__-__-_________-_-_-_----___-_-


				print(myfile.read())
				

				print(myfile.tell())	
					 - The .tell() function above will tell the current pointer position, after it is being read (ater exectuting the code above it.)

					 OUTPUT: 

						There are 4 assholes in your text.
						34

		- But what if you run the tell function before reading the file


						print(myfile.tell())
						print(myfile.read())
						print(myfile.tell())


				- Then you will get the position of the pointer before reading the file and after reading the file.


				OUTPUT:

					0
					There are 4 assholes in your text.
					34


				
				print(myfile.tell())
				print(myfile.read(5))
				print(myfile.tell())

				OUTPUT:
					0
					There
					5


	- The .seek() function

	myfile.seek(5,0)
	print(myfile.read(8))
	print(myfile.tell())


	OUTPUT:

		are 4 a
		13




	 print(myfile.read(10)) // read soley from myfile
	 print(myfile.tell()) // Print the current pointer
	 myfile.seek(0,2) // from last possition start from 0 to end 



	 OUTPUT:
	 	
	 	There are
	 	10

- Better understanding the .seek() function
	seek(cookie, whence=0, /) method of _io.TextIOWrapper instance
    Change stream position.

    Change the stream position to the given byte offset. The offset is
    interpreted relative to the position indicated by whence.  Values
    for whence are:

    * 0 -- start of stream (the default); offset should be zero or positive
    * 1 -- current stream position; offset may be negative
    * 2 -- end of stream; offset is usually negative

	
	 myfile.seek(0,2)
	 print(myfile.read())
	 print(myfile.tell())
	 myfile.write(" Hello")


	 asshole_count.txt now reads:

	 	There are 4 assholes in your text. Hello

- Getting an error with .seek()

Traceback (most recent call last):
  File "untitled.py", line 16, in <module>
    myfile.seek(1,2)
io.UnsupportedOperation: can't do nonzero end-relative seeks




 			__-___-___--_---__-__-_________-_-_-_----___-_-
			
			
								OS Module
			
			__-___-___--_---__-__-_________-_-_-_----___-_-


			import os
# Above we are imorting the OS module

os.rename("asshole_count.txt","ac.txt")
# with OS we are using the rename function to rename asshole_count.txt to
# ac.txt
	
	.rename(<file youd like to rename>,<New name>)


	* once syntax has been ex


- To remove a file

	os.remove("ac.txt") 
		* Once syntax has been executed then file will be removed

- To create a directory

	os.mkdir("python programs")


- And to see if a directory exists;

	print(os.path.isdir("test"))

		* This will return a boolean (True or False) 

- Now lets see if a file exists within the pathw

	print(os.path.isfile("ac.txt"))

		OUTPUT:

			 True (DDDDUUUUUHHHHH!!!!)


- eturn the name of the user logged in on the controlling terminal of the process. For most purposes, it is more useful to use getpass.getuser() since the latter checks the environment variables LOGNAME or USERNAME to find out who the user is, and falls back to pwd.getpwuid(os.getuid())[0] to get the login name of the current real user id.

			print(os.getlogin())


			OUTPUT:

				Edgar



TO LEARN MORE ABOUT OS MODULES!

https://docs.python.org/3/library/os.html#os.getlogin