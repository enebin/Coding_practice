#include <iostream>
#include <cstring>

using namespace std;

bool map[51][51];
bool visited[51][51];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y){
    visited[x][y] = 1;

    for (int i=0; i<4; i++){
        int dx_ = x + dx[i], dy_ = y + dy[i];
        if (dx_ < 0 || dy_ < 0)
            continue;
        else if (map[dx_][dy_] == 1 && visited[dx_][dy_] == 0)
            dfs(dx_, dy_);
    }
}

int main(){
    int iter;
    cin >> iter;
    
    while(iter--) {
        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));

        int x, y;
        cin >> x >> y;

        int bat;
        cin >> bat;

        int tx, ty;
        while(bat--){
            cin >> tx >> ty;
            map[tx][ty] = 1;
        }

        int cnt = 0;
        for (int i=0; i<x; i++)
            for (int j=0; j<y; j++){
                if (map[i][j] == 1 && visited[i][j] == 0){
                    dfs(i, j);
                    cnt++;
                }
            }

        cout << cnt << endl;
    }
}