#include <stdio.h>
#include <string.h>

char stars[6600][6600];

void counting(int x, int y, int stride){
    if (stride > 1){
        for (int i=y; i<y+stride/3; i++){
            for (int j=x; j<x+stride/3; j++){
                stars[i + stride / 3][j] = stars[i][j];
                stars[i + stride / 3][j + stride*2 / 3] = stars[i][j];
                stars[i + 2*+stride / 3][j] = stars[i][j];
                stars[i][j + stride / 3] = stars[i][j];
                stars[i][j + stride*2 / 3] = stars[i][j];
                stars[i + stride*2 / 3][j + stride / 3] = stars[i][j];
                stars[i + stride*2 / 3][j + stride*2 / 3] = stars[i][j];
            }
        }
    }
    else
        return;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    memset(stars, 32, sizeof(stars));
    stars[0][0] = '*';

    for (int i=1; i<=iter; i*=3){
        counting(0, 0, i);
    }

    for (int i=0; i<iter; i++){
        for (int j=0; j<iter; j++){
            printf("%c", stars[i][j]);
        }
        printf("\n");
    }

    return 0;
}