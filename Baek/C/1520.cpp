#include <cstdio>

int m, n;
int map[501][501];
int dp[501][501];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int dfs(int x, int y){
    if (x==1 && y==1)
        return 1;

    if (dp[x][y] == -1){
        dp[x][y] = 0;

        for (int i=0; i<4; i++){
            int d_x = dx[i] + x;
            int d_y = dy[i] + y;

            if (d_x>=1 && d_x<=m && d_y>=1 && d_y<=n){
                if (map[x][y] < map[d_x][d_y]){
                    dp[x][y] += dfs(d_x, d_y);
                }
            }
        }
    }
    
    return dp[x][y];
}

int main(void){ 
    scanf("%d %d", &m, &n);
 
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            scanf("%d", &map[i][j]); 
            dp[i][j] = -1;
        }
    }
    
    printf("%d\n", dfs(m, n));
    return 0;
}