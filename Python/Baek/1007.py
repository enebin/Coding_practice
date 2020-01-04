from itertools import combinations

iter = int(input())

min = 9223372036854775807
xy = []
sum = 0

for i in range(iter):
    N = int(input())

    for j in range(N):
        x_t, y_t = map(int, input().split())
        xy.append((x_t, y_t))

comb = combinations(xy, int(N/2))

for i in range(len(comb)):
    print(list(comb))


    
