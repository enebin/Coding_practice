#include <stdio.h>
#include <stdlib.h>

int* practice(int* list, int length){
    int* newone = (int*)malloc(sizeof(int)*length);
    for (int i=0; i<length; i++)
        newone[i] = list[i];
    
    return newone;
}


int main()
{
    int list[5] = {1,2,3,4,5};
    int* result = practice(list, 5);
    
    for (int i=0; i<5; i++){
        printf("%d", result[i]);
    }
}