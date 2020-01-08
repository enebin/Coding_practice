#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter;
    scanf("%d", &iter);


    for (int i=0; i<iter; i++){
        if (i == iter - 1){
            for (int k=iter-i; k>1; k--){
                printf(" ");
            }
            for (int j=0; j<2*i+1; j++){
                printf("%c", '*');
            }
            printf("\n");
        }
        else{
            for (int k=iter-i; k>1; k--){
                printf(" ");
            }
            for (int j=0; j<2*i+1; j++){
                if(j == 0 || j == 2*i)
                    printf("%c", '*');
                else
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}