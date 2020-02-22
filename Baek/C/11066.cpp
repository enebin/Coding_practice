#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int jang[501] = {0, };
int dp[501] = {0, };
int gp[501] = {0, };

int main(){
    int sakura;
    cin >> sakura;
    
    while(sakura--){
        int iter;
        cin >> iter;

        for (int i=1; i<=iter; i++)
            scanf("%d", &jang[i]);
        
        dp[1] = jang[1], gp[1] = dp[1];
        dp[2] = jang[1] + jang[2], gp[2] = dp[2];

        for (int i=3; i<=iter; i++){
            int resultg1 = jang[i] + jang[i-1] + gp[i-2];
            int resultg2 = jang[i] + gp[i-1];

            int result1 = resultg1 * 2;
            int result2 = resultg2 + dp[i-1];

            if (result1 < result2){
                dp[i] = result1;
                gp[i] = resultg1;
            }
            else{
                dp[i] = result2;
                gp[i] = resultg2;
            }
            
        }

        printf("%d\n", dp[iter]);
    }
}