#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=0; i<iter; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int c = 1;

        for (int j=0; j<b; j++){
            c *= a;
            c %= 10;
        }
        if (c==0) printf("10\n");
        else printf("%d\n", c);
    }

    return 0;
}