#include <stdio.h>
#include <stdlib.h>

typedef long long int lld;

int num[5000001];

int comp(const void* a, const void* b){
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    

    if (num1 < num2)    
        return -1;      
    
    if (num1 > num2)    
        return 1;      
    
    return 0;    
}

int main()
{
    int iter, tier;
    scanf("%d %d", &iter, &tier);

    for(int i=0; i<iter; i++){
        scanf("%d", &num[i]);
    }

    qsort(num, iter, sizeof(int), comp);

    printf("%d\n", num[tier - 1]);


    return 0;
}