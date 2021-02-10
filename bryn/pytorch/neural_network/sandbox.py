import torch
import torch.nn.functional as F
import torch.nn as nn

fold = nn.Fold(output_size=(4, 5), kernel_size=(2, 2))
input = torch.randn(1, 3 * 2 * 2, 12)

output = fold(input)

output.size()
