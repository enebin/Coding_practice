def beautifulDays(i, j, k):
    return sum(l -int(list(l).reverse))  % k == 0 for l in range(i, j))
