#include <iostream>

using namespace std;

bool dp[42];

int main(){
    int iter = 10;

    int check = 0;
    while(iter--){
        int temp;
        cin >> temp;

        int res = temp % 42;
        if (dp[res] == 0){
            dp[res]++;
            check++;
        }
        else 
            continue;
    }

    cout << check << endl;   
}