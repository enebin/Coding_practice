#include <iostream>

#define MAX 17000000
#define NUM 15

using namespace std;

int n, k;      
int arr[NUM];
int dp[1 << NUM][101] = {0, };

int TSP(int visit, int now){
    visit |= (1 << now);

    if (visit == (1 << n) - 1){
        if (dp[now][0] != 0)
            return dp[now][0];
        else
            return 0;
    }

    int &ret = dp[visit][now];
    if (ret > 0)
        return ret;

    ret = MAX;
    for (int i = 0; i < n; i++){
        if (i != now && (visit & (1 << i)) == 0){            
            int temp = TSP(visit, i);
            if (ret > temp)
                ret = temp;
        }
    }
    return ret;
}

int main(){
    int ans;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ans = TSP(0, 0);

    if (ans == MAX)
        printf("-1\n");
    else
        printf("%d\n", ans);

    return 0;
}