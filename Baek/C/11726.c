#include <stdio.h>
#include <stdlib.h>

int DP[1001] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    DP[1] = 1;
    DP[2] = 2;

    for (int i=3; i<=iter; i++)
        DP[i] = (DP[i-2] + DP[i-1]) % 10007;

    printf("%d\n", DP[iter] % 10007);

    return 0;
}
