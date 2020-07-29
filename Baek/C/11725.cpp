#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 100000

using namespace std;

int iter;
bool visited[MAX + 1];
int rooT[MAX + 1];
vector<int> v[MAX + 1];

void dfs(int n){
    for (int i=0; i<v[n].size(); i++){
        int temp = v[n][i];
        if(visited[temp] == 0){
            visited[temp] = 1;
            rooT[temp] = n;

            //printf("n= %d, i= %d\n", n, temp);

            dfs(temp);
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fill(v[0].begin(), v[MAX].end(), 0);

    cin >> iter;
    for (int i=1; i<iter; i++){
        int x, y;
        cin >> x >> y;
        
        v[x].push_back(y);
        v[y].push_back(x);
    }   

    //cout << endl << v[4].size() << " " << v[1].size() << endl;
    for (int i=1; i<=iter; i++)
        dfs(i);

    for (int i=2; i<=iter; i++)
        cout << rooT[i] << '\n';

}

