#include <stdio.h>
#include <string.h>

//memset, memcpy 이용하여 풀이도 가능. 

char stars1[5000][5000];
char stars2[5000][5000];

void counting(int x, int y, int stride){
    if (stride > 3){
        for (int i=y; i<y+stride; i++){
            for (int j=x; j<x+stride*2; j++){
                stars2[i][j + stride] = stars1[i][j];
                stars2[i + stride][j] = stars1[i][j];
                stars2[i + stride][j + stride*2] = stars1[i][j];
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

    memset(stars1, 32, sizeof(stars1));
    stars1[2][0] = '*';
    stars1[1][1] = '*', stars1[3][1] = '*';
    for (int i=0; i<5; i++)
        stars1[i][2] = '*';

    for (int i=3; i<=iter; i*=2){
        counting(0, 0, i);
    }

    for (int i=0; i<iter; i++){
        for (int j=0; j<iter*2; j++){
            printf("%c", stars2[j][i]);
        }
        printf("\n");

    }

    return 0;
}