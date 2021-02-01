# Thinly wrapped version of NumPy 
# Below is a simple example of using an open-ended loop to compute the sine function
import autograd.numpy as np
from autograd import grad

# Taylor approximation to sine funtion
def taylor_sine(x):
    ans = currterm = x
    # OG i
    #i = 0
    # i below is our fuckaround variable
    i = 5
    while np.abs(currterm) > 0.001:
        currterm = -currterm * x**2 /((2 * i + 3) * (2 * i + 2))
        ans = ans + currterm
        i += 1
    return ans

grad_sine = grad(taylor_sine)
print("Gradient of sinpie is ",grad_sine(np.pi))
# print("Hello Autograd!")