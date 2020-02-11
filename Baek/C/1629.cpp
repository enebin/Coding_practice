#include <iostream>
#include <algorithm>

using namespace std;

int power(int a, int b, int c){
    if(b == 0) 
        return 1;

    int temp = power(a, b / 2, c);
    int result = (1LL * temp * temp) % c; 

  	if(b % 2) 
        result = 1LL * result * a % c;

    return result;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << power(a, b, c) << endl;
}