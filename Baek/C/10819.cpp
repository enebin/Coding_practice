#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> square;

int calc(int n){
    int sum = 0;
    for (int i=0; i<n-1; i++){
        sum += abs(square[i] - square[i+1]);
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        square.push_back(tmp);
    }

    sort(square.begin(), square.end());

    int max = 0;    
    do{
        int res = calc(n);
        max = res > max ? res : max;
    } while(next_permutation(square.begin(), square.end()));

    cout << max << endl;
    return 0;
}