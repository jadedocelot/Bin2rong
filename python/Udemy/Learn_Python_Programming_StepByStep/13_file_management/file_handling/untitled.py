with open("asshole_count.txt","r+") as myfile:
	# print(myfile.read())
	# print(myfile.read(5000))
	
	#print(myfile.readline)
	#print(myfile.readline())

		# help(myfile.readline)
	
	# print(myfile.readlines())

	# for line in myfile.readlines(): 
		# print(line)

	#print(myfile.tell())
	 myfile.seek(0,1)
	 print(myfile.read())
	 print(myfile.tell())
	 myfile.write(" Hello")
	 #myfile.seek(0,2)

	# help(myfile.seek)

