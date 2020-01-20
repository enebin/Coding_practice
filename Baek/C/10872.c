#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    
    int res = 1;
    for (int i=iter; i>=1; i--)
        res *= i;

    printf("%d\n", res);

    return 0;
}