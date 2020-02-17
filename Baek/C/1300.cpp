#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> num;

int main(){
    int iter;
    cin >> iter;

    for (int i=1; i<=iter; i++){
        for (int j=1; j<=iter; j++){
            num.push_back(i*j);
        }
    }

    sort(num.begin(), num.end());

    int targ;
    cin >> targ;

    cout << num[targ];
}