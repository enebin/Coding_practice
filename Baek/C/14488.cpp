#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num[12] = {0, };
int p = 0, m = 0, t = 0, d = 0;
int op[4] = {0, };
int maxx = -(INT32_MAX);
int minn = INT32_MAX;

void dfs(int result, int step){
    if (step == p + m + t + d) {
        if (maxx < result)
            maxx = result;
        if (minn > result)
            minn = result;
        return; 
    }
    else{
        int cur = step + 1;
        if(op[0] < p){
            op[0]++;
            dfs(result + num[cur], cur);
            op[0]--;
        }
        if (op[1] < m){
            op[1]++;
            dfs(result - num[cur], cur);
            op[1]--;
        }
        if (op[2] < t){
            op[2]++;
            dfs(result * num[cur], cur);
            op[2]--;
        }
        if (op[3] < d){
            op[3]++;
            dfs(result / num[cur], cur);
            op[3]--;
        }
    }
    return;
}

int main(){
    int iter;
    cin >> iter;

    for (int i=0; i<iter; i++){
        cin >> num[i];
    }

    cin >> p >> m >> t >> d;

    dfs(num[0], 0);

    cout << maxx << endl << minn << endl;
}