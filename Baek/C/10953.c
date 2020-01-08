#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    int i = iter;
    scanf("%d", &iter);

    while(iter--){
        int a, b;
        scanf("%d %d", &a, &b);

        printf("Case #%d: %d\n", i-iter, a+b);
    }

    return 0;
}