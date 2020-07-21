#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

vector<int> v;
ll dp[1<<15][101] = {0};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int temp;
        v.push_back(temp);
    }

    int numerator, denominator, k;
    cin >> k;

    dp[0][0] = 1;
    for (int i=0; i < 1<<n; i*=2){
        for (int l=1; l<=n; l++){
            int remainder = v[i] % k;
            dp[i][k] += 1;
        }
    }
    
    numerator = dp[1<<n-1][0];

    cout << numerator << '/' << denominator << '\n';   
}
