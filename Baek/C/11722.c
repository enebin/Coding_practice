#include <stdio.h>
#include <stdlib.h>

int x[1001] = {0};
int Dp[1001] = {0};
int max = 0;

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=iter; i>=1; i--){
        scanf("%d", &x[i]);
    }
 
    for (int i = 1; i <= iter; i++)
    {
        int min = 0;
        for (int j = 0; j < i; j++){
            if (x[i] > x[j]){
                if (min < Dp[j])
                    min = Dp[j];
            }
        }
        Dp[i] = min + 1;
        if (max < Dp[i])
            max = Dp[i];
    }
 
    printf("%d\n", max);

    return 0;
}