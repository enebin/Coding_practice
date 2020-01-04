#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int combination(int* list, int n, int r) { 
    for (int i=0; i<n; i++){

    }
}


int main()
{
    typedef long double ld;

    int iter;
    scanf("%d", &iter);

    ld min = 9223372036854775807;
    int x1, y1, x2, y2;
    int x[20] = {0, };
    int y[20] = {0, };
    int sum;

    for (int i=0; i<iter; i++){
        int N;
        scanf("%d", &N);

        for (int k=0; k<N; k++){
            scanf("%d %d", &x[k], &y[k]);
        }


            ld distance = sqrtl((powl(x1-x2, 2) + powl(y1-y2, 2)));
            
            if (distance < min){
                min = distance;
            }
    }
    
    printf("%.12Lf", min);

    return 0;
}