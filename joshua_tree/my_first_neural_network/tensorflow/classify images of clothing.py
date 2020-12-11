# Basic classification: Classify images of clothing

import tensorflow as tf
import numpy as np 
import matplotlib.pyplot as plt

print(tf.__version__)

# "fashion_mnist" will access the Fashion MNIST directly from TensorFlow. import and load the Fashion MNIST data directly from TensorFLow:

fashion_mnist = tf.keras.datasets.fashion_mnist

(train_images, train_labels), (test_images,test_labels) = fashion_mnist.load_data()
