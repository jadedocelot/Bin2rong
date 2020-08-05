1.1. Unpacking a Sequence Into Seperate Variable

# Problem: 
## You have an N-element tuple or sequence that you would like to unpack into a collection of N-variables

#Soulution: 
Any sequence (or iterable) can be unpacked into variables using a simple assignment operation. The only requirement is that the number of the variables and structure match the sequence. 

p = (3, 5)

x, y = p

print(x)# OUTPUT: 3
print(y)# OUTPUT: 5

# In the following example we will upack the list containing data on  Edgar into specific variables


#Below we will be accessing a (list)

edgarStat = ['male',28, 5.9,(1991,8,28)]

gender, age, height, birthDate = edgarStat



print(gender) #male
print(age) # 28
print(height) #5.9
print(birthDate) # 199,8,28

# Now we will break down the elements within the birth date so know which one is the day, month, and year:

#Below we will be accessing a (list)

edgarStat = ['male',28, 5.9,(1991,8,28)]

gender, age, height,(year,month,day) = edgarStat


print(year) #1991
print(month) # 8
print(day) # 28


#Note: That when going about this messge you MUST be precise on your variable assignements. Any signs of mismatch in numbers will lead to an error. 

z = (4,5)

x,y,j = z 

ERROR: 

 File "playground.py", line 3, in <module>
     x,y,j = z
     ValueError: not enough values to unpack (expected 3, got 2)

#Discussion: 
Upacking is something that works with any object that happens to be iterablem, not just tuples or lists (cause sets cant be touched?. This inlcudes strings, files, iterators, and generators.


greet = "Hello"

z,s,r,t,y = greet

print(z) #H 
print(s) #e
print(r) #l
print(t) #l
print(y) #o


# AND

greet = "Hello"

z,s,r,t,y = greet

print(s,r,t,y,z) # OUTPUT: e l l o H

# Fuck  it, you don't need that element any longer? Toss it out.
When unpacking, its possible to dispose of certain values. Python has no special syntax for this but you can often pick a throwaway variable name. However, make sure that the varibale name you pick isnt being used for something else:
___________---------________-----_____---____--__-_--_-_-_-__-_---_-_-_-_-_-_--_-_-__-_-_-________-----_____--____--_-_-_--_-_-__---_-_-_-__---_---_-_-________________--_-_-_-__-____-_________--__-_-_________-__-_-____________________

edgarsInfo = ["male",160,5.9, (8,28,1991)]

gender,_,_,birthDate = edgarsInfo

print(gender) # male
print(birthDate) # (8,28,1991)

#See how we've dumped dumped 2 elements of (edgarsInfo) into (_). Though again, when dumping values into "trash" variables, use one you are certain will not be or has been used.

 variables, use one you are certain will not be or has been used.


0-----------------------------------------------------------------------------------------Python_Cookbook-----------------------------------------------------------------------------------------------

1.2. Unpacking Elements from iterables of Arbitrary Length

#Problem:
You need to unpack N elements from iterable may be longer than N elements, causing a "too many values to unpack" exception. 


#Solution:
 Python "star expressions" can be used to address this problem.  n “star expressions” can be used to address this problem. For example, suppose you run a course and decide at the end of the semester that you’re going to drop the first and last homework grades, and only average the rest of them. If there are only four assignments, maybe you simply unpack all four, but what if there are 24? A star expres‐ sion makes it easy:

 def drop_first_last(grades):
    first, *middle, last = grades # *middle will aqu
    return avg(middle)

drop_first_last()

# As another use case, suppose you have user records that consist o a name and email address, followed by an arbitrary number of phone numbers. you can unpack like so: 

record = ('edgar','jadedocelot@gmail.com','949-735-3499','949-299-9011','714-233-2334')

name,email,main_phone,*backup_numbers = record 

print(name) #edgar
print(email) # jadedocelot@gmail.com
print(main_phone) # 949-735-3499
print(backup_numbers) # 949-299-9011, 714-233-2334

# Note that backup_numbers 


# Below you will see the following unpacking/star method used within a function that disassembles a tuple, removes the faulty values and replace it with new ones, and reconstructs the tuple

# Make your way into your econ professors grade database and replace your failing grades with passing grade. Once updated, grades must be returned as a tuple. Good luck. 

summerGrades = ("a","c","c","f","a",(0,0,0,0,100))

print(summerGrades)

def grade_correction():
    passOne, *_,passTwo,(*_,passThree) = summerGrades
    x = passOne,passTwo,passThree # Already a tuple
    y = list(x)
    y[1] = "b"
    y[2] = "b-"
    y.append("b")
    y.append("a")    
    y.append((89,79,83,88,100))
    x = tuple(y)
    print(x)
    #print(y)

    grade_correction()






#NOTE:
#current Grades:
# ['a', 'b', 'b-']

# Grades I want:  
# ["a","b","b-","b-","a",(89,79,83,88,100)]

