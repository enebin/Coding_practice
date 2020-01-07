def birthdayCakeCandles(ar):
    maximum = max(ar)
    count = 0

    for i in range(len(ar)):
        ar[i] -= maximum
        if ar[i] == 0:
            count += 1

    return count

print(birthdayCakeCandles([2,3,3,3]))
