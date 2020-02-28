#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> car1, car2;
vector<pair<int, int>> p;

int dp[1001][1001];

int calc(int x, int y, const int x_, const int y_){
    return abs(x-x_) + abs(y-y_);
}

int main(){
    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    while(m--){
        int x, y;
        scanf("%d %d", &x, &y);
        p.push_back(make_pair(x, y));
    }
    
    

}