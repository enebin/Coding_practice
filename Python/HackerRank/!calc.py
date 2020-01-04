from itertools import combinations 

l = range(20)
r = list(combinations(l, 10))

print(len(r))