#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b){
    int n1 = *(int*)a;
    int n2 = *(int*)b;

    return n1 > n2 ? 1 : -1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);    
    
    int* new_arr = (int*) malloc(sizeof(int) * (n + m));

    for(int i=0; i<n; i++){
        scanf("%d", &new_arr[i]);
    }
    for(int i=n; i<n+m; i++){
        scanf("%d", &new_arr[i]);
    }

    qsort(new_arr, n + m, sizeof(int), comp);

    for (int i=0; i<n+m; i++){
        printf("%d ", new_arr[i]);
    }

    printf("\n");
    free(new_arr);
    return 0;
}