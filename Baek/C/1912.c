#include <stdio.h>
#include <stdlib.h>

int x[1000001] = {0};
int res[1000001] = {0}; 

int comp (int x, int y){
    return x > y ? x : y ;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=1; i<=iter; i++){
        scanf("%d", &x[i]);
    }

    res[1] = x[1];
    int max = res[1];

    for (int i=2; i<=iter; i++){
        res[i] = comp(res[i-1] + x[i], x[i]);
        max = comp(max, res[i]);
    }

    printf("%d\n", max);

    return 0;
}