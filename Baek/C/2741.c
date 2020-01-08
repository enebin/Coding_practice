#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);
    int n = iter;

    while(iter--){
        printf("%d\n", n - iter);
        
    }

    return 0;
}