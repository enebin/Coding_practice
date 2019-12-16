from itertools import product

def getMoneySpent(keyboards, drives, b):
    p = list(product(keyboards, drives))
    l = []
    for i in range(len(p)):
        if sum(p[i]) <= b:
            l.append(sum(p[i]))
    try:     
        return max(l)
    except ValueError:
        return -1


print(getMoneySpent([3, 1],[5, 2, 8], 10))