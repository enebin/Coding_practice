#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);


    for (int i=0; i<iter; i++){
        for (int k=iter-i; k>1; k--){
            printf(" ");
        }
        for (int j=0; j<2*i+1; j++){
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}