#include <stdio.h>
#include <string.h>

int graph[1000001] = {0};
int Dvisit[1000001] = {0};
int rec[1000001] = {0};
int count = 0;

void dfs(int v){
    Dvisit[v] = 1;

    int next = graph[v];
    if (!Dvisit[next])
        dfs(next);
    else if (!rec[next]){
        for (int i=next; i!=v; i=graph[i]){
            count++;
        }
        count++;
    }
    
    rec[v] = 1;
    return;
}

int main(){
    int iter;
    scanf("%d", &iter);

    while (iter--){
        count= 0;
        memset(graph, 0, sizeof(graph));
        memset(Dvisit, 0, sizeof(Dvisit));
        memset(rec, 0, sizeof(rec));
        
        int n;
        scanf("%d", &n);

        for (int i=1; i<=n; i++){
            scanf("%d", &graph[i]);
        }     

        for(int v=1; v<=n; v++){
            if (Dvisit[v] == 0)
                dfs(v);
        }

        printf("%d\n", n - count);
    }
    return 0;
}