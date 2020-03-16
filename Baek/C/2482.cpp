#include <cstdio>
#include <algorithm>

using namespace std;

const int mod = 1000000003;

int dp[1005][1005];
int N, K;

int main(){
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++){
        dp[i][1] = i;
        dp[i][0] = 1;
    }

    for (int i = 3; i <= N+1; i++){
        for (int j = 2; j <= K; j++){
            dp[i][j] = (dp[i - 2][j - 1] + dp[i - 1][j]) % mod;
        }
    }

    int ans = (dp[N - 1][K] + dp[N - 3][K - 1]) % mod;
    printf("%d\n", ans);

    return 0;
}