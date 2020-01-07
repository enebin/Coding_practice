def utopianTree(n):
    if n == 0:
        return 1
    elif not n % 2:
        return utopianTree(n-1) + 1
    else :
        return utopianTree(n-1) * 2
    