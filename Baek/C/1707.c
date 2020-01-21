#include <stdio.h>

int graph[20001][20001] = {0};
int Dvisit[20001] = {0};
int color[20001] = {0};
int flag = 0;

void dfs(int v, int n, int c){
    Dvisit[v] = 1;
    color[v] = !color[c];

    for (int i=1; i<=n; i++){
        if (graph[v][i]){
            if (!Dvisit[i])
                dfs(i, n, v);
            else if (color[i] == color[v]){
                flag = 1;
                return;
            }
        }
    }
    return;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    while (iter--){
        int n, m;
        scanf("%d %d", &n, &m);

        int x, y;
        while(m--){
            scanf("%d %d", &x, &y);
            graph[x][y] = 1;
            graph[y][x] = 1;
        }

        for(int v=1; v<=n; v++){
            if (Dvisit[v] != 1){
                dfs(v, n, v);
            }
        }

        if (!flag)
            printf("YES\n");
        else 
            printf("NO\n");

        flag = 0;
    }
}