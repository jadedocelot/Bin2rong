# ANCHOR https://www.tensorflow.org/tutorials/keras/classification
# Basic classification: Classify images of clothing
# The code below it to train a neural network model to classify images of clothing

# This guide uses tf.keras, a high-level API to build and train models in TensorFlow.

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

# Will present one *specified* item of clothing
'''
plt.figure()
plt.imshow(train_images[9])
plt.colorbar()
plt.grid(True)
plt.show()
'''

# Scale these values to a range of 0 to 1 before feeding them to the neural network 
train_images = train_images / 255.00
test_images = test_images / 255.00

# To verify that the data is in the correct format and that youre ready to build and train the network, lets display the first 25 images from the training set  and display the class name below each image
plt.figure(figsize=(10,10))
for i in range (25):
    plt.subplot(5,5,i+1) # Add a subplot to the current figureß
    plt.xticks([]) # Get the current tick locations and labels of the x-axis
    plt.yticks([]) # Get the current tick locations and labels of the y-axis 
    plt.grid(False) # Get the grid of the image being shown - False will NOT show the grid (Where TRUE shows)
    plt.imshow(train_images[i]) #Display an image
    plt.xlabel(class_names[train_labels[i]]) # Set label for the x-axis
# plt.show()


                                                                        
                                                                            
                                                                            ##### BUILD THE MODEL ####### 

# Building the neural network requires configuring the layers of the model, then compiling the model

model = tf.keras.Sequential([
tf.keras.layers.Flatten(input_shape=(28,28)),    
tf.keras.layers.Dense(128, activation='relu'),
tf.keras.layers.Dense(10)
])

# ANCHOR 'tf.keras.Flatten'
# This first layer above, transforms the format of the images from two-dimensional array (of 28 by 28 pixels) to a one-dimensional array (of 28 * 28 = 784). Thinhk of this layer as
# unstacking rows of pixels in the image and lining them up. This layer has now parameters to learn. it only reformats the data 
# ANCHOR 'tf.kera.layers.Dense' 
# Most of deep learning consists of changing together simple layers. Most layers have parameters that are learned during training    
# After the   


                                                                            ##### COMPILE THE MODEL ####### 

# Loss function - This measures how accurate the model is during training. You want to minimize thjis function to "steer" the model in the right direction

model.compile(optimizer='adam',
    loss = tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
    metrics=['accuracy'])

# ANCHOR - Optimizer:
# This is how the model is updated based on the data it sees and its loss function
# ANCHOR - Metrics:
# Used to monitor the training and testing steps. The following example uses accuracy, the fraction of the images that are correctly classified

model.fit(train_images,train_labels,epochs=35)

# To start training, call the ((model.fit)(train_images, train_labels, epochs=10) method - so called because it "fits" the model to the training data:


# Test performed on 12/21 10:39 PM 
# Epoch:10
'''
lothing.py
60000
[9 0 0 ... 3 0 5]
2020-12-21 22:37:45.803077: I tensorflow/compiler/xla/service/service.cc:168] XLA service 0x7fad3837b9a0 initialized for platform Host (this does not guarantee that XLA will be used). Devices:
2020-12-21 22:37:45.803108: I tensorflow/compiler/xla/service/service.cc:176]   StreamExecutor device (0): Host, Default Version
Epoch 1/10
1875/1875 [==============================] - 4s 2ms/step - loss: 0.4986 - accuracy: 0.8232
Epoch 2/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3745 - accuracy: 0.8651
Epoch 3/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3339 - accuracy: 0.8770
Epoch 4/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3107 - accuracy: 0.8847
Epoch 5/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2903 - accuracy: 0.8930
Epoch 6/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2764 - accuracy: 0.8975
Epoch 7/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2642 - accuracy: 0.9012
Epoch 8/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2551 - accuracy: 0.9043
Epoch 9/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2452 - accuracy: 0.9079
Epoch 10/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2369 - accuracy: 0.9117
313/313 - 0s - loss: 0.3400 - accuracy: 0.8816

Test accuracy:  0.881600022315979
'''
# Test performed on 12/21 10:48 PM 
# Epoch:35
'''
Epoch 1/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.4979 - accuracy: 0.8251
Epoch 2/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3736 - accuracy: 0.8659
Epoch 3/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3349 - accuracy: 0.8784
Epoch 4/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3111 - accuracy: 0.8866
Epoch 5/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2962 - accuracy: 0.8908
Epoch 6/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2806 - accuracy: 0.8965
Epoch 7/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2675 - accuracy: 0.8994
Epoch 8/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2585 - accuracy: 0.9038
Epoch 9/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2474 - accuracy: 0.9080
Epoch 10/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2399 - accuracy: 0.9099
Epoch 11/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2316 - accuracy: 0.9129
Epoch 12/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2224 - accuracy: 0.9175
Epoch 13/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2151 - accuracy: 0.9192
Epoch 14/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2117 - accuracy: 0.9204
Epoch 15/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2043 - accuracy: 0.9237
Epoch 16/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1978 - accuracy: 0.9256
Epoch 17/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1915 - accuracy: 0.9295
Epoch 18/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1879 - accuracy: 0.9288
Epoch 19/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1816 - accuracy: 0.9320
Epoch 20/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1795 - accuracy: 0.9327
Epoch 21/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1746 - accuracy: 0.9344
Epoch 22/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1706 - accuracy: 0.9354
Epoch 23/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1663 - accuracy: 0.9377
Epoch 24/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1625 - accuracy: 0.9392
Epoch 25/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1568 - accuracy: 0.9411
Epoch 26/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1540 - accuracy: 0.9419
Epoch 27/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1524 - accuracy: 0.9424
Epoch 28/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1473 - accuracy: 0.9441
Epoch 29/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1431 - accuracy: 0.9456
Epoch 30/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1409 - accuracy: 0.9477
Epoch 31/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1388 - accuracy: 0.9473
Epoch 32/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1357 - accuracy: 0.9494
Epoch 33/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1349 - accuracy: 0.9494
Epoch 34/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1301 - accuracy: 0.9512
Epoch 35/35
1875/1875 [==============================] - 3s 2ms/step - loss: 0.1300 - accuracy: 0.9513
313/313 - 0s - loss: 0.4127 - accuracy: 0.8897

Test accuracy:  0.8896999955177307
'''

# As the model trains, the loss and accuracy metrics are displayed. This model reaches an accuracy of about 0.91 (or 91%) on  the training data

test_loss, test_acc = model.evaluate(test_images, test_labels, verbose=2)

print('\nTest accuracy: ', test_acc)

# ANCHOR Demonstrate Oversifting
# https://www.tensorflow.org/tutorials/keras/overfit_and_underfit#demonstrate_overfitting
# ANCHOR Strategies to prevent overfitting
# https://www.tensorflow.org/tutorials/keras/overfit_and_underfit#strategies_to_prevent_overfitting