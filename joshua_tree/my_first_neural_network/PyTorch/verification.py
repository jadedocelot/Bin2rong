import torch
x = torch.rand(5, 3)
# y should create a tensor of 0s
y = torch.Tensor(3, 5)

print(y)