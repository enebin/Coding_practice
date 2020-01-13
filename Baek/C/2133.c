#include <stdio.h>

int Dp[31] = {};
int result[31] = {}; 

int main(){
    int iter;
    
    Dp[0] = 1;    
    result[0] = 1;
    
    Dp[2] = 3;
    for (int i = 4; i <= 30; i += 2)
        Dp[i] = 2;
 
    scanf("%d", &iter);
 
    for (int i = 2; i <= iter; i+=2){
        for (int j = 2; j <= i; j += 2){
            result[i] += Dp[j] * result[i - j];
        }
    }
 
    printf("%d\n", result[iter]);
 
    return 0;
}


