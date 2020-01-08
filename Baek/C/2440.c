#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    while(iter--){
        for (int i=0; i<=iter; i++){
            printf("%c",'*');
        }
        printf("\n");
    }

    return 0;
}