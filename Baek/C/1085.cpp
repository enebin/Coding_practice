#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int INF = INT32_MAX;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h;
    cin >> x >> y>> w >> h;

    cout << min({w - x, h - y, x, y}) << endl;   
}
