#include <stdio.h>
#include <stdlib.h>

int time[100001][2];
int max = 0;

static int comp(const void* p1, const void* p2) {
    int* arr1 = (int*)p1;
    int* arr2 = (int*)p2;
    int diff1 = arr1[0] - arr2[0];
    if (diff1) 
        return diff1;
    return arr1[1] - arr2[1];
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%d %d", &time[i][1], &time[i][0]);
    }

    qsort(time, iter, 2*sizeof(int), comp);

    int cursor = 0;
    for (int i=1; i<iter; i++){
        if (time[cursor][0] <= time[i][1]){
            cursor = i;
            max++;
        }
    }

    printf("%d\n", max + 1);
    return 0;
}