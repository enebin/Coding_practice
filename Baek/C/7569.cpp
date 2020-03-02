#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m, s;
int tom[101][101][101];
int visit[101][101][101];
int dx[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {1, -1, 0, 0, 0, 0};

queue<pair<pair<int, int>, int>> q;

int bfs(){
    int day = 0;

    while (!q.empty()){
        int cur_size = q.size();

        while(cur_size--){
        
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;

        for (int i=0; i<6; i++){
            int x_ = x + dx[i];
            int y_ = y + dy[i];
            int z_ = z + dz[i];

            if (0<= x_ && x_ < n && 0 <= y_ && y < m && 0 <= z && z < s){
                if (tom[x_][y_][z_] == 0){
                    tom[x_][y_][z_] = 1;
                    q.push(make_pair(make_pair(x_, y_), z_));
                }
            }
            q.pop();
        }
        }


        
        
    }


}

int main(){
    cin >> n >> m >> s;

    for (int k=0; k<s; k++){
        for (int i=0; i<n; i++)   {
            for (int j=0; j<m; j++){
                int temp;
                scanf("%d", &temp);
                tom[i][j][k] = temp;
                if (temp == 1)
                    q.push(make_pair(make_pair(i, j), k));
            }   
        }
    }


}