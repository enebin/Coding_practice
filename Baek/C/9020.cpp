#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

typedef vector<int> vi;

void prime_time(vi& nums){
    int result = nums.size();

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

void find_time(vi nums, int n){
    int result = 0;

    auto low = lower_bound(nums.begin(), nums.end(), n / 2);

    while (1){
        auto high = lower_bound(nums.begin(), nums.end(), n - *low);

        if (*low + *high == n){
            if (*low > *high)
                cout << *high << " " << *low << '\n';
            else
                cout << *low << " " << *high << '\n';
            break;
        }
        else{
            low--;
            //cout << *low << " ";
            continue;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int iter;
    cin >> iter;

    vi nums;
    for (int i=2; i<=10000; i++){
        if (i == 1)
            continue;

        nums.push_back(i);
    }

    while (iter--){
        int n;
        cin >> n;


        prime_time(nums);
        find_time(nums, n);
    }
}


/* Faster one *

#include <cstdio>
#define N 10000

int main(){
    int prime[N] = {1,1,0,};

    for(int i=2;i<=N;++i){
        if(!prime[i]){
            for(int j=i*2;j<=N;j+=i){
                prime[j] = 1;
            }
        }
    }

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        int num;
        scanf("%d",&num);
        for(int j=num/2;j>=2;--j){
            if(!prime[j] && !prime[num-j]){
                printf("%d %d\n",j,num-j);
                break;
            }
        }
    }
    return 0;
}

*/