# Neural networks are a series of algorithms that mimic the operations of a human brain to recognize relationships between vast amounts of data. 
# They are used in a variety of applications in financial services, from forecasting and marketing research to fraud detection and risk assessment


import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers
import numpy as np

# Here we will load and prepare the MNIST dataset, here we weill convert the samples from integeres to floating-point numbers:
mnist = tf.keras.datasets.mnist

(x_train,y_train),(x_test,y_test) = mnist.load_data()
x_train, x_test = x_train / 255.0, x_test / 255.0
# The training set is a subset of the data set used to train the model
# x_train = is the training data set
# y_train = is the set of labels to all the data in x_train

# The test is a subset of data set that you use to test your model after the model has gone through the initial vetting by the validation set
# x_test = is the test data set
# y_test = is the set of labels to all the data in x_test

# The
 
# Now we re gonna build tje tf.keras.Sequential model by stacking layers. Choose an optimizer and loss function for training:
#  Sequential: Groups a linear stack of layers into a tf.keras.Model
#   Sequential provides training and inference features on this model

# A sequential model can be thought of as a stack of pancakes, each layer is a pancake
# And cosider what goes on within the sequential model as our "Filling", and in this case we want our filling to be better than the ingredients 
# The ingredients are the training sets

# The layers that follow the first can automatically recognize that the input shape of the model is sequential, which is why this is done only once

# we re taking the image being fed in the "Flattening" it into a 2D array. The input shape is the dimension of the image being fed into the layer. Think
# of this as the reformatting the image for the model
#tf.keras.layers.Flatten(input_shape=(28,28))

# This creates a densely connected layer. Each input input node in the layer is connected to an output node
# It received input from the previous layer, which is why it is dense
# The 128 represents the dimensionality of the output space
# An activation function takes the input of the node in the network and generates the output that will be passed into the next layer.
# Without a non-linear activation function, this would just be a linear regression model ("Ew, look at the boring STRAIGHT model. Its so 2 dimensional")
# The type of activation function that we use here is the "RELU" or "Rectified Linear Unit..... which is one of the most basic activation functions any basic bitch would use
# tf.keras.layers.Dense(128, activation='relu')

model = tf.keras.models.Sequential([
    tf.keras.layers.Flatten(input_shape=(28,28)),
    tf.keras.layers.Dense(128, activation='relu'),
    tf.keras.layers.Dropout(0.2),
    tf.keras.layers.Dense(10)
])

'''
2020-12-10 18:46:12.509037: I tensorflow/compiler/xla/service/service.cc:168] XLA service 0x7feb32cce840 initialized for platform Host (this does not guarantee that XLA will be used). Devices:
2020-12-10 18:46:12.509093: I tensorflow/compiler/xla/service/service.cc:176]   StreamExecutor device (0): Host, Default Version
'''

# For each example the model returns a vector of "logits" or "log-odds" scores, one for each class.
# TODO : Look into 'logits' and "log-odds" 
# NOTE: https://developers.google.com/machine-learning/glossary#logits
# NOTE: https://developers.google.com/machine-learning/glossary#log-odds
 
mod_predictions = model(x_train[:1]).numpy()
mod_Probabilities = tf.nn.softmax(mod_predictions).numpy()

print("\n\nModel Vectors:")
print("__________________________________________\n")
print(mod_predictions.reshape(5,2))
print("__________________________________________\n")
# print("\n\n")

print("Model Probabilities:")
print("__________________________________________\n")
print(mod_Probabilities.reshape(5,2))
print("__________________________________________\n")
print("\n\n")

'''
Model Vectors:
__________________________________________

[[-0.51177454 -0.41914034]
 [ 0.19596142  0.27539876]
 [ 0.07292598 -0.57057226]
 [-0.34900177 -0.81195045]
 [ 0.49838495  0.93117553]]
__________________________________________

Model Probabilities:
__________________________________________

[[0.0556866  0.06109156]
 [0.11300991 0.12235331]
 [0.09992702 0.05250675]
 [0.06553027 0.04124639]
 [0.15291756 0.23573059]]
None
__________________________________________
'''

loss_fn = tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True)


print("Loss:")
print("__________________________________________\n")
print(loss_fn(y_train[:1], mod_predictions).numpy())
print("__________________________________________\n")
print("\n\n")

model.compile(optimizer='adam',
    loss=loss_fn,
    metrics=['accuracy']
)

model.fit(x_train, y_train, epochs=5)



mod_eval = model.evaluate(x_test, y_test, verbose=2)

print("\n\nModel Performance:")
print("__________________________________________\n")
print(mod_eval)
print("__________________________________________\n")
print("\n")

Probability_model = tf.keras.Sequential([
    model,
    tf.keras.layers.Softmax()
])

print("\n")

mod_probFinal = Probability_model(x_test[:5])

print(mod_probFinal)
# print(mod_Probabilities.reshape(5,2))

print("\n")