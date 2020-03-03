#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;
bool map[1001][1001];
int visit[1001][1001][2] = {0, };

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(void){
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 1});

    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int ch = q.front().second;

        q.pop();

        if (x == n-1 && y == m-1)
            return visit[x][y][ch];

        for (int i=0; i<4; i++){
            int x_ = x + dx[i];
            int y_ = y + dy[i];

            if (0 <= x_ && x_ < n && 0 <= y_ && y_ < m){
                if (map[x_][y_] == 1 && ch == 1){
                    visit[x_][y_][0] = visit[x][y][1] + 1;
                    q.push({{x_, y_}, 0});
                }
                else if (map[x_][y_] == 0 && visit[x_][y_][ch] == 0){
                    visit[x_][y_][ch] = visit[x][y][ch] + 1;
                    q.push({{x_, y_}, ch});  
                }                
            }
            else
                continue;    
        }
    }

    return -1;
}

int main(){
    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%1d", &map[i][j]);
        }
    }

    visit[0][0][1] = 1;
    printf("%d\n", bfs());
}