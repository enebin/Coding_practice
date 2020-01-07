def birthday(s, d, m):
    return sum(sum(s[i:i + m]) == d for i in range(len(s)-m + 1))

print(birthday([4],4, 1))


