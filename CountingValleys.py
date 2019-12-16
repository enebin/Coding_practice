import matplotlib.pyplot as plt
import numpy as np

def countingValleys(n, s):
    y = 0
    y_list = [0]

    for i in list(s):
        if i == "D":
            y -= 1
            y_list.append(y)
        else:
            y += 1
            y_list.append(y)
    
    return sum(y_list[i:i+2] == [-1, 0] for i in range(n))


def countingBalleys(n, s):
    s_list = list(s)
    x = np.arange(0, n, 1.0)
    y = []
    y_plot = 0

    for i in s_list:
        if i == "D":
            y_plot -= 1
            y.append(y_plot)
        elif i == "U":
            y_plot += 1
            y.append(y_plot)
    return x, y

print(countingValleys(8,'UDDDUDUU'))

'''
countingBalleys(12,'DDUUDDUDUUUD')

plt.plot(x, y)
plt.title("Result")

plt.show()
'''