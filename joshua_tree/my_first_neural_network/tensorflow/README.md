# User-Friendly Sequential API

 - When to use  a sequential model:
    A sequential API allows you to create models layer-by-layer for most problems. It is limited in that it does not allow you to create models that share layers or have multiple input or outputs

   - KERAS Sequential class
    
        - .keras.Sequential(layers=Non, name=None)

        - Sequential: Groups a linear stack of layers into a tf.keras.Model
            - Sequential provides training and inference features on this model


# The Functional API
https://keras.io/guides/functional_api/



# Training & evaluation with the built-in methods
https://keras.io/guides/training_with_built_in_methods/

- This guide covers training, evaluation, and prediction(inference) models when using built-in APIs for training and validation (such as model.fit(),model.evaluate(),model.predict())




# Writing a training loop from scratch
https://keras.io/guides/writing_a_training_loop_from_scratch/



# Multi-GPU and distributed training
https://keras.io/guides/distributed_training/