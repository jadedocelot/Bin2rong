#import sys
#print(sys.getrecursionlimit()) # 1000 (NOT USEFUL)


#def tri_recursion(k):
#    if (k < 10):
#        result = k - tri_recursion(k+1) #The first cycle will deduct (k) and 1 will be deducted from said (k) amount with cycle 
#        print(result)
#    else: 
#        result = 0
#    return result

#print("\n\nRecursion Example Results")
# tri_recursion(3) # Number of times counting through the recursion

  
# 	Recursion Example Results
# 9
# -1
# 8
# -2
# 7
# -3
# 6


def hanoi (n,f,h,t):
	if n== 0:
		pass
	else: 
		hanoi(n-1,f,t,h)
		move(f,t)
		hanoi(n-1,h,f,t)

hanoi(4,"A","B","C")