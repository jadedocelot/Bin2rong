import torch
x = torch.rand(5, 3)
# y should create a tensor of 0s
y = torch.Tensor(3, 5)	

# ONE tensor
r = torch.ones (5,5) * 5

print(r)