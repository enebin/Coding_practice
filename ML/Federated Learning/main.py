import nest_asyncio
nest_asyncio.apply()

import collections

import numpy as np
import tensorflow as tf
import tensorflow_federated as ttf

np.random.seed(0)

ttf.federated_computation(lambda: "Hello, World!")()