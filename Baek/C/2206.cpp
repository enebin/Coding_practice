#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;
int map[1001][1001];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(void){
    int chance = 1, depth = 0;
    queue<pair<int, int>> q;

    q.push({0, 0});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        if (x == n-1 && y == m-1){
            return depth;
        }

        for (int i=0; i<4; i++){
            int x_ = x + dx[i];
            int y_ = y + dy[i];

            if (0 <= x_ && x_ < n && 0 <= y_ && y_ < m){
                if (map[x_][y_] == 0){
                    q.push({x_, y_});
                    map[x_][y_] = map[x][y] + 1;
                    chance = 1;
                }
                else if (chance == 1){
                    q.push({x_, y_});
                    chance = 0;
                }
            }
            else
                continue;            
        }

        q.pop();
    }
}

int main(){
    cin >> n >> m;    

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%1d", &map[i][j]);
        }
    }

}