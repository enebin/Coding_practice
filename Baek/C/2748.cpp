#include <iostream>

using namespace std;

unsigned long long int fib[91];

int main(){
    int iter;
    cin >> iter;

    fib[1] = 1;
    fib[2] = 1;

    for (int i=3; i<=iter; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }
   
    cout << fib[iter] << endl;
}