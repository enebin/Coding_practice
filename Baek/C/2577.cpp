#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int num[10] = {0, };

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int res = a * b * c;

    while (res){
        int temp = res % 10;
        num[temp]++;

        res /= 10;
    }

    for (int i=0; i<10; i++){
        cout << num[i] << endl;
    }
}