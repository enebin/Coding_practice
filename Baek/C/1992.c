#include <stdio.h>
#include <stdlib.h>

int video[64][64];

void quarter(int x, int y, int stride){
    int cur = video[y][x];
    int flag = 1;

    for (int i = y; (i<y+stride) && flag; i++) 
        for (int j = x; (j<x+stride) && flag; j++) 
            if (cur != video[i][j]) 
                flag = 0;

    if (flag) 
        printf("%d", cur);

    else{
        int x0 = x, y0 = y;
        int x1 = x + stride / 2, y1 = y;
        int x2 = x, y2 = y + stride / 2;
        int x3 = x + stride / 2, y3 = y + stride / 2;

        printf("(");
        quarter(x0, y0, stride / 2);
        quarter(x1, y1, stride / 2);
        quarter(x2, y2, stride / 2);
        quarter(x3, y3, stride / 2);
        printf(")");
    }
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++)
        for (int j=0; j<iter; j++)
            scanf("%1d", &video[i][j]);

    quarter(0, 0, iter);

    return 0;
}