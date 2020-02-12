#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int fact(int n){

}


int main(){
    int n, p;
    cin >> n >> p;

    int result = 1;
    for (int i=2; i<=n; i++){
        result *= i;
        result %= p;
    }

    cout << result;
}