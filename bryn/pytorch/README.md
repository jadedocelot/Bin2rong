# See (and run) main.py for code in its entirety without notes

# 4 Layer Neural Network
	- Our NN will be `ully connected and will analyze the MNIST dataset.
	- The input layer will have 28 x 28 (= 784) greyscale pixels which make up the MNIST dataset

	-  Onece the data has been received at the input layer, it will propogate through two hidden layers, each having 200 nodes

	- The nodes will use the ReLu activation function.

			* ReLu (Rectified Linear Activated Function): A linear function that will output the input directly if it is a positive
			otherwise, it will output zero
			 - It has become the default activation function for many types of neural networks becuase the model it uses is easier to train and ofter achieves better performance.

	- The output layer will have 10 nodes which will represent the 10 classes to which each digit belongs to.



	### The Neuaral Network Class

	- The creation of a Neural Network in Pytorch is done via the (nn.Module) 
		* This is a BASE class, and we use inhertnaces to access it.


				import torch.nn.functional as F
				import torch.nn as nn
				
				class Net(nn.Module):
					def __init__(self):
						super(Net,self).__init__()
						self.fc1 = nn.Linear(28 * 28,200)
						self.fc2 = nn.Linear(200,200)
						self.fc3 = nn.Linear(200,10)	

So if you're like me, you're probaly think ing to yourself, "What the FUCK is going on above????". Well, lets find out, together.

* We import the nn.Module class through the inheritance.

	class Net(nn.Module):

* In the first line of our inititialization,

	def __init__(self)

* We ahve the super() function. This will create an instance of a base class, this is, the nn.module.

	super(Net,self).__init__()

* The next three lines have then been used to create fully connected layers of neural networks

-	The nn.Linear object represents a fully connected	

	self.fc1 = nn.Linear(28 * 28,200)
	self.fc2 = nn.Linear(200,200)
	self.fc3 = nn.Linear(200,10)

* The first argument in this definition denotes the number of nodes in a layer

	self.fc1 = nn.Linear(28 * 28,200)

* The next argument denotes the number of nodes in the layer l + 1. 

- The first layer will take 28 * 28 input pixels and it will connect to the first 2oo hidden node layers. 

* We then have 200 to 200 hidden layers then a connection between the hidden layer and the output layer with a total of 10 nodes

	self.fc3 = nn.Linear(200,10)

## At this point we have created a skeleton of our network achitecture

- Now we will need to establish how the data will flow through the network. This will be done adding te foward() method to our class. Which  will overwrite the dummy method in our base class, and this should be defined for every network.


	def forward(self, x):
		x = F.relu(self.fc1(x))
		x = F.relu(self.fc2(x))
		x = self.fc3(x)

		return F.log_softmax(x)

- In the forward method above, we have passed the input data (x) to be th primary argument

* This has been fed into the first fully connected layer

	x = F.relu(self.fc2(x))

- A ReLu activation function has then been applied to the nodes in the layer via F.relu()

* The network is hierarchial in nature, hence we have added x at every stage, so that it can be fed into the next layer




