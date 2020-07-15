#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define CONDITION 123456

using namespace std;

typedef vector<int> vi;

int prime_time(vi& nums){
    int result = nums.size();

    if (nums.empty())
        return 0;

    for (int i=2; i<=sqrt(nums.back()); i++){
        for (auto x=nums.begin(); x<nums.end(); x++){
            if (*x % i == 0 && *x != i){
                nums.erase(x);
            }
        }
    }

    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vi nums;
    for (int i=2; i<=2*CONDITION; i++){
        if (i == 1)
            continue;

        nums.push_back(i);
    }

    prime_time(nums);

    while (1){
        int n;
        cin >> n;

        if (n == 0)
            break;

        auto low = upper_bound(nums.begin(), nums.end(), n);
        auto high = lower_bound(nums.begin(), nums.end(), 2*n);

        auto result = high - (low);

        if (n == 1)        
            cout << 1 << endl;
        else
            cout << result << endl;
    }
}
