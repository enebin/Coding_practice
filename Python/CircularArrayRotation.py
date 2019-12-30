def solution(a, queries, k):
    return [a[((len(a) - (k % len(a)))+q)%len(a)] for q in queries]