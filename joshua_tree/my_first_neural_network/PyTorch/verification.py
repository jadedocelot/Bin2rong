import torch
x = torch.rand(5, 3)
# y should create a tensor of 0s
y = torch.Tensor(3, 5)	
d_add = torch.tensor(some_list, device=device)
d_count = torch.cuda.device_count()
d_name = torch.cuda.get_device_name(device_id)

# ONE tensor
r = torch.ones (5,5) * 5

# print(r)
# print(x)
print(d_name)
print(d_count)