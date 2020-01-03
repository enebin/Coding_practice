def hurdleRace(k, height):
    return max([k < i for i in height])

print(hurdleRace(7, [2,5,4,5,2]))