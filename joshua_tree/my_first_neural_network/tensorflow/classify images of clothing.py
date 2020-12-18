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

# The format of the database: The following will show that there are 60,000 images in the traning set, with each image represented in as 28 x 28 pixels: 
# print(train_images.shape)
# (60000, 28, 28)

# likewise, there are 60,000 labels in the training set:
print(len(train_labels))

# Each label is an integer bewtween 0 and 9, NOTE: printing out within a FOR loop will print out each int
print(train_labels)

#Preprocess the data
# The data must be preprocessed before training the network. If you inspect the first image in the training set, you will see that the pixel values fall in the range of 0 to 255:
plt.figure()
plt.imshow(train_images[3])
plt.colorbar()
plt.grid(False)
plt.show()


# ANCHOR https://www.tensorflow.org/tutorials/keras/classification