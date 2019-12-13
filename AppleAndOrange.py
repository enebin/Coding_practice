def countApplesAndOranges(s, t, a, b, apples, oranges):
    count_a, count_b = 0, 0
    for i in apples:
        if i + a >= s and i + a <= t:
            count_a += 1
    for j in oranges:
        if j + b >= s and j + b <= t:
            count_b += 1

    return print(count_a, '\n' + str(count_b))

