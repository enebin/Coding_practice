def beautifulDays(i, j, k):
    return sum(abs(l - int(''.join(list(reversed(list(str(l))))))) % k == 0 for l in range(i, j+1))


print(beautifulDays(20, 23, 6))