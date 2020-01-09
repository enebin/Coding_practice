#include <stdio.h>
#include <stdlib.h>

#define mod 10007

int Dp[1001][10] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=0; i<10; i++){
        Dp[1][i] = 1;
    }

    for (int j=2; j<=iter; j++){
        for (int i=0; i<10; i++){
            for (int k=i; k<10;k++){
                Dp[j][i] += (Dp[j-1][k]) % mod;
            }
        }
    }

    int sum = 0;
    for (int i=0; i<10; i++){
        sum += Dp[iter][i];
    }

    printf("%d\n", sum % mod);
    return 0;
}