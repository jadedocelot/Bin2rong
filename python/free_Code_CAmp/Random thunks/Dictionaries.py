#################################################################################################################
#################################################################################################################
#################################################################################################################

# EXAMPLE 1

# // This syntax counts the words within a sentences

counts = dict()

print('Enter in a line: ')
line = input('')
words = line.split() ## Variable splits 'line' into multiple elements which are then put into a linee
# INPUT: 

print('words: ', words)
print('counting...')

for word in words:  # word will itterate through words
	counts[word] = counts.get(word,0) + 1  #in itteration each word will be added to counts(dict())
	# then each element is counted and 'stamped' with its QTY
print('counts ', counts)

# OUTPUT: 
words:  ['This', 'is', 'a', 'line', 'in', 'which', 'I', 'would', 'like', 'to', 'know', 'how', 'many', 'of', 'each', 'word', 'resides', 'in', 'it,', 'if', 'that', 'makes', 'any', 'sense']

counting...

counts  {'This': 1, 'is': 1, 'a': 1, 'line': 1, 'in': 2, 'which': 1, 'I': 1, 'would': 1, 'like': 1, 'to': 1, 'know': 1, 'how': 1, 'many': 1, 'of': 1, 'each': 1, 'word': 1, 'resides': 1, 'it,': 1, 'if': 1, 'that': 1, 'makes': 1, 'any': 1, 'sense': 1}
#################################################################################################################
#################################################################################################################
#################################################################################################################

# EXAMPLE 2:

name = input("Enter file you'd like to search: ")
handle = open(name)

counts = dict() 
for line in handle: 
	words = line.split() 
	for word in words: 
		counts[word] = counts.get(word,0) + 1

bigCount = None 
bigWord = None  

for word,count in counts.items():
	if bigCount is None or count > bigCount:
		bigWord = word 
		bigCount = count 
print("Most used word is (number of times also included): ",bigWord,bigCount)
print(counts)

										###########
										## NOTES:##
										###########

name = input("Enter file you'd like to search: ")# Enter a file in which yould like to search
# try: // How can we include a custome error if incorrect file is entered
handle = open(name) # Opens said (input) file
# except: ///
	# print("There is no such file, please input another file name.")

counts = dict() # counts values a blank dictionary {}
for line in handle: # iteration (line) through (our input txt)
	words = line.split() # "words"(var) will each word into an element, then deposit each element our BLANK (dict) "counts"
	for word in words: # for iteration through our updated dict - iterration being "word"
		counts[word] = counts.get(word,0) + 1 # during iterration process each element will be counted - key and value will stored for final results

bigCount = None # bigCount = no value (hence None)
bigWord = None  # bigWord = no value (hence None

for word,count in counts.items(): # for loop iteration using key and value (similar to parameterss) 
# {"key:" value} 
	if bigCount is None or count > bigCount: # if will since since both variables dont carry a value
		bigWord = word # "word" iteration value will be stored into 'bigWord'
		bigCount = count # "count" iteration value will be stored into "bigCount" 
	# notice NO elif or else, why, NO need!

print("Most used word is (number of times also included): ",bigWord,bigCount) # print out final results
print(counts) # I included this myself to view dictiory with countQTY
# look up .items()

`# print("Most used word is (number of times also included): ",bigWord,bigCount)
# OUTPUT:Most used word is (number of times also included):  to 4

#print(counts)
# OUTPUT:
"""
{'This': 1, 'is': 2, 'a': 2, 'story': 1, 'that': 2, 'strived': 1, 'to': 4, 'no': 1, 'just': 2, 'be': 1, 'man': 1, 'but': 2, 'someone': 1, 'was': 1, 'worth': 1, 'somethings.': 1, 'Not': 1, 'those': 1, 'around': 1, 'him': 1, 'himself,': 1, 'he': 1, 'wanted': 1, 'value': 1, 'himself': 1, 'as': 2, 'much': 1, 'people': 1, 'valued': 1, 'currency.': 1, 'It': 1, 'possible,': 1, 'it': 1, 'will': 1, 'happen.': 1}
"""

#################################################################################################################
#################################################################################################################
#################################################################################################################

#EXAMPLE 3:

counts = {'Allison':1,'Meg':42,'Isebella':100}

for key in counts:
	if counts[key] > 10:
		print(key,counts[key])

# OUTPUT:
# Meg 42
# Isebella 100


#################################################################################################################
#################################################################################################################
#################################################################################################################