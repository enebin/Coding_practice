#include <stdio.h>
#include <stdlib.h>

unsigned int Dp[1000001] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    Dp[1] = 1;
    Dp[2] = 2;
    Dp[3] = 4;

    while(iter--){
        int n;
        scanf("%d", &n);

        for (int i=4; i<=n; i++)
            Dp[i] = (Dp[i-1] + Dp[i-2] + Dp[i-3]) % 1000000009;

        printf("%d\n", Dp[n] % 1000000009);
    }

    return 0;
}