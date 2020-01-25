#include <stdio.h>
#include <limits.h>

typedef long long int lld;

lld woods[1000001];

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);

    int max = 0;
    for(int i=1; i<=k; i++){
        scanf("%lld", &woods[i]);
        max = max < woods[i] ? woods[i] : max;
    }

    lld high = max;
    lld low = 1;
    lld mid = 1;


    while (high >= low){
        lld res = 0;
        mid = (high + low) / 2;

        for (int i=1; i<=k; i++)
            if(woods[i] - mid > 0)
                res += woods[i] - mid;
        
        if (res >= n)
            low = mid + 1;
        else 
            high = mid - 1;
    }

    printf("%lld\n", low-1);

    return 0;
}