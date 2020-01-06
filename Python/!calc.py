from itertools import combinations

l = list(range(2000))
comb = list(combinations(l, 1000))

print(len(comb))