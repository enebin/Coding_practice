#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void){
    if ((2 != 2) == TRUE){
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}