#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> result;
pair<int, int> p1, p2;

int dp[1001][1001];

int calc(int x, int y, const int x_, const int y_){
    return abs(x-x_) + abs(y-y_);
}

int main(){
    int n;
    scanf("%d", &n);
    
    p1.first = 1, p1.second = 1;
    p2.first = n, p2.second = n;

    int m;
    scanf("%d", &m);

    int r = 0;
    while(m--){
        int x, y;
        scanf("%d %d", &x, &y);

        int px1, px2, py1, py2, r1, r2;

        px1 = p1.first, py1 = p1.second;
        px2 = p2.first, py2 = p2.second;

        r1 = calc(px1, py1, x, y), r2 = calc(px2, py2, x, y);

        if (r1 < r2){
            result.push_back(1);
            p1 = make_pair(x, y);
            r += r1;
        }
        else{
            result.push_back(2);
            p2 = make_pair(x, y);
            r += r2;
        }
    }

    printf("%d\n", r);

    for (auto iter = result.begin(); iter != result.end(); iter++){
        printf("%d\n", *iter);
    }
}