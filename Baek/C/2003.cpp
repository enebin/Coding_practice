#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int nums[10001];

int sum(int* x, int* y){
    int res = 0;
    while (x != y)
        res += *(x++);
    return res;
}

int main(){
    int iter, target;
    cin >> iter >> target;

    int i = 0;
    int temp = iter;
    while (temp--)
        cin >> nums[i++];
    
    int* s = nums;
    int* e = nums;

    int result;
    int count = 0;
    while (e != nums + iter + 1){
        result = sum(s, e);

        if (result == target){
            e++;
            count++;
        }
        else if (result > target)
            s++;
        else
            e++;
    }

    cout << count;
}