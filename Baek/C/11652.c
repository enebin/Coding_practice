#include <stdio.h>
#include <stdlib.h>

typedef long long int lld;
lld n[1000001] = {0, };

int comp(const void* a, const void* b){
    lld x = *(lld*)a;
    lld y = *(lld*)b;

    if (x > y)
        return 1;
    else
        return -1;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%lld", &n[i]);        
    }

    qsort(n, iter, sizeof(lld), comp);

    int count = 1;
    int max = 0;
    lld save;

    for (int i=1; i<iter; i++){
        if (n[i-1] != n[i])
            count = 1;
        else
            count++;

        if (count > max){
            max = count;
            save = n[i-1];
        }
    }

    if (iter == 1)
        printf("%lld\n", n[0]);
    else
        printf("%lld\n", save);

    return 0;
}