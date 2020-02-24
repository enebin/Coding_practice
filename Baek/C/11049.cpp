#include <iostream>
#include <algorithm>

using namespace std;

int dp[501][501];
int arr[501][2];

int main(){
    int iter;
    cin >> iter;

    for (int i=1; i<=iter; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

   for (int d=1; d<iter; d++){
       for (int i=1; i<=iter-d; i++){
           int j = i + d;
           dp[i][j] = INT32_MAX;
           for (int k=i; k<=j; k++){
               dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + arr[i][0]*arr[k][1]*arr[j][1]);
           }
       }
   }

   printf("%d\n", dp[1][iter]);
}