#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int nums[41];
vector<int> ssum;
vector<int>::iterator itr;

int main(){
    int n, s;
    cin >> n >> s;

    for (int i=0; i<n; i++){
        cin >> nums[i];
    }

    for (int i=0; i<n; i++){
        int sum = 0;

        for (int j=i; j<n; j++){
            sum += nums[j];
            ssum.push_back(sum);
        }
    }

    sort(ssum.begin(), ssum.end());

    long long int result = 0;
    int low = lower_bound(ssum.begin(), ssum.end(), s) - ssum.begin();
    int high = upper_bound(ssum.begin(), ssum.end(), s) - ssum.begin();
    result += high - low;

    /*for (itr=ssum.begin(); itr!=ssum.end(); ++itr){
        cout << *itr << " ";
    }*/

    cout << result << endl;
}