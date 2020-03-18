#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int tier;
    cin >> tier;

    while(tier--){
        int iter;
        cin >> iter;

        string str;
        cin >> str;

        for (int i=0; i<str.size(); i++){
            int temp = iter;
            while(temp--){
                cout << str[i];
            }
        }

        cout << endl;
    }
}

