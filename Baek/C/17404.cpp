#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 1001

using namespace std;

int home[MAX][4]; // [n]번 집을 [RGB]로 칠하는 방법
int dp[MAX][4];

int DyP(int n, int m){
    
}

int main(){
    int iter;
    cin >> iter;

    for (int i=1; i<=iter; i++)
        for (int j=1; j<=3; j++)
            cin >> home[i][j];
    
    int result = DyP(1, 1);


}