#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int n=1; n<10; n++){
        printf("%d * %d = %d\n",iter, n, iter*n);
        
    }

    return 0;
}