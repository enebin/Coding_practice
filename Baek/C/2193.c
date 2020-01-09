#include <stdio.h>
#include <stdlib.h>

unsigned long long int Dp[91][2];

int main()
{
    int iter;
    scanf("%d", &iter);

    Dp[1][0] = 0;
    Dp[1][1] = 1;

    for (int i=2; i<=iter; i++){
        Dp[i][1] += Dp[i-1][0];
        Dp[i][0] += Dp[i-1][1] + Dp[i-1][0];
    }

    unsigned long long sum = 0;
    for (int i=0; i<2; i++){
        sum += Dp[iter][i];
    }

    printf("%llu\n", sum);

    return 0;
}