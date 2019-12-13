def migratoryBirds(arr):
    mx, ind = 0, 0
    for i in range(1, max(arr)+1):
        num = arr.count(i)
        if mx < num:
            mx = num
            ind = i

    return ind

print(migratoryBirds([1,1,3,4,5]))
