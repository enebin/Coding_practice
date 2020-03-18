#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int res = n * m;

    if (n > 0)
        if (res > 0)
            cout << 1 << endl;
        else
            cout << 4 << endl;
    if (n < 0)
        if (res > 0)
            cout << 3 << endl;
        else
            cout << 2 << endl;
   
}