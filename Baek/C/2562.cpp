#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int iter = 9;

    int maxx = 0, loc = 0;
    while(iter--){
        int temp;
        cin >> temp;

        if (maxx < temp){
            maxx = temp;
            loc = 9 - iter;
        }            
    }

    cout << maxx << endl << loc << endl;
}