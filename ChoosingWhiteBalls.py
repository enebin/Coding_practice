from itertools import permutations

def beautifulStrings(s):
    x = list(s)
    length = len(s)
    yoso = list(permutations(range(length), 2))
    result = []

    for i, j in yoso:
        for k in range(len(yoso)):
            del x[]




    print(yoso)

    return

print(beautifulStrings("abca"))