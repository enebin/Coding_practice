#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string nums;

int main(){
    int iter;
    cin >> iter;
    
    while(iter--){
        cin >> nums;
        if ((nums.back() - '0') % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
   
}