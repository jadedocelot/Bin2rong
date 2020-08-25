# searching for lines to split in mbox_search.txt

fhand = open('mbox_search.txt')
for line in fhand:
	line = line.rstrip()
	if not line.startswith('From ') : continue
	words = line.split()
	metaSplit = words[1]
	print('\n')
	print(metaSplit)
	print('\n')
	print(words) 
	# print(words[2])



"""
OUTPUT:

['From', 'stephen.marquez@uct.ac.za', 'Sat', 'Jan', '5', '09:14:16', '2008']


Sat
"""