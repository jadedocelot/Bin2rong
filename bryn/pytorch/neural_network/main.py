import torch.nn.functional as F
import torch.nn as nn

class Net(nn.Module):
	def __init__(self):
		super(Net,self).__init__()
		self.fc1 = nn.Linear(28 * 28,200)
		self.fc2 = nn.Linear(200,200)
		self.fc3 = nn.Linear(200,10)	

	def forward(self, x):
		x = F.relu(self.fc1(x))
		x = F.relu(self.fc2(x))
		x = slef.fc3(x)

		return F.log_softmax(x)



