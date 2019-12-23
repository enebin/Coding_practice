def climbingLeaderboard(scores, alice):
    result = []
    for i in alice:
        high = len(scores) - 1
        low = 0

        while not low >= high:
            mid = (high + low) // 2
            if i >= scores[mid]:
                high = mid - 1
            elif i < scores[mid]:
                low = mid + 1
        result.append(low)
    return result

print(climbingLeaderboard([100, 100, 50, 40, 40, 20, 10], [5, 25, 50, 120]))
print(climbingLeaderboard([100, 90, 90, 80 ,75 ,60], [50, 65 ,77, 90, 102]))