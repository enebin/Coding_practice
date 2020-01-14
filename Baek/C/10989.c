#include <stdio.h>
#include <stdlib.h>

int num[10001] = {0, };

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        int temp;
        scanf("%d", &temp);
        num[temp] += 1;
    }

    for(int i=0; i<10001; i++){
        if (num[i] != 0){
            for (int j=0; j<num[i]; j++)
                printf("%d\n", i);
            }
    }

    return 0;
}