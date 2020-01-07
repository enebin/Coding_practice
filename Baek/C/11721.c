#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string;
    int i = 0;

    while (scanf("%c", &string) != EOF){
        i++;
        printf("%c", string);
        if (!(i % 10))
            printf("\n");
    }
    return 0;
}