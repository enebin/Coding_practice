#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i = 0; i < iter; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        double dis = sqrt((double)pow((x1 - x2), 2) + pow((y1 - y2), 2));

        if (dis == 0){
            if (r1 == r2)
                printf("%d\n", -1);
            else
                printf("%d\n", 0);
        }
        if (dis == r1 + r2){
            printf("%d\n", 1);
        }
        else if (dis == abs(r1 - r2))
            printf("%d\n", 1);
        else if (dis > r1 + r2)
            printf("%d\n", 0);
        else if (dis < r1 + r2)
            printf("%d\n", 2);
    }

    return 0;
}

