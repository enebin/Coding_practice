#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool checkmate(string str){
    int d = str[0] - str[1];
    for (int i=1; i<str.size()-1; i++){
        if (str[i] - str[i+1] != d)
            return 0;
        else
            return 1;
    }
}

int main(){
    int iter;
    cin >> iter;

    if (iter < 100)
        cout << iter << endl;
    else {
        int result = 99;

        for (int i=100; i<=iter; i++){
            result += checkmate(to_string(i));
        }

        cout << result << endl;
    }
    
    return 0;
}