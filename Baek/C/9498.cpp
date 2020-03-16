#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    int iter;
    cin >> iter;

    if (iter >= 90)
        cout << "A" << endl;
    else if (iter >= 80)
        cout << "B" << endl;
    else if (iter >= 70)
        cout << "C" << endl;
    else if (iter >= 60)
        cout << "D" << endl;
    else 
        cout << "F" << endl;
    
   
}