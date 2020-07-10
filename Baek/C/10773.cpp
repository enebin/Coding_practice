#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int iter;
    cin >> iter;
    
    stack<int> nums;
    while (iter--){
        int temp;
        cin >> temp;

        if (temp == 0)
            nums.pop();
        else
            nums.push(temp);
    }
    
    int sum = 0;
    while (nums.size() > 0){
        sum += nums.top();
        nums.pop();
    }

    cout << sum << endl;   
}
