#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int GCD(int x, int y){
    int z;
    while (y != 0){
        z = x % y;
        x = y;
        y = z;
    }

    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int iter;
    cin >> iter;

    vector<int> rings;
    for (int i=0; i<iter; i++){
        int temp;
        cin >> temp;
        rings.push_back(temp);
    }

    int capt = rings.front();

    for (int i=1; i<iter; i++){
        int ring = rings[i];
        int result = GCD(ring, capt);

        cout << capt / result << '/' << ring / result << endl;
    }   
}
