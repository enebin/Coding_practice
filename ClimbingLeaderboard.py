def climbingLeaderboard_slow(scores, alice):
    count = []
    for i in alice:
        count.append(1 + len(set(scores)) - sum(i >= j for j in set(scores)))
    return count

def climbingLeaderboard(scores, alice):
    length = len(scores)
    f = lambda x : x // 2
    for i in alice:
        if scores[f(length)] > i:
            length = f(length)

        else:

