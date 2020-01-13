#include <stdio.h>
#include <stdlib.h>

long long int N[106] = {0, };
int temp[6] = {0, 1, 1, 1, 2, 2};

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=5; i++){
        N[i] = temp[i];
    }

    for (int i=5; i<=100+5; i++){
        N[i] = N[i-1] + N[i-5];
    }

    int target;
    for(int i=1; i<=iter; i++){
        scanf("%d", &target);
        printf("%lld\n", N[target]);
    }


    return 0;
}