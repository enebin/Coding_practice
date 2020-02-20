#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int jang[501] = {0, };
int dp[501] = {0, };

int main(){
    int sakura;
    cin >> sakura;
    while(sakura--){
        int iter;
        cin >> iter;

        for (int i=1; i<=iter; i++)
            scanf("%d", &jang[i]);
        
        dp[1] = jang[1];
        dp[2] = jang[1] + jang[2];

        for (int i=3; i<=iter; i++){
            int yerim = dp[i-1] + jang[i];
            int ohama = dp[i-2] + jang[i] + jang[i-1];
            
            if (yerim < ohama)
                dp[i] = yerim * 2;
            else
                dp[i] = ohama * 2;
            
        }

        printf("%d\n", dp[iter]);
    }
}