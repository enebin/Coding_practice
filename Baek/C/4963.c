#include <stdio.h>
#include <string.h>

int graph[100][100] = {0};
int Dvisit[100][100] = {0};

int count = 0;

void dfs(int v1, int v2){
    Dvisit[v1][v2] = 1;
    count++;

    for (int i=-1; i<=1; i++)
        for (int j=-1; j<=1; j++)
            if (graph[v1+i][v2+j] && !Dvisit[v1+i][v2+j]) 
                dfs(v1+i, v2+j);            
}

int main()
{
    while (1){
        memset(graph, 0, sizeof(graph));
        memset(Dvisit, 0, sizeof(Dvisit));

        int n, m;
        scanf("%d %d", &n, &m);

        if (!n && !m)
            break;            

        for(int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                scanf("%1d", &graph[i][j]);
            }
        }

        int k = 0;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                if (graph[i][j] && !Dvisit[i][j])
                    dfs(i, j);
                if (count)
                    k++;
                count = 0; 
                printf("%d, %d/ ", graph[1][3], Dvisit[1][3]);
            }
        }

        printf("%d\n", k);
    }
    return 0;
}