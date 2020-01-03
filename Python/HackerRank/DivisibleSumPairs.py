from itertools import combinations

def divisibleSumPairs(n, k, ar):
    return sum(not sum(i) % k for i in combinations(ar, 2))

print(divisibleSumPairs(6, 3, [1,3,2,6,1,2]))

