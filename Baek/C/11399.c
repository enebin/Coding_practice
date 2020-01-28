#include <stdio.h>
#include <stdlib.h>

int num[1001];

int comp(const void* x, const void* y){
    int n = *(int*)x;
    int m = *(int*)y;

    return n > m ? 1 : -1;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%d", &num[i]);
    }

    qsort(num, iter, sizeof(int), comp);

    int sum = 0;
    int sum2 = 0;
    for (int i=0; i<iter; i++){
        sum += num[i];
        sum2 += sum;
    }

    printf("%d\n", sum2);
    return 0;
}