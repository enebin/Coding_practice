#include <bits/stdc++.h>
 
using namespace std;
 
#define MAX 2002
#define INF 2e9
 
int s, g, h, n, m, t, dist[MAX], dist2[MAX];
 
vector<pair<int, int> > v[MAX];
 
void dijkstra(int start, int dist[])
{
    priority_queue<pair<int, int> > pq;
 
    dist[start] = 0;
    pq.push({ 0, start });
 
    while (!pq.empty())
    {
        int here = pq.top().second;
        int cost = -pq.top().first;
 
        pq.pop();
 
        if (dist[here] < cost) continue;
 
        for (auto i : v[here])
        {
            int next = i.first, next_cost = i.second;
 
            if (dist[next] > dist[here] + next_cost)
            {
                dist[next] = dist[here] + next_cost;
                pq.push({ -dist[next], next });
            }
        }
    }
}
  
int main(void)
{
    int test_case, a, b, d;
 
    scanf("%d", &test_case);
 
    while (test_case--)
    {        
        fill(dist, dist + MAX, INF);
        fill(dist2, dist2 + MAX, INF);

        int candidate, weight, bidx, sidx;
        vector<int> p, temp;
        scanf("%d %d %d %d %d %d", &n, &m, &t, &s, &g, &h);

        for (int i = 0; i <= n; i++) 
            v[i].clear();
 
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d", &a, &b, &d);
            if ((a == g && b == h) || (a == h && b == g)) 
                weight = d;
                
            v[a].push_back({ b, d });
            v[b].push_back({ a, d });
        }
 
        for (int i = 0; i < t; i++)
        {
            scanf("%d", &candidate);
            temp.push_back(candidate);
        }
 
        sort(temp.begin(), temp.end());
 
        dijkstra(s, dist);
 
        if (dist[g] < dist[h]) bidx = h, sidx = g;
        else bidx = g, sidx = h;
        
        dijkstra(bidx, dist2);
 
        for (auto i : temp)
        {
            if (dist[sidx] + weight + dist2[i] <= dist[i])
            {
                printf("%d ", i);
            }
        }
 
        printf("\n");
    }
 
    return 0;
}
