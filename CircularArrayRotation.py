def circularArrayRotation(a, k, queries):
    res = []
    for i in range(len(a)):
        res[i] = a[i - (k % len(a))]
    return res    

print(circularArrayRotation([1,2,3],2,[0,1,2]))
