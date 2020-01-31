#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    vector<int> a;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    
    do{
        for(int i = 0; i < n; i++)
            cout << a[i];
        cout << '\n';        
    }while(next_permutation(a.begin(), a.end()));
    
    return 0;
}