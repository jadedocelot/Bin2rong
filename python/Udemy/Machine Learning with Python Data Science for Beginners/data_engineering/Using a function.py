import pandas as pd
import numpy as np

data = np.array([[1,2,3],
               [199,233,219],
               [323,65,32],
               [99,32,11],
               [65,54,1]
               ])

# df will create a dataframe
df = pd.DataFrame(data)
# .column will add column names to our "df" dataframe
# which will be A, B, C
df.columns = list("ABCDE")

# The 
def functions1(col):
    val = sum(col)/2
    return(val)

print(functions1(df["A"]))

'''
This function adds all the values in the array
and returns the half of the sum
'''
# NOTE Output:
# 345.3 