#include <stdio.h>
#include <stdlib.h>

int num[1000001][2];
char name[1000001][101];
char buffer[101];

static int comp(const void* p1, const void* p2) {
  int* arr1 = (int*)p1;
  int* arr2 = (int*)p2;

  int diff = arr1[0] - arr2[0];

  if (diff)
    return diff;

  return arr1[1] - arr2[1];
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%d", &num[i][0]);
        num[i][1] = i;
        scanf("%s", buffer);

        for (int j=0; j<101; j++){
            name[i][j] = buffer[j];
        }
    }

    qsort(num, iter, sizeof(int)*2, comp);

    for(int i=0; i<iter; i++){
        printf("%d ", num[i][0]);
        printf("%s\n", name[num[i][1]]);
    }

    return 0;
}