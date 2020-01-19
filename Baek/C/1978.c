#include <stdio.h>
#include <stdlib.h>

int nums[100] = {0};
int Dp[1001];
int car[1001] = {2};
int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=1; i<=iter; i++){
        scanf("%d", &nums[i]);
    }

    for (int i=1; i<=nums[iter]; i++){
        Dp[i] = i+1;        
    }

    for (int i=1; i<=nums[iter]; i++){
        for (int j=0; j<i; j++){
            if (Dp[i] % Dp[j] == 0)
                break;
            Dp[i] =         

        }
    }

    for (int i=1; i<=iter; i++){

        }
    }

    return 0;
}