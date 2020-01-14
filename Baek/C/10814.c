#include <stdio.h>
#include <stdlib.h>

int num[1000001];

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
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%d", &num[i]);
    }

    qsort(num, iter, sizeof(int), comp);

    for(int i=0; i<iter; i++){
        printf("%d\n", num[i]);
    }

    return 0;
}