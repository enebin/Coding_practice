#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct _Path_{
        int i;
        int j;
        int count;
    } path;
    
    int N;
    scanf("%d", &N);

    int mat[N][N];

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            scanf("%d", &mat[i][j]); 
        }
    }

    path p = malloc(sizeof(path));
    p.i = 0; 
    p.j = 0;
    p.count = 0;

    while (i == N-1 && j == N-1){
        if (mat[i][j] + 1 == mat[i+1][j] || mat[i][j] == mat[i][j+1]){
            count += 1;
            
        }
    }

    /*for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            printf("%d ", mat[i][j]);
        }
    }*/
    return 0;
}