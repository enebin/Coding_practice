#include <stdio.h>
#include <limits.h>

typedef long long int lld;

lld lans[10000];

int max_len = LONG_MAX;

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);

    for(int i=1; i<=k; i++){
        scanf("%d", &lans[i]);
    }

    return 0;
}