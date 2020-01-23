#include <stdio.h>
#include <string.h>

int graph[1001][1001] = {0};

int queue[1001] = {0};
int cursor = 0;
int count = 0;

void add(int num){
    queue[cursor++] = num;
    printf("add: %d/ ", num);
    for (int i=0; i<60; i++)
        printf("%d, ", queue[i]);    
    printf("%d<-cursor\n", cursor);
}

int pop(){
    int res = queue[0];
    cursor--;

    for (int i=0; i<cursor; i++)
        queue[i] = queue[i+1];

    return res;
}

void bfs(int v1, int v2){
    graph[v1][v2] = 1;

    for (int i=-1; i<2; i+=2){
        if(graph[v1+i][v2] == 0){
            add(v1+i);
            add(v2);
            v1 += i;
            bfs(v1, v2);

        }
        if(graph[v1][v2+i] == 0){
            add(v1);
            add(v2+i);
            v2 += i;
            bfs(v1, v2);
        }
    }
    
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    memset(graph, -1, sizeof(graph));

    for(int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            scanf("%d", &graph[i][j]);
        }
    }

    int k = 0;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            if (graph[i][j] == 1){              
                bfs(i, j);
                k++;
            }
        }
    }

    printf("%d\n", cursor);
    return 0;
}