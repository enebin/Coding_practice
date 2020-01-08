#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter, result = 0;
    scanf("%d", &iter);

    while(iter--){
        result += iter + 1;
    }

    printf("%d", result);

    return 0;
}