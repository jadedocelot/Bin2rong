from timeit import timeit

# Both funtions are doing the same exact things, so look into this

# The following functions will each be ran 1,000,000 times and then a timed estimate will be printed out
def while_test():
	i,sum = 0,0 	
	while i < 100:
		sum = sum+i
		i = i+1


def for_test():
	sum = 0 
	for i in range(100):
		sum = sum+1 


w = timeit(while_test)
print(w) #TIME: 9.164403591 (ran 1,000,000 times)
f = timeit(for_test)
print(f) #TIME: 5.171560569 (ran 1,000,000 times)

# Now that we know that by default that the timeit() function will run whatever function it is fed aboot 1,000,000. Though there is a way to specify the number of times it will run: 

w = timeit(while_test, number = 1000)
print(w) #TIME: 0.010104135000000625 (ran 1000 times)
f = timeit(for_test, number = 1000)
print(f) #TIME: 0.004389644999999831 (ran 1000 times)

# These will be great for when deciding which funtion will run quicker
