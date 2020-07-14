#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int center = 1;
    int end = 1;
    int interval = 6;
    int stage = 1;

    while (!(N >= center && N <= end)){
        center = end + 1;
        end += interval;
        interval += 6;
        stage += 1;
    }

    cout << stage << endl;
}