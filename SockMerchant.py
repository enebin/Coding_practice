def sockMerchant(n, ar):
    return sum([ar.count(i) // 2 for i in set(ar)])

print(sockMerchant(9, [10, 20, 20, 10, 10, 30, 50, 10, 20]))