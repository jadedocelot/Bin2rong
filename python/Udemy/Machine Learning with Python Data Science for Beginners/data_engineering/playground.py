import pandas as pd
import numpy as np

data = np.array([[1,2,3],[3,4,5],[4,5,6]])
df = pd.DataFrame(data)
# print(data)

df.columns = list('ABC')
# .columns will index index the array
# Now 'df' will consist of 3 columns   
# A = [1,2,3]
# B = [3,4,5]
# C = [4,5,6] 

def sumFunc(col):
    val = sum(col)/2
    return(val)

sumNew = sumFunc(df['B'] - 1)


if sumFunc(df['B']) <= 10.0:
    print("We gettin there")
    print(sumNew)
else:
    print("NULL")


#print(df['A'])