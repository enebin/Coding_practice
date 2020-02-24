#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[501][501];
int visited[501][501] = {0, };
int n, m;

void dfs(int x, int y){
    int count = 1;
    visited[x][y] = count;
    int targ = arr[x][y];

    if (arr[x+1][y] < targ && !visited[x+1][y])
        dfs(x+1, y);
    if (arr[x][y+1] < targ && !visited[x][y+1])
        dfs(x, y+1);
    if (arr[x-1][y] < targ && !visited[x-1][y])
        dfs(x-1, y);
    if (arr[x][y-1] < targ && !visited[x][y-1])
        dfs(x, y-1);
    
    if (x == n && y)


}

int main(){
    cin >> n >> m;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=1; i<=n; i++){

    }
}