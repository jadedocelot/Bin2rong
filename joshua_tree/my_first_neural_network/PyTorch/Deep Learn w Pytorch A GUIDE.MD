# Why Pytorch for Deep Learning

################################################################################

 * Pytorch is a library based on Python developed to implemet flexibility regarding the 	developemnt of deep learning.

- Why should you used Pytorch to build deep learning models?

 * Simplicity of use it is a simple API to use
 * Dynamic computation graphs it comes with a framework which we can use to build computation graphs with specific functionalities.

# Tensors

- Tensors are data structures that look like martrices and they are very critical components for effient computation in deep learning.

	* GPUs (Graphical Processing Units) are very effective when it comes to performing operations bewtween tensors.

 - Earlier we used the following example:

	import torch
	x = torch.rand(5, 3)
	print(x)

* There are various ways through which we can declare Tensors in PyTorch

	import torch

	x = torch.Tensor(3,5)

* The above code will generate a tensor of size (3,5), that is, 3 rows and 5 columns. The tensor 

################################################################################

# Autograd in Pytorch