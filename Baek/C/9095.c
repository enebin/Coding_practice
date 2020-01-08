#include <stdio.h>
#include <stdlib.h>

int Dp[12] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    Dp[1] = 0;

    while(iter--){
        int n;
        scanf("%d", &n);

        for (int i=2; i<=n; i++)
            Dp[i] = Dp[i-1] + 2;

        printf("%d\n", Dp[n]);
    }

    return 0;
}