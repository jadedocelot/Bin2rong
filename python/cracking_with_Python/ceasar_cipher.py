# The Caesar Cipher

import pyperclip

message = 'This is my secret message.'

key = 13

mode = 'encrypt' 

SYMBOLS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?.'

translated = ''

for symbol in message:
	if symbol in SYMBOLS:
		symbolIndex = SYMBOLS.find(symbol)
		if mode == 'encrypt':
			translatedIndex = symbolIndex + keys
		elif mode == 'decrypt':
			translatedIndex = symbolIndex - key 

		if translatedIndex >= len(SYMBOLS):
			translatedIndex = translatedIndex - len(SYMBOLS)
		elif translatedIndex < 0:
			translatedIndex = translatedIndex + len(SYMBOLS)

		translated = translated + SYMBOLS[translatedIndex]	
	else:
		translated = translated + symbol


print(translated)
pyperclip.copy(translated)



# CODE WITH NOTES BELOW:



import pyperclip

# CHAR = characters

# The messagge to be encrypted/decrypted:
 # message = 26 CHARS
message = 'This is my secret message.'

# The encrypt/decrypt key:
key = 13

# Whether to encry/decr code
mode = 'encrypt' 
# mode = 'decrypt'

#Constant variable
	#'SYMBOLS' variable is in all upercase to indicate that var is a constant
#Every possible symbol that can be encrypted
# len(SYMBOLS) =  66
SYMBOLS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 !?.'

#Store the encr/decry form of message
# the blank variable will store our code down the road
translated = ''

for symbol in message:
	#only symb in SYMBOLS str can be encr/decry
	if symbol in SYMBOLS:
		symbolIndex = SYMBOLS.find(symbol) # 65 CHAR
			# New variable
			# symbolIndex = 65
		# perform encry/decryp  
		if mode == 'encrypt': # <- default selection
			translatedIndex = symbolIndex + key
		elif mode == 'decrypt':
			translatedIndex = symbolIndex - key
				# new variable 
				# translatedIndex = 78

		# Handle wraparound if needed 
		if translatedIndex >= len(SYMBOLS): # <- Current selection
			translatedIndex = translatedIndex - len(SYMBOLS)
				# The above is (TRUE) since (translatedIndex) = 78 characters
					# which is greater len(SYMBOLS)
						#NOW, (translatedIndex) = 12
		elif translatedIndex < 0:
			translatedIndex = translatedIndex + len(SYMBOLS)

		translated = translated + SYMBOLS[translatedIndex] #<-STR concentration	
	else:
		translated = translated + symbol

# Output the translated string
print(translated)
pyperclip.copy(translated)


# OUTPUT: guv6Jv6Jz!J6rp5r7Jzr66ntrM
	# output is 26 characters 

# OUTPUT (when mode is 'decrypt'): GUVfxVfxZlxfRPeRgxZRffNTR1



# NOTES:
"""
- Although Python includes many built-in functions, some functions exist in separate programs called (MODULES).

- Modules are Python programs that con- tain additional functions that your program can use

-  We import modules with the appropriately named import statement, which consists of the import keyword followed by the module name.

- Symbol is a common term used in cryptography for a single character that a cipher can encrypt or decrypt 
s
- An in operator can connect two strings, and it will evaluate to True if the first string is inside the second string or evaluate to False if not. The in
operator can also be paired with not, which will do the opposite. Enter the following into the interactive shell:

"""

