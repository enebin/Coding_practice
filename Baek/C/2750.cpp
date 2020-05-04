#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> vi;

int main(){
    int iter;
    cin >> iter;
   
    
    for (int i=0; i<iter; i++){
        int x;
        cin >> x;
        vi.push_back(x);
    }

    sort(vi.begin(), vi.end()); 

    for (auto i=vi.begin(); i != vi.end(); i++){
        cout << *i << endl;
    }
}