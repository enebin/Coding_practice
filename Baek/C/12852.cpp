#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 100000
#define INF 999999

using namespace std;

int dp[MAX + 1] = {0, };
vector<int> history;

void DP_Calc(int i){
    int three, two, one, minimum;
    if (i != 1){
        three = INF, two = INF, one = INF, minimum = INF;
        if (i % 3 == 0)
            three = dp[i/3];
        else if (i % 2 == 0)
            two = dp[i/2];
        else 
            one = dp[i-1];

        minimum = min({three, two, one});
        dp[i] = minimum + 1;

        if (minimum == three){
            DP_Calc(i/3);
            history.push_back(i/3);

        }
        else if (minimum == two){
            DP_Calc(i/2);
            history.push_back(i/2);
        }
        else {
            DP_Calc(i-1);
            history.push_back(i-1);
        }
    }

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int iter;
    cin >> iter;

    dp[1] = 0;   
    DP_Calc(iter);

    cout << "t: " << history.size() << endl;
    cout << dp[iter] << endl << iter << " ";
    for (auto i=history.end()-1; i>=history.begin(); i--)
        cout << *i << " ";   
}
