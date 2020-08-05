# Python NOTE 


* Recursions

1. problem 1:

def tri_recursion(k):
    if (k < 10):
        result = k - tri_recursion(k+1) #The first cycle will deduct (k) and 1 will be deducted from said (k) amount with cycle 
        print(result)
    else: 
        result = 0
    return result

print("\n\nRecursion Example Results")
tri_recursion(3) # Number of times counting through the recursion

i

#OUTPUT:
#Recursion Example Results
# 9 /// 
# -1  //
# 8  //
# -2  //
# 7 // 
# -3 //
# 6 //

# HOW IT WORKS:

  
