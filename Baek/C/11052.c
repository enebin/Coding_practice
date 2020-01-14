#include <stdio.h>
#include <stdlib.h>

int p[1001];
int Dp[1001] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=1; i<=iter; i++){
        scanf("%d", &p[i]);
    }

    Dp[1] = p[1];

    int max = 0;
    for (int i=2; i<=iter; i++){
        Dp[i] = p[i];
        for (int j=0; j<i; j++){
            max = Dp[j] + Dp[i-j];
            if (max > Dp[i])
                Dp[i] = max;
        }
    }

    printf("%d\n", Dp[iter]);

    return 0;
}