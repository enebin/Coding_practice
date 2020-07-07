#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[1002][1002] = {0, };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    for (int i=1; i<=s1.length(); i++){
        for (int j=1; j<=s2.length(); j++){
            if (j != 1)
                dp[i][j] = dp[i][j-1];
            
            if (s1[i] == s2[j]){
                dp[i][j]++;
            }

            dp[i+1][1] = dp[i][j];
            cout << dp[i][j] << " ";
        }
    }
   
    cout << dp[s1.length()][s2.length()] << endl;
}
