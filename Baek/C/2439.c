#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);

    for (int i=1; i<=iter;i++){
        for (int k=0; k<iter-i;k++){
                printf(" ");
            }
           for (int j=0; j<i; j++){
                printf("%c", '*');
            }
        printf("\n");
    }

    return 0;
}
