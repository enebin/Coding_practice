#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
    ll l, m ,n;
    cin >> l >> m >> n;

    if (m == n)
        cout << -1 << endl;
    else{
        ll res = l / (n - m) + 1;

        if (res < 0)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
}