import tensorflow as tf

x = tf.ones((2, 2))

with tf.GradientTape() as t:
    t.watch(x)
    y = tf.reduce_sum(x)
    print("It's y: ", y)
    z = tf.multiply(y, y)
    print("it's z: ", z)

    # 입력 텐서 x에 대한 z의 도함수
    dz_dx = t.gradient(z, x)
    print(dz_dx)
    for i in [0, 1]:
      for j in [0, 1]:
        assert dz_dx[i][j].numpy() == 8.0
