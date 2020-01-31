#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int co = INT32_MAX;

void calc(int n, int m, int count, int tr){
    if (n != m && tr--){
        if (n > 0)
            calc(n-1, m, count+1, tr);
        
        calc(n+1, m, count+1, tr);
    
        if (n < m)
            calc(n*2, m, count+1, tr);
    }
    else{
        co = co > count ? count : co;
        return;
    }

}

int main(){
    int n, m;
    cin >> n >> m;

    calc(n, m, 0, n);
    
    cout << co;
}