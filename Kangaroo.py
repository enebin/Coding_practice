def kangaroo(x1, v1, x2, v2):
    if x2 > x1 and v2 > v1: 
        return "NO"
    else:
        n = 0
        first = x1 + v1*n
        second = x2 + v2*n
        print(first, second)
        while first != second or first < second :
            n += 1
            first = x1 + v1*n
            second = x2 + v2*n
            print(first, second, n)

        if first > second: 
            return "NO"
        elif first == second:
            return "YES"
       
print(kangaroo(0,3,4,2))