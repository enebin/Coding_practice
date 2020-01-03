#include <stdio.h>
#include <stdlib.h>

int jumpingOnClouds(int c_count, int *c, int k)
{
    int e = 100;
    int i = 0;

    do
    {
        if (c[i] == 0)
            e -= 1;
        else
            e -= 3;
        i += k;
        if (i >= c_count)
            i -= c_count;
    } while (i != 0);

    return e;
}

int main(void)
{
    int list[8] = {0, 0, 1, 0, 0, 1, 1, 0};
    printf("%d", jumpingOnClouds(8, list, 2));
}