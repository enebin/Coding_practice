#include <stdio.h>
#include <string.h>

typedef struct _node {
    int vertex;
    int data;
    struct _node* Node;    
}Node;


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

int main(){
    int iter;
    scanf("%d", &iter);

    while (iter--){
        int counter= 0;

        int m;
        scanf("%d", &m);

        memset(graph, 0, sizeof(graph));
        memset(Dvisit, 0, sizeof(Dvisit));

        int y;
        for (int i=1; i<=m; i++){
            scanf("%d", &y);
            graph[i][y] = 1;
        }     

        for(int v=1; v<=m; v++){
            if (Dvisit[v] == 0){
                dfs(v, m);

                if (count >= 1)
                    counter++;
                count = 0;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}