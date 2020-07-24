#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

#define MAX 100000

using namespace std;
queue<pair<int, int>> v;
int visited[2*MAX + 1] = {0, };

void bfs(int n, int k){
    v.push({n, 0});
    visited[n] = n;
    if (n == 0)
        visited[0] = 1;
        
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
            v.push({num * 2, count + 1});
            visited[num * 2] = num;
        }
        if (visited[num - 1] == 0 && num - 1 >= 0){
            v.push({num - 1, count + 1});
            visited[num - 1] = num;
        }
        if (visited[num + 1] == 0 && num + 1 <= MAX){
            v.push({num + 1, count + 1});
            visited[num + 1] = num;
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
        
    int target = k;
    stack<int> s;
    while (visited[target] != n){
        s.push(visited[target]);
        target = visited[target];
    }
    
    cout << n << " ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << k << endl;
}
