#include <stdio.h>
#include <stdlib.h>

int* permutationEquation(int p_count, int* p, int* result_count) {
    int* temp = (int*)malloc(sizeof(int)*p_count);
    *result_count = p_count;
    
    for (int i=0; i < p_count; i++){
        for (int j=0; j < p_count; j++){
            if (p[j] == i + 1)
                temp[j] = i + 1;
        }
    }
    int* res = permutationEquation(p_count, temp, result_count);
    return res;
}

int main(void){
    int result_count = 0;
    int list[5] = {4,3,5,1,2};
    int* keke = permutationEquation(5, list, &result_count);

    printf("Here");
    free(keke);
}