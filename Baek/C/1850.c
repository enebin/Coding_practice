#include <stdio.h>
#include <stdlib.h>

typedef long long int lld;

lld min (lld a, lld b){
    return a < b ? a : b;
}

lld max (lld a, lld b){
    return a < b ? b : a;
}

int main()
{
    lld a, b, num, minp, maxp;

    scanf("%lld %lld", &a, &b);
        
    minp = min(a, b);
    lld org = minp;
    maxp = max(a, b);

    while(1){
        while ((lld) (maxp % minp) != 0){
            minp = maxp % minp;
        }
        if (org % minp == 0)
            break;
        else 
            minp = org % minp;
    }

    //printf("%lld\n", minp);

    while (minp--)
        printf("%d", 1);

    printf("\n");
    return 0;
}