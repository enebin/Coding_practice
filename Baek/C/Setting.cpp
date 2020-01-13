#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    for(int i=1; i<=iter; i++){
        scanf("%d", &iter);
    }

    printf("%d", &iter);

    return 0;
}