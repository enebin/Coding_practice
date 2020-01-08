#include <stdio.h>

int main()
{
    int i, j, k;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = 2 * n - 2 * i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n + 1; i < 2 * n; i++)
    {
        for (j = 2 * n - i; j > 0; j--)
        {
            printf("*");
        }
        for (k = 2 * i - 2 * n; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 2 * n - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
