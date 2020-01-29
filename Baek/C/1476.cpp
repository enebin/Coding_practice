#include <iostream>

using namespace std;

int main(){
    int e, s, m;
    cin >> e >> s >> m;

    int result = (6916*e + 4845*s + 4200*m) % 7980;

    if (result == 0)
        result = 7980;
        
    cout << result << endl;
}