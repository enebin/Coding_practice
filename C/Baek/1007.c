#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    typedef long double ni;
    int iter;
    scanf("%d", &iter);
    ni min = 9223372036854775807;
    int x1, y1, x2, y2;

    for (int i=0; i<iter; i++){
        int N;
        scanf("%d", &N);

        for (int k=0; k<N/2; k++){
            scanf("%d %d", &x1, &y1);
            scanf("%d %d", &x2, &y2);


            ni distance = sqrtl((powl(x1-x2, 2) + powl(y1-y2, 2)));
            printf("%Lf", sqrtl((ni)(pow(x1-x2, 2) + pow(y1-y2, 2))));
            
            if (distance < min){
                min = distance;
            }
        }
    }
    printf("%Lf", min);

    return 0;
}