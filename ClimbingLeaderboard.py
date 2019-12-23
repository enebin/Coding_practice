def climbingLeaderboard_bi(scores, alice):
    result = []
    for i in alice:
        high = len(scores) - 1
        low = 0

        while not low >= high:
            mid = (high + low) // 2
            ref = scores[mid]

            if i >= scores[mid]:
                high = mid - 1
            elif i < scores[mid]:
                low = mid + 1
        result.append(mid)
    return result


def climbingLeaderboard(scores, alice):
    unique_scores = list(reversed(sorted(set(scores))))

    i = len(alice)-1
    j = 0
    ans = []

    while i >= 0:
        if j >= len(unique_scores) or unique_scores[j] <= alice[i]:
            ans.append(j+1)
            i -= 1
        else:
            j += 1

    return reversed(ans)

print(list(climbingLeaderboard([100, 100, 50, 40, 40, 20, 10], [5, 25, 50, 120])))
print(list(climbingLeaderboard([100, 90, 90, 80 ,75 ,60], [50, 65 ,77, 90, 102])))