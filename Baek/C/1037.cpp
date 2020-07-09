#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int iter;
    cin >> iter;

    vector<int> table;
    for (int i=0; i<iter; i++){
        int temp;
        cin >> temp;
        table.push_back(temp);
    }
    
    sort(table.begin(), table.end());
    long long int result = table[0] * table[iter-1];
    cout << result << endl;
}
