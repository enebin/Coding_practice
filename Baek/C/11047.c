#include <stdio.h>
#include <stdlib.h>

int coin[11] = {0};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int temp, final;
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        if (temp <= k){
            coin[i] = temp;   
            final = i;
        }    
    }

    int count = 0;
    while(k != 0){
        count += k / coin[final];
        k %= coin[final--];
    }

    printf("%d\n", count);
    return 0;
}