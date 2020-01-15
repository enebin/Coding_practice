#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter[4];
    int res[2] = {0};

    for (int i=0; i<4; i++){
        scanf("%d", &iter[i]);
    }

    for (int i=0; i<3; i+=2){
        res[i] = iter[i]*(iter[i]*10 / (iter[i]/10)) + iter[i+1];
    }

    printf("%d", res[0] + res[1]);

    return 0;
}