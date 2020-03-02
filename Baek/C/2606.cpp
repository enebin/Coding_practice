#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int iter;
int max_c = 0;

bool com[101][101];
bool visited[101];

int dfs(int x){
    max_c++;
    visited[x] = 1;

    for (int i=1; i<= iter; i++){
        if (com[x][i]==1 && visited[i]==0)
                dfs(i);
    }

    return max_c;
}

int main(){
    cin >> iter;

    int m;
    cin >> m;
    while(m--){
        int x, y;
        cin >> x >> y;

        com[x][y] = 1;
        com[y][x] = 1;
    }

    int result = 0;
    for (int i=1; i<=iter; i++){
        max_c = 0;
        if (visited[i] == 0)
            result = max(dfs(i), result);
    }

    cout << result-1 << endl;
}