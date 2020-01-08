#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    
    int n = iter;

    while(iter--){
        int a, b;
        
        scanf("%d %d", &a, &b);

        printf("Case #%d: %d + %d = %d\n" , n-iter, a, b, a+b);
    }

    return 0;
}