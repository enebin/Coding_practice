#include <iostream>
#include <algorithm>

typedef long long int lld;

#define P 1000000007
#define MAX 4000001

using namespace std;

lld fact[MAX];
lld inv[MAX];

int power(int a, int b){
    if(b == 0) 
        return 1;

    int temp = power(a, b / 2);
    int result = (1LL * temp * temp) % P; 

  	if(b % 2) 
        result = 1LL * result * a % P;

    return result;
}

int main(){
    int n, k;
    cin >> n >> k;

    fact[1] = 1;
    for (int i=2; i< MAX; i++)
        fact[i] = (fact[i-1] * i) % P;

    inv[MAX-1] = power(fact[MAX-1], P - 2);
    for (int i=MAX-2; i>=1; i--)
        inv[i] = (inv[i+1] * (i+1)) % P;

    if (n == k || k == 0){
        cout << 1 << endl;
    }
    else{
        lld result;
        result = (inv[k] * inv[n-k]) % P;
        result = (result * fact[n]) % P;

        cout << result << endl;
    }
    
    return 0;
}