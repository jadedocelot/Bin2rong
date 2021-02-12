import torch.nn.functional as F
import torch.nn as nn


m = F.Logsoftmax()

input = torch.randn(2,3)
output = m(input)