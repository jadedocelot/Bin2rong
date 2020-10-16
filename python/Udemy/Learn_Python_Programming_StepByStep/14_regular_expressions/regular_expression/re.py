# Please see the chapter READ.MD for notes
# The exmaples below present exaples of regular expressions

import re

x = "&_this is how 32 we find the path to python 100 python python 2.3"

#print(re.match("python",x))
# <re.Match object; span=(0, 4), match='this'>

#print(re.search("python",x))
# <re.Match object; span=(32, 38), match='python'>

#print(bool(re.search("python",x)))

# with bool we can see if it something is within a string, we will either get back a True or False
# True

#print(re.findall("python",x))

#print(re.findall("\D",x))

#for numnum in re.findall("\s",x):
	#print(numnum, end=" ")

#print(re.search("\W",x))


#print(re.search("PythOn",x,re.I))


print(re.search("python | java",x))