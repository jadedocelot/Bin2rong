# The import was successful due to inlcude (__init__.py in function directory)
# If syntax was included in the (functions) __init__.py, then that input would be included in the OUTPUT for main.py, this is because we are importing that file within functions
#
# ===================================================================================================================

# LINE 7: We no longer need to include (.math), for we have include that file import in __init__.py within the /functions
from functions import add
# LINE 2: import add (function) from math.py which is located in the (functions) directory
# from functions.math import add 


#LINE 5: calls the add function and uses 20 and 9 as its arguments

print(add(20,9))
