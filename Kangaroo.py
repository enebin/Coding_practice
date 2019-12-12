def kangaroo(x1, v1, x2, v2):
    if x1 > x2:
        x = x2
        x2 = x1
        x1 = x
        v = v2
        v2 = v1
        v1 = v

        print(x1, v1, x2, v2)

    if v2 > v1: 
        return "NO"
    else:
        n = 1
        first = x1 + v1*n
        second = x2 + v2*n
        while first != second or first < second :
            n += 1
            first = x1 + v1*n
            second = x2 + v2*n

        if first > second: 
            return "NO"
        elif first == second:
            return "YES"
       
print(kangaroo(10,9,9,1))