#include <cstdio>
#include <algorithm>
//#define min(a, b) = a > b ? b : a

using namespace std;

int dp[1001][3], N;

int main(){
    scanf("%d", &N);
    
    for (int i = 1; i <= N; ++i) {
        int R, G, B;
        scanf("%d %d %d", &R, &G, &B);

        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + R;
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + G;
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + B;
    }

    printf("%d", min(dp[N][0], min(dp[N][1], dp[N][2])));
}
