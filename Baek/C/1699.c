#include <stdio.h>
#include <stdlib.h>

int res[500001];
int Dp[1000001] = {0};
int min = 500000;
int count = 0;
int temp;


int main()
{
    int iter;
    //scanf("%d", &iter);

    iter = 43;

    int j = 0;
    for(int i=1; i*i<=iter; i++){
        res[i] = i*i;
        j++;
    }
    
    Dp[1] = iter;

    for (int i=2; i<=iter; i--){
        Dp[i] = 1 + Dp[iter - res[i] * res[i]];

        if (min > count)
            min = count;
        
        Dp[i] = count;
    }


    printf("%d\n", min);

    return 0;
}