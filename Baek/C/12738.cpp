#include <iostream>
#include <algorithm>
#include <vector>

typedef long long lld;

using namespace std;
vector<lld> num, ans;

int main(){
    lld iter;
    cin >> iter;

    lld it = iter, temp;
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
            vector<lld>::iterator loc;

            loc = lower_bound(ans.begin(), ans.end(), num[i]);
            ans[loc - ans.begin()] = num[i];
        }
    } 

    cout << ans.size() << endl;
    /*for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }*/
    //cout << '\n';
}