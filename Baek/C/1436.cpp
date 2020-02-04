#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

bool check(int n){
    while (n){
        if (n % 1000 == 666)
            return 1; 
        n /= 10;
    }   
    return 0;
}

int main(){
    int iter;
    cin >> iter;

    int baro = 666;
    
    int count = 0;
    int bas = 666;
    while (count != iter){
        if (check(bas++))
            count++;
    }

    cout << bas-1 << endl;
}