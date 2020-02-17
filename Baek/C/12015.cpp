#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> num, ans;

int main(){
    int iter;
    cin >> iter;

    int it = iter, temp;
    while (it--){
        cin >> temp;
        num.push_back(temp);
    }

    ans.push_back(num.front());

    for (int i=1; i<iter; i++){
        if (num[i] > ans.back()){
            ans.push_back(num[i]);
        }
        else {
            vector<int>::iterator loc;

            loc = lower_bound(ans.begin(), ans.end(), num[i]);
            ans[loc - ans.begin()] = num[i];
        }
    } 

    cout << ans.size() << endl;
}