#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;
typedef pair<int, pair<int, int>> pii;

int INF = INT32_MAX;
int N, M, K;
int V, E, c, d;
 
vector<pair<int, pair<int, int>>> map[101];  // map[시작점](도착점, (비용, 시간))
 
vector<vector<int>> Dijkstra(int start, int vertex){
    vector<vector<int>> d(vertex+1, vector<int>(M+1, INF));     // d[0 ~ vertex][0 ~ M] : 시작점에서 각 vertex까지의 최단시간, 가는데 드는 비용

    priority_queue<pii, vector<pii>, greater<pii>> pq;  // pq(최단거리, (최단거리 가지고 있는 vertex, 비용)) : 최소힙
    pq.push({0, {start, 0}});
    d[start][0] = 0;
    
    while (!pq.empty()) {
        int distance = pq.top().first;  // 최단시간
        int current = pq.top().second.first;  // 그 vertex
        int curMoney = pq.top().second.second; // 그 비용

        pq.pop();

        if (d[current][curMoney] < distance)
            continue;

        for (int i=0; i<map[current].size(); ++i) {
            int next = map[current][i].first;                                // 현재 노드와 연결된 vertex
            int nextDistance = map[current][i].second.second + distance;      // 그 vertex까지의 거리
            int nextMoney = map[current][i].second.first + curMoney;

            if (d[next][nextMoney] > nextDistance && nextMoney <= M) {
                d[next][nextMoney] = nextDistance;
                pq.push({nextDistance, {next, nextMoney}});
            }
        }
    }
    return d;
}


int main(){
    int iter;
    cin >> iter;    

    while(iter--){
        memset(map, 0, sizeof(map));                // map[시작점](도착점, (비용, 시간))
        scanf("%d %d %d", &N, &M, &K);

        for(int i=1; i<=K; i++){
            scanf("%d %d %d %d", &V, &E, &c, &d);
            map[V].push_back({E, {c, d}});
        }

        vector<vector<int>> dist = Dijkstra(1, ++N);
            
        /*for (int i = 1; i < N; ++i) {
            if (dist[i] == INF)
                printf("INF\n");
            else
                printf("%d\n", dist[i]);
        }*/
 
        int minn = INF;
        for (int i=0; i<=M; i++){
            if (dist[N-1][i] <= minn)
                minn = dist[N-1][i];
            }
            
        if (minn != INF)
            printf("%d\n", minn);
        else
            printf("Poor KCM\n");
    }
    
    return 0;
}