def diagonalDifference(arr):
    sum_1 = 0
    sum_2 = 0
    length = len(arr[1])

    for i in range(length) :
        sum_1 += arr[i][i]
    
    for i in range(length) :
        i_mod = length - i - 1
        sum_2 += arr[i_mod][i]    

    return abs(sum_1 - sum_2)

a = [[11,2,4], [4,5,6], [10,8,-12]]    
print(diagonalDifference(a))
