def climbingLeaderboard(scores, alice):
    count = []
    for i in alice:
        count.append(1 + len(set(scores)) - sum(i >= j for j in set(scores)))
    return count