#include <stdio.h>
#include <stdlib.h>

typedef long long int lld;

int min (int a, int b){
    return a < b ? a : b;
}

int max (int a, int b){
    return a < b ? b : a;
}

int GCD(int a, int b){
    int minp, maxp, org;

    minp = min(a, b);
    org = minp;
    maxp = max(a, b);

    while(1){
        while (maxp % minp != 0)
            minp = maxp % minp;
        
        if (org % minp == 0)
            break;            
        else 
            minp = org % minp;
    }

    return minp;
}

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=1; i<=iter; i++){        
        int no[101] = {0};

        int iter2;
        scanf("%d", &iter2);

        for(int j=1; j<=iter2; j++)
            scanf("%d", &no[j]);

        if (iter2 == 1){
            printf("%d\n", no[1]);
            continue;
        }

        lld sum = 0;
        for (int k=1; k<iter2; k++){
            for (int l=k+1; l<=iter2; l++){
                sum += GCD(no[k], no[l]);
            }
        }

        printf("%lld\n", sum);
    }

    return 0;
}