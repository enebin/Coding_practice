#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
int n, value[21], cost[21];
int dp[21][101];

int main(){
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
        scanf("%d", cost + i);
    
    for (int i = 1; i <= n; i++)
        scanf("%d", value + i);
    
    for (int i=1; i<=n; i++){
        for (int j=0; j<=99; j++){
            dp[i][j] = dp[i-1][j];
        }
        for (int j=cost[i]; j<=99; j++){
            dp[i][j] = max(dp[i][j], dp[i-1][j-cost[i]] + value[i]);
        }
    }
    
    printf("%d\n", dp[n][99]);
    return 0;
}