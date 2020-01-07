#include <stdio.h>
#include <stdlib.h>

int circle(int x, int y, int cx, int cy, int r){
    if (r*r >= (x-cx)*(x-cx) + (y-cy)*(y-cy))
        return 1;
    else
        return 0;    

}

int main()
{
    int iter;
    scanf("%d", &iter);

    while(iter--){
        int x1, y1, x2, y2, n;
        int cx, cy, r;
        int count = 0;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n);

        for (int i=0; i<n; i++){
            scanf("%d %d %d", &cx, &cy, &r);

            int c1 = circle(x1, y1, cx, cy, r);
            int c2 = circle(x2, y2, cx, cy, r);
            
            if (c1 && c2)
                continue;
            else 
                count += c1 + c2;
        }
        printf("%d\n", count);
    }

    return 0;
}