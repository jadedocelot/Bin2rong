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