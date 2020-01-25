#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef long long int lld;

lld position[100001];

lld min(lld x, lld y){
    return x < y ? x : y;
}

lld full_sum(lld x, int n){
    lld result = 0;
    for (int i=1; i<n; ++i){
        result += abs(position[i] - i * x);
    }
    return result;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=0; i<iter; i++){
        scanf("%lld", &position[i]);
    }

    lld low = 0;
    lld high = position[iter-1];

    while (high - low >= 3){
        lld p = (low*2 + high) / 3;
        lld q = (high*2 + low) / 3;

        //printf("%lld, %lld / ", p, q);

        if (full_sum(p, iter) <= full_sum(q, iter)){
            high = q;
        }
        else{
            low = p;
        }
    }

    lld result = LLONG_MAX;
    for(int i=low; i<=high; ++i){
        //printf("%d, %lld / ", i, full_sum(i, iter));
        result = min(result, full_sum(i, iter));
    }

    printf("%lld\n", result);
    return 0;
}