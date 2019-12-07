def plusMinus(arr):

    p = 0
    m = 0 
    z = 0
    length = len(arr)

    for i in arr:
        if i > 0 : 
            p += 1
        elif i < 0 : 
            m += 1
        elif i == 0 :
            z += 1

    rp = p / length
    mp = m / length
    zp = z / length

    return rp, mp, zp


print(plusMinus([1, -1, 0, 2, 3]))