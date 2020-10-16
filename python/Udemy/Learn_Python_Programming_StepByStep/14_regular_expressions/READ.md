				_----__-__--___-__--_------_-_--_---__--
					
							Regular Expression

				 _----__-__--___-__--_------_-_--_---__--


- A regular expression is a sequence of character mainly used to find and replace patterns in a string or file. 

- In Python re module is used for regular expressions


- The applications that require regular expressions are as follows; text processing, data validation, data scrapping, and parsing (mainly used in parsing)

	import re 

		- the above is the regular expression module that has to be imported


import re ---import the re module

x = "this is how we find the path to python"

print(re.match("this",x)) 

-- re.match() -- will locate the first word of the string
-- Otherwise it will return NONE

OUTPUT:
<re.Match object; span=(0, 4), match='this'>
___________________________________________________________________________

- now note that re.match will only search the first word of your string
	* So if you entered print(re.match("python",x)); you would get NONE

- If you wanted to search the entire string, you would need to use the following: 

print(re.search("python",x))

OUTPUT:
<re.Match object; span=(32, 38), match='python'>

___________________________________________________________________________

print(bool(re.search("python",x)))

OUTPUT:
True

- with bool we can see if it something is within a string, we will either get back a True or False

___________________________________________________________________________

- Now we will find ALL the specified words within a string

import

x = "this is how we find the path to python python python"

print(re.findall("python",x))


OUTPUT:
['python', 'python', 'python']


- As you can see python has located 3 'python within x

___________________________________________________________________________

- In the exmaple below we will find all the numbers within the string

x = "this is how 32 we find the path to python 100 python python 2.3"

 print(re.findall("\d",x))

 - "\d" means NUMBERS 0-9

 output:

 ['3', '2', '1', '0', '0', '2', '3']

___________________________________________________________________________

- Now we will use a FOR loop using re.findall to print out all the numbers within x;

		
		for numnum in re.findall("\d",x):
			print(numnum)

OUTPUT:

		3
		2
		1
		0
		0
		2
		3



for numnum in re.findall("\d",x):
	print(numnum, end=" ")

OUTPUT:

	3 2 1 0 0 2 3

___________________________________________________________________________

- Now if we use upper d like so (\D);
- Python will print out every charater within the string except the integegers


for numnum in re.findall("\D",x):
	print(numnum, end=" ")


OUTPUT:

t h i s   i s   h o w     w e   f i n d   t h e   p a t h   t o   p y t h o n     p y t h o n   p y t h o n   .

___________________________________________________________________________

- "\w" will return anything from the following; 0-9,A-Z, _. 
- Anything else will not appear 

x = "_this is how 32 we find the path to python 100 python python 2.3"

print(re.search("\w",x))


OUTPUT:

<re.Match object; span=(0, 1), match='_'>

- To print only charaters that are NOT 0-9,A-Z, and _ Use the following;


		for numnum in re.findall("\W",x):
			print(numnum, end=" ") 


OUTPUT:

&                           . % 


- The following locates all SPACES;

	for numnum in re.findall("\s",x):
		print(numnum, end=" ")


- UPPERCASE S is other than space

	\S


- Other than new line

\.


- Say you are looking for a word that youre not sure is uppercase, well in this case we would need to be case insecitive;

x = "&_this is how 32 we find the path to python 100 python python 2.3"

print(re.search("PythOn",x,re.I))

output:

<re.Match object; span=(37, 43), match='python'>

	* (re.I) means case incesitive


- Or maybe you dont know exactly what you're looking for; 



print(re.search("python | java",x))


OUTPUT:
<re.Match object; span=(37, 44), match='python '>

___________________________________________________________________________




				_----__-__--___-__--_------_-_--_---__--
					
								Qualifiers

				 _----__-__--___-__--_------_-_--_---__--


-   Quantifier tells the regex engine to match a certain qautity character

	? : 0 or 1 times
	+ : 1 or more times 
	* : 0 or more times
	{m,n} : m to n times 