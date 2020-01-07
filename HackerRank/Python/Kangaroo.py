'''
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
        while first != second and first < second :
            n += 1
            first = x1 + v1*n
            second = x2 + v2*n
            print(first, second)

        if first > second: 
            return "NO"
        elif first == second:
            return "YES"
'''

def kangaroo(x1, v1, x2, v2):
    if x2 > x1 and v2 > v1:
        return "NO"
    elif x1 > x2 and v1 > v2:
        return "NO"
    elif abs(v1 - v2):
        return "NO"
    elif not abs(x1 - x2) % abs(v1 - v2):
        return "YES"
    else:
        return "NO"

print(kangaroo(2,3,3,2))