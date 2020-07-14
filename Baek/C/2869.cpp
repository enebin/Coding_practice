#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, V;
    cin >> A >> B >> V;

    int result = 0;
    int stage = 0;
    
    stage = (V - B - 1) / (A - B) + 1;

    cout << stage << endl; 
   
}
