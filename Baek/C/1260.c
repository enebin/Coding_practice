#include <stdio.h>
#include <stdlib.h>

int graph[1001][1001] = {0};
int Dvisit[1001] = {0};
int Bvisit[1001] = {0};

int queue[1001] = {0};
int cursor = 0;

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

void add(int num){
    queue[cursor++] = num;

   /* printf("add: %d/ ", num);
    for (int i=0; i<6; i++)
        printf("%d, ", queue[i]);    
    printf("%d<-cursor\n", cursor);*/

}

int pop(){
    int res = queue[0];
    cursor--;

    /*printf("pop: %d/ ", res);
    for (int i=0; i<6; i++)
        printf("%d, ", queue[i]);    
    printf("%d<-cursor\n", cursor);*/

    for (int i=0; i<cursor; i++)
        queue[i] = queue[i+1];

    return res;
}

void bfs(int v, int n){
    add(v);
    printf("%d ", v);
    Bvisit[v] = 1;

    int temp = n;
    while(temp--){
        int new_v = pop();
        for (int i=1; i<=n; i++){
            if (graph[new_v][i] && !Bvisit[i]){
                Bvisit[i] = 1;
                add(i);
                printf("%d ", i);
            }
        }
    }

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