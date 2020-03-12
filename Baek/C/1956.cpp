#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int INF = INT32_MAX / 4;
int V, E;
int from, to, val;

int adj[401][401] = {0, };
 
int main(){
    scanf("%d %d", &V, &E);

    for (int i = 1; i <= V; i++){
        for (int j = 1; j <= V; j++){
            adj[i][j] = INF;
        }                
    }
 
    for (int i = 0; i < E; i++){
        scanf("%d %d %d", &from, &to, &val);
        adj[from][to] = min(adj[from][to], val);
    }
 
    for (int k = 1; k <= V; k++)
        for (int x = 1; x <= V; x++)
            for(int y = 1; y <= V; y++)
                if (adj[x][y] > adj[x][k] + adj[k][y])
                    adj[x][y] = adj[x][k] + adj[k][y];
 
    int minn = INF;
    for (int i = 1; i <= V; i++){
        minn = min(adj[i][i], minn);
    }

    if (minn == INF)
        printf("-1\n");
    else
        printf("%d\n", minn);
 
    return 0;
}