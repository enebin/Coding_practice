#include <stdio.h>
#include <stdlib.h>

int res[1001];
int Dp[1000001] = {0};
int temp;


int main()
{
    for (int i=1; i<=1000; i++){
        res[i] = i*i;
    }

    int iter;
    scanf("%d", &iter);

    Dp[1] = 1;
    
    for (int i=1; i<=iter; i++){
        int min = 500000;
        for (int j=1; res[j] <= i; j++){
            temp = 1 + Dp[i - res[j]];
            if (min > temp)
                min = temp;
        }
        Dp[i] = min;
    }

    printf("%d\n", Dp[iter]);

    return 0;
}