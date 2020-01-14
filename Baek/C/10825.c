#include <stdio.h>
#include <stdlib.h>

int num[1000001][5];
char name[1000001][11];
char buffer[11];

static int comp(const void* p1, const void* p2) {
    int* arr1 = (int*)p1;
    int* arr2 = (int*)p2;

    if (arr2[0] - arr1[0])
        return arr2[0] - arr1[0];

    else if (arr1[1] - arr2[1])
        return arr1[1] - arr2[1];

    else if (arr2[2] - arr1[2])
        return arr2[2] - arr1[2];
    
    else 
        return arr1[3] - arr2[3];
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%s", buffer);
        for (int j=0; j<11; j++){
            name[i][j] = buffer[j];
        }

        scanf("%d", &num[i][0]);
        scanf("%d", &num[i][1]);
        scanf("%d", &num[i][2]);
 
        num[i][3] = name[i][0];
        num[i][4] = i;

    }

    qsort(num, iter, sizeof(int)*5, comp);

    for(int i=0; i<iter; i++){
        printf("%s\n", name[num[i][4]]);
    }

    return 0;
}