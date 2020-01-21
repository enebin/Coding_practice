#include <stdio.h>
#include <stdlib.h>

int graph_x[20001] = {0};
int graph_y[20001] = {0};
int Dvisit[1001] = {0};

void dfs(int v, int n){
    Dvisit[v] = 1;
    printf("%d ", v);

    for (int i=1; i<=n; i++){
        if (graph_x[v] && graph_y[i] && !Dvisit[i]){
            dfs(i, n);
        }
    }

    return;
}

int main()
{
    int n, m, v;
    scanf("%d %d %d", &n, &m, &v);

    int x, y;
    while(m--){
        scanf("%d %d", &x, &y);
        graph_x[x] = 1; graph_y[y] = 1;
        graph_x[y] = 1; graph_y[x] = 1;
    }

    dfs(v, n);
    printf("\n");

    return 0;
}