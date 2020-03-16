#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    cout << 
    n * (m % 10) << endl <<
    n * ((m / 10) % 10) << endl <<
    n * ((m / 100) % 10) << endl <<
    n * m << endl;
   
}