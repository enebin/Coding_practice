#include <cstdio>
#include <vector>
#include <algorithm>

#define INF 987654321

using namespace std;

vector<pair<int, int>> v[501];

int dist[501] = {0, };
int N, M;

int main(void)
{
    int A = 0, B = 0, C = 0;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d", &A, &B, &C);  // 출발, 도착, 가중치

        v[A].push_back({B, C});
    }

    fill(dist, dist + 501, INF);

    // 시작 정점
    dist[1] = 0;

    for (int i=1; i<=N; i++)
    {
        for (int here = 1; here <= N; here++)
        {
            for (int index = 0; index < v[here].size(); index++)
            {
                int next = v[here][index].first;
                int next_score = dist[here] + v[here][index].second;

                if (dist[next] > next_score && dist[here] != INF){
                    if (i == N){    // 음수 사이클
                        printf("-1\n");
                        return 0;
                    }

                    else
                        dist[next] = next_score;
                }
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (dist[i] == INF)
            printf("-1\n");
        else
            printf("%d\n", dist[i]);
    }

    return 0;
}
