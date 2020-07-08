#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[1001][1001] = {0, };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() > s2.length()){
        string temp = s2;
        s2 = s1;
        s1 = temp;
    }

    int value = 0;
    for (int i=0; i<s1.length(); i++){
        for (int j=0; j<s2.length(); j++){

            if (i+1 == 1){
                if (s1[i] == s2[j]){
                    value = 1;
                }
                dp[1][j+1] = value;
                
                //cout << dp[1][j+1] << " " << endl;
            }            
            else {
                if (s1[i] == s2[j]){
                    value = dp[i][j+1] + 1;
                }
                dp[i+1][j+1] = max(dp[i][j+1], value);
            }

        }
    }
   
    cout << dp[s1.length()][s2.length()] << endl;
}
