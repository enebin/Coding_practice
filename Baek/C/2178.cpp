/*#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, map[101][101], visit[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int result = INT32_MAX;

void dfs(int x, int y, int cnt) {
    if (x == n-1 && y == m-1){
        //cout << cnt << endl;
        result = min(cnt, result);
        return;
    }
    else {
        visit[x][y] = 1; 

        for (int i=0; i<4; i++){
            int dx_ = x + dx[i];
            int dy_ = y + dy[i];

            if (dx_ < 0 || dy_ < 0)
                continue;
            else if (map[dx_][dy_] == 1 && visit[dx_][dy_] == 0){
                dfs(dx_, dy_, cnt + 1);
                visit[dx_][dy_] = 0; 
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%1d", &map[i][j]);
        }
    }

    dfs(0, 0, 1);
    printf("%d\n", result);
}
//DFS
*/


#include <cstdio>
#include <queue>
using namespace std;

int N, M;
int map[100][100]={0,};
const int dx[]={-1,1,0,0};
const int dy[]={0,0,1,-1};

void bfs(int x, int y){
	queue<pair<int, int> > q;
	q.push(make_pair(x,y));

	while(!q.empty()){
		x = q.front().first;
		y = q.front().second;
		q.pop();
        
		for(int k = 0 ; k < 4; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(nx < 0 || nx > N-1 || ny < 0 || ny > M-1) continue;
			if(map[nx][ny] == 1){
				q.push(make_pair(nx,ny));
				map[nx][ny]=map[x][y]+1;
			}
		}
	}
}

int main() {
	scanf("%d %d",&N,&M);
	for(int i = 0 ; i <N ; i++){
		for(int j = 0 ; j < M ; j++){
			scanf("%1d",&map[i][j]);
		}
	}

	map[0][0] = 2;
	bfs(0,0);

	printf("%d\n",map[N-1][M-1]-1);

	return 0;
}