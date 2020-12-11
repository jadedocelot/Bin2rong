import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers

# Here we will load and prepare the MNIST dataset, here we weill convert the samples from integeres to floating-point numbers:
mnist = tf.keras.datasets.mnist

(x_train,y_train),(x_test,y_test) = mnist.load_data()
x_train, x_test = x_train / 255.0, x_test / 255.0
 
# Now we re gonna build tje tf.keras.Sequential model by stacking layers. Choose an optimizer and loss function for training:
#  Sequential: Groups a linear stack of layers into a tf.keras.Model
#   Sequential provides training and inference features on this model

model = tf.keras.models.Sequential([
    tf.keras.layers.Flatten(input_shape=(28,28)),
    tf.keras.layers.Dense(128, activation='relu'),
    tf.keras.layers.Dropout(0.2),
    tf.keras.layers.Dense(10)
])