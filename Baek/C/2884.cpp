#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if (m < 45){
        n--;
        m = m + 60 - 45;
    }
    else
        m -= 45;
   
    if (n < 0)
        n += 24;
    
    cout << n << " " << m << endl;
    
}