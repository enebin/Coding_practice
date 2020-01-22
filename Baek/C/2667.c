#include <stdio.h>
#include <stdlib.h>

int graph[100][100] = {0};
int Dvisit[100][100] = {0};
int counts[1000] = {0};

int count = 0;

int comp(const void* x, const void* y){
    int n1 = *(int*)x;
    int n2 = *(int*)y;
    return n1 < n2 ? -1 : 1;
}

void dfs(int v1, int v2){
    Dvisit[v1][v2] = 1;
    count++;

    if (graph[v1+1][v2] && !Dvisit[v1+1][v2]) 
        dfs(v1+1, v2);
    if (graph[v1][v2+1] && !Dvisit[v1][v2+1])
        dfs(v1, v2+1);
    if (graph[v1-1][v2] && !Dvisit[v1-1][v2])
        dfs(v1-1, v2);
    if (graph[v1][v2-1] && !Dvisit[v1][v2-1])
        dfs(v1, v2-1);
}

int main()
{
    int iter;
    scanf("%d\n", &iter);

    for(int i=1; i<=iter; i++){
        for (int j=1; j<=iter; j++){
            scanf("%1d", &graph[i][j]);
        }
    }

    int k = 1;
    for (int i=1; i<=iter; i++){
        for (int j=1; j<=iter; j++){
            if (graph[i][j] && !Dvisit[i][j]){
                dfs(i, j);
            }
            if (count)
                counts[k++] = count;
            count = 0; 
        }
    }

    qsort(counts, k, sizeof(int), comp);

    printf("%d\n", k-1);
    for (int i=1; i<k; i++){
        printf("%d\n", counts[i]);
    }


    return 0;
}