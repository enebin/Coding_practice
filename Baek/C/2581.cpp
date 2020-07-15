#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

typedef vector<int> vi;

void prime_time(vi& nums){
    if (nums.empty())
        return;

    for (int i=2; i<=sqrt(nums.back()); i++){
        for (auto x=nums.begin(); x<nums.end(); x++){
            if (*x % i == 0 && *x != i){
                nums.erase(x);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vi nums;
    for (int i=n; i<=m; i++){
        if (i == 1)
            continue;

        nums.push_back(i);
    }

    prime_time(nums);

    int result = 0;
    for (auto i = nums.begin(); i<nums.end(); i++)
        result += *i;

    if (nums.empty())
        cout << -1 << endl;
    else 
        cout << result << endl << nums.front() << endl;
}
