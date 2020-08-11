message = "My introduction to cyphering with Python"
translated = ''
i = len(message) -1

while i >= 0:
	translated = translated + message[i]
	print('i is', i, ', message[i] is', message[i], ', translated is',translated)
	i = i - 1
print(translated)


"""
i is 39 , message[i] is n , translated is n
i is 38 , message[i] is o , translated is no
i is 37 , message[i] is h , translated is noh
i is 36 , message[i] is t , translated is noht
i is 35 , message[i] is y , translated is nohty
i is 34 , message[i] is P , translated is nohtyP
i is 33 , message[i] is   , translated is nohtyP
i is 32 , message[i] is h , translated is nohtyP h
i is 31 , message[i] is t , translated is nohtyP ht
i is 30 , message[i] is i , translated is nohtyP hti
i is 29 , message[i] is w , translated is nohtyP htiw
i is 28 , message[i] is   , translated is nohtyP htiw
i is 27 , message[i] is g , translated is nohtyP htiw g
i is 26 , message[i] is n , translated is nohtyP htiw gn
i is 25 , message[i] is i , translated is nohtyP htiw gni
i is 24 , message[i] is r , translated is nohtyP htiw gnir
i is 23 , message[i] is e , translated is nohtyP htiw gnire
i is 22 , message[i] is h , translated is nohtyP htiw gnireh
i is 21 , message[i] is p , translated is nohtyP htiw gnirehp
i is 20 , message[i] is y , translated is nohtyP htiw gnirehpy
i is 19 , message[i] is c , translated is nohtyP htiw gnirehpyc
i is 18 , message[i] is   , translated is nohtyP htiw gnirehpyc
i is 17 , message[i] is o , translated is nohtyP htiw gnirehpyc o
i is 16 , message[i] is t , translated is nohtyP htiw gnirehpyc ot
i is 15 , message[i] is   , translated is nohtyP htiw gnirehpyc ot
i is 14 , message[i] is n , translated is nohtyP htiw gnirehpyc ot n
i is 13 , message[i] is o , translated is nohtyP htiw gnirehpyc ot no
i is 12 , message[i] is i , translated is nohtyP htiw gnirehpyc ot noi
i is 11 , message[i] is t , translated is nohtyP htiw gnirehpyc ot noit
i is 10 , message[i] is c , translated is nohtyP htiw gnirehpyc ot noitc
i is 9 , message[i] is u , translated is nohtyP htiw gnirehpyc ot noitcu
i is 8 , message[i] is d , translated is nohtyP htiw gnirehpyc ot noitcud
i is 7 , message[i] is o , translated is nohtyP htiw gnirehpyc ot noitcudo
i is 6 , message[i] is r , translated is nohtyP htiw gnirehpyc ot noitcudor
i is 5 , message[i] is t , translated is nohtyP htiw gnirehpyc ot noitcudort
i is 4 , message[i] is n , translated is nohtyP htiw gnirehpyc ot noitcudortn
i is 3 , message[i] is i , translated is nohtyP htiw gnirehpyc ot noitcudortni
i is 2 , message[i] is   , translated is nohtyP htiw gnirehpyc ot noitcudortni
i is 1 , message[i] is y , translated is nohtyP htiw gnirehpyc ot noitcudortni y
i is 0 , message[i] is M , translated is nohtyP htiw gnirehpyc ot noitcudortni yM
"""