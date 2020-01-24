#include <stdio.h>
#include <stdlib.h>

typedef long long int lld;

lld house[200001];

int comp(const void* x, const void* y){
    int a = *(int*)x;
    int b = *(int*)y;

    return a > b ? 1 : -1;
}

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);

    int max = 0;
    for(int i=1; i<=k; i++){
        scanf("%lld", &house[i]);
    }

    qsort(house, k, sizeof(lld), comp);

    lld min = 100000000000;
    for (int i=1; i<=k-1; i++){
        min = min < house[i+1] - house[i] ? min : house[i+1] - house[i];
    }

    printf("%lld\n", min);
  
    return 0;
}