from itertools import permutations

def remover(s):
    for j in range(2):
        for i in s:
            while s.count(i) != 1:
                s.remove(i)
    return 
    

def beautifulStrings(s):
    x = list(s)
    length = len(s)
    yoso = list(permutations(range(length), 2))
    result = []

    for i, j in yoso:
        x_cp = x[:]
        x_cp[i] = 0
        x_cp[j] = 0
        
        x_cp.remove(0), x_cp.remove(0)

        result.append(x_cp)

    remover(result)
    print(result)
    return len(result)

print(beautifulStrings("abcba"))