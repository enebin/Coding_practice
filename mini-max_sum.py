def miniMaxSum(arr):
    summation = sum(arr)
    length = len(arr)
    s_list = [summation for x in range(length)]

    for i in range(length):
        s_list[i] = s_list[i] - arr[i]
    
    return min(s_list), max(s_list)

print(miniMaxSum([1,2,3]))


