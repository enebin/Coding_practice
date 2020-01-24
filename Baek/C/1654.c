#include <stdio.h>
#include <limits.h>

typedef long long int lld;

lld lans[10001];

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);

    int max = 0;
    for(int i=1; i<=k; i++){
        scanf("%lld", &lans[i]);
        max = max < lans[i] ? lans[i] : max;
    }

    lld high = max;
    lld low = 1;
    lld mid = 1;

    while (high >= low){
        mid = (high + low) / 2;

        int res = 0;
        for (int i=1; i<=k; i++)
            res += lans[i] / mid;
        
        if (res >= n)
            low = mid + 1;
        else 
            high = mid - 1;
    }

    printf("%d\n", low-1);

    return 0;
}