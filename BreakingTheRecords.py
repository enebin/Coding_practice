def breakingRecords(scores):
    nmin, nmax, count_min, count_max = 10 ** 8, 0, 0, 0
    for i in scores:
        if i < nmin:
            count_min += 1
            nmin = i
        if i > nmax:
            count_max += 1
            nmax = i
    return count_max, count_min
            