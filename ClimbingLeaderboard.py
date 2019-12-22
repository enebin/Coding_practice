def climbingLeaderboard(scores, alice):
    result = []

    for i in alice:
        low = 0
        high = len(scores) - 1

        while not low > high:
            mid = (high + low) // 2
            barometer = scores[mid]

            if i <= scores[mid]:
                low = mid + 1
            elif i > scores[mid]:
                high = mid - 1
        
        result.append(low)
    return result

print(climbingLeaderboard([100, 90, 90, 80 ,75 ,60], [50, 65 ,77 ,90, 102]))
