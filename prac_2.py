def compareTriplets(a, b):
    alice = 0
    bart = 0

    for i in range(len(a)):
        if a[i] == b[i]:
            pass
        elif a[i] > b[i]:
            alice += 1
        else:
            bart += 1
    
    return alice, bart

a = [1,2,3]
b = [1,0,4]

print(compareTriplets(a, b))
