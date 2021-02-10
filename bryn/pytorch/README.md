# 4 Layer Neural Network
	- Our NN will be fully connected and will analyze the MNIST dataset.
	- The input layer will have 28 x 28 (= 784) greyscale pixels which make up the MNIST dataset

	-  Onece the data has been received at the input layer, it will propogate through two hidden layers, each having 200 nodes

	- The nodes will use the ReLu activation function.

			* ReLu (Rectified Linear Activated Function): A linear function that will output the input directly if it is a positive
			otherwise, it will output zero
			 - It has become the default activation function for many types of neural networks becuase the model it uses is easier to train and ofter achieves better performance.

