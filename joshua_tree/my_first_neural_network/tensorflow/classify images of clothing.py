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

model.fit(train_images,train_labels,epochs=10)

# To start training, call the ((model.fit)(train_images, train_labels, epochs=10) method - so called because it "fits" the model to the training data:

'''
60000
[9 0 0 ... 3 0 5]
2020-12-21 17:33:34.406668: I tensorflow/compiler/xla/service/service.cc:168] XLA service 0x7f823722dd90 initialized for platform Host (this does not guarantee that XLA will be used). Devices:
2020-12-21 17:33:34.406703: I tensorflow/compiler/xla/service/service.cc:176]   StreamExecutor device (0): Host, Default Version
Epoch 1/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.4968 - accuracy: 0.8251
Epoch 2/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3763 - accuracy: 0.8648
Epoch 3/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3343 - accuracy: 0.8796
Epoch 4/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.3137 - accuracy: 0.8852
Epoch 5/10
1875/1875 [==============================] - 3s 1ms/step - loss: 0.2956 - accuracy: 0.8907
Epoch 6/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2806 - accuracy: 0.8958
Epoch 7/10
1875/1875 [==============================] - 3s 1ms/step - loss: 0.2697 - accuracy: 0.9000
Epoch 8/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2585 - accuracy: 0.9039
Epoch 9/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2486 - accuracy: 0.9079
Epoch 10/10
1875/1875 [==============================] - 3s 2ms/step - loss: 0.2395 - accuracy: 0.9103
'''
# As the model trains, the loss and accuracy metrics are displayed. This model reaches an accuracy of about 0.91 (or 91%) on  the training data

test_loss, test_acc = model.evaluate(test_images, test_labels, verbose=2)

print('\nTest accuracy: ', test_acc)

