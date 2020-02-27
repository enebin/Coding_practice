#include <cstdio>

int n, m;
int nums[2001];
int dp[2002][2002] = {0, };

int main(){
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        scanf("%d", &nums[i]);
    }
    
    for (int i=1; i<=n; i++){
        dp[i][i] = 1;
        if (nums[i] == nums[i+1]){
            dp[i][i+1] = 1;
        }
    }

    for (int d=2; d<n; d++){
        for (int i=1; i<=n-d; i++){
            if (nums[i] == nums[i+d] && dp[i+1][i+d-1] == 1){
                dp[i][i+d] = 1;
            }
        }
    }

    scanf("%d", &m);
    while(m--){
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%d\n", dp[x][y]);
    }
}