#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    int coins[101];
    int d[10001] = {0};

    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &coins[i]);
    }
    
    d[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j >= coins[i]) {
                d[j] += d[j-coins[i]];
            }
        }
    }

    if (d[k] == 0)
        cout << -1 << endl;    
    else
        printf("%d\n", d[k]);

    return 0;
}