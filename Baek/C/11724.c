#include <stdio.h>

int graph[1001][1001] = {0};
int Dvisit[1001] = {0};
int count = 0;

void dfs(int v, int n){
    Dvisit[v] = 1;
    count++;

    for (int i=1; i<=n; i++){
        if (graph[v][i] && !Dvisit[i]){
            dfs(i, n);
        }
    }
    return;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int x, y;
    while(m--){
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    int counter= 0;
    for(int v=1; v<=n; v++){
        if (Dvisit[v] != 1){
            dfs(v, n);

            if (count >= 1)
                counter++;
            count = 0;
        }
    }

    printf("%d\n", counter);
    return 0;
}