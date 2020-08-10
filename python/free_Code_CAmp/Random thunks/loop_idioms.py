smallest = None 

print("Before:", smallest)
for intervar in [7,25,66,2,14]:
    if smallest is None or intervar < smallest: 
        smallest = intervar
    print("Loop: ",intervar, smallest)
print("Smallest:",smallest)
