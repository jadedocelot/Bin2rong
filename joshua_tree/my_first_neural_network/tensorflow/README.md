
# User-Friendly Sequential API
 - When to use  a sequential model:
    A sequential API allows you to create models layer-by-layer for most problems. It is limited in that it does not allow you to create models that share layers or have multiple input or outputs

   - KERAS Sequential class
    
        - .keras.Sequential(layers=Non, name=None)

        - Sequential: Groups a linear stack of layers into a tf.keras.Model
            - Sequential provides training and inference features on this model

- LOGITS:
    The Vector of raw (non-normalized) predictions that a classification model generates, which is ordinarily then passed tp a normalization function. If the 


- LOG-ODDS:
    The logarithm of the odds of some event. If the event refers to a binary probability, then odds refers to the ratio of the probability of success (p) to the probability of failure (1-p). For example, suppose that a given event has a 90% probability of success and a 10% probability of failure. In this case, odds is calculated as follows:


'''
2020-12-10 18:46:12.509037: I tensorflow/compiler/xla/service/service.cc:168] XLA service 0x7feb32cce840 initialized for platform Host (this does not guarantee that XLA will be used). Devices:
2020-12-10 18:46:12.509093: I tensorflow/compiler/xla/service/service.cc:176]   StreamExecutor device (0): Host, Default Version
'''
mod_Probabilities

                        model.compile(optimizer='adam',
                            loss=loss_fn,
                            metrics=['accuracy']

                        )

                        model.fit(x_train, y_train, epochs=25)


Model Vectors:
__________________________________________

[[ 0.3994633  -0.07013437]
 [-0.08405727 -0.20275569]
 [ 0.04430787 -0.5898828 ]
 [ 0.4946698   0.13770515]
 [-0.6890419  -0.5968571 ]]
__________________________________________

Model Probabilities:
__________________________________________

[[0.15533064 0.09712107]
 [0.09577824 0.08505832]
 [0.1088968  0.057755  ]
 [0.170846   0.11955757]
 [0.05230284 0.0573536 ]]
None
__________________________________________




Loss:
__________________________________________

2.8515453
__________________________________________




Epoch 1/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.2942 - accuracy: 0.9138
Epoch 2/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.1436 - accuracy: 0.9575
Epoch 3/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.1065 - accuracy: 0.9680
Epoch 4/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0883 - accuracy: 0.9731
Epoch 5/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0751 - accuracy: 0.9763
Epoch 6/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0635 - accuracy: 0.9796
Epoch 7/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0581 - accuracy: 0.9812
Epoch 8/25
1875/1875 [==============================] - 3s 1ms/step - loss: 0.0531 - accuracy: 0.9825
Epoch 9/25
1875/1875 [==============================] - 3s 1ms/step - loss: 0.0483 - accuracy: 0.9840
Epoch 10/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0433 - accuracy: 0.9859
Epoch 11/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0413 - accuracy: 0.9860
Epoch 12/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0396 - accuracy: 0.9871
Epoch 13/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0361 - accuracy: 0.9878
Epoch 14/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0340 - accuracy: 0.9879
Epoch 15/25
1875/1875 [==============================] - 3s 1ms/step - loss: 0.0322 - accuracy: 0.9892
Epoch 16/25
1875/1875 [==============================] - 3s 1ms/step - loss: 0.0321 - accuracy: 0.9889
Epoch 17/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0298 - accuracy: 0.9896
Epoch 18/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0254 - accuracy: 0.9917
Epoch 19/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0282 - accuracy: 0.9903
Epoch 20/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0247 - accuracy: 0.9915
Epoch 21/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0251 - accuracy: 0.9913
Epoch 22/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0238 - accuracy: 0.9922
Epoch 23/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0223 - accuracy: 0.9923
Epoch 24/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0217 - accuracy: 0.9919
Epoch 25/25
1875/1875 [==============================] - 2s 1ms/step - loss: 0.0231 - accuracy: 0.9920


# Basic classification: Classify images of clothing

- Fashion MNIST is intended as a drop-in replacement for the classic MNIST dataset—often used as the "Hello, World" of machine learning programs for computer vision. The MNIST dataset contains images of handwritten digits (0, 1, 2, etc.) in a format identical to that of the articles of clothing you'll use here.

This guide uses Fashion MNIST for variety, and because it's a slightly more challenging problem than regular MNIST. Both datasets are relatively small and are used to verify that an algorithm works as expected. They're good starting points to test and debug code




# The Functional API
https://keras.io/guides/functional_api/



# Training & evaluation with the built-in methods
https://keras.io/guides/training_with_built_in_methods/

- This guide covers training, evaluation, and prediction(inference) models when using built-in APIs for training and validation (such as model.fit(),model.evaluate(),model.predict())




# Writing a training loop from scratch
https://keras.io/guides/writing_a_training_loop_from_scratch/



# Multi-GPU and distributed training
https://keras.io/guides/distributed_training/