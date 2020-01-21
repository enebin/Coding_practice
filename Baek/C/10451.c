#include <stdio.h>

int graph[1001][1001] = {0};
int Dvisit[1001] = {0};
int count = 0;

void dfs(int v, int n){
    Dvisit[v] = 1;
    printf("%d ", v);
    count++;

    for (int i=1; i<=n; i++){
        if (graph[v][i] && !Dvisit[i]){
            dfs(i, n);
        }
    }
    return;
}

int main(){
    int iter;
    scanf("%d", &iter);

    while (iter--){
        int counter= 0;

        int m;
        scanf("%d", &m);

        for (int i=1; i<=m; i++)
            Dvisit[i] = 0;

        int y;
        for (int i=1; i<=m; i++){
            scanf("%d", &y);
            graph[i][y] = 1;
            /*if (y == i)
                counter++;*/
        }

        for(int v=1; v<=m; v++){
            if (Dvisit[v] == 0){
                dfs(v, m);

                if (count >= 1)
                    counter++;
                count = 0;
            }
        }

        printf("\n%d\n", counter);
    }
    return 0;
}