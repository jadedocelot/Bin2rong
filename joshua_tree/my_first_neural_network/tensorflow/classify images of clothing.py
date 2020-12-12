# Basic classification: Classify images of clothing

import tensorflow as tf
import numpy as np 
import matplotlib.pyplot as plt

# print(tf.__version__)

# "fashion_mnist" will access the Fashion MNIST directly from TensorFlow. import and load the Fashion MNIST data directly from TensorFLow:

fashion_mnist = tf.keras.datasets.fashion_mnist

# The 'train_images' abd 'train_labels' arrays are the training set-the data the model uses
# the is model sis tested against the tests set, the 'test_images' and 'test_labels' arrays.
(train_images, train_labels), (test_images,test_labels) = fashion_mnist.load_data()

# Loading the dataset returns four

# Each image is mapped to a single label. Since the class names are not included with the dataset, store them here to use later when plotting the images.
class_names = [ 'T-shirt/top','Trouser','Pullover','Dress','Coat',
                    'Sandal','Shirt','Sneaker','Bag','Ankle Boot']

print(train_images.shape)
# (60000, 28, 28)
print(test_labels)