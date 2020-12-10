# SEE "Training & evaluation with the built-in methods" in README.md for notes

import tensorflow as tf
from tensorflow import keras
from tensorflow.keras import layers

inputs = keras.Input(shape=(784,), name="digits")
x = layers.Dense()

