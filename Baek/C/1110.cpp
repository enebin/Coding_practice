#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int iter;
    cin >> iter;


    int n = 0;
    int tot = iter;
    do {
        n++;
        int up = tot / 10;
        int down = tot % 10;

        int uno =  (up + down) % 10;
        tot = uno + down * 10;
    } while (tot != iter);

    cout << n << endl;
}