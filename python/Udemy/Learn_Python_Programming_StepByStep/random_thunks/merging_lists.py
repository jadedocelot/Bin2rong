lstEven = [2,4,8,10,12,14,16,18,20]
lstOdd = [3,5,7,9,11,13,]

sublst = lstEven,lstOdd 
sumlst = lstEven + lstOdd 

# print(sublst)
# print(sumlst)

# OUTPUT:
# ([2, 4, 8, 10, 12, 14, 16, 18, 20], [3, 5, 7, 9, 11, 13])
# [2, 4, 8, 10, 12, 14, 16, 18, 20, 3, 5, 7, 9, 11, 13]

# print(lstEven[1:5])

splitLst = lstEven[1:5],lstOdd
sumSplit = lstEven[1:3] + lstOdd

print(splitLst)
print(sumSplit)

# OUTPUT:
# ([4, 8, 10, 12], [3, 5, 7, 9, 11, 13])
# [4, 8, 3, 5, 7, 9, 11, 13]
