#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long int lld;

lld gcdExtended(lld a, lld b, lld *x, lld *y);

lld modInverse(lld a, lld m)
{
    lld x, y;
    lld g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        return 1;
    else{
        lld res = (x%m + m) % m;
        return res;
    }
}

lld gcdExtended(lld a, lld b, lld *x, lld *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    lld x1, y1;
    lld gcd = gcdExtended(b%a, a, &x1, &y1);

    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int main(){
    lld n, mod;
    cin >> n >> mod;

    lld result = 1;
    lld temp = mod - 1;
    while (temp != n){
        result *= temp - mod;
        result %= mod;
        temp--;
    }

    lld n_mod = (result * (-1));
 
    if (n_mod == -1)
        cout << mod - 1 << endl;
    else{
        lld x = modInverse(n_mod, mod);
        cout << x << endl;
    }
}
