import torch.nn.functional as F
import torch.nn as nn

class Net(nn.Module):
	def __init__(self):
		super(Net,self).__init__()
		self.fc1 = nn.Linear(28 * 28,200)
		self.fc2 = nn.Linear(200,200)
		self.fc3 = nn.Linear(200,10)	


