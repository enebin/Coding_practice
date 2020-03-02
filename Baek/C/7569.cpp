#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int tom[101][101][101];
int visit[101][101][101];
int dx[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {1, -1, 0, 0, 0, 0};

queue<pair<pair<int, int>, int>> q;

int bfs(){



}

int main(){
    int n, m, s;
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