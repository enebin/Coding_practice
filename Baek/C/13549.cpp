#include <iostream>
#include <algorithm>
#include <queue>

#define MAX 100000

using namespace std;
queue<pair<int, int>> v;
bool visited[MAX*2 + 1] = {0, };

void bfs(int n, int k){
    v.push({n, 0});
    visited[n] = 1;
    
    while(!v.empty()){
        int num = v.front().first;
        int count = v.front().second;
        v.pop();

        //cout << num << " " << count << endl;

        if (num == k){
            cout << count << endl;
            break;
        }

        if (visited[num * 2] == 0 && num * 2 <= MAX){
            v.push({num * 2, count});
            visited[num * 2] = 1;
        }
        if (visited[num - 1] == 0 && num - 1 >= 0){
            v.push({num - 1, count + 1});
            visited[num - 1] = 1;
        }
        if (visited[num + 1] == 0 && num + 1 <= MAX){
            v.push({num + 1, count + 1});
            visited[num + 1] = 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    bfs(n, k);
}
