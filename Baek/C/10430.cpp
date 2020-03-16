#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    int n, m, l;
    cin >> n >> m >> l;
    cout << 
    (n + m) % l << endl <<
    (n % l + m % l) % l << endl <<
    (n * m) % l << endl <<
    (n % l * m % l) % l << endl;
   
}