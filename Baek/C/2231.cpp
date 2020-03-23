#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int iter;

bool tester(int x){
    int sum = x;
    while (x){
        sum += x % 10;
        x /= 10;
    }

    if (sum == iter)
        return 1;
    else
        return 0;
}

int main(){
    cin >> iter;
   
    for (int i=1; i<=iter; i++){
        if (tester(i)){
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}