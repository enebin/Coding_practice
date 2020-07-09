#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1){
        int n, m;
        cin >> n >> m;
        
        if (n == 0 && m == 0)
            break;

        if (n % m == 0)
            cout << "multiple" << endl;
        else if (m % n == 0)
            cout << "factor" << endl;
        else
            cout << "neither" << endl;
        
    }
   
}
