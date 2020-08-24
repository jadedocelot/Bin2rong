# Untitled.py

def spam():
	global eggs
	eggs = 'spam'

def bacon():
	eggs = 'bacon'

def ham():
	print(eggs)

eggs = 42
spam()
bacon()
ham()
print(eggs)