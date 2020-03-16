#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int iter;
    cin >> iter;

    if ((iter % 4 == 0 && iter % 100 != 0) || iter % 400 == 0)
        cout << "1" << endl;
    else
        cout << 0 << endl;
   
}