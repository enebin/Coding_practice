#include <stdio.h>
#include <stdlib.h>

int graph[1001][1001] = {0};
int Dvisit[1001] = {0};
int Bvisit[1001] = {0};

void dfs(int v, int n){
    Dvisit[v] = 1;
    printf("%d ", v);

    for (int i=1; i<=n; i++){
        if (graph[v][i] && !Dvisit[i]){
            dfs(i, n);
        }
    }

    return;
}

void bfs(int v, int n){

}

int main()
{
    int n, m, v;
    scanf("%d %d %d", &n, &m, &v);

    int x, y;
    while(m--){
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    dfs(v, n);
    printf("\n");
    bfs(v, n);

    return 0;
}