#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int wa(int x){
    return x/100 + ((x/10) % 10) * 10 + (x%10)*100;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << max(wa(n), wa(m));   
}