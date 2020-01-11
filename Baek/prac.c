#include <stdio.h>
#include <stdlib.h>

int x[1001] = {0};
int Dp[1001] = {0};
int max = 0;
int temp[1001] = {0};

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=iter; i++){
        scanf("%d", &x[i]);
    }
 
    for (int i=iter-1; i>=0; i--){
        temp[i+1] = x[iter-i];
    }

 

    
    

    

}