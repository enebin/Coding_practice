#include <stdio.h>
#include <stdlib.h>

typedef enum _boolean {
    FALSE,
    TRUE
} bool;

bool stack[100001] = {0};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i=1; i<=n; i++){
        stack[i] = 1;
    }

    printf("<");

    int stride = k, count = k;

    int i = 0;    
    while (1){
        if (count == k){
            i++;
            if (i == n){
                printf("%d", stride);
                break;
            }
            printf("%d, ", stride);
            stack[stride] = 0;
            
            count = 0;            
        }

        stride++;

        if (stride > n)
            stride -= n;

        count += stack[stride];
    }

    printf(">") ;

    return 0;
}