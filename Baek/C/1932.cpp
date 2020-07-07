#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int iter;
int max_val = 0;

int tri[501][501] = {0, }; 
int dp[501][501] = {0, };

void compare(int x, int y, int garo){
    int result = 0;

    if (y == garo){
        result += dp[x-1][garo-1];
    }
    else if (y == 1){
        result += dp[x-1][1];
    }
    else{
        result += max(dp[x-1][y-1], dp[x-1][y]);
    }

    dp[x][y] = result + tri[x][y];
    max_val = max(dp[x][y], max_val);

    cout << x << " " << y << " " << max_val << endl;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> iter;

    int garo = 1;
    for (int i=1; i<=iter; i++){
        for (int j=1; j<=garo; j++){
            cin >> tri[i][j];
        }
        garo++;
    }

    dp[1][1] = tri[1][1];

    garo = 2;
    for (int i=2; i<=iter; i++){
        for (int j=1; j<=garo; j++){
            compare(i, j, garo);
        }
        garo++;
    } 
   
    cout << max_val << endl;
}
