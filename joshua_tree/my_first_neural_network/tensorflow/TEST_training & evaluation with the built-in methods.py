from tensorflow import keras
from tensorflow.keras import layers
from PIL import Image,ImageEnhance,ImageMath
import tensorflow as tf
import matplotlib.pyplot as plt
import pydot
# import graphviz

inputs = keras.Input(shape=(784,))
img_inputs = keras.Input(shape=(32,32,3))
# print(inputs.shape)
# print(inputs.dtype)
dense = layers.Dense(64,activation="relu")
x = dense(inputs)
x = layers.Dense(64,activation="relu")(x)
outputs = layers.Dense(10)(x)
model = keras.Model(inputs=inputs, outputs=outputs, name="mnist_model")

# model.summary()
'''
_________________________________________________________________
Layer (type)                 Output Shape              Param #
=================================================================
input_1 (InputLayer)         [(None, 784)]             0
_________________________________________________________________
dense (Dense)                (None, 64)                50240
_________________________________________________________________
dense_1 (Dense)              (None, 64)                4160
_________________________________________________________________
dense_2 (Dense)              (None, 10)                650
=================================================================
Total params: 55,050
Trainable params: 55,050
Non-trainable params: 0
_________________________________________________________________
'''

# api_model = keras.utils.plot_model(model, "my_first_model_with_shape_info.png")

(x_train, y_train), (x_test, y_test) = keras.datasets.mnist.load_data()

x_train = x_train.reshape(60000, 784).astype("float32") / 255
x_test = x_test.reshape(10000, 784).astype("float32") / 255



model.compile(
    loss=keras.losses.SparseCategoricalCrossentropy(from_logits=True),
    optimizer=keras.optimizers.RMSprop(),
    metrics=["accuracy"],
)

history = model.fit(x_train, y_train, batch_size=64, epochs=2, validation_split=0.2)

test_scores = model.evaluate(x_test, y_test, verbose=2)
print("Test loss:", test_scores[0])
print("Test accuracy:", test_scores[1])


'''
2020-12-09 23:03:13.703379: I tensorflow/compiler/xla/service/service.cc:168] XLA service 0x7f7f47eb8a80 initialized for platform Host (this does not guarantee that XLA will be used). Devices:
2020-12-09 23:03:13.703410: I tensorflow/compiler/xla/service/service.cc:176]   StreamExecutor device (0): Host, Default Version
Epoch 1/2
750/750 [==============================] - 1s 2ms/step - loss: 0.3462 - accuracy: 0.9008 - val_loss: 0.1817 - val_accuracy: 0.9454
Epoch 2/2
750/750 [==============================] - 1s 2ms/step - loss: 0.1666 - accuracy: 0.9504 - val_loss: 0.1369 - val_accuracy: 0.9593
313/313 - 0s - loss: 0.1344 - accuracy: 0.9594
Test loss: 0.134374737739563
Test accuracy: 0.9593999981880188
'''