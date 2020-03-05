#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
 
using namespace std;
typedef pair<int, int> pii;

int INF = INT32_MAX;
 
vector<pair<int, int>> map[801];  // map[시작점](도착점, 가중치)
 
vector<int> Dijkstra(int start, int vertex){
    vector<int> d(vertex, INF);     // d[0 ~ vertex] : 시작점에서 각 vertex까지의 최단거리 기록

    priority_queue<pii, vector<pii>, greater<pii>> pq;  // pq(최단거리, 최단거리 가지고 있는 vertex) : 최소힙
    pq.push(make_pair(0, start));
    d[start] = 0;
    
    while (!pq.empty()) {
        int distance = pq.top().first;  // 최단거리
        int current = pq.top().second;  // 그 vertex
        pq.pop();

        if (d[current] < distance)
            continue;

        for (int i=0; i<map[current].size(); ++i) {
            int next = map[current][i].first;                       // 현재 노드와 연결된 vertex
            int nextDistance = map[current][i].second + distance;   // 그 vertex까지의 거리

            if (d[next] > nextDistance) {
                d[next] = nextDistance;
                pq.push(make_pair(nextDistance, next));
            }
        }
    }
    return d;
}
 
int main()
{
    int V, E, start;
    scanf("%d %d", &V, &E);
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        map[u].push_back(make_pair(v,w));
        map[v].push_back(make_pair(u,w));
    }

    int m, n;
    scanf("%d %d", &m, &n);

    V++;
    vector<int> dist = Dijkstra(1, V);
    vector<int> dist2m = Dijkstra(m, V);
    vector<int> dist2n = Dijkstra(n, V);

    int path1 = INF, path2 = INF;

    if (dist[m]!=INF && dist2n[V-1]!=INF && dist2m[n]!=INF)
        path1 = dist[m] + dist2m[n] + dist2n[V-1];

    if (dist[n]!=INF && dist2m[V-1]!=INF && dist2n[m]!=INF)
        path2 = dist[n] + dist2n[m] + dist2m[V-1];

    //printf("%d, %d, %d\n", dist[m], dist2m[n], dist2n[V-1]);
    //printf("%d, %d, %d\n", dist[n], dist2n[m], dist2m[V-1]);

    if (path1==INF && path2==INF)
        printf("-1\n");
    else
        printf("%d\n",  min(path1, path2));

    return 0;
}
