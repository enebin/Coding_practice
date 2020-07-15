#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

typedef long long int ll;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1){
        vector<ll> v;
        for(int i=0; i<3; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        if(!v[0] && !v[1] && !v[2])
            break;

        sort(v.begin(), v.end());      

        int x = v[0], y=v[1], z=v[2];

        if (x*x + y*y == z*z)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }   
}
